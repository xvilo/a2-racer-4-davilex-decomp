/* Menu.exe — units/Classes.pas: 1281 functions, split from decompiled.c by tools/split_sources.py */

/* ==== 00401280 CloseHandle ==== */

BOOL __stdcall CloseHandle(HANDLE hObject)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00401280. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = CloseHandle(hObject);
  return BVar1;
}


/* ==== 00401288 CreateFileA ==== */

HANDLE __stdcall
CreateFileA(LPCSTR lpFileName,DWORD dwDesiredAccess,DWORD dwShareMode,
           LPSECURITY_ATTRIBUTES lpSecurityAttributes,DWORD dwCreationDisposition,
           DWORD dwFlagsAndAttributes,HANDLE hTemplateFile)

{
  HANDLE pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00401288. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = CreateFileA(lpFileName,dwDesiredAccess,dwShareMode,lpSecurityAttributes,
                       dwCreationDisposition,dwFlagsAndAttributes,hTemplateFile);
  return pvVar1;
}


/* ==== 00401290 GetFileType ==== */

DWORD __stdcall GetFileType(HANDLE hFile)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00401290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = GetFileType(hFile);
  return DVar1;
}


/* ==== 00401298 GetSystemTime ==== */

void __stdcall GetSystemTime(LPSYSTEMTIME lpSystemTime)

{
                    /* WARNING: Could not recover jumptable at 0x00401298. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  GetSystemTime(lpSystemTime);
  return;
}


/* ==== 004012a0 GetFileSize ==== */

DWORD __stdcall GetFileSize(HANDLE hFile,LPDWORD lpFileSizeHigh)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004012a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = GetFileSize(hFile,lpFileSizeHigh);
  return DVar1;
}


/* ==== 004012a8 GetStdHandle ==== */

HANDLE __stdcall GetStdHandle(DWORD nStdHandle)

{
  HANDLE pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004012a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = GetStdHandle(nStdHandle);
  return pvVar1;
}


/* ==== 004012b0 RaiseException ==== */

void __stdcall
RaiseException(DWORD dwExceptionCode,DWORD dwExceptionFlags,DWORD nNumberOfArguments,
              ULONG_PTR *lpArguments)

{
                    /* WARNING: Could not recover jumptable at 0x004012b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  RaiseException(dwExceptionCode,dwExceptionFlags,nNumberOfArguments,lpArguments);
  return;
}


/* ==== 004012b8 ReadFile ==== */

BOOL __stdcall
ReadFile(HANDLE hFile,LPVOID lpBuffer,DWORD nNumberOfBytesToRead,LPDWORD lpNumberOfBytesRead,
        LPOVERLAPPED lpOverlapped)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004012b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = ReadFile(hFile,lpBuffer,nNumberOfBytesToRead,lpNumberOfBytesRead,lpOverlapped);
  return BVar1;
}


/* ==== 004012c0 RtlUnwind ==== */

void __stdcall
RtlUnwind(PVOID TargetFrame,PVOID TargetIp,PEXCEPTION_RECORD ExceptionRecord,PVOID ReturnValue)

{
                    /* WARNING: Could not recover jumptable at 0x004012c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  RtlUnwind(TargetFrame,TargetIp,ExceptionRecord,ReturnValue);
  return;
}


/* ==== 004012c8 SetEndOfFile ==== */

BOOL __stdcall SetEndOfFile(HANDLE hFile)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004012c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = SetEndOfFile(hFile);
  return BVar1;
}


/* ==== 004012d0 SetFilePointer ==== */

DWORD __stdcall
SetFilePointer(HANDLE hFile,LONG lDistanceToMove,PLONG lpDistanceToMoveHigh,DWORD dwMoveMethod)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004012d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = SetFilePointer(hFile,lDistanceToMove,lpDistanceToMoveHigh,dwMoveMethod);
  return DVar1;
}


/* ==== 004012d8 UnhandledExceptionFilter ==== */

LONG __stdcall UnhandledExceptionFilter(_EXCEPTION_POINTERS *ExceptionInfo)

{
  LONG LVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004012d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LVar1 = UnhandledExceptionFilter(ExceptionInfo);
  return LVar1;
}


/* ==== 004012e0 WriteFile ==== */

BOOL __stdcall
WriteFile(HANDLE hFile,LPCVOID lpBuffer,DWORD nNumberOfBytesToWrite,LPDWORD lpNumberOfBytesWritten,
         LPOVERLAPPED lpOverlapped)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004012e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = WriteFile(hFile,lpBuffer,nNumberOfBytesToWrite,lpNumberOfBytesWritten,lpOverlapped);
  return BVar1;
}


/* ==== 004012e8 CharNextA ==== */

LPSTR __stdcall CharNextA(LPCSTR lpsz)

{
  LPSTR pCVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004012e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pCVar1 = CharNextA(lpsz);
  return pCVar1;
}


/* ==== 004012f0 ExitProcess ==== */

void __stdcall ExitProcess(UINT uExitCode)

{
                    /* WARNING: Could not recover jumptable at 0x004012f0. Too many branches */
                    /* WARNING: Subroutine does not return */
                    /* WARNING: Treating indirect jump as call */
  ExitProcess(uExitCode);
  return;
}


/* ==== 004012f8 MessageBoxA ==== */

int __stdcall MessageBoxA(HWND hWnd,LPCSTR lpText,LPCSTR lpCaption,UINT uType)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004012f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = MessageBoxA(hWnd,lpText,lpCaption,uType);
  return iVar1;
}


/* ==== 00401300 FindClose ==== */

BOOL __stdcall FindClose(HANDLE hFindFile)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00401300. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = FindClose(hFindFile);
  return BVar1;
}


/* ==== 00401308 FindFirstFileA ==== */

HANDLE __stdcall FindFirstFileA(LPCSTR lpFileName,LPWIN32_FIND_DATAA lpFindFileData)

{
  HANDLE pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00401308. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = FindFirstFileA(lpFileName,lpFindFileData);
  return pvVar1;
}


/* ==== 00401310 FreeLibrary ==== */

BOOL __stdcall FreeLibrary(HMODULE hLibModule)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00401310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = FreeLibrary(hLibModule);
  return BVar1;
}


/* ==== 00401318 GetCommandLineA ==== */

LPSTR __stdcall GetCommandLineA(void)

{
  LPSTR pCVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00401318. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pCVar1 = GetCommandLineA();
  return pCVar1;
}


/* ==== 00401320 GetLastError ==== */

DWORD __stdcall GetLastError(void)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00401320. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = GetLastError();
  return DVar1;
}


/* ==== 00401328 GetLocaleInfoA ==== */

int __stdcall GetLocaleInfoA(LCID Locale,LCTYPE LCType,LPSTR lpLCData,int cchData)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00401328. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = GetLocaleInfoA(Locale,LCType,lpLCData,cchData);
  return iVar1;
}


/* ==== 00401330 GetModuleFileNameA ==== */

DWORD __stdcall GetModuleFileNameA(HMODULE hModule,LPSTR lpFilename,DWORD nSize)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00401330. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = GetModuleFileNameA(hModule,lpFilename,nSize);
  return DVar1;
}


/* ==== 00401338 GetModuleHandleA ==== */

HMODULE __stdcall GetModuleHandleA(LPCSTR lpModuleName)

{
  HMODULE pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00401338. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = GetModuleHandleA(lpModuleName);
  return pHVar1;
}


/* ==== 00401340 GetProcAddress ==== */

FARPROC __stdcall GetProcAddress(HMODULE hModule,LPCSTR lpProcName)

{
  FARPROC pFVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00401340. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pFVar1 = GetProcAddress(hModule,lpProcName);
  return pFVar1;
}


/* ==== 00401348 GetStartupInfoA ==== */

void __stdcall GetStartupInfoA(LPSTARTUPINFOA lpStartupInfo)

{
                    /* WARNING: Could not recover jumptable at 0x00401348. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  GetStartupInfoA(lpStartupInfo);
  return;
}


/* ==== 00401350 GetThreadLocale ==== */

LCID __stdcall GetThreadLocale(void)

{
  LCID LVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00401350. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LVar1 = GetThreadLocale();
  return LVar1;
}


/* ==== 00401358 LoadLibraryExA ==== */

HMODULE __stdcall LoadLibraryExA(LPCSTR lpLibFileName,HANDLE hFile,DWORD dwFlags)

{
  HMODULE pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00401358. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = LoadLibraryExA(lpLibFileName,hFile,dwFlags);
  return pHVar1;
}


/* ==== 00401360 LoadStringA ==== */

int __stdcall LoadStringA(HINSTANCE hInstance,UINT uID,LPSTR lpBuffer,int cchBufferMax)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00401360. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = LoadStringA(hInstance,uID,lpBuffer,cchBufferMax);
  return iVar1;
}


/* ==== 00401368 lstrcpyA ==== */

LPSTR __stdcall lstrcpyA(LPSTR lpString1,LPCSTR lpString2)

{
  LPSTR pCVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00401368. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pCVar1 = lstrcpyA(lpString1,lpString2);
  return pCVar1;
}


/* ==== 00401370 lstrcpynA ==== */

LPSTR __stdcall lstrcpynA(LPSTR lpString1,LPCSTR lpString2,int iMaxLength)

{
  LPSTR pCVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00401370. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pCVar1 = lstrcpynA(lpString1,lpString2,iMaxLength);
  return pCVar1;
}


/* ==== 00401378 lstrlenA ==== */

int __stdcall lstrlenA(LPCSTR lpString)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00401378. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = lstrlenA(lpString);
  return iVar1;
}


/* ==== 00401380 MultiByteToWideChar ==== */

int __stdcall
MultiByteToWideChar(UINT CodePage,DWORD dwFlags,LPCSTR lpMultiByteStr,int cbMultiByte,
                   LPWSTR lpWideCharStr,int cchWideChar)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00401380. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = MultiByteToWideChar(CodePage,dwFlags,lpMultiByteStr,cbMultiByte,lpWideCharStr,cchWideChar)
  ;
  return iVar1;
}


/* ==== 00401388 RegCloseKey ==== */

LSTATUS __stdcall RegCloseKey(HKEY hKey)

{
  LSTATUS LVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00401388. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LVar1 = RegCloseKey(hKey);
  return LVar1;
}


/* ==== 00401390 RegOpenKeyExA ==== */

LSTATUS __stdcall
RegOpenKeyExA(HKEY hKey,LPCSTR lpSubKey,DWORD ulOptions,REGSAM samDesired,PHKEY phkResult)

{
  LSTATUS LVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00401390. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LVar1 = RegOpenKeyExA(hKey,lpSubKey,ulOptions,samDesired,phkResult);
  return LVar1;
}


/* ==== 00401398 RegQueryValueExA ==== */

LSTATUS __stdcall
RegQueryValueExA(HKEY hKey,LPCSTR lpValueName,LPDWORD lpReserved,LPDWORD lpType,LPBYTE lpData,
                LPDWORD lpcbData)

{
  LSTATUS LVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00401398. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LVar1 = RegQueryValueExA(hKey,lpValueName,lpReserved,lpType,lpData,lpcbData);
  return LVar1;
}


/* ==== 004013a0 WideCharToMultiByte ==== */

int __stdcall
WideCharToMultiByte(UINT CodePage,DWORD dwFlags,LPCWSTR lpWideCharStr,int cchWideChar,
                   LPSTR lpMultiByteStr,int cbMultiByte,LPCSTR lpDefaultChar,
                   LPBOOL lpUsedDefaultChar)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004013a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = WideCharToMultiByte(CodePage,dwFlags,lpWideCharStr,cchWideChar,lpMultiByteStr,cbMultiByte,
                              lpDefaultChar,lpUsedDefaultChar);
  return iVar1;
}


/* ==== 004013a8 VirtualQuery ==== */

SIZE_T __stdcall VirtualQuery(LPCVOID lpAddress,PMEMORY_BASIC_INFORMATION lpBuffer,SIZE_T dwLength)

{
  SIZE_T SVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004013a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  SVar1 = VirtualQuery(lpAddress,lpBuffer,dwLength);
  return SVar1;
}


/* ==== 004013b0 SysAllocStringLen ==== */

BSTR __stdcall SysAllocStringLen(OLECHAR *strIn,UINT ui)

{
  BSTR pOVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004013b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pOVar1 = SysAllocStringLen(strIn,ui);
  return pOVar1;
}


/* ==== 004013b8 SysReAllocStringLen ==== */

INT __stdcall SysReAllocStringLen(BSTR *pbstr,OLECHAR *psz,uint len)

{
  INT IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004013b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = SysReAllocStringLen(pbstr,psz,len);
  return IVar1;
}


/* ==== 004013c0 SysFreeString ==== */

void __stdcall SysFreeString(BSTR bstrString)

{
                    /* WARNING: Could not recover jumptable at 0x004013c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  SysFreeString(bstrString);
  return;
}


/* ==== 004013c8 SysStringLen ==== */

UINT __stdcall SysStringLen(BSTR param_1)

{
  UINT UVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004013c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  UVar1 = SysStringLen(param_1);
  return UVar1;
}


/* ==== 004013d0 VariantClear ==== */

HRESULT __stdcall VariantClear(VARIANTARG *pvarg)

{
  HRESULT HVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004013d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  HVar1 = VariantClear(pvarg);
  return HVar1;
}


/* ==== 004013d8 VariantCopyInd ==== */

HRESULT __stdcall VariantCopyInd(VARIANT *pvarDest,VARIANTARG *pvargSrc)

{
  HRESULT HVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004013d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  HVar1 = VariantCopyInd(pvarDest,pvargSrc);
  return HVar1;
}


/* ==== 004013e0 VariantChangeTypeEx ==== */

HRESULT __stdcall
VariantChangeTypeEx(VARIANTARG *pvargDest,VARIANTARG *pvarSrc,LCID lcid,USHORT wFlags,VARTYPE vt)

{
  HRESULT HVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004013e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  HVar1 = VariantChangeTypeEx(pvargDest,pvarSrc,lcid,wFlags,vt);
  return HVar1;
}


/* ==== 004013f0 InterlockedDecrement ==== */

LONG __stdcall InterlockedDecrement(LONG *lpAddend)

{
  LONG LVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004013f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LVar1 = InterlockedDecrement(lpAddend);
  return LVar1;
}


/* ==== 004013f8 FUN_004013f8 ==== */

WORD FUN_004013f8(void)

{
  WORD WVar1;
  _STARTUPINFOA _Stack_48;
  
  GetStartupInfoA(&_Stack_48);
  WVar1 = 10;
  if (((byte)_Stack_48.dwFlags & 1) != 0) {
    WVar1 = _Stack_48.wShowWindow;
  }
  return WVar1;
}


/* ==== 0040141c LocalAlloc ==== */

HLOCAL __stdcall LocalAlloc(UINT uFlags,SIZE_T uBytes)

{
  HLOCAL pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0040141c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = LocalAlloc(uFlags,uBytes);
  return pvVar1;
}


/* ==== 00401424 LocalFree ==== */

HLOCAL __stdcall LocalFree(HLOCAL hMem)

{
  HLOCAL pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00401424. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = LocalFree(hMem);
  return pvVar1;
}


/* ==== 0040142c VirtualAlloc ==== */

LPVOID __stdcall VirtualAlloc(LPVOID lpAddress,SIZE_T dwSize,DWORD flAllocationType,DWORD flProtect)

{
  LPVOID pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0040142c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = VirtualAlloc(lpAddress,dwSize,flAllocationType,flProtect);
  return pvVar1;
}


/* ==== 00401434 VirtualFree ==== */

BOOL __stdcall VirtualFree(LPVOID lpAddress,SIZE_T dwSize,DWORD dwFreeType)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00401434. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = VirtualFree(lpAddress,dwSize,dwFreeType);
  return BVar1;
}


/* ==== 0040143c InitializeCriticalSection ==== */

void __stdcall InitializeCriticalSection(LPCRITICAL_SECTION lpCriticalSection)

{
                    /* WARNING: Could not recover jumptable at 0x0040143c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  InitializeCriticalSection(lpCriticalSection);
  return;
}


/* ==== 00401444 EnterCriticalSection ==== */

void __stdcall EnterCriticalSection(LPCRITICAL_SECTION lpCriticalSection)

{
                    /* WARNING: Could not recover jumptable at 0x00401444. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  EnterCriticalSection(lpCriticalSection);
  return;
}


/* ==== 0040144c LeaveCriticalSection ==== */

void __stdcall LeaveCriticalSection(LPCRITICAL_SECTION lpCriticalSection)

{
                    /* WARNING: Could not recover jumptable at 0x0040144c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection(lpCriticalSection);
  return;
}


/* ==== 00401454 DeleteCriticalSection ==== */

void __stdcall DeleteCriticalSection(LPCRITICAL_SECTION lpCriticalSection)

{
                    /* WARNING: Could not recover jumptable at 0x00401454. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection(lpCriticalSection);
  return;
}


/* ==== 0040145c FUN_0040145c ==== */

int * FUN_0040145c(void)

{
  undefined4 *local_alloc;
  int *piVar1;
  int i_val;
  
  if (DAT_004ac454 == (int *)0x0) {
    local_alloc = LocalAlloc(0,0x644);
    if (local_alloc == (undefined4 *)0x0) {
      return (int *)0x0;
    }
    *local_alloc = DAT_004ac450;
    i_val = 0;
    DAT_004ac450 = local_alloc;
    do {
      piVar1 = local_alloc + i_val * 4 + 1;
      *piVar1 = (int)DAT_004ac454;
      i_val = i_val + 1;
      DAT_004ac454 = piVar1;
    } while (i_val != 100);
  }
  piVar1 = DAT_004ac454;
  DAT_004ac454 = (int *)*DAT_004ac454;
  return piVar1;
}


/* ==== 004014ac FUN_004014ac ==== */

void FUN_004014ac(int param_1)

{
  *(int *)param_1 = param_1;
  *(int *)(param_1 + 4) = param_1;
  return;
}


/* ==== 004014b4 FUN_004014b4 ==== */

undefined4 FUN_004014b4(int *param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = FUN_0040145c();
  if (piVar2 == (int *)0x0) {
    return 0;
  }
  piVar2[2] = *param_2;
  piVar2[3] = param_2[1];
  iVar1 = *param_1;
  *piVar2 = iVar1;
  piVar2[1] = (int)param_1;
  *(int **)(iVar1 + 4) = piVar2;
  *param_1 = (int)piVar2;
  return CONCAT31((int3)((uint)piVar2 >> 8),1);
}


/* ==== 004014e4 FUN_004014e4 ==== */

void FUN_004014e4(int *param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)param_1[1];
  iVar2 = *param_1;
  *piVar1 = iVar2;
  *(int **)(iVar2 + 4) = piVar1;
  *param_1 = (int)DAT_004ac454;
  DAT_004ac454 = param_1;
  return;
}


/* ==== 004014fc FUN_004014fc ==== */

void FUN_004014fc(int *param_1,int *param_2,int *param_3)

{
  int *piVar1;
  undefined4 uVar2;
  int *piVar3;
  
  piVar3 = (int *)*param_1;
  *param_3 = *param_2;
  param_3[1] = param_2[1];
  do {
    piVar1 = (int *)*piVar3;
    if (piVar3[2] + piVar3[3] == *param_3) {
      FUN_004014e4(piVar3);
      *param_3 = piVar3[2];
      param_3[1] = param_3[1] + piVar3[3];
    }
    else if (piVar3[2] == *param_3 + param_3[1]) {
      FUN_004014e4(piVar3);
      param_3[1] = param_3[1] + piVar3[3];
    }
    piVar3 = piVar1;
  } while (param_1 != piVar1);
  uVar2 = FUN_004014b4(param_1,param_3);
  if ((char)uVar2 == '\0') {
    *param_3 = 0;
  }
  return;
}


/* ==== 00401570 FUN_00401570 ==== */

undefined4 FUN_00401570(int *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  int *piVar3;
  int local_18;
  int local_14;
  
  piVar3 = param_1;
  while( true ) {
    uVar1 = *param_2;
    uVar2 = piVar3[2];
    if ((uVar2 <= uVar1) && (uVar1 + param_2[1] <= uVar2 + piVar3[3])) break;
    piVar3 = (int *)*piVar3;
    if (param_1 == piVar3) {
      return 0;
    }
  }
  if (uVar1 == uVar2) {
    piVar3[2] = piVar3[2] + param_2[1];
    uVar2 = param_2[1];
    piVar3[3] = piVar3[3] - uVar2;
    if (piVar3[3] == 0) {
      uVar2 = FUN_004014e4(piVar3);
    }
  }
  else if (*param_2 + param_2[1] == uVar2 + piVar3[3]) {
    piVar3[3] = piVar3[3] - param_2[1];
  }
  else {
    local_18 = *param_2 + param_2[1];
    local_14 = (uVar2 + piVar3[3]) - local_18;
    piVar3[3] = *param_2 - uVar2;
    uVar2 = FUN_004014b4(piVar3,&local_18);
    if ((char)uVar2 == '\0') {
      return 0;
    }
  }
  return CONCAT31((int3)(uVar2 >> 8),1);
}


/* ==== 00401600 FUN_00401600 ==== */

void FUN_00401600(int param_1,int *param_2)

{
  LPVOID virtual_alloc;
  undefined4 uVar1;
  SIZE_T dwSize;
  
  if (param_1 < 0x100000) {
    dwSize = 0x100000;
  }
  else {
    dwSize = param_1 + 0xffffU & 0xffff0000;
  }
  param_2[1] = dwSize;
  virtual_alloc = VirtualAlloc((LPVOID)0x0,dwSize,0x2000,1);
  *param_2 = (int)virtual_alloc;
  if (virtual_alloc != (LPVOID)0x0) {
    uVar1 = FUN_004014b4(&DAT_004ac458,param_2);
    if ((char)uVar1 == '\0') {
      VirtualFree((LPVOID)*param_2,0,0x8000);
      *param_2 = 0;
    }
  }
  return;
}


/* ==== 00401664 FUN_00401664 ==== */

void FUN_00401664(LPVOID address,int param_2,int *param_3)

{
  LPVOID virtual_alloc;
  undefined4 uVar1;
  uint dwSize;
  
  param_3[1] = 0x100000;
  virtual_alloc = VirtualAlloc(address,0x100000,0x2000,4);
  *param_3 = (int)virtual_alloc;
  if (virtual_alloc == (LPVOID)0x0) {
    dwSize = param_2 + 0xffffU & 0xffff0000;
    param_3[1] = dwSize;
    virtual_alloc = VirtualAlloc(address,dwSize,0x2000,4);
    *param_3 = (int)virtual_alloc;
  }
  if (*param_3 != 0) {
    uVar1 = FUN_004014b4(&DAT_004ac458,param_3);
    if ((char)uVar1 == '\0') {
      VirtualFree((LPVOID)*param_3,0,0x8000);
      *param_3 = 0;
    }
  }
  return;
}


/* ==== 004016dc FUN_004016dc ==== */

void FUN_004016dc(LPVOID param_1,int param_2,undefined4 *param_3)

{
  int *piVar1;
  LPVOID lpAddress;
  BOOL BVar2;
  int *piVar3;
  LPVOID local_1c;
  uint local_18;
  
  local_1c = (LPVOID)0xffffffff;
  local_18 = 0;
  piVar1 = DAT_004ac458;
  while (piVar3 = piVar1, (int **)piVar3 != &DAT_004ac458) {
    piVar1 = (int *)*piVar3;
    lpAddress = (LPVOID)piVar3[2];
    if ((param_1 <= lpAddress) &&
       ((uint)((int)lpAddress + piVar3[3]) <= (uint)(param_2 + (int)param_1))) {
      if (lpAddress < local_1c) {
        local_1c = lpAddress;
      }
      if (local_18 < (uint)((int)lpAddress + piVar3[3])) {
        local_18 = (int)lpAddress + piVar3[3];
      }
      BVar2 = VirtualFree(lpAddress,0,0x8000);
      if (BVar2 == 0) {
        DAT_004ac434 = 1;
      }
      FUN_004014e4(piVar3);
    }
  }
  *param_3 = 0;
  if (local_18 != 0) {
    *param_3 = local_1c;
    param_3[1] = local_18 - (int)local_1c;
  }
  return;
}


/* ==== 00401794 FUN_00401794 ==== */

void FUN_00401794(uint param_1,int param_2,undefined4 *param_3)

{
  LPVOID pvVar1;
  LPVOID pvVar2;
  LPVOID lpAddress;
  LPVOID pvVar3;
  undefined4 *puVar4;
  LPVOID pvVar5;
  
  pvVar3 = (LPVOID)(param_1 & 0xfffff000);
  pvVar2 = (LPVOID)(param_1 + param_2 + 0xfff & 0xfffff000);
  *param_3 = pvVar3;
  param_3[1] = (int)pvVar2 - (int)pvVar3;
  puVar4 = DAT_004ac458;
  while( true ) {
    if ((undefined4 **)puVar4 == &DAT_004ac458) {
      return;
    }
    pvVar1 = (LPVOID)puVar4[2];
    lpAddress = pvVar1;
    if (pvVar1 < pvVar3) {
      lpAddress = pvVar3;
    }
    pvVar5 = (LPVOID)(puVar4[3] + (int)pvVar1);
    if (pvVar2 < (LPVOID)(puVar4[3] + (int)pvVar1)) {
      pvVar5 = pvVar2;
    }
    if ((lpAddress < pvVar5) &&
       (pvVar1 = VirtualAlloc(lpAddress,(int)pvVar5 - (int)lpAddress,0x1000,4),
       pvVar1 == (LPVOID)0x0)) break;
    puVar4 = (undefined4 *)*puVar4;
  }
  *param_3 = 0;
  return;
}


/* ==== 00401828 FUN_00401828 ==== */

void FUN_00401828(int param_1,int param_2,undefined4 *param_3)

{
  LPVOID pvVar1;
  BOOL BVar2;
  LPVOID lpAddress;
  LPVOID pvVar3;
  LPVOID pvVar4;
  undefined4 *puVar5;
  LPVOID pvVar6;
  
  pvVar4 = (LPVOID)(param_1 + 0xfffU & 0xfffff000);
  pvVar3 = (LPVOID)(param_1 + param_2 & 0xfffff000);
  *param_3 = pvVar4;
  param_3[1] = (int)pvVar3 - (int)pvVar4;
  for (puVar5 = DAT_004ac458; (undefined4 **)puVar5 != &DAT_004ac458; puVar5 = (undefined4 *)*puVar5
      ) {
    pvVar1 = (LPVOID)puVar5[2];
    lpAddress = pvVar1;
    if (pvVar1 < pvVar4) {
      lpAddress = pvVar4;
    }
    pvVar6 = (LPVOID)(puVar5[3] + (int)pvVar1);
    if (pvVar3 < (LPVOID)(puVar5[3] + (int)pvVar1)) {
      pvVar6 = pvVar3;
    }
    if (lpAddress < pvVar6) {
      BVar2 = VirtualFree(lpAddress,(int)pvVar6 - (int)lpAddress,0x4000);
      if (BVar2 == 0) {
        DAT_004ac434 = 2;
      }
    }
  }
  return;
}


/* ==== 004018a8 FUN_004018a8 ==== */

void FUN_004018a8(int param_1,int *param_2)

{
  int *piVar1;
  uint uVar2;
  int local_18 [2];
  
  uVar2 = param_1 + 0x3fffU & 0xffffc000;
  piVar1 = DAT_004ac468;
  do {
    for (; (int **)piVar1 != &DAT_004ac468; piVar1 = (int *)*piVar1) {
      if ((int)uVar2 <= piVar1[3]) {
        FUN_00401794(piVar1[2],uVar2,param_2);
        if (*param_2 == 0) {
          return;
        }
        piVar1[2] = piVar1[2] + param_2[1];
        piVar1[3] = piVar1[3] - param_2[1];
        if (piVar1[3] != 0) {
          return;
        }
        FUN_004014e4(piVar1);
        return;
      }
    }
    FUN_00401600(uVar2,param_2);
    if (*param_2 == 0) {
      return;
    }
    FUN_004014fc((int *)&DAT_004ac468,param_2,local_18);
    piVar1 = DAT_004ac468;
  } while (local_18[0] != 0);
  FUN_004016dc((LPVOID)*param_2,param_2[1],local_18);
  *param_2 = 0;
  return;
}


/* ==== 00401938 FUN_00401938 ==== */

void FUN_00401938(LPVOID address,int param_2,int *param_3)

{
  int *piVar1;
  uint uVar2;
  LPVOID local_20;
  int local_1c;
  int local_18 [2];
  
  uVar2 = param_2 + 0x3fffU & 0xffffc000;
  piVar1 = DAT_004ac468;
LAB_0040195e:
  do {
    for (; ((int **)piVar1 != &DAT_004ac468 && (address != (LPVOID)piVar1[2]));
        piVar1 = (int *)*piVar1) {
    }
    if (address == (LPVOID)piVar1[2]) {
      if ((int)uVar2 <= piVar1[3]) goto LAB_00401a0b;
      FUN_00401664((LPVOID)(piVar1[2] + piVar1[3]),uVar2 - piVar1[3],(int *)&local_20);
      if (local_20 != (LPVOID)0x0) {
        FUN_004014fc((int *)&DAT_004ac468,(int *)&local_20,local_18);
        piVar1 = DAT_004ac468;
        if (local_18[0] == 0) {
          FUN_004016dc(local_20,local_1c,local_18);
          *param_3 = 0;
          return;
        }
        goto LAB_0040195e;
      }
    }
    FUN_00401664(address,uVar2,(int *)&local_20);
    if (local_20 == (LPVOID)0x0) {
LAB_00401a0b:
      if ((address != (LPVOID)piVar1[2]) || (piVar1[3] < (int)uVar2)) {
        *param_3 = 0;
        return;
      }
      FUN_00401794((uint)piVar1[2],uVar2,param_3);
      if (*param_3 == 0) {
        return;
      }
      piVar1[2] = piVar1[2] + param_3[1];
      piVar1[3] = piVar1[3] - param_3[1];
      if (piVar1[3] != 0) {
        return;
      }
      FUN_004014e4(piVar1);
      return;
    }
    FUN_004014fc((int *)&DAT_004ac468,(int *)&local_20,local_18);
    piVar1 = DAT_004ac468;
    if (local_18[0] == 0) {
      FUN_004016dc(local_20,local_1c,local_18);
      *param_3 = 0;
      return;
    }
  } while( true );
}


/* ==== 00401a5c FUN_00401a5c ==== */

void FUN_00401a5c(int param_1,int param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  LPVOID local_1c;
  int local_18;
  LPVOID local_14;
  int local_10;
  
  uVar1 = param_1 + 0x3fffU & 0xffffc000;
  uVar2 = param_2 + param_1 & 0xffffc000;
  if (uVar1 < uVar2) {
    FUN_00401828(uVar1,uVar2 - uVar1,param_3);
    FUN_004014fc(&DAT_004ac468,param_3,(int *)&local_1c);
    if (local_1c != (LPVOID)0x0) {
      FUN_004016dc(local_1c,local_18,&local_14);
      local_1c = local_14;
      local_18 = local_10;
    }
    if (local_1c != (LPVOID)0x0) {
      FUN_00401570(&DAT_004ac468,(uint *)&local_1c);
    }
  }
  else {
    *param_3 = 0;
  }
  return;
}


/* ==== 00401ae8 FUN_00401ae8 ==== */

void FUN_00401ae8(void)

{
  int i_val;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_10;
  
  uStack_10 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_10;
  InitializeCriticalSection(&_RTL_CRITICAL_SECTION_004ac438);
  if (DAT_004ac049 != '\0') {
    EnterCriticalSection(&_RTL_CRITICAL_SECTION_004ac438);
  }
  FUN_004014ac(0x4ac458);
  FUN_004014ac(0x4ac468);
  FUN_004014ac(0x4ac494);
  DAT_004ac490 = LocalAlloc(0,0xff8);
  if (DAT_004ac490 != (HLOCAL)0x0) {
    i_val = 3;
    do {
      *(undefined4 *)((int)DAT_004ac490 + i_val * 4 + -0xc) = 0;
      i_val = i_val + 1;
    } while (i_val != 0x401);
    DAT_004ac47c = &DAT_004ac478;
    DAT_004ac478 = &DAT_004ac478;
    DAT_004ac484 = &DAT_004ac478;
    DAT_004ac430 = 1;
  }
  *in_FS_OFFSET = uStack_10;
  if (DAT_004ac049 != '\0') {
    uStack_10 = 0x401b9d;
    LeaveCriticalSection(&_RTL_CRITICAL_SECTION_004ac438);
  }
  return;
}


/* ==== 00401bac FUN_00401bac ==== */

void FUN_00401bac(void)

{
  undefined4 *mem;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_14;
  
  if (DAT_004ac430 == '\0') {
    return;
  }
  uStack_14 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_14;
  if (DAT_004ac049 != '\0') {
    EnterCriticalSection(&_RTL_CRITICAL_SECTION_004ac438);
  }
  DAT_004ac430 = 0;
  LocalFree(DAT_004ac490);
  DAT_004ac490 = (HLOCAL)0x0;
  for (mem = DAT_004ac458; (undefined4 **)mem != &DAT_004ac458; mem = (undefined4 *)*mem) {
    VirtualFree((LPVOID)mem[2],0,0x8000);
  }
  FUN_004014ac(0x4ac458);
  FUN_004014ac(0x4ac468);
  FUN_004014ac(0x4ac494);
  mem = DAT_004ac450;
  while (mem != (undefined4 *)0x0) {
    DAT_004ac450 = (undefined4 *)*mem;
    LocalFree(mem);
    mem = DAT_004ac450;
  }
  DAT_004ac450 = mem;
  *in_FS_OFFSET = uStack_14;
  if (DAT_004ac049 != '\0') {
    uStack_14 = 0x401c77;
    LeaveCriticalSection(&_RTL_CRITICAL_SECTION_004ac438);
  }
  uStack_14 = 0x401c81;
  DeleteCriticalSection(&_RTL_CRITICAL_SECTION_004ac438);
  return;
}


/* ==== 00401c8c FUN_00401c8c ==== */

void FUN_00401c8c(int *param_1)

{
  int *piVar1;
  int iVar2;
  
  if (param_1 == DAT_004ac484) {
    DAT_004ac484 = (int *)param_1[1];
  }
  piVar1 = (int *)param_1[1];
  iVar2 = param_1[2];
  if (iVar2 < 0x1001) {
    if (param_1 != piVar1) {
      if (iVar2 < 0) {
        iVar2 = iVar2 + 3;
      }
      *(int **)(DAT_004ac490 + -0xc + (iVar2 >> 2) * 4) = piVar1;
      iVar2 = *param_1;
      *piVar1 = iVar2;
      *(int **)(iVar2 + 4) = piVar1;
      return;
    }
    if (iVar2 < 0) {
      iVar2 = iVar2 + 3;
    }
    *(undefined4 *)(DAT_004ac490 + -0xc + (iVar2 >> 2) * 4) = 0;
  }
  else {
    iVar2 = *param_1;
    *piVar1 = iVar2;
    *(int **)(iVar2 + 4) = piVar1;
  }
  return;
}


/* ==== 00401cf0 FUN_00401cf0 ==== */

undefined4 * FUN_00401cf0(uint param_1)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_004ac494;
  while( true ) {
    if ((undefined4 **)puVar1 == &DAT_004ac494) {
      DAT_004ac434 = 3;
      return (undefined4 *)0x0;
    }
    if (((uint)puVar1[2] <= param_1) && (param_1 < (uint)(puVar1[2] + puVar1[3]))) break;
    puVar1 = (undefined4 *)*puVar1;
  }
  return puVar1;
}


/* ==== 00401d20 FUN_00401d20 ==== */

void FUN_00401d20(uint *param_1,uint param_2)

{
  uint *puVar1;
  
  puVar1 = (uint *)((param_2 - 4) + (int)param_1);
  if (0xf < (int)param_2) {
    *puVar1 = 0x80000007;
    FUN_00401edc(param_1,param_2 - 4);
    return;
  }
  if (3 < (int)param_2) {
    *param_1 = param_2 | 0x80000002;
    *puVar1 = param_2 | 0x80000002;
  }
  return;
}


/* ==== 00401d50 FUN_00401d50 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00401d50(int param_1)

{
  _DAT_004ac424 = _DAT_004ac424 + 1;
  _DAT_004ac428 = _DAT_004ac428 + ((*(uint *)(param_1 + -4) & 0x7ffffffc) - 4);
  FUN_00402344(param_1);
  return;
}


/* ==== 00401d74 FUN_00401d74 ==== */

void FUN_00401d74(uint *param_1,uint param_2)

{
  if (0xb < (int)param_2) {
    *param_1 = param_2 | 2;
    FUN_00401d50((int)(param_1 + 1));
    return;
  }
  if (3 < (int)param_2) {
    *param_1 = param_2 | 0x80000002;
  }
  *(uint *)((int)param_1 + param_2) = *(uint *)((int)param_1 + param_2) & 0xfffffffe;
  return;
}


/* ==== 00401d9c FUN_00401d9c ==== */

uint FUN_00401d9c(int param_1)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  
  uVar1 = *(uint *)(param_1 + -4);
  if ((uVar1 & 0x80000002) != 0x80000002) {
    DAT_004ac434 = 4;
  }
  uVar3 = uVar1 & 0x7ffffffc;
  puVar2 = (uint *)(param_1 - uVar3);
  if (((uVar1 ^ *puVar2) & 0xfffffffe) != 0) {
    DAT_004ac434 = 5;
  }
  if ((*puVar2 & 1) != 0) {
    uVar1 = puVar2[-1];
    if (uVar1 != ((int *)((int)puVar2 - uVar1))[2]) {
      DAT_004ac434 = 6;
    }
    FUN_00401c8c((int *)((int)puVar2 - uVar1));
    uVar3 = uVar3 + uVar1;
  }
  return uVar3;
}


/* ==== 00401e0c FUN_00401e0c ==== */

uint FUN_00401e0c(uint *param_1)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  
  uVar3 = 0;
  uVar1 = *param_1;
  if ((uVar1 & 0x80000000) != 0) {
    uVar3 = uVar1 & 0x7ffffffc;
    param_1 = (uint *)((int)param_1 + uVar3);
    uVar1 = *param_1;
  }
  if ((uVar1 & 2) == 0) {
    FUN_00401c8c((int *)param_1);
    uVar3 = uVar3 + param_1[2];
    puVar2 = (uint *)((int)param_1 + param_1[2]);
    *puVar2 = *puVar2 & 0xfffffffe;
  }
  return uVar3;
}


/* ==== 00401e44 FUN_00401e44 ==== */

undefined4 FUN_00401e44(uint *param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  uint *puVar4;
  uint local_18;
  int local_14;
  
  piVar2 = FUN_00401cf0((uint)param_1);
  iVar1 = piVar2[2];
  if ((iVar1 + piVar2[3]) - (param_2 + (int)param_1) < 0xd) {
    param_2 = (iVar1 + piVar2[3]) - (int)param_1;
  }
  if ((int)param_1 - iVar1 < 0xc) {
    FUN_00401a5c(iVar1,(int)param_1 + (param_2 - piVar2[2]),(int *)&local_18);
  }
  else {
    FUN_00401a5c((int)(param_1 + 1),param_2 + -4,(int *)&local_18);
  }
  if (local_18 == 0) {
    uVar3 = 0;
  }
  else {
    FUN_00401d20(param_1,local_18 - (int)param_1);
    puVar4 = (uint *)(local_18 + local_14);
    if (puVar4 < (uint *)(piVar2[2] + piVar2[3])) {
      FUN_00401d74(puVar4,(int)param_1 + (param_2 - (int)puVar4));
    }
    uVar3 = FUN_00401570(piVar2,&local_18);
    uVar3 = CONCAT31((int3)((uint)uVar3 >> 8),1);
  }
  return uVar3;
}


/* ==== 00401edc FUN_00401edc ==== */

void FUN_00401edc(uint *param_1,uint param_2)

{
  uint *puVar1;
  uint uVar2;
  uint *puVar3;
  undefined4 uVar4;
  
  param_1[2] = param_2;
  *(uint *)((int)param_1 + (param_2 - 4)) = param_2;
  if ((int)param_2 < 0x1001) {
    if ((int)param_2 < 0) {
      param_2 = param_2 + 3;
    }
    puVar1 = *(uint **)(DAT_004ac490 + -0xc + ((int)param_2 >> 2) * 4);
    if (puVar1 == (uint *)0x0) {
      *(uint **)(DAT_004ac490 + -0xc + ((int)param_2 >> 2) * 4) = param_1;
      param_1[1] = (uint)param_1;
      *param_1 = (uint)param_1;
    }
    else {
      uVar2 = *puVar1;
      param_1[1] = (uint)puVar1;
      *param_1 = uVar2;
      *puVar1 = (uint)param_1;
      *(uint **)(uVar2 + 4) = param_1;
    }
  }
  else {
    if ((0x3bff < (int)param_2) && (uVar4 = FUN_00401e44(param_1,param_2), (char)uVar4 != '\0')) {
      return;
    }
    puVar1 = DAT_004ac484;
    uVar2 = *DAT_004ac484;
    puVar3 = param_1;
    param_1[1] = (uint)DAT_004ac484;
    DAT_004ac484 = puVar3;
    *param_1 = uVar2;
    *puVar1 = (uint)param_1;
    *(uint **)(uVar2 + 4) = param_1;
  }
  return;
}


/* ==== 00401f64 FUN_00401f64 ==== */

void FUN_00401f64(void)

{
  if (0 < (int)DAT_004ac488) {
    if ((int)DAT_004ac488 < 0xc) {
      DAT_004ac434 = 7;
    }
    else {
      *DAT_004ac48c = DAT_004ac488 | 2;
      FUN_00401d50((int)(DAT_004ac48c + 1));
      DAT_004ac48c = (uint *)0x0;
      DAT_004ac488 = 0;
    }
  }
  return;
}


/* ==== 00401fb0 FUN_00401fb0 ==== */

undefined4 FUN_00401fb0(uint *param_1)

{
  undefined4 uVar1;
  uint uVar2;
  uint local_1c;
  uint local_18;
  uint local_14;
  int local_10;
  
  local_1c = *param_1;
  local_18 = param_1[1];
  FUN_00401f64();
  FUN_004014fc(&DAT_004ac494,(int *)&local_1c,(int *)&local_14);
  if (local_14 == 0) {
    uVar1 = 0;
  }
  else {
    if (local_14 < local_1c) {
      uVar2 = FUN_00401d9c(local_1c);
      local_1c = local_1c - uVar2;
      local_18 = local_18 + uVar2;
    }
    if ((uint *)(local_1c + local_18) < (uint *)(local_14 + local_10)) {
      uVar2 = FUN_00401e0c((uint *)(local_1c + local_18));
      local_18 = local_18 + uVar2;
    }
    if ((uint *)(local_14 + local_10) == (uint *)(local_1c + local_18)) {
      FUN_00401d20((uint *)(local_1c + local_18) + -1,4);
      local_18 = local_18 - 4;
    }
    DAT_004ac48c = local_1c;
    DAT_004ac488 = local_18;
    uVar1 = CONCAT31((int3)(local_18 >> 8),1);
  }
  return uVar1;
}


/* ==== 0040203c FUN_0040203c ==== */

undefined4 FUN_0040203c(int param_1)

{
  undefined4 uVar1;
  uint local_c [2];
  
  FUN_004018a8(param_1 + 4,(int *)local_c);
  if ((local_c[0] != 0) && (uVar1 = FUN_00401fb0(local_c), (char)uVar1 != '\0')) {
    return CONCAT31((int3)((uint)uVar1 >> 8),1);
  }
  return 0;
}


/* ==== 00402068 FUN_00402068 ==== */

undefined4 FUN_00402068(LPVOID address,int param_2)

{
  undefined4 uVar1;
  uint local_10 [2];
  
  FUN_00401938(address,param_2 + 4,(int *)local_10);
  if ((local_10[0] != 0) && (uVar1 = FUN_00401fb0(local_10), (char)uVar1 != '\0')) {
    return CONCAT31((int3)((uint)uVar1 >> 8),1);
  }
  return 0;
}


/* ==== 0040209c FUN_0040209c ==== */

int FUN_0040209c(int param_1)

{
  int iVar1;
  int i_val;
  
  if (param_1 < 0) {
    param_1 = param_1 + 3;
  }
  i_val = param_1 >> 2;
  if (i_val < 0x401) {
    do {
      iVar1 = *(int *)(DAT_004ac490 + -0xc + i_val * 4);
      if (iVar1 != 0) {
        return iVar1;
      }
      i_val = i_val + 1;
    } while (i_val != 0x401);
  }
  return 0;
}


/* ==== 004020c8 FUN_004020c8 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint * FUN_004020c8(uint param_1)

{
  uint *puVar1;
  uint *puVar2;
  undefined4 uVar3;
  uint uVar4;
  
  while ((puVar1 = DAT_004ac484, puVar2 = DAT_004ac47c, (int)DAT_004ac47c[2] < (int)param_1 &&
         (uVar4 = DAT_004ac484[2], puVar2 = DAT_004ac484, (int)uVar4 < (int)param_1))) {
    DAT_004ac484[2] = param_1;
    puVar2 = puVar1;
    do {
      puVar2 = (uint *)puVar2[1];
    } while ((int)puVar2[2] < (int)param_1);
    DAT_004ac484[2] = uVar4;
    puVar1 = puVar2;
    if ((puVar2 != DAT_004ac484) ||
       (((int)param_1 < 0x1001 &&
        (puVar2 = (uint *)FUN_0040209c(param_1), puVar1 = DAT_004ac484, puVar2 != (uint *)0x0))))
    break;
    uVar3 = FUN_0040203c(param_1);
    puVar2 = DAT_004ac48c;
    if ((char)uVar3 == '\0') {
      return (uint *)0x0;
    }
    if ((int)param_1 <= DAT_004ac488) {
      DAT_004ac488 = DAT_004ac488 - param_1;
      if (DAT_004ac488 < 0xc) {
        param_1 = param_1 + DAT_004ac488;
        DAT_004ac488 = 0;
      }
      DAT_004ac48c = (uint *)((int)DAT_004ac48c + param_1);
      *puVar2 = param_1 | 2;
      _DAT_004ac424 = _DAT_004ac424 + 1;
      _DAT_004ac428 = _DAT_004ac428 + (param_1 - 4);
      return puVar2 + 1;
    }
  }
  DAT_004ac484 = puVar1;
  FUN_00401c8c((int *)puVar2);
  uVar4 = puVar2[2];
  if ((int)(uVar4 - param_1) < 0xc) {
    if (puVar2 == DAT_004ac484) {
      DAT_004ac484 = (uint *)puVar2[1];
    }
    *(uint *)((int)puVar2 + uVar4) = *(uint *)((int)puVar2 + uVar4) & 0xfffffffe;
  }
  else {
    FUN_00401edc((uint *)((int)puVar2 + param_1),uVar4 - param_1);
    uVar4 = param_1;
  }
  *puVar2 = uVar4 | 2;
  _DAT_004ac424 = _DAT_004ac424 + 1;
  _DAT_004ac428 = _DAT_004ac428 + (uVar4 - 4);
  return puVar2 + 1;
}


/* ==== 004021bc FUN_004021bc ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint * FUN_004021bc(int param_1)

{
  uint *puVar1;
  char cVar2;
  uint uVar3;
  uint *puVar4;
  uint uVar5;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  
  if ((DAT_004ac430 == '\0') && (cVar2 = FUN_00401ae8(), cVar2 == '\0')) {
    return (uint *)0x0;
  }
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  if (DAT_004ac049 != '\0') {
    EnterCriticalSection(&_RTL_CRITICAL_SECTION_004ac438);
  }
  puVar4 = DAT_004ac48c;
  uVar5 = param_1 + 7U & 0xfffffffc;
  if ((int)uVar5 < 0xc) {
    uVar5 = 0xc;
  }
  if ((int)uVar5 < 0x1001) {
    uVar3 = uVar5;
    if ((int)uVar5 < 0) {
      uVar3 = uVar5 + 3;
    }
    puVar1 = *(uint **)(DAT_004ac490 + -0xc + ((int)uVar3 >> 2) * 4);
    if (puVar1 != (uint *)0x0) {
      *(uint *)((int)puVar1 + uVar5) = *(uint *)((int)puVar1 + uVar5) & 0xfffffffe;
      puVar4 = (uint *)puVar1[1];
      if (puVar1 == puVar4) {
        uVar3 = uVar5;
        if ((int)uVar5 < 0) {
          uVar3 = uVar5 + 3;
        }
        *(undefined4 *)(DAT_004ac490 + -0xc + ((int)uVar3 >> 2) * 4) = 0;
      }
      else {
        uVar3 = uVar5;
        if ((int)uVar5 < 0) {
          uVar3 = uVar5 + 3;
        }
        *(uint **)(DAT_004ac490 + -0xc + ((int)uVar3 >> 2) * 4) = puVar4;
        uVar3 = *puVar1;
        *(uint **)(uVar3 + 4) = puVar4;
        *puVar4 = uVar3;
      }
      *puVar1 = puVar1[2] | 2;
      _DAT_004ac424 = _DAT_004ac424 + 1;
      _DAT_004ac428 = _DAT_004ac428 + (uVar5 - 4);
      FUN_00403794();
      return puVar1 + 1;
    }
  }
  if ((int)uVar5 <= DAT_004ac488) {
    DAT_004ac488 = DAT_004ac488 - uVar5;
    if (DAT_004ac488 < 0xc) {
      uVar5 = uVar5 + DAT_004ac488;
      DAT_004ac488 = 0;
    }
    DAT_004ac48c = (uint *)((int)DAT_004ac48c + uVar5);
    *puVar4 = uVar5 | 2;
    _DAT_004ac424 = _DAT_004ac424 + 1;
    _DAT_004ac428 = _DAT_004ac428 + (uVar5 - 4);
    FUN_00403794();
    return puVar4 + 1;
  }
  FUN_004020c8(uVar5);
  puVar4 = (uint *)0x0;
  *in_FS_OFFSET = uStack_24;
  if (DAT_004ac049 != '\0') {
    uStack_24 = 0x40232f;
    LeaveCriticalSection(&_RTL_CRITICAL_SECTION_004ac438);
  }
  return puVar4;
}


/* ==== 00402344 FUN_00402344 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00402344(int param_1)

{
  uint uVar1;
  char cVar2;
  uint *puVar3;
  undefined4 uVar4;
  uint uVar5;
  uint *puVar6;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  
  DAT_004ac434 = 0;
  if ((DAT_004ac430 == '\0') && (cVar2 = FUN_00401ae8(), cVar2 == '\0')) {
    DAT_004ac434 = 8;
    return 8;
  }
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  if (DAT_004ac049 != '\0') {
    EnterCriticalSection(&_RTL_CRITICAL_SECTION_004ac438);
  }
  puVar6 = (uint *)(param_1 + -4);
  uVar5 = *puVar6;
  if ((uVar5 & 2) == 0) {
    DAT_004ac434 = 9;
    goto LAB_004024ad;
  }
  _DAT_004ac424 = _DAT_004ac424 + -1;
  _DAT_004ac428 = _DAT_004ac428 - ((uVar5 & 0x7ffffffc) - 4);
  if ((uVar5 & 1) != 0) {
    uVar1 = *(uint *)(param_1 + -8);
    if (((int)uVar1 < 0xc) || ((uVar1 & 0x80000003) != 0)) {
      DAT_004ac434 = 10;
      goto LAB_004024ad;
    }
    puVar6 = (uint *)((int)puVar6 - uVar1);
    if (uVar1 != puVar6[2]) {
      DAT_004ac434 = 10;
      goto LAB_004024ad;
    }
    uVar5 = uVar5 + uVar1;
    FUN_00401c8c((int *)puVar6);
  }
  uVar5 = uVar5 & 0x7ffffffc;
  puVar3 = (uint *)((int)puVar6 + uVar5);
  if (puVar3 == DAT_004ac48c) {
    DAT_004ac48c = (uint *)((int)DAT_004ac48c - uVar5);
    DAT_004ac488 = DAT_004ac488 + uVar5;
    if (0x3c00 < DAT_004ac488) {
      FUN_00401f64();
    }
    FUN_00403794();
    return 0;
  }
  if ((*puVar3 & 2) == 0) {
    if (((puVar3[1] == 0) || (*puVar3 == 0)) || ((int)puVar3[2] < 0xc)) {
      DAT_004ac434 = 0xb;
      goto LAB_004024ad;
    }
    uVar5 = uVar5 + puVar3[2];
    FUN_00401c8c((int *)puVar3);
  }
  else {
    if ((*puVar3 & 0x7ffffffc) < 4) {
      DAT_004ac434 = 0xb;
      goto LAB_004024ad;
    }
    *puVar3 = *puVar3 | 1;
  }
  FUN_00401edc(puVar6,uVar5);
LAB_004024ad:
  uVar4 = 0;
  *in_FS_OFFSET = uStack_20;
  if (DAT_004ac049 != '\0') {
    uStack_20 = 0x4024d5;
    LeaveCriticalSection(&_RTL_CRITICAL_SECTION_004ac438);
  }
  return uVar4;
}


/* ==== 004024e8 FUN_004024e8 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_004024e8(int param_1,int param_2)

{
  uint uVar1;
  byte *pbVar2;
  undefined4 uVar3;
  uint *puVar4;
  uint *puVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint local_18;
  int local_14;
  
  uVar6 = param_2 + 7U & 0xfffffffc;
  if ((int)uVar6 < 0xc) {
    uVar6 = 0xc;
  }
  puVar5 = (uint *)(param_1 + -4);
  uVar8 = *puVar5 & 0x7ffffffc;
  pbVar2 = (byte *)((int)puVar5 + uVar8);
  uVar7 = uVar6;
  if ((int)uVar8 < (int)uVar6) {
    do {
      local_14 = uVar6 - uVar8;
      if ((byte *)((int)puVar5 + uVar8) == DAT_004ac48c) {
        if (local_14 <= DAT_004ac488) {
          DAT_004ac488 = DAT_004ac488 - local_14;
          DAT_004ac48c = DAT_004ac48c + local_14;
          if (DAT_004ac488 < 0xc) {
            DAT_004ac48c = DAT_004ac48c + DAT_004ac488;
            uVar6 = uVar6 + DAT_004ac488;
            DAT_004ac488 = 0;
          }
          _DAT_004ac428 = _DAT_004ac428 + (uVar6 - uVar8);
          uVar7 = *puVar5;
          *puVar5 = uVar6 | uVar7 & 0x80000003;
          return CONCAT31((int3)((uVar7 & 0x80000003) >> 8),1);
        }
        FUN_00401f64();
      }
      puVar4 = (uint *)((int)puVar5 + uVar8);
      if ((*puVar4 & 2) == 0) {
        uVar1 = puVar4[2];
        if (local_14 <= (int)uVar1) {
          FUN_00401c8c((int *)puVar4);
          uVar1 = uVar1 - local_14;
          if ((int)uVar1 < 0xc) {
            puVar4 = (uint *)((int)puVar5 + uVar6 + uVar1);
            *puVar4 = *puVar4 & 0xfffffffe;
            uVar7 = uVar6 + uVar1;
          }
          else {
            FUN_00401edc((uint *)((int)puVar5 + uVar6),uVar1);
          }
          goto LAB_00402697;
        }
        puVar4 = (uint *)((int)puVar4 + uVar1);
        local_14 = local_14 - uVar1;
      }
    } while (((*puVar4 & 0x80000000) != 0) &&
            (uVar3 = FUN_00402068((byte *)((*puVar4 & 0x7ffffffc) + (int)puVar4),local_14),
            (char)uVar3 != '\0'));
    uVar3 = 0;
  }
  else {
    local_18 = uVar8 - uVar6;
    if (pbVar2 == DAT_004ac48c) {
      DAT_004ac48c = DAT_004ac48c + -local_18;
      DAT_004ac488 = DAT_004ac488 + local_18;
      if (DAT_004ac488 < 0xc) {
        DAT_004ac48c = DAT_004ac48c + local_18;
        DAT_004ac488 = DAT_004ac488 - local_18;
        uVar7 = uVar8;
      }
    }
    else {
      if ((*pbVar2 & 2) == 0) {
        local_18 = local_18 + *(int *)(pbVar2 + 8);
        FUN_00401c8c((int *)pbVar2);
      }
      uVar7 = uVar8;
      if (0xb < (int)local_18) {
        *(uint *)((int)puVar5 + uVar6) = local_18 | 2;
        FUN_00401d50((int)((uint *)((int)puVar5 + uVar6) + 1));
        uVar7 = uVar6;
      }
    }
LAB_00402697:
    _DAT_004ac428 = _DAT_004ac428 + (uVar7 - uVar8);
    uVar6 = *puVar5;
    *puVar5 = uVar7 | uVar6 & 0x80000003;
    uVar3 = CONCAT31((int3)((uVar6 & 0x80000003) >> 8),1);
  }
  return uVar3;
}


/* ==== 004026b8 FUN_004026b8 ==== */

undefined4 FUN_004026b8(undefined4 *param_1,uint param_2)

{
  char cVar1;
  undefined4 uVar2;
  uint *puVar3;
  uint uVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  
  if ((DAT_004ac430 == '\0') && (cVar1 = FUN_00401ae8(), cVar1 == '\0')) {
    return 0;
  }
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  if (DAT_004ac049 != '\0') {
    EnterCriticalSection(&_RTL_CRITICAL_SECTION_004ac438);
  }
  uVar2 = FUN_004024e8((int)param_1,param_2);
  if ((char)uVar2 == '\0') {
    puVar3 = FUN_004021bc(param_2);
    uVar4 = (param_1[-1] & 0x7ffffffc) - 4;
    if ((int)param_2 < (int)uVar4) {
      uVar4 = param_2;
    }
    if (puVar3 != (uint *)0x0) {
      System_Move(param_1,puVar3,uVar4);
      FUN_00402344((int)param_1);
    }
  }
  uVar2 = 0;
  *in_FS_OFFSET = uStack_20;
  if (DAT_004ac049 != '\0') {
    uStack_20 = 0x402768;
    LeaveCriticalSection(&_RTL_CRITICAL_SECTION_004ac438);
  }
  return uVar2;
}


/* ==== 0040277c System._GetMem ==== */

void System__GetMem(int param_1)

{
  int iVar1;
  
  if (param_1 != 0) {
    iVar1 = (*(code *)PTR_FUN_004aa024)();
    if (iVar1 == 0) {
      System__RunError(1);
      return;
    }
  }
  return;
}


/* ==== 00402794 System._FreeMem ==== */

void System__FreeMem(int param_1)

{
  int iVar1;
  
  if (param_1 != 0) {
    iVar1 = (*(code *)PTR_FUN_004aa028)();
    if (iVar1 != 0) {
      System__RunError(CONCAT31((int3)((uint)iVar1 >> 8),2));
      return;
    }
  }
  return;
}


/* ==== 004027ac FUN_004027ac ==== */

void FUN_004027ac(int *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *param_1;
  if (iVar1 != 0) {
    if (param_2 == 0) {
      *param_1 = 0;
      iVar1 = (*(code *)PTR_FUN_004aa028)(iVar1);
      if (iVar1 == 0) {
        return;
      }
      System__RunError(CONCAT31((int3)((uint)iVar1 >> 8),2));
      return;
    }
    iVar1 = (*(code *)PTR_FUN_004aa02c)(iVar1);
    if (iVar1 != 0) {
      *param_1 = iVar1;
      return;
    }
LAB_004027dd:
    System__RunError(1);
    return;
  }
  if (param_2 != 0) {
    iVar1 = (*(code *)PTR_FUN_004aa024)(param_2);
    if (iVar1 == 0) goto LAB_004027dd;
    *param_1 = iVar1;
  }
  return;
}


/* ==== 00402808 System._RunError ==== */

void System__RunError(uint param_1)

{
  uint uVar1;
  undefined4 uVar2;
  LPVOID pvVar3;
  undefined4 in_stack_00000000;
  
  uVar1 = param_1 & 0x7f;
  if (DAT_004ac004 != (code *)0x0) {
    uVar1 = (*DAT_004ac004)(uVar1,in_stack_00000000);
  }
  uVar2 = CONCAT31((int3)(uVar1 - 1 >> 8),*(undefined1 *)(uVar1 + 0x402830));
  if ((int)(uVar1 - 1) < 0) {
    pvVar3 = FUN_0040655c();
    uVar2 = *(undefined4 *)((int)pvVar3 + 4);
  }
  FUN_00403c34(uVar2);
  return;
}


/* ==== 0040284c FUN_0040284c ==== */

void FUN_0040284c(void)

{
  LPVOID pvVar1;
  
  pvVar1 = FUN_0040655c();
  if (*(int *)((int)pvVar1 + 4) == 0) {
    return;
  }
  System__RunError(0);
  return;
}


/* ==== 0040286c FUN_0040286c ==== */

void FUN_0040286c(undefined4 param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = FUN_0040655c();
  *(undefined4 *)((int)pvVar1 + 4) = param_1;
  return;
}


/* ==== 0040287c FUN_0040287c ==== */

void FUN_0040287c(byte *param_1,int param_2,int param_3,byte *param_4)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  
  bVar1 = *param_1;
  if (bVar1 == 0) {
    *param_4 = 0;
    return;
  }
  if (param_2 < 1) {
    param_2 = 1;
LAB_00402892:
    iVar2 = ((uint)bVar1 - param_2) + 1;
    if (-1 < param_3) {
      if (iVar2 < param_3) {
        param_3 = iVar2;
      }
      goto LAB_0040289d;
    }
  }
  else if (param_2 <= (int)(uint)bVar1) goto LAB_00402892;
  param_3 = 0;
LAB_0040289d:
  *param_4 = (byte)param_3;
  pbVar3 = param_1 + param_2;
  for (; param_4 = param_4 + 1, param_3 != 0; param_3 = param_3 + -1) {
    *param_4 = *pbVar3;
    pbVar3 = pbVar3 + 1;
  }
  return;
}


/* ==== 004028c0 FUN_004028c0 ==== */

undefined4 FUN_004028c0(void)

{
  undefined4 uVar1;
  LPVOID pvVar2;
  
  pvVar2 = FUN_0040655c();
  uVar1 = *(undefined4 *)((int)pvVar2 + 4);
  *(undefined4 *)((int)pvVar2 + 4) = 0;
  return uVar1;
}


/* ==== 004028d8 System.Move ==== */

void System_Move(undefined4 *param_1,undefined4 *param_2,uint param_3)

{
  int i_val;
  uint j;
  undefined4 *puVar1;
  undefined1 *puVar2;
  undefined4 *puVar3;
  undefined1 *puVar4;
  
  i_val = (int)param_3 >> 2;
  if (param_1 < param_2) {
    puVar1 = (undefined4 *)((int)param_1 + (param_3 - 4));
    puVar3 = (undefined4 *)((int)param_2 + (param_3 - 4));
    if (-1 < i_val) {
      for (; i_val != 0; i_val = i_val + -1) {
        *puVar3 = *puVar1;
        puVar1 = puVar1 + -1;
        puVar3 = puVar3 + -1;
      }
      puVar2 = (undefined1 *)((int)puVar1 + 3);
      puVar4 = (undefined1 *)((int)puVar3 + 3);
      for (j = param_3 & 3; j != 0; j = j - 1) {
        *puVar4 = *puVar2;
        puVar2 = puVar2 + -1;
        puVar4 = puVar4 + -1;
      }
    }
  }
  else if ((param_2 != param_1) && (-1 < i_val)) {
    for (; i_val != 0; i_val = i_val + -1) {
      *param_2 = *param_1;
      param_1 = param_1 + 1;
      param_2 = param_2 + 1;
    }
    for (j = param_3 & 3; j != 0; j = j - 1) {
      *(undefined1 *)param_2 = *(undefined1 *)param_1;
      param_1 = (undefined4 *)((int)param_1 + 1);
      param_2 = (undefined4 *)((int)param_2 + 1);
    }
    return;
  }
  return;
}


/* ==== 00402918 FUN_00402918 ==== */

byte * FUN_00402918(byte *param_1,int *param_2)

{
  byte bVar1;
  uint i_val;
  byte *pbVar2;
  byte *pbVar3;
  byte *local_1008 [1024];
  
  pbVar2 = param_1;
  while( true ) {
    for (; (*pbVar2 != 0 && (*pbVar2 < 0x21)); pbVar2 = pbVar2 + 1) {
    }
    if ((*pbVar2 != 0x22) || (pbVar2[1] != 0x22)) break;
    pbVar2 = pbVar2 + 2;
  }
  i_val = 0;
  local_1008[0] = param_1;
  while ((bVar1 = *pbVar2, 0x20 < bVar1 && ((int)i_val < 0x1000))) {
    pbVar3 = pbVar2;
    if (bVar1 == 0x22) {
      while( true ) {
        pbVar2 = pbVar3 + 1;
        bVar1 = *pbVar2;
        if ((bVar1 == 0) || (bVar1 == 0x22)) break;
        *(byte *)((int)local_1008 + i_val) = bVar1;
        i_val = i_val + 1;
        pbVar3 = pbVar2;
      }
      if (*pbVar2 != 0) {
        pbVar2 = pbVar3 + 2;
      }
    }
    else {
      *(byte *)((int)local_1008 + i_val) = bVar1;
      i_val = i_val + 1;
      pbVar2 = pbVar2 + 1;
    }
  }
  System__LStrFromPCharLen(param_2,local_1008,i_val);
  return pbVar2;
}


/* ==== 00402990 FUN_00402990 ==== */

void FUN_00402990(void)

{
  byte *pbVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  int local_8;
  
  puStack_14 = &stack0xfffffffc;
  local_8 = 0;
  puStack_18 = &LAB_004029e1;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  pbVar1 = (byte *)GetCommandLineA();
  pbVar1 = FUN_00402918(pbVar1,&local_8);
  do {
    pbVar1 = FUN_00402918(pbVar1,&local_8);
  } while (local_8 != 0);
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_004029e8;
  puStack_18 = (undefined1 *)0x4029e0;
  System__LStrClr(&local_8);
  return;
}


/* ==== 004029f0 FUN_004029f0 ==== */

void FUN_004029f0(int param_1,int *param_2)

{
  DWORD DVar1;
  byte *pbVar2;
  CHAR local_114 [264];
  
  if (param_1 == 0) {
    DVar1 = GetModuleFileNameA((HMODULE)0x0,local_114,0x105);
    System__LStrFromPCharLen(param_2,(undefined4 *)local_114,DVar1);
  }
  else {
    pbVar2 = (byte *)GetCommandLineA();
    while( true ) {
      pbVar2 = FUN_00402918(pbVar2,param_2);
      if ((param_1 == 0) || (*param_2 == 0)) break;
      param_1 = param_1 + -1;
    }
  }
  return;
}


/* ==== 00402a48 FUN_00402a48 ==== */

void FUN_00402a48(void)

{
  _SYSTEMTIME systemtime;
  
  GetSystemTime(&systemtime);
  DAT_004ac044 = (CONCAT22((short)((uint)systemtime.wHour * 0x3c >> 0x10),
                           (short)((uint)systemtime.wHour * 0x3c) + systemtime.wMinute) * 0x3c +
                 (uint)systemtime.wSecond) * 1000 + (uint)systemtime.wMilliseconds;
  return;
}


/* ==== 00402a84 FUN_00402a84 ==== */

void FUN_00402a84(void)

{
  ushort in_FPUStatusWord;
  unkbyte10 in_ST0;
  
  fcos(in_ST0);
  if ((in_FPUStatusWord & 0x400) == 0) {
    return;
  }
  return;
}


/* ==== 00402a94 FUN_00402a94 ==== */

void FUN_00402a94(void)

{
  float10 in_ST0;
  float10 fVar1;
  float10 fVar2;
  
  fVar1 = ROUND((float10)1.4426950408889634 * in_ST0);
  fVar2 = (float10)f2xm1((float10)1.4426950408889634 * in_ST0 - fVar1);
  fscale((float10)1 + fVar2,fVar1);
  return;
}


/* ==== 00402aac FUN_00402aac ==== */

void FUN_00402aac(void)

{
  return;
}


/* ==== 00402ac8 FUN_00402ac8 ==== */

undefined4 FUN_00402ac8(void)

{
  float10 in_ST0;
  undefined4 local_8;
  
  local_8 = (undefined4)(longlong)ROUND(in_ST0);
  return local_8;
}


/* ==== 00402ad4 FUN_00402ad4 ==== */

undefined4 FUN_00402ad4(void)

{
  float10 in_ST0;
  undefined4 local_8;
  
  local_8 = (undefined4)(longlong)ROUND(in_ST0);
  return local_8;
}


/* ==== 00402af0 TStrings.virtual_00c ==== */

void TStrings_virtual_00c(void)

{
  if (DAT_004ac01c != (code *)0x0) {
    (*DAT_004ac01c)();
  }
  FUN_00403c34(0xd2);
  return;
}


/* ==== 00402b0c FUN_00402b0c ==== */

void FUN_00402b0c(byte *param_1,byte *param_2,byte param_3)

{
  uint i_val;
  uint j;
  
  if (param_3 < *param_2) {
    *param_1 = param_3;
    i_val = (uint)param_3;
    while( true ) {
      param_1 = param_1 + 1;
      param_2 = param_2 + 1;
      if (i_val == 0) break;
      i_val = i_val - 1;
      *param_1 = *param_2;
    }
    return;
  }
  i_val = *param_2 + 1;
  j = i_val & 3;
  for (i_val = i_val >> 2; i_val != 0; i_val = i_val - 1) {
    *(undefined4 *)param_1 = *(undefined4 *)param_2;
    param_2 = param_2 + 4;
    param_1 = param_1 + 4;
  }
  for (; j != 0; j = j - 1) {
    *param_1 = *param_2;
    param_2 = param_2 + 1;
    param_1 = param_1 + 1;
  }
  return;
}


/* ==== 00402b3c FUN_00402b3c ==== */

int FUN_00402b3c(byte *param_1,byte *param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  byte *pbVar4;
  byte *pbVar5;
  
  uVar2 = (uint)*param_2;
  pbVar4 = param_1 + 1;
  pbVar5 = param_2 + 1;
  iVar1 = *param_1 - uVar2;
  if (*param_1 < uVar2 || iVar1 == 0) {
    uVar2 = uVar2 + iVar1;
  }
  uVar3 = uVar2 >> 2;
  do {
    if (uVar3 == 0) {
LAB_00402b7f:
      uVar2 = uVar2 & 3;
      if ((uVar2 == 0) ||
         ((*pbVar4 == *pbVar5 &&
          ((uVar2 == 1 || ((pbVar4[1] == pbVar5[1] && ((uVar2 == 2 || (pbVar4[2] == pbVar5[2])))))))
          ))) {
        iVar1 = iVar1 * 2;
      }
      return iVar1;
    }
    if (*(int *)pbVar4 != *(int *)pbVar5) {
      return iVar1;
    }
    if (uVar3 == 1) {
      pbVar4 = pbVar4 + 4;
      pbVar5 = pbVar5 + 4;
      goto LAB_00402b7f;
    }
    if (*(int *)(pbVar4 + 4) != *(int *)(pbVar5 + 4)) {
      return iVar1;
    }
    pbVar4 = pbVar4 + 8;
    pbVar5 = pbVar5 + 8;
    uVar3 = uVar3 - 2;
  } while( true );
}


/* ==== 00402bc0 FUN_00402bc0 ==== */

int * FUN_00402bc0(int *param_1,int *param_2,uint param_3)

{
  uint uVar1;
  
  uVar1 = param_3 >> 2;
  do {
    if (uVar1 == 0) {
LAB_00402bf0:
      uVar1 = param_3 & 3;
      if (((uVar1 != 0) && ((char)*param_1 == (char)*param_2)) &&
         ((uVar1 == 1 ||
          ((*(char *)((int)param_1 + 1) == *(char *)((int)param_2 + 1) &&
           ((uVar1 == 2 || (*(char *)((int)param_1 + 2) == *(char *)((int)param_2 + 2))))))))) {
        return (int *)0x0;
      }
      return param_1;
    }
    if (*param_1 != *param_2) {
      return param_1;
    }
    if (uVar1 == 1) {
      param_1 = param_1 + 1;
      param_2 = param_2 + 1;
      goto LAB_00402bf0;
    }
    if (param_1[1] != param_2[1]) {
      return param_1;
    }
    param_1 = param_1 + 2;
    param_2 = param_2 + 2;
    uVar1 = uVar1 - 2;
  } while( true );
}


/* ==== 00402c30 System.FillChar ==== */

void System_FillChar(undefined4 *param_1,uint param_2,undefined1 param_3)

{
  int i_val;
  uint j;
  
  i_val = (int)param_2 >> 2;
  if (-1 < i_val) {
    for (; i_val != 0; i_val = i_val + -1) {
      *param_1 = CONCAT22(CONCAT11(param_3,param_3),CONCAT11(param_3,param_3));
      param_1 = param_1 + 1;
    }
    for (j = param_2 & 3; j != 0; j = j - 1) {
      *(undefined1 *)param_1 = param_3;
      param_1 = (undefined4 *)((int)param_1 + 1);
    }
  }
  return;
}


/* ==== 00402c50 FUN_00402c50 ==== */

undefined4 FUN_00402c50(uint param_1)

{
  DAT_004ac044 = DAT_004ac044 * 0x8088405 + 1;
  return (int)((ulonglong)param_1 * (ulonglong)DAT_004ac044 >> 0x20);
}


/* ==== 00402c68 FUN_00402c68 ==== */

void FUN_00402c68(byte *param_1,int *param_2)

{
  bool bVar1;
  uint uVar2;
  byte bVar3;
  byte bVar4;
  byte *pbVar5;
  byte *pbVar6;
  int iVar7;
  
  pbVar6 = (byte *)0x0;
  if (param_1 == (byte *)0x0) {
LAB_00402ce5:
    pbVar6 = pbVar6 + 1;
  }
  else {
    uVar2 = 0;
    pbVar6 = param_1;
    do {
      pbVar5 = pbVar6;
      bVar3 = *pbVar5;
      pbVar6 = pbVar5 + 1;
    } while (bVar3 == 0x20);
    bVar1 = false;
    if (bVar3 != 0x2d) {
      if (bVar3 == 0x2b) goto LAB_00402cf5;
      if (((bVar3 != 0x24) && (bVar3 != 0x78)) && (bVar3 != 0x58)) {
        if (bVar3 == 0x30) {
          bVar3 = *pbVar6;
          pbVar6 = pbVar5 + 2;
          if ((bVar3 != 0x78) && (bVar3 != 0x58)) goto joined_r0x00402cb2;
          goto LAB_00402cfa;
        }
        goto LAB_00402cb6;
      }
LAB_00402cfa:
      bVar3 = *pbVar6;
      pbVar6 = pbVar6 + 1;
      if (bVar3 == 0) goto LAB_00402ce5;
      do {
        if (0x60 < bVar3) {
          bVar3 = bVar3 - 0x20;
        }
        bVar4 = bVar3 - 0x30;
        if (9 < bVar4) {
          if (5 < (byte)(bVar3 + 0xbf)) goto LAB_00402cee;
          bVar4 = bVar3 - 0x37;
        }
        if (0xfffffff < uVar2) goto LAB_00402cee;
        uVar2 = uVar2 * 0x10 + (uint)bVar4;
        bVar3 = *pbVar6;
        pbVar6 = pbVar6 + 1;
      } while (bVar3 != 0);
      goto LAB_00402cdc;
    }
    bVar1 = true;
LAB_00402cf5:
    bVar3 = *pbVar6;
    pbVar6 = pbVar5 + 2;
LAB_00402cb6:
    if (bVar3 != 0) {
      do {
        if ((9 < (byte)(bVar3 - 0x30)) || (0xccccccc < uVar2)) goto LAB_00402cee;
        uVar2 = uVar2 * 10 + (uint)(byte)(bVar3 - 0x30);
        bVar3 = *pbVar6;
        pbVar6 = pbVar6 + 1;
joined_r0x00402cb2:
      } while (bVar3 != 0);
      if (bVar1) {
        if ((-uVar2 == 0 || 0 < (int)uVar2) || ((int)-uVar2 < 0)) goto LAB_00402cdc;
      }
      else if (-1 < (int)uVar2) {
LAB_00402cdc:
        iVar7 = 0;
        goto LAB_00402cdf;
      }
    }
  }
LAB_00402cee:
  iVar7 = (int)pbVar6 - (int)param_1;
LAB_00402cdf:
  *param_2 = iVar7;
  return;
}


/* ==== 00402d34 FUN_00402d34 ==== */

void FUN_00402d34(char *param_1,char *param_2)

{
  char cVar1;
  char *pcVar2;
  char cVar3;
  
  cVar3 = -1;
  pcVar2 = param_1;
  do {
    cVar1 = *param_2;
    param_2 = param_2 + 1;
    if (cVar1 == '\0') break;
    pcVar2 = pcVar2 + 1;
    *pcVar2 = cVar1;
    cVar3 = cVar3 + -1;
  } while (cVar3 != '\0');
  *param_1 = (char)pcVar2 - (char)param_1;
  return;
}


/* ==== 00402d4c FUN_00402d4c ==== */

void FUN_00402d4c(char *param_1,char *param_2,uint param_3)

{
  char cVar1;
  char *pcVar2;
  
  pcVar2 = param_1;
  if (0xff < param_3) {
    param_3 = 0xff;
  }
  do {
    cVar1 = *param_2;
    param_2 = param_2 + 1;
    if (cVar1 == '\0') break;
    pcVar2 = pcVar2 + 1;
    *pcVar2 = cVar1;
    param_3 = param_3 - 1;
  } while (param_3 != 0);
  *param_1 = (char)pcVar2 - (char)param_1;
  return;
}


/* ==== 00402d70 FUN_00402d70 ==== */

void FUN_00402d70(uint param_1,uint param_2,undefined1 *param_3)

{
  byte bVar1;
  byte bVar2;
  uint i_val;
  int j;
  uint uVar3;
  uint uVar4;
  byte *pbVar5;
  
  uVar3 = param_2 & 0xff;
  uVar4 = param_1 >> 8 & 0xff;
  for (i_val = uVar4; i_val != 0; i_val = i_val - 1) {
    *param_3 = 0;
    param_3 = param_3 + 1;
  }
  if (uVar4 * 8 <= uVar3) {
    uVar3 = uVar4 * 8 - 1;
  }
  if ((param_1 & 0xff) <= uVar3) {
    bVar1 = -1 << ((byte)param_1 & 7);
    i_val = (param_1 & 0xff) >> 3;
    bVar2 = 0xff >> (~(byte)uVar3 & 7);
    pbVar5 = param_3 + (i_val - uVar4);
    j = (uVar3 >> 3) - i_val;
    if (j == 0) {
      *pbVar5 = bVar1 & bVar2;
    }
    else {
      *pbVar5 = bVar1;
      while( true ) {
        pbVar5 = pbVar5 + 1;
        j = j + -1;
        if (j == 0) break;
        *pbVar5 = 0xff;
      }
      *pbVar5 = bVar2;
    }
  }
  return;
}


/* ==== 00402dc8 GetKeyboardType ==== */

int __stdcall GetKeyboardType(int nTypeFlag)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00402dc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = GetKeyboardType(nTypeFlag);
  return iVar1;
}


/* ==== 00402dd0 FUN_00402dd0 ==== */

undefined4 FUN_00402dd0(void)

{
  int keyboard_type_2;
  uint keyboard_type;
  undefined4 uVar1;
  
  uVar1 = 0;
  keyboard_type_2 = GetKeyboardType(0);
  if (keyboard_type_2 == 7) {
    keyboard_type = GetKeyboardType(1);
    if (((keyboard_type & 0xff00) == 0xd00) || ((keyboard_type & 0xff00) == 0x400)) {
      uVar1 = 1;
    }
  }
  return uVar1;
}


/* ==== 00402e00 FUN_00402e00 ==== */

void FUN_00402e00(void)

{
  LSTATUS LVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar2;
  DWORD local_10;
  uint local_c;
  HKEY key;
  
  local_c = (uint)DAT_004aa000;
  LVar1 = RegOpenKeyExA((HKEY)0x80000002,"SOFTWARE\\Borland\\Delphi\\RTL",0,1,&key);
  if (LVar1 == 0) {
    uVar2 = *in_FS_OFFSET;
    *in_FS_OFFSET = &stack0xffffffe4;
    local_10 = 4;
    RegQueryValueExA(key,"FPUMaskValue",(LPDWORD)0x0,(LPDWORD)0x0,(LPBYTE)&local_c,&local_10);
    *in_FS_OFFSET = uVar2;
    RegCloseKey(key);
    return;
  }
  DAT_004aa000 = DAT_004aa000 & 0xffc0 | (ushort)local_c & 0x3f;
  return;
}


/* ==== 00402ec4 FUN_00402ec4 ==== */

void FUN_00402ec4(void)

{
  return;
}


/* ==== 00402ed0 System._RunError ==== */

void System__RunError(uint param_1)

{
  System__RunError(CONCAT31((int3)(param_1 >> 8),4));
  return;
}


/* ==== 00402ed8 System._RunError ==== */

void System__RunError(uint param_1)

{
  System__RunError(CONCAT31((int3)(param_1 >> 8),5));
  return;
}


/* ==== 00402ee0 FUN_00402ee0 ==== */

undefined4 FUN_00402ee0(undefined4 *param_1)

{
  return *param_1;
}


/* ==== 00402ee4 System.TObject.ClassName ==== */

void System_TObject_ClassName(int param_1,byte *param_2)

{
  int i_val;
  byte *pbVar1;
  
  pbVar1 = *(byte **)(param_1 + -0x2c);
  for (i_val = **(byte **)(param_1 + -0x2c) + 1; i_val != 0; i_val = i_val + -1) {
    *param_2 = *pbVar1;
    pbVar1 = pbVar1 + 1;
    param_2 = param_2 + 1;
  }
  return;
}


/* ==== 00402ef8 FUN_00402ef8 ==== */

undefined1 FUN_00402ef8(int param_1,int param_2)

{
  uint j;
  short i_val;
  
  i_val = 0;
  if (param_2 != 0) {
    j = (uint)**(byte **)(param_1 + -0x2c);
    if (j == *(uint *)(param_2 + -4)) {
      do {
        i_val = (((*(byte **)(param_1 + -0x2c))[j] ^ *(byte *)(param_2 + -1 + j)) & 0xdf) * 0x100;
        if ((char)((ushort)i_val >> 8) != '\0') goto LAB_00402f1b;
        j = j - 1;
      } while (j != 0);
      i_val = i_val + 1;
    }
  }
LAB_00402f1b:
  return (char)i_val;
}


/* ==== 00402f20 FUN_00402f20 ==== */

undefined4 FUN_00402f20(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (*(undefined4 **)(param_1 + -0x24) != (undefined4 *)0x0) {
    uVar1 = **(undefined4 **)(param_1 + -0x24);
  }
  return uVar1;
}


/* ==== 00402f2c TObject.NewInstance ==== */

void TObject_NewInstance(int param_1)

{
  int *piVar1;
  
  piVar1 = (int *)System__GetMem(*(int *)(param_1 + -0x28));
  FUN_00402fa8(param_1,piVar1);
  return;
}


/* ==== 00402f40 TObject.FreeInstance ==== */

void TObject_FreeInstance(int *param_1)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = param_1;
  do {
    iVar1 = *(int *)(*piVar2 + -0x40);
    piVar2 = *(int **)(*piVar2 + -0x24);
    if (iVar1 != 0) {
      FUN_0040454c((int)param_1,iVar1);
    }
  } while (piVar2 != (int *)0x0);
  System__FreeMem((int)param_1);
  return;
}


/* ==== 00402f68 FUN_00402f68 ==== */

undefined4 FUN_00402f68(int param_1)

{
  return *(undefined4 *)(param_1 + -0x28);
}


/* ==== 00402f6c System.TObject.Create ==== */

void System_TObject_Create(int *param_1,char param_2,undefined4 param_3)

{
  char extraout_DL;
  char cVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_00000000;
  undefined4 in_stack_fffffff0;
  undefined4 in_stack_fffffff4;
  
  cVar1 = '\0';
  if (param_2 != '\0') {
    param_1 = (int *)System__ClassCreate((int)param_1,param_2,param_3,in_stack_fffffff0,
                                         in_stack_fffffff4);
    cVar1 = extraout_DL;
  }
  if (cVar1 != '\0') {
    System__AfterConstruction(param_1);
    *in_FS_OFFSET = in_stack_00000000;
  }
  return;
}


/* ==== 00402f8c TObject.Destroy ==== */

void TObject_Destroy(int *param_1,char param_2)

{
  int *piVar1;
  char extraout_DL;
  
  piVar1 = System__BeforeDestruction(param_1,param_2);
  if ('\0' < extraout_DL) {
    System__ClassDestroy(piVar1);
  }
  return;
}


/* ==== 00402f9c System.TObject.Free ==== */

void System_TObject_Free(int *param_1)

{
  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + -4))(param_1,1);
  }
  return;
}


/* ==== 00402fa8 FUN_00402fa8 ==== */

/* WARNING: Removing unreachable block (ram,0x00402fdd) */
/* WARNING: Removing unreachable block (ram,0x00402fe3) */
/* WARNING: Removing unreachable block (ram,0x00402fea) */
/* WARNING: Removing unreachable block (ram,0x00402ff0) */
/* WARNING: Removing unreachable block (ram,0x00402ff6) */

void FUN_00402fa8(int param_1,int *param_2)

{
  uint j;
  uint i_val;
  
  *param_2 = param_1;
  i_val = *(uint *)(param_1 + -0x28);
  j = i_val >> 2;
  while( true ) {
    param_2 = param_2 + 1;
    j = j - 1;
    if (j == 0) break;
    *param_2 = 0;
  }
  for (i_val = i_val & 3; i_val != 0; i_val = i_val - 1) {
    *(undefined1 *)param_2 = 0;
    param_2 = (int *)((int)param_2 + 1);
  }
  for (; *(int **)(param_1 + -0x24) != (int *)0x0; param_1 = **(int **)(param_1 + -0x24)) {
  }
  return;
}


/* ==== 00403000 FUN_00403000 ==== */

void FUN_00403000(int *param_1,undefined *UNRECOVERED_JUMPTABLE,int *param_3)

{
  if ((undefined *)0xfeffffff < UNRECOVERED_JUMPTABLE) {
    FUN_00405878(param_3,*(int **)(((uint)UNRECOVERED_JUMPTABLE & 0xffffff) + (int)param_1));
    return;
  }
  if ((undefined *)0xfdffffff < UNRECOVERED_JUMPTABLE) {
                    /* WARNING: Could not recover jumptable at 0x00403017. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((int)(short)UNRECOVERED_JUMPTABLE + *param_1))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00403019. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)UNRECOVERED_JUMPTABLE)();
  return;
}


/* ==== 00403030 FUN_00403030 ==== */

void FUN_00403030(int *param_1,int *param_2,int *param_3)

{
  int *piVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  int *local_c;
  int *local_8;
  
  puStack_1c = &stack0xfffffffc;
  local_c = (int *)0x0;
  puStack_20 = &LAB_004030be;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  local_8 = param_2;
  piVar1 = FUN_004030d0(*param_1,param_2);
  if (piVar1 == (int *)0x0) {
    *param_3 = 0;
  }
  else {
    if (piVar1[5] == 0) {
      FUN_00403000(param_1,(undefined *)piVar1[6],(int *)&local_c);
      FUN_00405878(param_3,local_c);
    }
    else {
      *param_3 = (int)param_1 + piVar1[5];
    }
    if ((*param_3 != 0) && (piVar1[5] != 0)) {
      (**(code **)(*(int *)*param_3 + 4))();
    }
  }
  *in_FS_OFFSET = uStack_24;
  puStack_1c = &LAB_004030c5;
  puStack_20 = (undefined1 *)0x4030bd;
  System__IntfClear((int *)&local_c);
  return;
}


/* ==== 004030d0 FUN_004030d0 ==== */

int * FUN_004030d0(int param_1,int *param_2)

{
  int *piVar1;
  int i_val;
  
  do {
    piVar1 = *(int **)(param_1 + -0x48);
    if (piVar1 != (int *)0x0) {
      i_val = *piVar1;
      piVar1 = piVar1 + 1;
      do {
        if ((((*param_2 == *piVar1) && (param_2[1] == piVar1[1])) && (param_2[2] == piVar1[2])) &&
           (param_2[3] == piVar1[3])) {
          return piVar1;
        }
        piVar1 = piVar1 + 7;
        i_val = i_val + -1;
      } while (i_val != 0);
    }
    if (*(int **)(param_1 + -0x24) == (int *)0x0) {
      return (int *)0x0;
    }
    param_1 = **(int **)(param_1 + -0x24);
  } while( true );
}


/* ==== 00403114 System._IsClass ==== */

undefined4 System__IsClass(int *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  if (param_1 != (int *)0x0) {
    while (iVar1 = *param_1, iVar1 != param_2) {
      param_1 = *(int **)(iVar1 + -0x24);
      if (param_1 == (int *)0x0) {
        return 0;
      }
    }
    uVar2 = CONCAT31((int3)((uint)iVar1 >> 8),1);
  }
  return uVar2;
}


/* ==== 0040312c System._AsClass ==== */

void System__AsClass(int *param_1,int param_2)

{
  int *piVar1;
  
  piVar1 = param_1;
  if (param_1 != (int *)0x0) {
    while (*piVar1 != param_2) {
      piVar1 = *(int **)(*piVar1 + -0x24);
      if (piVar1 == (int *)0x0) {
        System__RunError(CONCAT31((int3)((uint)param_1 >> 8),10));
        return;
      }
    }
  }
  return;
}


/* ==== 00403148 FUN_00403148 ==== */

void FUN_00403148(int param_1)

{
  uint i_val;
  ushort unaff_BX;
  ushort *puVar1;
  bool bVar2;
  
  do {
    puVar1 = *(ushort **)(param_1 + -0x30);
    if (puVar1 != (ushort *)0x0) {
      i_val = (uint)*puVar1;
      bVar2 = puVar1 + 1 == (ushort *)0x0;
      puVar1 = puVar1 + 1;
      do {
        if (i_val == 0) break;
        i_val = i_val - 1;
        bVar2 = unaff_BX == *puVar1;
        puVar1 = puVar1 + 1;
      } while (!bVar2);
      if (bVar2) {
        return;
      }
    }
    if (*(int **)(param_1 + -0x24) == (int *)0x0) {
      return;
    }
    param_1 = **(int **)(param_1 + -0x24);
  } while( true );
}


/* ==== 00403178 System._CallDynaInst ==== */

void System__CallDynaInst(int *param_1,undefined4 param_2,undefined4 param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined1 in_ZF;
  
  FUN_00403148(*param_1);
  if (!(bool)in_ZF) {
                    /* WARNING: Could not recover jumptable at 0x00403185. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(param_1);
    return;
  }
  TStrings_virtual_00c();
  return;
}


/* ==== 00403190 FUN_00403190 ==== */

undefined4 FUN_00403190(int *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined1 in_ZF;
  
  FUN_00403148(*param_1);
  if ((bool)in_ZF) {
    uVar1 = TStrings_virtual_00c();
    return uVar1;
  }
  return param_2;
}


/* ==== 004031a8 thunk_FUN_004031ac ==== */

undefined4 thunk_FUN_004031ac(int param_1,int param_2)

{
  while( true ) {
    if (param_1 == param_2) {
      return CONCAT31((int3)((uint)param_1 >> 8),1);
    }
    if (*(int **)(param_1 + -0x24) == (int *)0x0) break;
    param_1 = **(int **)(param_1 + -0x24);
  }
  return 0;
}


/* ==== 004031ac FUN_004031ac ==== */

undefined4 FUN_004031ac(int param_1,int param_2)

{
  while( true ) {
    if (param_1 == param_2) {
      return CONCAT31((int3)((uint)param_1 >> 8),1);
    }
    if (*(int **)(param_1 + -0x24) == (int *)0x0) break;
    param_1 = **(int **)(param_1 + -0x24);
  }
  return 0;
}


/* ==== 004031bc FUN_004031bc ==== */

undefined4 FUN_004031bc(int param_1)

{
  return *(undefined4 *)(param_1 + -0x3c);
}


/* ==== 004031c0 TObject.SafeCallException ==== */

undefined4 TObject_SafeCallException(void)

{
  return 0x8000ffff;
}


/* ==== 004031c8 TObject.DefaultHandler ==== */

void TObject_DefaultHandler(void)

{
  return;
}


/* ==== 004031cc TObject.AfterConstruction ==== */

void TObject_AfterConstruction(void)

{
  return;
}


/* ==== 004031d0 TObject.BeforeDestruction ==== */

void TObject_BeforeDestruction(void)

{
  return;
}


/* ==== 004031d4 TObject.Dispatch ==== */

void TObject_Dispatch(int *param_1,ushort *param_2)

{
  ushort uVar1;
  undefined4 unaff_EBX;
  bool bVar2;
  
  uVar1 = *param_2;
  if ((uVar1 != 0) && (bVar2 = uVar1 == 0xc000, uVar1 < 0xc000)) {
    FUN_00403148(*param_1);
    if (!bVar2) {
                    /* WARNING: Could not recover jumptable at 0x004031f2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)CONCAT22((short)((uint)unaff_EBX >> 0x10),uVar1))();
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x004031f7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + -0x10))();
  return;
}


/* ==== 004031fc FUN_004031fc ==== */

undefined4 FUN_004031fc(int param_1,byte *param_2)

{
  byte bVar1;
  int iVar2;
  int j;
  byte bVar3;
  undefined2 *puVar4;
  int i_val;
  
  iVar2 = 0;
  i_val = 0;
  bVar3 = *param_2;
  while( true ) {
    puVar4 = *(undefined2 **)(param_1 + -0x34);
    if (puVar4 != (undefined2 *)0x0) {
      i_val = CONCAT22((short)((uint)i_val >> 0x10),*puVar4);
      puVar4 = puVar4 + 1;
      do {
        bVar1 = *(byte *)(puVar4 + 3);
        j = CONCAT31((int3)((uint)iVar2 >> 8),bVar1);
        if (bVar1 == bVar3) {
          j = CONCAT22((short)((uint)iVar2 >> 0x10),(ushort)bVar1);
          while (((*(byte *)((int)puVar4 + j + 6) ^ param_2[j]) & 0xdf) == 0) {
            j = j + -1;
            if (j == 0) {
              return *(undefined4 *)(puVar4 + 1);
            }
          }
          bVar3 = *param_2;
        }
        iVar2 = CONCAT22((short)((uint)j >> 0x10),*puVar4);
        puVar4 = (undefined2 *)((int)puVar4 + iVar2);
        i_val = i_val + -1;
      } while (i_val != 0);
    }
    if (*(int **)(param_1 + -0x24) == (int *)0x0) break;
    param_1 = **(int **)(param_1 + -0x24);
  }
  return 0;
}


/* ==== 0040324c FUN_0040324c ==== */

int FUN_0040324c(int *param_1,char *param_2)

{
  undefined2 *puVar1;
  int *piVar2;
  int i_val;
  char cVar3;
  int *piVar4;
  int j;
  
  i_val = 0;
  j = 0;
  cVar3 = *param_2;
  piVar2 = param_1;
  do {
    puVar1 = *(undefined2 **)(*piVar2 + -0x38);
    if (puVar1 != (undefined2 *)0x0) {
      j = CONCAT22((short)((uint)j >> 0x10),*puVar1);
      piVar4 = (int *)(puVar1 + 3);
      do {
        i_val = CONCAT31((int3)((uint)i_val >> 8),*(char *)((int)piVar4 + 6));
        if (*(char *)((int)piVar4 + 6) == cVar3) {
          while (((*(byte *)((int)piVar4 + i_val + 6) ^ param_2[i_val]) & 0xdf) == 0) {
            i_val = i_val + -1;
            if (i_val == 0) {
              return *piVar4 + (int)param_1;
            }
          }
          cVar3 = *param_2;
          i_val = CONCAT31((int3)((uint)i_val >> 8),*(undefined1 *)((int)piVar4 + 6));
        }
        piVar4 = (int *)((int)piVar4 + i_val + 7);
        j = j + -1;
      } while (j != 0);
    }
    piVar2 = *(int **)(*piVar2 + -0x24);
  } while (piVar2 != (int *)0x0);
  return 0;
}


/* ==== 0040329c System._ClassCreate ==== */

void System__ClassCreate(int param_1,char param_2,undefined4 param_3,undefined4 param_4,
                        undefined4 param_5)

{
  int *in_FS_OFFSET;
  
  if (-1 < param_2) {
    (**(code **)(param_1 + -0xc))();
  }
  *in_FS_OFFSET = (int)&param_4;
  return;
}


/* ==== 004032ec System._ClassDestroy ==== */

void System__ClassDestroy(int *param_1)

{
  (**(code **)(*param_1 + -8))();
  return;
}


/* ==== 004032f4 System._AfterConstruction ==== */

int * System__AfterConstruction(int *param_1)

{
  (**(code **)(*param_1 + -0x1c))();
  return param_1;
}


/* ==== 004032fc System._BeforeDestruction ==== */

int * System__BeforeDestruction(int *param_1,char param_2)

{
  if (param_2 < '\x01') {
    return param_1;
  }
  (**(code **)(*param_1 + -0x18))();
  return param_1;
}


/* ==== 00403328 FUN_00403328 ==== */

undefined4 FUN_00403328(undefined4 param_1,ULONG_PTR param_2)

{
  ULONG_PTR UStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  if (DAT_004aa008 != '\0') {
    UStack_c = param_2;
    uStack_8 = param_1;
    uStack_4 = param_1;
    RaiseException(0xeedfae4,0,2,&UStack_c);
    param_1 = uStack_4;
  }
  return param_1;
}


/* ==== 00403348 FUN_00403348 ==== */

undefined4 FUN_00403348(void)

{
  undefined4 in_stack_00000004;
  
  RaiseException(0xeedfae0,0,1,(ULONG_PTR *)&stack0x00000000);
  return in_stack_00000004;
}


/* ==== 0040335c FUN_0040335c ==== */

void FUN_0040335c(void)

{
  if (1 < DAT_004aa008) {
    FUN_00403348();
    return;
  }
  return;
}


/* ==== 00403370 FUN_00403370 ==== */

void FUN_00403370(void)

{
  if (1 < DAT_004aa008) {
    FUN_00403348();
    return;
  }
  return;
}


/* ==== 00403384 FUN_00403384 ==== */

int FUN_00403384(int param_1,undefined4 param_2,char *param_3)

{
  if (((param_3 != (char *)0x0) && (param_1 = *(int *)(param_3 + 1), *param_3 != -0x17)) &&
     (*param_3 == -0x15)) {
    param_1 = (int)(char)param_1;
  }
  return param_1;
}


/* ==== 004033a4 FUN_004033a4 ==== */

int FUN_004033a4(int param_1,undefined4 param_2,char *param_3)

{
  ULONG_PTR UStack_10;
  char *pcStack_c;
  undefined4 uStack_8;
  int iStack_4;
  
  if (1 < DAT_004aa008) {
    UStack_10 = 0x4033b5;
    pcStack_c = param_3;
    uStack_8 = param_2;
    iStack_4 = param_1;
    FUN_00403384(param_1,param_2,param_3);
    RaiseException(0xeedfae1,0,1,&UStack_10);
    param_1 = iStack_4;
  }
  return param_1;
}


/* ==== 004033e8 FUN_004033e8 ==== */

undefined4 FUN_004033e8(undefined4 param_1,ULONG_PTR param_2)

{
  ULONG_PTR UStack_8;
  undefined4 uStack_4;
  
  uStack_4 = param_1;
  if (1 < DAT_004aa008) {
    UStack_8 = param_2;
    RaiseException(0xeedfae3,0,2,&UStack_8);
  }
  return uStack_4;
}


/* ==== 00403408 FUN_00403408 ==== */

undefined4 FUN_00403408(void)

{
  DWORD DVar1;
  int iVar2;
  LONG LVar3;
  PEXCEPTION_RECORD pEVar4;
  LPVOID pvVar5;
  undefined4 uVar6;
  PEXCEPTION_RECORD in_stack_00000004;
  PCONTEXT in_stack_00000008;
  ULONG_PTR in_stack_0000000c;
  
  if ((in_stack_00000004->ExceptionFlags & 6) == 0) {
    pEVar4 = in_stack_00000004;
    if (in_stack_00000004->ExceptionCode != 0xeedfade) {
      FUN_00402ec4();
      if (DAT_004ac00c == (code *)0x0) {
        return 1;
      }
      iVar2 = (*DAT_004ac00c)();
      if (iVar2 == 0) {
        return 1;
      }
      pEVar4 = in_stack_00000004;
      if (((in_stack_00000004->ExceptionCode != 0xeefface) &&
          (FUN_00403328(iVar2,in_stack_0000000c), pEVar4 = in_stack_00000004, DAT_004aa00c != 0)) &&
         (DAT_004aa008 == '\0')) {
        LVar3 = UnhandledExceptionFilter((_EXCEPTION_POINTERS *)&stack0x00000004);
        if (LVar3 == 0) {
          return 1;
        }
        goto LAB_004034bc;
      }
    }
    in_stack_00000004 = pEVar4;
    if (((DAT_004aa00c < 2) || (DAT_004aa008 != '\0')) ||
       (LVar3 = UnhandledExceptionFilter((_EXCEPTION_POINTERS *)&stack0x00000004), LVar3 != 0)) {
LAB_004034bc:
      in_stack_00000004->ExceptionFlags = in_stack_00000004->ExceptionFlags | 2;
      RtlUnwind(in_stack_00000008,(PVOID)0x4034df,in_stack_00000004,(PVOID)0x0);
      pvVar5 = FUN_0040655c();
      *(undefined1 **)pvVar5 = &stack0xffffffdc;
      DVar1 = in_stack_00000008->Dr0;
      in_stack_00000008->Dr0 = (DWORD)&LAB_0040350b;
      FUN_00403370();
                    /* WARNING: Could not recover jumptable at 0x00403509. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar6 = (*(code *)(DVar1 + 5))();
      return uVar6;
    }
  }
  return 1;
}


/* ==== 00403534 FUN_00403534 ==== */

undefined4 FUN_00403534(void)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  byte *pbVar7;
  int i_val;
  int *piVar8;
  int iVar9;
  bool bVar10;
  PEXCEPTION_RECORD in_stack_00000004;
  PVOID in_stack_00000008;
  ULONG_PTR in_stack_0000000c;
  int *piStack_24;
  
  if ((in_stack_00000004->ExceptionFlags & 6) == 0) {
    if (in_stack_00000004->ExceptionCode == 0xeedfade) {
      iVar3 = *(int *)in_stack_00000004->ExceptionInformation[1];
    }
    else {
      FUN_00402ec4();
      if (DAT_004ac008 == (code *)0x0) {
        return 1;
      }
      iVar3 = (*DAT_004ac008)();
      if (iVar3 == 0) {
        return 1;
      }
    }
    i_val = *(int *)(*(int *)((int)in_stack_00000008 + 4) + 5);
    piVar8 = (int *)(*(int *)((int)in_stack_00000008 + 4) + 9);
    do {
      piVar4 = (int *)*piVar8;
      iVar9 = iVar3;
      if (piVar4 == (int *)0x0) {
LAB_004035cd:
        if (in_stack_00000004->ExceptionCode == 0xeedfade) {
          if ((DAT_004aa00c < 2) || (DAT_004aa008 != '\0')) goto LAB_00403647;
          piStack_24 = (int *)0x40363f;
          iVar3 = UnhandledExceptionFilter((_EXCEPTION_POINTERS *)&stack0xfffffff4);
        }
        else {
          uVar5 = (*DAT_004ac00c)();
          FUN_00403328(uVar5,in_stack_0000000c);
          if ((DAT_004aa00c == 0) || (DAT_004aa008 != '\0')) goto LAB_00403647;
          iVar3 = UnhandledExceptionFilter((_EXCEPTION_POINTERS *)&stack0xfffffff4);
        }
        if (iVar3 == 0) {
          return 1;
        }
LAB_00403647:
        in_stack_00000004->ExceptionFlags = in_stack_00000004->ExceptionFlags | 2;
        piStack_24 = piVar8;
        RtlUnwind(in_stack_00000008,(PVOID)0x403667,in_stack_00000004,(PVOID)0x0);
        piVar8 = piStack_24;
        piStack_24 = (int *)0x403671;
        puVar6 = FUN_0040655c();
        piStack_24 = (int *)*puVar6;
        *puVar6 = &piStack_24;
        *(undefined1 **)((int)in_stack_00000008 + 4) = &LAB_00403693;
        FUN_0040335c();
                    /* WARNING: Could not recover jumptable at 0x00403690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar5 = (*(code *)piVar8[1])();
        return uVar5;
      }
      while( true ) {
        iVar2 = *piVar4;
        if (iVar2 == iVar9) goto LAB_004035cd;
        if (*(int *)(iVar2 + -0x28) == *(int *)(iVar9 + -0x28)) {
          bVar1 = **(byte **)(iVar2 + -0x2c);
          if (bVar1 == **(byte **)(iVar9 + -0x2c)) {
            pbVar7 = *(byte **)(iVar9 + -0x2c) + 1;
            bVar10 = pbVar7 == (byte *)0x0;
            FUN_00402bc0((int *)(*(byte **)(iVar2 + -0x2c) + 1),(int *)pbVar7,(uint)bVar1);
            if (bVar10) goto LAB_004035cd;
          }
        }
        piVar4 = (int *)*piVar8;
        if (*(int **)(iVar9 + -0x24) == (int *)0x0) break;
        iVar9 = **(int **)(iVar9 + -0x24);
      }
      piVar8 = piVar8 + 2;
      i_val = i_val + -1;
    } while (i_val != 0);
  }
  return 1;
}


/* ==== 004036bc FUN_004036bc ==== */

undefined4 FUN_004036bc(void)

{
  int iVar1;
  code *extraout_ECX;
  int in_stack_00000004;
  int in_stack_00000008;
  
  if ((*(uint *)(in_stack_00000004 + 4) & 6) != 0) {
    iVar1 = *(int *)(in_stack_00000008 + 4);
    *(undefined4 *)(in_stack_00000008 + 4) = 0x4036ec;
    FUN_004033a4(in_stack_00000004,in_stack_00000008,(char *)(iVar1 + 5));
    (*extraout_ECX)();
  }
  return 1;
}


/* ==== 004036f4 System._RaiseExcept ==== */

void System__RaiseExcept(undefined4 param_1)

{
  ULONG_PTR UStack_18;
  undefined4 uStack_14;
  
  uStack_14 = param_1;
  RaiseException(0xeedfade,1,7,&UStack_18);
  return;
}


/* ==== 00403794 FUN_00403794 ==== */

void FUN_00403794(void)

{
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_00000004;
  int in_stack_00000008;
  
  *in_FS_OFFSET = in_stack_00000004;
  (*(code *)(in_stack_00000008 + 5))();
  return;
}


/* ==== 004037ac FUN_004037ac ==== */

void FUN_004037ac(undefined4 param_1)

{
  FUN_00403c34(param_1);
  return;
}


/* ==== 004038f4 FUN_004038f4 ==== */

void FUN_004038f4(void)

{
  int iVar1;
  int unaff_EBP;
  int *in_FS_OFFSET;
  
  DAT_004ac4a8 = (int *)(unaff_EBP + -0xc);
  iVar1 = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)DAT_004ac4a8;
  *DAT_004ac4a8 = iVar1;
  *(undefined1 **)(unaff_EBP + -8) = &LAB_00403858;
  *(int *)(unaff_EBP + -4) = unaff_EBP;
  return;
}


/* ==== 00403914 FUN_00403914 ==== */

void FUN_00403914(void)

{
  int *piVar1;
  int *in_FS_OFFSET;
  
  piVar1 = (int *)*in_FS_OFFSET;
  if (DAT_004ac4a8 == piVar1) {
    *in_FS_OFFSET = *DAT_004ac4a8;
    return;
  }
  while( true ) {
    if (piVar1 == (int *)0xffffffff) {
      return;
    }
    if ((int *)*piVar1 == DAT_004ac4a8) break;
    piVar1 = (int *)*piVar1;
  }
  *piVar1 = *DAT_004ac4a8;
  return;
}


/* ==== 0040393c FUN_0040393c ==== */

void FUN_0040393c(void)

{
  int iVar1;
  code *pcVar2;
  int i_val;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  
  i_val = DAT_004ac4b0;
  puStack_14 = &stack0xfffffffc;
  if (DAT_004ac4ac != 0) {
    iVar1 = *(int *)(DAT_004ac4ac + 4);
    puStack_18 = &LAB_00403982;
    uStack_1c = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_1c;
    while (0 < i_val) {
      i_val = i_val + -1;
      pcVar2 = *(code **)(iVar1 + 4 + i_val * 8);
      DAT_004ac4b0 = i_val;
      if (pcVar2 != (code *)0x0) {
        (*pcVar2)();
      }
    }
    *in_FS_OFFSET = uStack_1c;
  }
  return;
}


/* ==== 0040399c FUN_0040399c ==== */

void FUN_0040399c(void)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  int i_val;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  
  puStack_14 = &stack0xfffffffc;
  if (DAT_004ac4ac != (int *)0x0) {
    iVar1 = *DAT_004ac4ac;
    i_val = 0;
    iVar2 = DAT_004ac4ac[1];
    puStack_18 = &LAB_004039e2;
    uStack_1c = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_1c;
    if (0 < iVar1) {
      do {
        pcVar3 = *(code **)(iVar2 + i_val * 8);
        i_val = i_val + 1;
        DAT_004ac4b0 = i_val;
        if (pcVar3 != (code *)0x0) {
          (*pcVar3)();
        }
      } while (i_val < iVar1);
    }
    *in_FS_OFFSET = uStack_1c;
  }
  return;
}


/* ==== 004039fc FUN_004039fc ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004039fc(undefined4 param_1,int param_2)

{
  DAT_004ac4b0 = 0;
  DAT_004ac020 = *(undefined4 *)(param_2 + 4);
  DAT_004ac4ac = param_1;
  _DAT_004ac4b4 = param_2;
  FUN_004038f4();
  DAT_004ac028 = 0;
  FUN_0040399c();
  return;
}


/* ==== 00403a2c FUN_00403a2c ==== */

void FUN_00403a2c(int *param_1)

{
  int i_val;
  int *piVar1;
  
  i_val = *param_1;
  piVar1 = param_1 + 1;
  do {
    System_LoadResString(*(undefined4 **)piVar1[1],(int *)*piVar1);
    piVar1 = piVar1 + 2;
    i_val = i_val + -1;
  } while (i_val != 0);
  return;
}


/* ==== 00403a48 FUN_00403a48 ==== */

void FUN_00403a48(int *param_1)

{
  int i_val;
  int *piVar1;
  
  i_val = *param_1;
  piVar1 = param_1 + 1;
  do {
    *(int *)*piVar1 = *(int *)piVar1[1] + piVar1[2];
    piVar1 = piVar1 + 3;
    i_val = i_val + -1;
  } while (i_val != 0);
  return;
}


/* ==== 00403a68 FUN_00403a68 ==== */

void FUN_00403a68(int *param_1)

{
  int i_val;
  int *piVar1;
  
  i_val = *param_1;
  piVar1 = param_1 + 1;
  do {
    FUN_004042f0((BSTR *)*piVar1,(OLECHAR *)piVar1[1]);
    piVar1 = piVar1 + 2;
    i_val = i_val + -1;
  } while (i_val != 0);
  return;
}


/* ==== 00403a84 FUN_00403a84 ==== */

void FUN_00403a84(void)

{
  ulonglong uVar1;
  uint uVar2;
  PVOID pvVar3;
  char *pcVar4;
  
  pcVar4 = s_Runtime_error_at_00000000_004aa034 + 0x10;
  uVar2 = DAT_004ac038;
  do {
    uVar1 = (ulonglong)uVar2;
    uVar2 = uVar2 / 10;
    *pcVar4 = (char)(uVar1 % 10) + '0';
    pcVar4 = pcVar4 + -1;
  } while (uVar2 != 0);
  pvVar3 = FUN_00405290(DAT_004ac040);
  uVar2 = (int)DAT_004ac040 - (int)pvVar3;
  pcVar4 = s_Runtime_error_at_00000000_004aa034 + 0x1c;
  do {
    *pcVar4 = (&DAT_004aa05c)[uVar2 & 0xf];
    pcVar4 = pcVar4 + -1;
    uVar2 = uVar2 >> 4;
  } while (uVar2 != 0);
  return;
}


/* ==== 00403ad4 FUN_00403ad4 ==== */

bool FUN_00403ad4(void)

{
  int iVar1;
  int i_val;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  puVar2 = DAT_004ac4a4;
  puVar3 = &DAT_004ac4a4;
  for (i_val = 0xb; iVar1 = DAT_004ac038, i_val != 0; i_val = i_val + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  LOCK();
  DAT_004ac038 = 0;
  UNLOCK();
  return (bool)('\x01' - (iVar1 != 0));
}


/* ==== 00403b08 FUN_00403b08 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00403b08(void)

{
  code *pcVar1;
  undefined *puVar2;
  undefined1 *extraout_ECX;
  int i_val;
  undefined4 extraout_EDX;
  undefined4 *puVar3;
  undefined4 *puVar4;
  byte bVar5;
  
  bVar5 = 0;
  pcVar1 = DAT_004ac03c;
  if (bRam004ac4c8 == 0) {
    while (DAT_004ac03c = pcVar1, pcVar1 != (code *)0x0) {
      DAT_004ac03c = (code *)0x0;
      (*pcVar1)();
      pcVar1 = DAT_004ac03c;
    }
  }
  if (DAT_004ac040 != 0) {
    FUN_00403a84();
    if (DAT_004ac048 == '\0') {
      if (DAT_004aa010 == '\0') {
        MessageBoxA((HWND)0x0,s_Runtime_error_at_00000000_004aa034,s_Error_004aa054,0);
      }
    }
    else {
      puVar2 = (undefined *)FUN_00405df8(&DAT_004ac21c,s_Runtime_error_at_00000000_004aa034);
      FUN_00405d7b(puVar2);
    }
    DAT_004ac040 = 0;
  }
  while( true ) {
    if ((bRam004ac4c8 == 2) && (DAT_004ac038 == 0)) {
      DAT_004ac4b0 = 0;
    }
    FUN_0040393c();
    if (((bRam004ac4c8 < 2) || (DAT_004ac038 != 0)) && (_DAT_004ac4b4 != (undefined4 *)0x0)) {
      FUN_00405798(_DAT_004ac4b4,extraout_EDX,extraout_ECX);
      if ((HMODULE)_DAT_004ac4b4[4] != (HMODULE)_DAT_004ac4b4[1]) {
        FreeLibrary((HMODULE)_DAT_004ac4b4[4]);
      }
    }
    FUN_00403914();
    if (bRam004ac4c8 == 1) {
      (*pcRam004ac4cc)();
    }
    if (bRam004ac4c8 != 0) {
      FUN_00403ad4();
    }
    if (DAT_004ac4a4 == (undefined4 *)0x0) break;
    puVar3 = DAT_004ac4a4;
    puVar4 = &DAT_004ac4a4;
    for (i_val = 0xb; i_val != 0; i_val = i_val + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
      puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  ExitProcess(DAT_004ac038);
}


/* ==== 00403c28 FUN_00403c28 ==== */

void FUN_00403c28(undefined4 param_1)

{
  DAT_004ac038 = param_1;
  FUN_00403b08();
  return;
}


/* ==== 00403c34 FUN_00403c34 ==== */

void FUN_00403c34(undefined4 param_1)

{
  undefined4 in_stack_00000000;
  
  DAT_004ac040 = in_stack_00000000;
  FUN_00403c28(param_1);
  return;
}


/* ==== 00403c40 System._Assert ==== */

void System__Assert(undefined4 param_1)

{
  if (DAT_004ac018 != (code *)0x0) {
    (*DAT_004ac018)();
    return;
  }
  System__RunError(CONCAT31((int3)((uint)param_1 >> 8),0x15));
  return;
}


/* ==== 00403c5c System._LStrClr ==== */

int * System__LStrClr(int *param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = *param_1;
  if ((iVar2 != 0) && (*param_1 = 0, 0 < *(int *)(iVar2 + -8))) {
    LOCK();
    piVar1 = (int *)(iVar2 + -8);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      System__FreeMem(iVar2 + -8);
    }
  }
  return param_1;
}


/* ==== 00403c80 System._LStrArrayClr ==== */

void System__LStrArrayClr(int *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  
  do {
    iVar2 = *param_1;
    if ((iVar2 != 0) && (*param_1 = 0, 0 < *(int *)(iVar2 + -8))) {
      LOCK();
      piVar1 = (int *)(iVar2 + -8);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        System__FreeMem(iVar2 + -8);
      }
    }
    param_1 = param_1 + 1;
    param_2 = param_2 + -1;
  } while (param_2 != 0);
  return;
}


/* ==== 00403cb0 System._LStrAsg ==== */

void System__LStrAsg(int *param_1,undefined4 *param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  
  if (param_2 != (undefined4 *)0x0) {
    if ((uint)param_2[-2] < 0x80000000) {
      LOCK();
      param_2[-2] = param_2[-2] + 1;
      UNLOCK();
    }
    else {
      puVar3 = System__NewAnsiString(param_2[-1]);
      System_Move(param_2,puVar3,param_2[-1]);
      param_2 = puVar3;
    }
  }
  LOCK();
  iVar2 = *param_1;
  *param_1 = (int)param_2;
  UNLOCK();
  if ((iVar2 != 0) && (0 < *(int *)(iVar2 + -8))) {
    LOCK();
    piVar1 = (int *)(iVar2 + -8);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      System__FreeMem(iVar2 + -8);
    }
  }
  return;
}


/* ==== 00403cf4 System._LStrLAsg ==== */

void System__LStrLAsg(int *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  
  if ((param_2 != 0) && (-1 < *(int *)(param_2 + -8))) {
    LOCK();
    *(int *)(param_2 + -8) = *(int *)(param_2 + -8) + 1;
    UNLOCK();
  }
  LOCK();
  iVar2 = *param_1;
  *param_1 = param_2;
  UNLOCK();
  if ((iVar2 != 0) && (0 < *(int *)(iVar2 + -8))) {
    LOCK();
    piVar1 = (int *)(iVar2 + -8);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      System__FreeMem(iVar2 + -8);
    }
  }
  return;
}


/* ==== 00403d20 System._NewAnsiString ==== */

undefined4 * System__NewAnsiString(int param_1)

{
  undefined4 *puVar1;
  
  if (0 < param_1) {
    puVar1 = (undefined4 *)System__GetMem(param_1 + 9);
    puVar1[1] = param_1;
    *puVar1 = 1;
    *(undefined1 *)((int)(puVar1 + 2) + param_1) = 0;
    return puVar1 + 2;
  }
  return (undefined4 *)0x0;
}


/* ==== 00403d44 System._LStrFromPCharLen ==== */

void System__LStrFromPCharLen(int *param_1,undefined4 *param_2,uint param_3)

{
  undefined4 *puVar1;
  
  puVar1 = System__NewAnsiString(param_3);
  if (param_2 != (undefined4 *)0x0) {
    System_Move(param_2,puVar1,param_3);
  }
  System__LStrClr(param_1);
  *param_1 = (int)puVar1;
  return;
}


/* ==== 00403d74 FUN_00403d74 ==== */

void FUN_00403d74(int *param_1,LPCWSTR wide_char_str,int wide_char)

{
  uint multi_byte;
  CHAR local_810 [2048];
  
  if (wide_char < 1) {
    System__LStrClr(param_1);
  }
  else {
    if (wide_char < 0x400) {
      multi_byte = WideCharToMultiByte(0,0,wide_char_str,wide_char,local_810,0x800,(LPCSTR)0x0,
                                       (LPBOOL)0x0);
      if (0 < (int)multi_byte) {
        System__LStrFromPCharLen(param_1,(undefined4 *)local_810,multi_byte);
        return;
      }
    }
    multi_byte = WideCharToMultiByte(0,0,wide_char_str,wide_char,(LPSTR)0x0,0,(LPCSTR)0x0,
                                     (LPBOOL)0x0);
    System__LStrFromPCharLen(param_1,(undefined4 *)0x0,multi_byte);
    WideCharToMultiByte(0,0,wide_char_str,wide_char,(LPSTR)*param_1,multi_byte,(LPCSTR)0x0,
                        (LPBOOL)0x0);
  }
  return;
}


/* ==== 00403e04 System._LStrFromChar ==== */

void System__LStrFromChar(int *param_1,undefined4 param_2)

{
  undefined4 uStack_4;
  
  uStack_4 = param_2;
  System__LStrFromPCharLen(param_1,&uStack_4,1);
  return;
}


/* ==== 00403e14 FUN_00403e14 ==== */

void FUN_00403e14(int *param_1,char *param_2)

{
  uint uVar1;
  char *pcVar2;
  
  uVar1 = 0;
  pcVar2 = param_2;
  if (param_2 != (char *)0x0) {
    for (; *pcVar2 != '\0'; pcVar2 = pcVar2 + 4) {
      if (pcVar2[1] == '\0') {
LAB_00403e35:
        pcVar2 = pcVar2 + 1;
        break;
      }
      if (pcVar2[2] == '\0') {
LAB_00403e34:
        pcVar2 = pcVar2 + 1;
        goto LAB_00403e35;
      }
      if (pcVar2[3] == '\0') {
        pcVar2 = pcVar2 + 1;
        goto LAB_00403e34;
      }
    }
    uVar1 = (int)pcVar2 - (int)param_2;
  }
  System__LStrFromPCharLen(param_1,(undefined4 *)param_2,uVar1);
  return;
}


/* ==== 00403e44 FUN_00403e44 ==== */

void FUN_00403e44(int *param_1,LPCWSTR wide_char_str)

{
  uint wide_char;
  LPCWSTR pWVar1;
  
  wide_char = 0;
  pWVar1 = wide_char_str;
  if (wide_char_str != (LPCWSTR)0x0) {
    for (; *pWVar1 != L'\0'; pWVar1 = pWVar1 + 4) {
      if (pWVar1[1] == L'\0') {
LAB_00403e6d:
        pWVar1 = pWVar1 + 1;
        break;
      }
      if (pWVar1[2] == L'\0') {
LAB_00403e6a:
        pWVar1 = pWVar1 + 1;
        goto LAB_00403e6d;
      }
      if (pWVar1[3] == L'\0') {
        pWVar1 = pWVar1 + 1;
        goto LAB_00403e6a;
      }
    }
    wide_char = (uint)((int)pWVar1 - (int)wide_char_str) >> 1;
  }
  FUN_00403d74(param_1,wide_char_str,wide_char);
  return;
}


/* ==== 00403e80 System._LStrFromString ==== */

void System__LStrFromString(int *param_1,byte *param_2)

{
  System__LStrFromPCharLen(param_1,(undefined4 *)(param_2 + 1),(uint)*param_2);
  return;
}


/* ==== 00403e8c FUN_00403e8c ==== */

void FUN_00403e8c(int *param_1,char *param_2,uint param_3)

{
  uint i_val;
  char *pcVar1;
  bool bVar2;
  
  bVar2 = true;
  i_val = param_3;
  pcVar1 = param_2;
  do {
    if (i_val == 0) break;
    i_val = i_val - 1;
    bVar2 = *pcVar1 == '\0';
    pcVar1 = pcVar1 + 1;
  } while (!bVar2);
  if (bVar2) {
    i_val = ~i_val;
  }
  System__LStrFromPCharLen(param_1,(undefined4 *)param_2,i_val + param_3);
  return;
}


/* ==== 00403ea4 FUN_00403ea4 ==== */

void FUN_00403ea4(int *param_1,LPCWSTR wide_char_str)

{
  uint wide_char;
  
  wide_char = 0;
  if (wide_char_str != (LPCWSTR)0x0) {
    wide_char = *(uint *)(wide_char_str + -2) >> 1;
  }
  FUN_00403d74(param_1,wide_char_str,wide_char);
  return;
}


/* ==== 00403eb8 FUN_00403eb8 ==== */

void FUN_00403eb8(undefined1 *param_1,undefined4 *param_2,uint param_3)

{
  uint uVar1;
  
  if ((param_2 != (undefined4 *)0x0) && (uVar1 = param_2[-1], uVar1 != 0)) {
    if ((int)uVar1 <= (int)param_3) {
      param_3 = uVar1;
    }
    *param_1 = (char)param_3;
    System_Move(param_2,(undefined4 *)(param_1 + 1),param_3);
    return;
  }
  *param_1 = 0;
  return;
}


/* ==== 00403edc System._LStrLen ==== */

undefined4 System__LStrLen(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = *(undefined4 *)(param_1 + -4);
  }
  return uVar1;
}


/* ==== 00403ee4 System._LStrCat ==== */

void System__LStrCat(int *param_1,undefined4 *param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  uint uVar5;
  
  if (param_2 == (undefined4 *)0x0) {
    return;
  }
  puVar4 = (undefined4 *)*param_1;
  if (puVar4 != (undefined4 *)0x0) {
    uVar3 = puVar4[-1];
    if (param_2 == puVar4) {
      FUN_00404210(param_1,param_2[-1] + uVar3);
      param_2 = (undefined4 *)*param_1;
      uVar5 = uVar3;
    }
    else {
      FUN_00404210(param_1,param_2[-1] + uVar3);
      uVar5 = param_2[-1];
    }
    System_Move(param_2,(undefined4 *)(*param_1 + uVar3),uVar5);
    return;
  }
  if (param_2 != (undefined4 *)0x0) {
    if ((uint)param_2[-2] < 0x80000000) {
      LOCK();
      param_2[-2] = param_2[-2] + 1;
      UNLOCK();
    }
    else {
      puVar4 = System__NewAnsiString(param_2[-1]);
      System_Move(param_2,puVar4,param_2[-1]);
      param_2 = puVar4;
    }
  }
  LOCK();
  iVar2 = *param_1;
  *param_1 = (int)param_2;
  UNLOCK();
  if ((iVar2 != 0) && (0 < *(int *)(iVar2 + -8))) {
    LOCK();
    piVar1 = (int *)(iVar2 + -8);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      System__FreeMem(iVar2 + -8);
    }
  }
  return;
}


/* ==== 00403f28 System._LStrCat3 ==== */

void System__LStrCat3(int *param_1,undefined4 *param_2,undefined4 *param_3)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  
  if (param_2 == (undefined4 *)0x0) {
    System__LStrAsg(param_1,param_3);
    return;
  }
  if (param_3 == (undefined4 *)0x0) {
    if (param_2 != (undefined4 *)0x0) {
      if ((uint)param_2[-2] < 0x80000000) {
        LOCK();
        param_2[-2] = param_2[-2] + 1;
        UNLOCK();
      }
      else {
        puVar3 = System__NewAnsiString(param_2[-1]);
        System_Move(param_2,puVar3,param_2[-1]);
        param_2 = puVar3;
      }
    }
    LOCK();
    iVar2 = *param_1;
    *param_1 = (int)param_2;
    UNLOCK();
    if ((iVar2 != 0) && (0 < *(int *)(iVar2 + -8))) {
      LOCK();
      piVar1 = (int *)(iVar2 + -8);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        System__FreeMem(iVar2 + -8);
      }
    }
    return;
  }
  if (param_2 == (undefined4 *)*param_1) {
    System__LStrCat(param_1,param_3);
    return;
  }
  if (param_3 != (undefined4 *)*param_1) {
    System__LStrAsg(param_1,param_2);
    System__LStrCat(param_1,param_3);
    return;
  }
  puVar3 = System__NewAnsiString(param_2[-1] + param_3[-1]);
  System_Move(param_2,puVar3,param_2[-1]);
  System_Move(param_3,(undefined4 *)((int)puVar3 + param_2[-1]),param_3[-1]);
  if (puVar3 != (undefined4 *)0x0) {
    puVar3[-2] = puVar3[-2] + -1;
  }
  System__LStrAsg(param_1,puVar3);
  return;
}


/* ==== 00403f9c System._LStrCatN ==== */

void System__LStrCatN(int *param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  int i_val;
  undefined4 *puVar4;
  undefined4 *puVar5;
  code *UNRECOVERED_JUMPTABLE;
  
  iVar2 = 0;
  i_val = param_2;
  do {
    if (*(int *)(&stack0x00000000 + i_val * 4) != 0) {
      iVar2 = iVar2 + *(int *)(*(int *)(&stack0x00000000 + i_val * 4) + -4);
    }
    i_val = i_val + -1;
  } while (i_val != 0);
  puVar3 = System__NewAnsiString(iVar2);
  puVar4 = puVar3;
  do {
    puVar1 = *(undefined4 **)(&stack0x00000000 + param_2 * 4);
    puVar5 = puVar4;
    if (puVar1 != (undefined4 *)0x0) {
      puVar5 = (undefined4 *)((int)puVar4 + puVar1[-1]);
      System_Move(puVar1,puVar4,puVar1[-1]);
    }
    param_2 = param_2 + -1;
    puVar4 = puVar5;
  } while (param_2 != 0);
  if (puVar3 != (undefined4 *)0x0) {
    puVar3[-2] = puVar3[-2] + -1;
  }
  System__LStrAsg(param_1,puVar3);
                    /* WARNING: Could not recover jumptable at 0x00403fe6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(UNRECOVERED_JUMPTABLE);
  return;
}


/* ==== 00403fec System._LStrCmp ==== */

uint * System__LStrCmp(uint *param_1,uint *param_2)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  
  if (param_1 != param_2) {
    if (param_1 == (uint *)0x0) {
      param_1 = (uint *)-param_2[-1];
    }
    else if (param_2 == (uint *)0x0) {
      param_1 = (uint *)param_1[-1];
    }
    else {
      uVar3 = param_2[-1];
      puVar2 = (uint *)(param_1[-1] - uVar3);
      if (param_1[-1] < uVar3 || puVar2 == (uint *)0x0) {
        uVar3 = uVar3 + (int)puVar2;
      }
      for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 2) {
        if (*param_1 != *param_2) {
          return puVar2;
        }
        if (uVar4 == 1) {
          param_1 = param_1 + 1;
          param_2 = param_2 + 1;
          break;
        }
        if (param_1[1] != param_2[1]) {
          return puVar2;
        }
        param_1 = param_1 + 2;
        param_2 = param_2 + 2;
      }
      uVar3 = uVar3 & 3;
      if (uVar3 != 0) {
        uVar4 = *param_1;
        uVar1 = *param_2;
        if ((char)uVar4 != (char)uVar1) {
          return puVar2;
        }
        if (uVar3 != 1) {
          if ((char)(uVar4 >> 8) != (char)(uVar1 >> 8)) {
            return puVar2;
          }
          if ((uVar3 != 2) && ((uVar4 & 0xff0000) != (uVar1 & 0xff0000))) {
            return puVar2;
          }
        }
      }
      param_1 = (uint *)((int)puVar2 * 2);
    }
  }
  return param_1;
}


/* ==== 00404090 System._LStrAddRef ==== */

void System__LStrAddRef(int param_1)

{
  if ((param_1 != 0) && (-1 < *(int *)(param_1 + -8))) {
    LOCK();
    *(int *)(param_1 + -8) = *(int *)(param_1 + -8) + 1;
    UNLOCK();
  }
  return;
}


/* ==== 004040a0 System._LStrToPChar ==== */

undefined * System__LStrToPChar(undefined *param_1)

{
  if (param_1 != (undefined *)0x0) {
    return param_1;
  }
  return &DAT_004040a5;
}


/* ==== 004040ac FUN_004040ac ==== */

int FUN_004040ac(int *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  
  iVar3 = *param_1;
  if ((iVar3 != 0) && (*(int *)(iVar3 + -8) != 1)) {
    puVar2 = System__NewAnsiString(*(int *)(iVar3 + -4));
    puVar1 = (undefined4 *)*param_1;
    *param_1 = (int)puVar2;
    if (0 < (int)puVar1[-2]) {
      LOCK();
      puVar1[-2] = puVar1[-2] + -1;
      UNLOCK();
    }
    System_Move(puVar1,puVar2,puVar1[-1]);
    iVar3 = *param_1;
  }
  return iVar3;
}


/* ==== 004040e4 System._LStrCopy ==== */

void System__LStrCopy(int param_1,int param_2,uint param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  
  if ((param_1 != 0) && (iVar1 = *(int *)(param_1 + -4), iVar1 != 0)) {
    iVar2 = param_2 + -1;
    if (param_2 < 1) {
      iVar2 = 0;
    }
    else if (iVar1 <= iVar2) goto LAB_00404116;
    if (-1 < (int)param_3) {
      if (iVar1 - iVar2 < (int)param_3) {
        param_3 = iVar1 - iVar2;
      }
      System__LStrFromPCharLen(param_4,(undefined4 *)(iVar2 + param_1),param_3);
      return;
    }
  }
LAB_00404116:
  System__LStrClr(param_4);
  return;
}


/* ==== 00404124 FUN_00404124 ==== */

void FUN_00404124(int *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  FUN_004040ac(param_1);
  iVar1 = *param_1;
  if (iVar1 != 0) {
    iVar3 = param_2 + -1;
    if (((0 < param_2) && (iVar3 < *(int *)(iVar1 + -4))) && (0 < param_3)) {
      iVar2 = *(int *)(iVar1 + -4) - iVar3;
      if (iVar2 < param_3) {
        param_3 = iVar2;
      }
      System_Move((undefined4 *)(iVar1 + iVar3 + param_3),(undefined4 *)(iVar1 + iVar3),
                  iVar2 - param_3);
      FUN_00404210(param_1,*(int *)(*param_1 + -4) - param_3);
    }
  }
  return;
}


/* ==== 0040416c FUN_0040416c ==== */

void FUN_0040416c(undefined4 *param_1,int *param_2,int param_3)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  if (param_1 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)*param_2;
    iVar3 = 0;
    if (puVar1 != (undefined4 *)0x0) {
      iVar3 = puVar1[-1];
    }
    iVar4 = param_3 + -1;
    if (param_3 < 1) {
      iVar4 = 0;
    }
    if (iVar3 < iVar4) {
      iVar4 = iVar3;
    }
    uVar2 = param_1[-1];
    FUN_00404210(param_2,iVar3 + uVar2);
    if (puVar1 == param_1) {
      param_1 = (undefined4 *)*param_2;
    }
    iVar3 = *param_2;
    System_Move((undefined4 *)(iVar3 + iVar4),(undefined4 *)(iVar4 + uVar2 + iVar3),
                *(int *)(iVar3 + -4) - (iVar4 + uVar2));
    System_Move(param_1,(undefined4 *)(*param_2 + iVar4),uVar2);
  }
  return;
}


/* ==== 004041c8 FUN_004041c8 ==== */

int FUN_004041c8(char *param_1,char *param_2)

{
  char *pcVar1;
  int i_val;
  int iVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  bool bVar6;
  
  if (param_1 != (char *)0x0) {
    if (param_2 == (char *)0x0) {
      return 0;
    }
    iVar3 = *(int *)(param_1 + -4) + -1;
    if (-1 < iVar3) {
      i_val = *(int *)(param_2 + -4) - iVar3;
      bVar6 = i_val == 0;
      pcVar4 = param_2;
      if (!bVar6 && iVar3 <= *(int *)(param_2 + -4)) {
LAB_004041e8:
        do {
          if (i_val != 0) {
            i_val = i_val + -1;
            pcVar1 = pcVar4 + 1;
            bVar6 = *param_1 == *pcVar4;
            pcVar4 = pcVar1;
            if (!bVar6) goto LAB_004041e8;
          }
          iVar2 = iVar3;
          pcVar5 = pcVar4;
          pcVar1 = param_1;
          if (!bVar6) {
            return 0;
          }
          do {
            if (iVar2 == 0) break;
            bVar6 = pcVar1[1] == *pcVar5;
            iVar2 = iVar2 + -1;
            pcVar5 = pcVar5 + 1;
            pcVar1 = pcVar1 + 1;
          } while (bVar6);
          if (bVar6) {
            return (int)pcVar4 - (int)param_2;
          }
        } while( true );
      }
    }
  }
  return 0;
}


/* ==== 00404210 FUN_00404210 ==== */

void FUN_00404210(int *param_1,uint param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 *puVar3;
  int iStack_10;
  
  puVar3 = (undefined4 *)0x0;
  if (param_2 != 0) {
    iStack_10 = *param_1;
    if ((iStack_10 != 0) && (*(int *)(iStack_10 + -8) == 1)) {
      iStack_10 = iStack_10 + -8;
      FUN_004027ac(&iStack_10,param_2 + 9);
      *param_1 = iStack_10 + 8;
      *(uint *)(iStack_10 + 4) = param_2;
      *(undefined1 *)(iStack_10 + 8 + param_2) = 0;
      return;
    }
    iStack_10 = 0x40424d;
    puVar3 = System__NewAnsiString(param_2);
    puVar1 = (undefined4 *)*param_1;
    if (puVar1 != (undefined4 *)0x0) {
      uVar2 = puVar1[-1];
      if ((int)param_2 <= (int)puVar1[-1]) {
        uVar2 = param_2;
      }
      iStack_10 = 0x404265;
      System_Move(puVar1,puVar3,uVar2);
    }
  }
  iStack_10 = 0x40426c;
  System__LStrClr(param_1);
  *param_1 = (int)puVar3;
  return;
}


/* ==== 00404274 FUN_00404274 ==== */

void FUN_00404274(undefined *param_1,undefined1 *param_2)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar2 = 0;
  if (param_2 != (undefined1 *)0x0) {
    iVar2 = *(int *)(param_2 + -4);
    iVar3 = -iVar2;
  }
  puVar1 = FUN_00405d1b(param_1,iVar3);
  FUN_00405cb0(puVar1,param_2,iVar2);
  return;
}


/* ==== 004042a4 FUN_004042a4 ==== */

void FUN_004042a4(undefined4 *param_1,undefined4 param_2)

{
  BSTR bstrString;
  
  bstrString = (BSTR)*param_1;
  *param_1 = param_2;
  if (bstrString != (BSTR)0x0) {
    SysFreeString(bstrString);
  }
  return;
}


/* ==== 004042b4 FUN_004042b4 ==== */

undefined4 * FUN_004042b4(undefined4 *param_1)

{
  BSTR bstrString;
  
  bstrString = (BSTR)*param_1;
  if (bstrString != (BSTR)0x0) {
    *param_1 = 0;
    SysFreeString(bstrString);
  }
  return param_1;
}


/* ==== 004042cc FUN_004042cc ==== */

void FUN_004042cc(undefined4 *param_1,int param_2)

{
  BSTR bstrString;
  
  do {
    bstrString = (BSTR)*param_1;
    if (bstrString != (BSTR)0x0) {
      *param_1 = 0;
      SysFreeString(bstrString);
    }
    param_1 = param_1 + 1;
    param_2 = param_2 + -1;
  } while (param_2 != 0);
  return;
}


/* ==== 004042f0 FUN_004042f0 ==== */

BSTR * FUN_004042f0(BSTR *pbstr_val,OLECHAR *psz_val)

{
  BSTR bstrString;
  BSTR *ppOVar1;
  
  if ((psz_val != (OLECHAR *)0x0) && (*(uint *)(psz_val + -2) >> 1 != 0)) {
    ppOVar1 = (BSTR *)SysReAllocStringLen(pbstr_val,psz_val,*(uint *)(psz_val + -2) >> 1);
    if (ppOVar1 != (BSTR *)0x0) {
      return ppOVar1;
    }
    ppOVar1 = (BSTR *)System__RunError(1);
    return ppOVar1;
  }
  bstrString = *pbstr_val;
  if (bstrString != (BSTR)0x0) {
    *pbstr_val = (BSTR)0x0;
    SysFreeString(bstrString);
  }
  return pbstr_val;
}


/* ==== 00404314 FUN_00404314 ==== */

void FUN_00404314(BSTR param_1,LPCSTR multi_byte_str,int multi_byte)

{
  UINT UVar1;
  WCHAR local_810 [1024];
  
  if (multi_byte < 1) {
    FUN_004042b4((undefined4 *)param_1);
  }
  else {
    if (multi_byte < 0x400) {
      UVar1 = MultiByteToWideChar(0,0,multi_byte_str,multi_byte,local_810,0x400);
      if (0 < (int)UVar1) {
        FUN_00404398(param_1,local_810,UVar1);
        return;
      }
    }
    UVar1 = MultiByteToWideChar(0,0,multi_byte_str,multi_byte,(LPWSTR)0x0,0);
    FUN_00404398(param_1,(OLECHAR *)0x0,UVar1);
    MultiByteToWideChar(0,0,multi_byte_str,multi_byte,*(LPWSTR *)param_1,UVar1);
  }
  return;
}


/* ==== 00404398 FUN_00404398 ==== */

BSTR FUN_00404398(BSTR param_1,OLECHAR *str_in,UINT ui_val)

{
  BSTR bstrString;
  BSTR pOVar1;
  
  if (ui_val == 0) {
    if (*(BSTR *)param_1 != (BSTR)0x0) {
      param_1[0] = L'\0';
      param_1[1] = L'\0';
      SysFreeString(*(BSTR *)param_1);
    }
    return param_1;
  }
  pOVar1 = SysAllocStringLen(str_in,ui_val);
  if (pOVar1 != (BSTR)0x0) {
    bstrString = *(BSTR *)param_1;
    *(BSTR *)param_1 = pOVar1;
    SysFreeString(bstrString);
    return pOVar1;
  }
  pOVar1 = (BSTR)System__RunError(1);
  return pOVar1;
}


/* ==== 004043bc FUN_004043bc ==== */

void FUN_004043bc(BSTR param_1,OLECHAR *str_in)

{
  UINT ui_val;
  OLECHAR *pOVar1;
  
  ui_val = 0;
  pOVar1 = str_in;
  if (str_in != (OLECHAR *)0x0) {
    for (; *pOVar1 != L'\0'; pOVar1 = pOVar1 + 4) {
      if (pOVar1[1] == L'\0') {
LAB_004043e5:
        pOVar1 = pOVar1 + 1;
        break;
      }
      if (pOVar1[2] == L'\0') {
LAB_004043e2:
        pOVar1 = pOVar1 + 1;
        goto LAB_004043e5;
      }
      if (pOVar1[3] == L'\0') {
        pOVar1 = pOVar1 + 1;
        goto LAB_004043e2;
      }
    }
    ui_val = (uint)((int)pOVar1 - (int)str_in) >> 1;
  }
  FUN_00404398(param_1,str_in,ui_val);
  return;
}


/* ==== 004043f8 FUN_004043f8 ==== */

void FUN_004043f8(BSTR param_1,LPCSTR multi_byte_str)

{
  int multi_byte;
  
  multi_byte = 0;
  if (multi_byte_str != (LPCSTR)0x0) {
    multi_byte = *(int *)(multi_byte_str + -4);
  }
  FUN_00404314(param_1,multi_byte_str,multi_byte);
  return;
}


/* ==== 00404418 FUN_00404418 ==== */

uint FUN_00404418(int param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = *(uint *)(param_1 + -4) >> 1;
  }
  return uVar1;
}


/* ==== 00404424 FUN_00404424 ==== */

void FUN_00404424(UINT ui_val)

{
  BSTR pOVar1;
  
  if (ui_val != 0) {
    pOVar1 = SysAllocStringLen((OLECHAR *)0x0,ui_val);
    if (pOVar1 == (BSTR)0x0) {
      System__RunError(1);
      return;
    }
  }
  return;
}


/* ==== 0040443c FUN_0040443c ==== */

void FUN_0040443c(int *param_1,UINT ui_val)

{
  uint uVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)0x0;
  if (0 < (int)ui_val) {
    puVar2 = (undefined4 *)FUN_00404424(ui_val);
    uVar1 = FUN_00404418(*param_1);
    if (0 < (int)uVar1) {
      if ((int)ui_val < (int)uVar1) {
        uVar1 = ui_val;
      }
      System_Move((undefined4 *)*param_1,puVar2,uVar1 * 2);
    }
  }
  FUN_004042a4(param_1,puVar2);
  return;
}


/* ==== 00404480 FUN_00404480 ==== */

void FUN_00404480(int param_1,int param_2)

{
  bool bVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  
  puVar2 = (undefined4 *)(param_2 + 10 + (uint)*(byte *)(param_2 + 1));
  iVar3 = *(int *)(param_2 + 6 + (uint)*(byte *)(param_2 + 1));
  do {
    FUN_00404540((undefined4 *)(puVar2[1] + param_1),*(char **)*puVar2);
    puVar2 = puVar2 + 2;
    iVar4 = iVar3 + -1;
    bVar1 = 0 < iVar3;
    iVar3 = iVar4;
  } while (iVar4 != 0 && bVar1);
  return;
}


/* ==== 004044ac FUN_004044ac ==== */

void FUN_004044ac(undefined4 *param_1,char *param_2,int param_3)

{
  char cVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  cVar1 = *param_2;
  uVar3 = (uint)(byte)param_2[1];
  if ((cVar1 != '\n') && (cVar1 != '\v')) {
    if (cVar1 == '\f') {
      do {
        *param_1 = 0;
        param_1[1] = 0;
        param_1[2] = 0;
        param_1[3] = 0;
        param_1 = param_1 + 4;
        iVar4 = param_3 + -1;
        bVar2 = 0 < param_3;
        param_3 = iVar4;
      } while (iVar4 != 0 && bVar2);
      return;
    }
    if (cVar1 == '\r') {
      do {
        iVar4 = *(int *)(param_2 + uVar3 + 2);
        FUN_004044ac(param_1,(char *)**(undefined4 **)(param_2 + uVar3 + 10),
                     *(int *)(param_2 + uVar3 + 6));
        iVar5 = param_3 + -1;
        bVar2 = 0 < param_3;
        param_1 = (undefined4 *)((int)param_1 + iVar4);
        param_3 = iVar5;
      } while (iVar5 != 0 && bVar2);
      return;
    }
    if (cVar1 == '\x0e') {
      do {
        iVar4 = *(int *)(param_2 + uVar3 + 2);
        FUN_00404480((int)param_1,(int)param_2);
        iVar5 = param_3 + -1;
        bVar2 = 0 < param_3;
        param_1 = (undefined4 *)((int)param_1 + iVar4);
        param_3 = iVar5;
      } while (iVar5 != 0 && bVar2);
      return;
    }
    if ((cVar1 != '\x0f') && (cVar1 != '\x11')) {
      System__RunError(CONCAT31((int3)((uint)param_1 >> 8),2));
      return;
    }
  }
  do {
    *param_1 = 0;
    param_1 = param_1 + 1;
    iVar4 = param_3 + -1;
    bVar2 = 0 < param_3;
    param_3 = iVar4;
  } while (iVar4 != 0 && bVar2);
  return;
}


/* ==== 00404540 FUN_00404540 ==== */

void FUN_00404540(undefined4 *param_1,char *param_2)

{
  FUN_004044ac(param_1,param_2,1);
  return;
}


/* ==== 0040454c FUN_0040454c ==== */

int FUN_0040454c(int param_1,int param_2)

{
  bool bVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  
  puVar2 = (undefined4 *)(param_2 + 10 + (uint)*(byte *)(param_2 + 1));
  iVar3 = *(int *)(param_2 + 6 + (uint)*(byte *)(param_2 + 1));
  do {
    FUN_00404660((VARIANTARG *)(puVar2[1] + param_1),*(char **)*puVar2);
    puVar2 = puVar2 + 2;
    iVar4 = iVar3 + -1;
    bVar1 = 0 < iVar3;
    iVar3 = iVar4;
  } while (iVar4 != 0 && bVar1);
  return param_1;
}


/* ==== 00404578 FUN_00404578 ==== */

/* WARNING: Type propagation algorithm not settling */

VARIANTARG * FUN_00404578(VARIANTARG *variantarg,char *param_2,int param_3)

{
  char cVar1;
  bool bVar2;
  VARIANTARG *pVVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  if (param_3 != 0) {
    cVar1 = *param_2;
    uVar4 = (uint)(byte)param_2[1];
    if (cVar1 == '\n') {
      if (param_3 < 2) {
        System__LStrClr((int *)variantarg);
      }
      else {
        System__LStrArrayClr((int *)variantarg,param_3);
      }
    }
    else if (cVar1 == '\v') {
      if (param_3 < 2) {
        FUN_004042b4((undefined4 *)variantarg);
      }
      else {
        FUN_004042cc((undefined4 *)variantarg,param_3);
      }
    }
    else {
      pVVar3 = variantarg;
      if (cVar1 == '\f') {
        do {
          FUN_00405038(pVVar3);
          iVar6 = param_3 + -1;
          bVar2 = 0 < param_3;
          pVVar3 = pVVar3 + 1;
          param_3 = iVar6;
        } while (iVar6 != 0 && bVar2);
      }
      else if (cVar1 == '\r') {
        do {
          iVar6 = *(int *)(param_2 + uVar4 + 2);
          FUN_00404578(pVVar3,(char *)**(undefined4 **)(param_2 + uVar4 + 10),
                       *(int *)(param_2 + uVar4 + 6));
          iVar5 = param_3 + -1;
          bVar2 = 0 < param_3;
          pVVar3 = (VARIANTARG *)((int)&pVVar3->n1 + iVar6);
          param_3 = iVar5;
        } while (iVar5 != 0 && bVar2);
      }
      else if (cVar1 == '\x0e') {
        do {
          iVar6 = *(int *)(param_2 + uVar4 + 2);
          FUN_0040454c((int)pVVar3,(int)param_2);
          iVar5 = param_3 + -1;
          bVar2 = 0 < param_3;
          pVVar3 = (VARIANTARG *)((int)&pVVar3->n1 + iVar6);
          param_3 = iVar5;
        } while (iVar5 != 0 && bVar2);
      }
      else if (cVar1 == '\x0f') {
        do {
          System__IntfClear((int *)pVVar3);
          iVar6 = param_3 + -1;
          bVar2 = 0 < param_3;
          pVVar3 = (VARIANTARG *)((int)&pVVar3->n1 + 4);
          param_3 = iVar6;
        } while (iVar6 != 0 && bVar2);
      }
      else {
        if (cVar1 != '\x11') {
          pVVar3 = (VARIANTARG *)System__RunError(CONCAT31((int3)((uint)variantarg >> 8),2));
          return pVVar3;
        }
        do {
          FUN_0040522c((int *)pVVar3,(int)param_2);
          iVar6 = param_3 + -1;
          bVar2 = 0 < param_3;
          pVVar3 = (VARIANTARG *)((int)&pVVar3->n1 + 4);
          param_3 = iVar6;
        } while (iVar6 != 0 && bVar2);
      }
    }
  }
  return variantarg;
}


/* ==== 00404660 FUN_00404660 ==== */

void FUN_00404660(VARIANTARG *variantarg,char *param_2)

{
  FUN_00404578(variantarg,param_2,1);
  return;
}


/* ==== 0040466c FUN_0040466c ==== */

void FUN_0040466c(int param_1,int param_2,int param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  uint uVar6;
  int i_val;
  undefined4 *puVar7;
  
  puVar7 = (undefined4 *)(param_3 + 10 + (uint)*(byte *)(param_3 + 1));
  i_val = puVar7[-1];
  iVar5 = 0;
  iVar2 = puVar7[-2];
  do {
    uVar6 = puVar7[1] - iVar5;
    if (uVar6 != 0 && iVar5 <= (int)puVar7[1]) {
      System_Move((undefined4 *)(iVar5 + param_2),(undefined4 *)(iVar5 + param_1),uVar6);
    }
    iVar3 = puVar7[1];
    pcVar4 = *(char **)*puVar7;
    cVar1 = *pcVar4;
    if (cVar1 == '\n') {
      System__LStrAsg((int *)(iVar3 + param_1),*(undefined4 **)(param_2 + iVar3));
      iVar5 = 4;
    }
    else if (cVar1 == '\v') {
      FUN_004042f0((BSTR *)(iVar3 + param_1),*(OLECHAR **)(param_2 + iVar3));
      iVar5 = 4;
    }
    else if (cVar1 == '\f') {
      FUN_00404a30((VARIANT *)(iVar3 + param_1),(VARIANTARG *)(param_2 + iVar3));
      iVar5 = 0x10;
    }
    else if (cVar1 == '\r') {
      uVar6 = (uint)(byte)pcVar4[1];
      iVar5 = *(int *)(pcVar4 + uVar6 + 2);
      FUN_00404788((VARIANT *)(iVar3 + param_1),(VARIANTARG *)(param_2 + iVar3),
                   (char *)**(undefined4 **)(pcVar4 + uVar6 + 10),*(int *)(pcVar4 + uVar6 + 6));
    }
    else if (cVar1 == '\x0e') {
      iVar5 = *(int *)(pcVar4 + (byte)pcVar4[1] + 2);
      FUN_0040466c(iVar3 + param_1,param_2 + iVar3,(int)pcVar4);
    }
    else if (cVar1 == '\x0f') {
      FUN_00405878((int *)(iVar3 + param_1),*(int **)(param_2 + iVar3));
      iVar5 = 4;
    }
    else {
      if (cVar1 != '\x11') {
        System__RunError(CONCAT31((int3)((uint)iVar3 >> 8),2));
        return;
      }
      FUN_00405268((int *)(iVar3 + param_1),*(int *)(param_2 + iVar3),(int)pcVar4);
      iVar5 = 4;
    }
    iVar5 = iVar5 + puVar7[1];
    puVar7 = puVar7 + 2;
    i_val = i_val + -1;
  } while (i_val != 0);
  uVar6 = iVar2 - iVar5;
  if (uVar6 != 0 && iVar5 <= iVar2) {
    System_Move((undefined4 *)(iVar5 + param_2),(undefined4 *)(param_1 + iVar5),uVar6);
  }
  return;
}


/* ==== 00404788 FUN_00404788 ==== */

/* WARNING: Type propagation algorithm not settling */

void FUN_00404788(VARIANT *pbstr_val,VARIANTARG *pvarg_src,char *param_3,int param_4)

{
  int *piVar1;
  char cVar2;
  
  cVar2 = *param_3;
  if (cVar2 == '\n') {
    do {
      System__LStrAsg((int *)pbstr_val,*(undefined4 **)&pvarg_src->n1);
      pbstr_val = (VARIANT *)((int)&pbstr_val->n1 + 4);
      pvarg_src = (VARIANTARG *)((int)&pvarg_src->n1 + 4);
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  else if (cVar2 == '\v') {
    do {
      FUN_004042f0((BSTR *)pbstr_val,*(OLECHAR **)&pvarg_src->n1);
      pbstr_val = (VARIANT *)((int)&pbstr_val->n1 + 4);
      pvarg_src = (VARIANTARG *)((int)&pvarg_src->n1 + 4);
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  else if (cVar2 == '\f') {
    do {
      FUN_00404a30(pbstr_val,pvarg_src);
      pbstr_val = pbstr_val + 1;
      pvarg_src = pvarg_src + 1;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  else if (cVar2 == '\r') {
    piVar1 = (int *)(param_3 + (byte)param_3[1] + 2);
    do {
      FUN_00404788(pbstr_val,pvarg_src,(char *)piVar1[2],piVar1[1]);
      pbstr_val = (VARIANT *)((int)&pbstr_val->n1 + *piVar1);
      pvarg_src = (VARIANTARG *)((int)&pvarg_src->n1 + *piVar1);
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  else if (cVar2 == '\x0e') {
    do {
      FUN_0040466c((int)pbstr_val,(int)pvarg_src,(int)param_3);
      pbstr_val = (VARIANT *)((int)&pbstr_val->n1 + *(int *)(param_3 + (byte)param_3[1] + 2));
      pvarg_src = (VARIANTARG *)((int)&pvarg_src->n1 + *(int *)(param_3 + (byte)param_3[1] + 2));
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  else if (cVar2 == '\x0f') {
    do {
      FUN_00405878((int *)pbstr_val,*(int **)&pvarg_src->n1);
      pbstr_val = (VARIANT *)((int)&pbstr_val->n1 + 4);
      pvarg_src = (VARIANTARG *)((int)&pvarg_src->n1 + 4);
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  else {
    if (cVar2 != '\x11') {
      System__RunError(CONCAT31((int3)((uint)pbstr_val >> 8),2));
      return;
    }
    do {
      FUN_00405268((int *)pbstr_val,*(int *)&pvarg_src->n1,(int)param_3);
      pbstr_val = (VARIANT *)((int)&pbstr_val->n1 + 4);
      pvarg_src = (VARIANTARG *)((int)&pvarg_src->n1 + 4);
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return;
}


/* ==== 0040487c FUN_0040487c ==== */

undefined4 * FUN_0040487c(int param_1,char *param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)System__GetMem(param_1);
  if (puVar1 != (undefined4 *)0x0) {
    FUN_00404540(puVar1,param_2);
  }
  return puVar1;
}


/* ==== 00404890 FUN_00404890 ==== */

void FUN_00404890(VARIANTARG *variantarg,char *param_2)

{
  FUN_00404660(variantarg,param_2);
  System__FreeMem((int)variantarg);
  return;
}


/* ==== 004048a0 FUN_004048a0 ==== */

void FUN_004048a0(LPCWSTR wide_char_str,int wide_char,int *param_3)

{
  uint multi_byte;
  CHAR local_810 [2048];
  
  if (wide_char == 0) {
    System__LStrClr(param_3);
  }
  else if (wide_char < 0x400) {
    multi_byte = WideCharToMultiByte(0,0,wide_char_str,wide_char,local_810,0x800,(LPCSTR)0x0,
                                     (LPBOOL)0x0);
    System__LStrFromPCharLen(param_3,(undefined4 *)local_810,multi_byte);
  }
  else {
    multi_byte = WideCharToMultiByte(0,0,wide_char_str,wide_char,(LPSTR)0x0,0,(LPCSTR)0x0,
                                     (LPBOOL)0x0);
    System__LStrFromPCharLen(param_3,(undefined4 *)0x0,multi_byte);
    WideCharToMultiByte(0,0,wide_char_str,wide_char,(LPSTR)*param_3,multi_byte,(LPCSTR)0x0,
                        (LPBOOL)0x0);
  }
  return;
}


/* ==== 0040492c FUN_0040492c ==== */

void FUN_0040492c(LPCWSTR wide_char_str,int *param_2)

{
  UINT wide_char;
  
  wide_char = SysStringLen(wide_char_str);
  FUN_004048a0(wide_char_str,wide_char,param_2);
  return;
}


/* ==== 00404950 FUN_00404950 ==== */

BSTR FUN_00404950(LPCSTR multi_byte_str)

{
  int cbMultiByte;
  int wide_char;
  LPCSTR lpMultiByteStr;
  UINT UVar1;
  BSTR lpWideCharStr;
  WCHAR *lpWideCharStr_00;
  WCHAR local_810 [1024];
  
  lpWideCharStr_00 = local_810;
  cbMultiByte = System__LStrLen((int)multi_byte_str);
  wide_char = System__LStrLen((int)multi_byte_str);
  if (wide_char < 0x400) {
    wide_char = 0x400;
    lpMultiByteStr = System__LStrToPChar(multi_byte_str);
    UVar1 = MultiByteToWideChar(0,0,lpMultiByteStr,cbMultiByte,lpWideCharStr_00,wide_char);
    lpWideCharStr = SysAllocStringLen(local_810,UVar1);
  }
  else {
    UVar1 = MultiByteToWideChar(0,0,multi_byte_str,cbMultiByte,(LPWSTR)0x0,0);
    lpWideCharStr = SysAllocStringLen((OLECHAR *)0x0,UVar1);
    MultiByteToWideChar(0,0,multi_byte_str,cbMultiByte,lpWideCharStr,UVar1);
  }
  return lpWideCharStr;
}


/* ==== 004049dc System._RunError ==== */

void System__RunError(uint param_1)

{
  System__RunError(CONCAT31((int3)(param_1 >> 8),0xf));
  return;
}


/* ==== 004049ec FUN_004049ec ==== */

void FUN_004049ec(VARIANTARG *pvarg_val)

{
  ushort uVar1;
  
  uVar1 = (pvarg_val->n1).n2.vt;
  if (((uVar1 & 0x4000) != 0) || (uVar1 < 8)) {
    (pvarg_val->n1).n2.vt = 0;
    return;
  }
  if (uVar1 == 0x100) {
    (pvarg_val->n1).n2.vt = 0;
    System__LStrClr((int *)((int)&pvarg_val->n1 + 8));
    return;
  }
  if (uVar1 == 0x101) {
                    /* WARNING: Could not recover jumptable at 0x00404a0e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*DAT_004ac3e8)();
    return;
  }
  VariantClear(pvarg_val);
  return;
}


/* ==== 00404a30 FUN_00404a30 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00404a30(VARIANT *param_1,VARIANTARG *pvarg_src)

{
  int iVar1;
  HRESULT HVar2;
  
  if (param_1 != pvarg_src) {
    if (7 < (param_1->n1).n2.vt) {
      if ((param_1->n1).n2.vt == 0x100) {
        System__LStrClr((int *)((int)&param_1->n1 + 8));
      }
      else if ((param_1->n1).n2.vt == 0x101) {
        (*DAT_004ac3e8)();
      }
      else {
        VariantClear(param_1);
      }
    }
    if ((pvarg_src->n1).n2.vt < 8) {
      *(undefined4 *)&param_1->n1 = *(undefined4 *)&pvarg_src->n1;
      *(undefined4 *)((int)&param_1->n1 + 8) = *(undefined4 *)((int)&pvarg_src->n1 + 8);
      *(undefined4 *)((int)&param_1->n1 + 0xc) = *(undefined4 *)((int)&pvarg_src->n1 + 0xc);
      return;
    }
    if ((pvarg_src->n1).n2.vt == 0x100) {
      iVar1 = *(int *)((int)&pvarg_src->n1 + 8);
      if ((iVar1 != 0) && (-1 < *(int *)(iVar1 + -8))) {
        LOCK();
        *(int *)(iVar1 + -8) = *(int *)(iVar1 + -8) + 1;
        UNLOCK();
      }
      (param_1->n1).n2.vt = 0x100;
      *(int *)((int)&param_1->n1 + 8) = iVar1;
      return;
    }
    if ((pvarg_src->n1).n2.vt == 0x101) {
      FUN_00404a6e((undefined4 *)param_1,(undefined4 *)pvarg_src);
                    /* WARNING: Could not recover jumptable at 0x00404a94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*_DAT_004ac3f0)(param_1);
      return;
    }
    (param_1->n1).n2.vt = 0;
    HVar2 = VariantCopyInd(param_1,pvarg_src);
    if (HVar2 != 0) {
      System__RunError(CONCAT31((int3)((uint)HVar2 >> 8),0x10));
      return;
    }
  }
  return;
}


/* ==== 00404a6e FUN_00404a6e ==== */

void FUN_00404a6e(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  return;
}


/* ==== 00404acc FUN_00404acc ==== */

void FUN_00404acc(VARIANTARG *variantarg,undefined4 *param_2,undefined4 param_3)

{
  int i_val;
  VARIANT *pVVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  VARIANT local_14;
  
  pVVar1 = &local_14;
  for (i_val = 4; i_val != 0; i_val = i_val + -1) {
    *(undefined4 *)&pVVar1->n1 = *param_2;
    param_2 = param_2 + 1;
    pVVar1 = (VARIANT *)((int)&pVVar1->n1 + 4);
  }
  puStack_24 = (undefined1 *)0x404aef;
  FUN_00405040(&local_14);
  puStack_28 = &LAB_00404b28;
  uStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_2c;
  puStack_24 = &stack0xfffffffc;
  (*DAT_004ac3ec)(&local_14);
  FUN_00404b50(variantarg,&local_14,param_3);
  *in_FS_OFFSET = uStack_2c;
  puStack_24 = &LAB_00404b2f;
  puStack_28 = (undefined1 *)0x404b27;
  FUN_00405038(&local_14);
  return;
}


/* ==== 00404b38 FUN_00404b38 ==== */

bool FUN_00404b38(undefined4 param_1,short *param_2,undefined4 param_3)

{
  short sVar1;
  
  sVar1 = *param_2;
  if (sVar1 == 0x101) {
    FUN_00404acc(param_1,(undefined4 *)param_2,param_3);
  }
  return sVar1 == 0x101;
}


/* ==== 00404b50 FUN_00404b50 ==== */

void FUN_00404b50(VARIANTARG *param_1,VARIANTARG *pvar_src,undefined4 param_3)

{
  VARTYPE VVar1;
  bool bVar2;
  uint variant_change_type_ex;
  _union_2683 union_2683;
  
  VVar1 = (param_1->n1).n2.vt;
  if (VVar1 == 0x100) {
    bVar2 = FUN_00404b38(param_1,(short *)pvar_src,param_3);
    if (!bVar2) {
      union_2683._0_4_ = (uint)union_2683.n2.wReserved1 << 0x10;
      variant_change_type_ex =
           VariantChangeTypeEx((VARIANTARG *)&union_2683.n2,pvar_src,0x400,0,(VARTYPE)param_3);
      if (variant_change_type_ex != 0) {
        System__RunError(variant_change_type_ex);
      }
      FUN_004049ec(param_1);
      *(undefined4 *)&param_1->n1 = union_2683._0_4_;
      *(undefined4 *)((int)&param_1->n1 + 8) = union_2683._8_4_;
      *(undefined4 *)((int)&param_1->n1 + 0xc) = union_2683._12_4_;
    }
  }
  else if (VVar1 == 0x101) {
    FUN_00404acc(param_1,(undefined4 *)pvar_src,param_3);
  }
  else {
    bVar2 = FUN_00404b38(param_1,(short *)pvar_src,param_3);
    if (!bVar2) {
      variant_change_type_ex = VariantChangeTypeEx(param_1,pvar_src,0x400,0,(VARTYPE)param_3);
      if (variant_change_type_ex != 0) {
        System__RunError(variant_change_type_ex);
      }
    }
  }
  return;
}


/* ==== 00404bf4 FUN_00404bf4 ==== */

void FUN_00404bf4(VARIANTARG *pvarg_val,int param_2)

{
  int local_8;
  
  local_8 = 0;
  FUN_0040492c(*(LPCWSTR *)(param_2 + 8),&local_8);
  FUN_004049ec(pvarg_val);
  (pvarg_val->n1).n2.vt = 0x100;
  *(int *)((int)&pvarg_val->n1 + 8) = local_8;
  return;
}


/* ==== 00404c24 FUN_00404c24 ==== */

void FUN_00404c24(VARIANTARG *pvarg_val,int param_2)

{
  BSTR pOVar1;
  
  pOVar1 = FUN_00404950(*(LPCSTR *)(param_2 + 8));
  FUN_004049ec(pvarg_val);
  (pvarg_val->n1).n2.vt = 8;
  *(BSTR *)((int)&pvarg_val->n1 + 8) = pOVar1;
  return;
}


/* ==== 00404c44 FUN_00404c44 ==== */

void FUN_00404c44(VARIANT *pvarg_val,VARIANTARG *param_2,undefined4 param_3)

{
  VARTYPE VVar1;
  VARTYPE VVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  _union_2683 union_2683;
  
  VVar1 = (param_2->n1).n2.vt;
  VVar2 = (VARTYPE)param_3;
  if (VVar2 == VVar1) {
    puStack_20 = (undefined1 *)0x404c60;
    FUN_00404a30(pvarg_val,param_2);
  }
  else if (VVar1 == 0x100) {
    if (VVar2 != 8) {
      union_2683.n2.vt = 0;
      puStack_20 = (undefined1 *)0x404c8c;
      FUN_00404c24((VARIANTARG *)&union_2683.n2,(int)param_2);
      puStack_24 = &LAB_00404cbd;
      uStack_28 = *in_FS_OFFSET;
      *in_FS_OFFSET = &uStack_28;
      puStack_20 = &stack0xfffffffc;
      FUN_00404b50(pvarg_val,(VARIANTARG *)&union_2683.n2,param_3);
      *in_FS_OFFSET = uStack_28;
      puStack_20 = (undefined1 *)0x404d33;
      puStack_24 = (undefined1 *)0x404cbc;
      FUN_004049ec((VARIANTARG *)&union_2683.n2);
      return;
    }
    puStack_20 = (undefined1 *)0x404c79;
    FUN_00404c24(pvarg_val,(int)param_2);
  }
  else if ((VVar2 == 0x100) && (VVar1 != 0x101)) {
    if (VVar1 != 8) {
      union_2683.n2.vt = 0;
      puStack_20 = (undefined1 *)0x404cf3;
      FUN_00404b50((VARIANTARG *)&union_2683.n2,param_2,CONCAT22((short)((uint)param_3 >> 0x10),8));
      puStack_24 = &LAB_00404d22;
      uStack_28 = *in_FS_OFFSET;
      *in_FS_OFFSET = &uStack_28;
      puStack_20 = &stack0xfffffffc;
      FUN_00404bf4(pvarg_val,(int)&union_2683);
      *in_FS_OFFSET = uStack_28;
      puStack_20 = (undefined1 *)0x404d33;
      puStack_24 = (undefined1 *)0x404d21;
      FUN_004049ec((VARIANTARG *)&union_2683.n2);
      return;
    }
    puStack_20 = (undefined1 *)0x404cdf;
    FUN_00404bf4(pvarg_val,(int)param_2);
  }
  else {
    puStack_20 = (undefined1 *)0x404d33;
    FUN_00404b50(pvarg_val,param_2,param_3);
  }
  return;
}


/* ==== 00404d38 FUN_00404d38 ==== */

uint FUN_00404d38(VARIANTARG *variantarg)

{
  float fVar1;
  VARTYPE VVar2;
  _union_2683 union_2683;
  
  VVar2 = (variantarg->n1).n2.vt;
  if (VVar2 == 3) {
    return *(uint *)((int)&variantarg->n1 + 8);
  }
  if (VVar2 != 2) {
    if (VVar2 == 0x11) {
      return (uint)*(byte *)((int)&variantarg->n1 + 8);
    }
    if (VVar2 == 5) {
      fVar1 = (float)*(double *)((int)&variantarg->n1 + 8);
    }
    else if (VVar2 == 4) {
      fVar1 = *(float *)((int)&variantarg->n1 + 8);
    }
    else {
      if (VVar2 != 6) {
        union_2683.n2.vt = 0;
        FUN_00404c44((VARIANT *)&union_2683.n2,variantarg,3);
        return union_2683._8_4_;
      }
      fVar1 = (float)*(longlong *)((int)&variantarg->n1 + 8) / 10000.0;
    }
    return (int)ROUND(fVar1);
  }
  return (int)*(short *)((int)&variantarg->n1 + 8);
}


/* ==== 00404da4 FUN_00404da4 ==== */

void FUN_00404da4(int *param_1,VARIANTARG *variantarg)

{
  _union_2683 union_2683;
  
  if ((variantarg->n1).n2.vt == 0x100) {
    System__LStrAsg(param_1,*(undefined4 **)((int)&variantarg->n1 + 8));
    return;
  }
  union_2683.n2.vt = 0;
  FUN_00404c44((VARIANT *)&union_2683.n2,variantarg,0x100);
  System__LStrClr(param_1);
  *param_1 = union_2683._8_4_;
  return;
}


/* ==== 00404de0 FUN_00404de0 ==== */

void FUN_00404de0(int *param_1,undefined4 *param_2)

{
  uint uVar1;
  int i_val;
  _union_2683 *p_Var2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  _union_2683 union_2683;
  
  p_Var2 = &union_2683;
  for (i_val = 4; i_val != 0; i_val = i_val + -1) {
    *(undefined4 *)p_Var2 = *param_2;
    param_2 = param_2 + 1;
    p_Var2 = (_union_2683 *)((int)p_Var2 + 4);
  }
  puStack_24 = (undefined1 *)0x404dff;
  FUN_00405040((VARIANT *)&union_2683.n2);
  puStack_28 = &LAB_00404e42;
  uStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_2c;
  puStack_24 = &stack0xfffffffc;
  uVar1 = (*DAT_004ac3ec)(&union_2683);
  if (union_2683.n2.vt != 0xd) {
    System__RunError(uVar1);
  }
  FUN_00405878(param_1,(int *)union_2683._8_4_);
  *in_FS_OFFSET = uStack_2c;
  puStack_24 = &LAB_00404e49;
  puStack_28 = (undefined1 *)0x404e41;
  FUN_00405038((VARIANTARG *)&union_2683.n2);
  return;
}


/* ==== 00404e50 FUN_00404e50 ==== */

int * FUN_00404e50(int *param_1,short *param_2)

{
  int *piVar1;
  
  if (*param_2 == 0) {
    piVar1 = (int *)*param_1;
    if (piVar1 != (int *)0x0) {
      *param_1 = 0;
      (**(code **)(*piVar1 + 8))();
      param_1 = piVar1;
    }
    return param_1;
  }
  if ((*param_2 != 0xd) && (*param_2 != 9)) {
    if ((*param_2 != 0x400d) && (*param_2 != 0x4009)) {
      if (*param_2 == 0x101) {
        piVar1 = (int *)FUN_00404de0(param_1,(undefined4 *)param_2);
        return piVar1;
      }
      piVar1 = (int *)System__RunError(CONCAT31((int3)((uint)param_1 >> 8),0xf));
      return piVar1;
    }
    piVar1 = (int *)FUN_00405878(param_1,(int *)**(undefined4 **)(param_2 + 4));
    return piVar1;
  }
  piVar1 = (int *)FUN_00405878(param_1,*(int **)(param_2 + 4));
  return piVar1;
}


/* ==== 00404ea4 FUN_00404ea4 ==== */

void FUN_00404ea4(VARIANTARG *pvarg_val,undefined4 param_2)

{
  if (7 < (pvarg_val->n1).n2.vt) {
    FUN_004049ec(pvarg_val);
  }
  (pvarg_val->n1).n2.vt = 3;
  *(undefined4 *)((int)&pvarg_val->n1 + 8) = param_2;
  return;
}


/* ==== 00404ebc FUN_00404ebc ==== */

void FUN_00404ebc(VARIANTARG *pvarg_val,char param_2)

{
  if (7 < (pvarg_val->n1).n2.vt) {
    FUN_004049ec(pvarg_val);
  }
  (pvarg_val->n1).n2.vt = 0xb;
  *(ushort *)((int)&pvarg_val->n1 + 8) = -(ushort)(param_2 != '\0');
  return;
}


/* ==== 00404edc FUN_00404edc ==== */

void FUN_00404edc(VARIANTARG *pvarg_val,undefined4 *param_2)

{
  undefined4 *puVar1;
  
  if (7 < (pvarg_val->n1).n2.vt) {
    FUN_004049ec(pvarg_val);
  }
  puVar1 = param_2;
  if (param_2 != (undefined4 *)0x0) {
    if ((int)param_2[-2] < 0) {
      puVar1 = System__NewAnsiString(param_2[-1]);
      System_Move(param_2,puVar1,puVar1[-1]);
    }
    else {
      LOCK();
      param_2[-2] = param_2[-2] + 1;
      UNLOCK();
    }
  }
  (pvarg_val->n1).n2.vt = 0x100;
  *(undefined4 **)((int)&pvarg_val->n1 + 8) = puVar1;
  return;
}


/* ==== 00404f1c FUN_00404f1c ==== */

void FUN_00404f1c(VARIANTARG *pvarg_val,OLECHAR *str_in)

{
  BSTR pOVar1;
  
  if (7 < (pvarg_val->n1).n2.vt) {
    FUN_004049ec(pvarg_val);
  }
  pOVar1 = (BSTR)0x0;
  if ((str_in != (OLECHAR *)0x0) && (pOVar1 = (BSTR)0x0, *(uint *)(str_in + -2) >> 1 != 0)) {
    pOVar1 = SysAllocStringLen(str_in,*(uint *)(str_in + -2) >> 1);
    if (pOVar1 == (BSTR)0x0) {
      System__RunError(1);
      return;
    }
  }
  (pvarg_val->n1).n2.vt = 8;
  *(BSTR *)((int)&pvarg_val->n1 + 8) = pOVar1;
  return;
}


/* ==== 00404f50 FUN_00404f50 ==== */

void FUN_00404f50(VARIANTARG *pvarg_val,int *param_2)

{
  if (7 < (pvarg_val->n1).n2.vt) {
    FUN_004049ec(pvarg_val);
  }
  (pvarg_val->n1).n2.vt = 9;
  *(int **)((int)&pvarg_val->n1 + 8) = param_2;
  if (param_2 != (int *)0x0) {
    (**(code **)(*param_2 + 4))();
  }
  return;
}


/* ==== 00404f74 FUN_00404f74 ==== */

void FUN_00404f74(VARIANTARG *pvarg_val,LPCSTR multi_byte_str)

{
  BSTR pOVar1;
  
  if (7 < (pvarg_val->n1).n2.vt) {
    FUN_004049ec(pvarg_val);
  }
  (pvarg_val->n1).n2.vt = 8;
  pOVar1 = (BSTR)((int)&pvarg_val->n1 + 8);
  pOVar1[0] = L'\0';
  pOVar1[1] = L'\0';
  FUN_004043f8(pOVar1,multi_byte_str);
  return;
}


/* ==== 00404ffc FUN_00404ffc ==== */

/* WARNING: Variable defined which should be unmapped: variant */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00404ffc(VARIANTARG *param_1,undefined4 pvarg_src)

{
  LPCSTR multi_byte_str;
  HRESULT HVar1;
  BSTR pOVar2;
  int i_val;
  VARIANT *pVVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStackY_2c;
  undefined1 *puStackY_28;
  undefined1 *puStackY_24;
  VARIANT variant;
  
  if ((((VARIANTARG *)pvarg_src)->n1).n2.vt == 0x101) {
    pVVar3 = &variant;
    for (i_val = 4; i_val != 0; i_val = i_val + -1) {
      *(undefined4 *)&pVVar3->n1 = *(undefined4 *)&((VARIANTARG *)pvarg_src)->n1;
      pvarg_src = (VARIANTARG *)((int)&((VARIANTARG *)pvarg_src)->n1 + 4);
      pVVar3 = (VARIANT *)((int)&pVVar3->n1 + 4);
    }
    puStackY_24 = (undefined1 *)0x404fb7;
    FUN_00405040(&variant);
    puStackY_28 = &LAB_00404fee;
    uStackY_2c = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStackY_2c;
    puStackY_24 = &stack0xfffffffc;
    (*DAT_004ac3ec)(&variant);
    FUN_00404ffc(param_1,&variant);
    *in_FS_OFFSET = uStackY_2c;
    puStackY_24 = &LAB_00404ff5;
    puStackY_28 = (undefined1 *)0x404fed;
    FUN_00405038(&variant);
    return;
  }
  if ((((VARIANTARG *)pvarg_src)->n1).n2.vt == 0x100) {
    if (7 < (param_1->n1).n2.vt) {
      variant.n1._8_4_ = 0x40501f;
      variant.n1._12_4_ = pvarg_src;
      FUN_004049ec(param_1);
      pvarg_src = variant.n1._12_4_;
    }
    (param_1->n1).n2.vt = 8;
    pOVar2 = (BSTR)((int)&param_1->n1 + 8);
    multi_byte_str = *(LPCSTR *)((int)&((VARIANTARG *)pvarg_src)->n1 + 8);
    pOVar2[0] = L'\0';
    pOVar2[1] = L'\0';
    FUN_004043f8(pOVar2,multi_byte_str);
    return;
  }
  if (param_1 != (VARIANTARG *)pvarg_src) {
    if (7 < (param_1->n1).n2.vt) {
      if ((param_1->n1).n2.vt == 0x100) {
        variant.n1._8_4_ = 0x404a66;
        variant.n1._12_4_ = pvarg_src;
        System__LStrClr((int *)((int)&param_1->n1 + 8));
        pvarg_src = variant.n1._12_4_;
      }
      else if ((param_1->n1).n2.vt == 0x101) {
        variant.n1._8_4_ = 0x404a5c;
        variant.n1._12_4_ = pvarg_src;
        (*DAT_004ac3e8)();
        pvarg_src = variant.n1._12_4_;
      }
      else {
        variant.n1.decVal.Hi32 = 0x404a54;
        variant.n1._8_4_ = param_1;
        variant.n1._12_4_ = pvarg_src;
        VariantClear(param_1);
        pvarg_src = variant.n1._12_4_;
      }
    }
    if ((((VARIANTARG *)pvarg_src)->n1).n2.vt < 8) {
      *(undefined4 *)&param_1->n1 = *(undefined4 *)&((VARIANTARG *)pvarg_src)->n1;
      *(undefined4 *)((int)&param_1->n1 + 8) =
           *(undefined4 *)((int)&((VARIANTARG *)pvarg_src)->n1 + 8);
      *(undefined4 *)((int)&param_1->n1 + 0xc) =
           *(undefined4 *)((int)&((VARIANTARG *)pvarg_src)->n1 + 0xc);
      return;
    }
    if ((((VARIANTARG *)pvarg_src)->n1).n2.vt == 0x100) {
      i_val = *(int *)((int)&((VARIANTARG *)pvarg_src)->n1 + 8);
      if ((i_val != 0) && (-1 < *(int *)(i_val + -8))) {
        LOCK();
        *(int *)(i_val + -8) = *(int *)(i_val + -8) + 1;
        UNLOCK();
      }
      (param_1->n1).n2.vt = 0x100;
      *(int *)((int)&param_1->n1 + 8) = i_val;
      return;
    }
    if ((((VARIANTARG *)pvarg_src)->n1).n2.vt == 0x101) {
      variant.n1._12_4_ = 0x404a93;
      FUN_00404a6e((undefined4 *)param_1,(undefined4 *)pvarg_src);
                    /* WARNING: Could not recover jumptable at 0x00404a94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*_DAT_004ac3f0)(param_1);
      return;
    }
    (param_1->n1).n2.vt = 0;
    variant.n1._8_4_ = 0x404ac0;
    variant.n1._12_4_ = param_1;
    HVar1 = VariantCopyInd(param_1,(VARIANTARG *)pvarg_src);
    if (HVar1 != 0) {
      System__RunError(CONCAT31((int3)((uint)HVar1 >> 8),0x10));
      return;
    }
  }
  return;
}


/* ==== 00405038 FUN_00405038 ==== */

VARIANTARG * FUN_00405038(VARIANTARG *pvarg_val)

{
  FUN_004049ec(pvarg_val);
  return pvarg_val;
}


/* ==== 00405040 FUN_00405040 ==== */

void FUN_00405040(VARIANT *variant)

{
  _union_2683 _Stack_10;
  
  if (7 < (variant->n1).n2.vt) {
    _Stack_10._12_4_ = *(undefined4 *)((int)&variant->n1 + 0xc);
    _Stack_10._8_4_ = *(undefined4 *)((int)&variant->n1 + 8);
    _Stack_10.decVal.Hi32 = (variant->n1).decVal.Hi32;
    _Stack_10._0_4_ = *(undefined4 *)&variant->n1;
    (variant->n1).n2.vt = 0;
    FUN_00404a30(variant,(VARIANTARG *)&_Stack_10.n2);
  }
  return;
}


/* ==== 00405064 FUN_00405064 ==== */

undefined4 FUN_00405064(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = *(undefined4 *)(param_1 + -4);
  }
  return uVar1;
}


/* ==== 0040506c FUN_0040506c ==== */

int FUN_0040506c(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00405064(param_1);
  return iVar1 + -1;
}


/* ==== 00405074 FUN_00405074 ==== */

void FUN_00405074(VARIANT *pbstr_val,VARIANTARG *pvarg_src,char *param_3,int param_4)

{
  FUN_00404788(pbstr_val,pvarg_src,param_3,param_4);
  return;
}


/* ==== 00405084 thunk_FUN_00404578 ==== */

/* WARNING: Type propagation algorithm not settling */

VARIANTARG * thunk_FUN_00404578(VARIANTARG *variantarg,char *param_2,int param_3)

{
  char cVar1;
  bool bVar2;
  VARIANTARG *pVVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  if (param_3 != 0) {
    cVar1 = *param_2;
    uVar4 = (uint)(byte)param_2[1];
    if (cVar1 == '\n') {
      if (param_3 < 2) {
        System__LStrClr((int *)variantarg);
      }
      else {
        System__LStrArrayClr((int *)variantarg,param_3);
      }
    }
    else if (cVar1 == '\v') {
      if (param_3 < 2) {
        FUN_004042b4((undefined4 *)variantarg);
      }
      else {
        FUN_004042cc((undefined4 *)variantarg,param_3);
      }
    }
    else {
      pVVar3 = variantarg;
      if (cVar1 == '\f') {
        do {
          FUN_00405038(pVVar3);
          iVar6 = param_3 + -1;
          bVar2 = 0 < param_3;
          pVVar3 = pVVar3 + 1;
          param_3 = iVar6;
        } while (iVar6 != 0 && bVar2);
      }
      else if (cVar1 == '\r') {
        do {
          iVar6 = *(int *)(param_2 + uVar4 + 2);
          FUN_00404578(pVVar3,(char *)**(undefined4 **)(param_2 + uVar4 + 10),
                       *(int *)(param_2 + uVar4 + 6));
          iVar5 = param_3 + -1;
          bVar2 = 0 < param_3;
          pVVar3 = (VARIANTARG *)((int)&pVVar3->n1 + iVar6);
          param_3 = iVar5;
        } while (iVar5 != 0 && bVar2);
      }
      else if (cVar1 == '\x0e') {
        do {
          iVar6 = *(int *)(param_2 + uVar4 + 2);
          FUN_0040454c((int)pVVar3,(int)param_2);
          iVar5 = param_3 + -1;
          bVar2 = 0 < param_3;
          pVVar3 = (VARIANTARG *)((int)&pVVar3->n1 + iVar6);
          param_3 = iVar5;
        } while (iVar5 != 0 && bVar2);
      }
      else if (cVar1 == '\x0f') {
        do {
          System__IntfClear((int *)pVVar3);
          iVar6 = param_3 + -1;
          bVar2 = 0 < param_3;
          pVVar3 = (VARIANTARG *)((int)&pVVar3->n1 + 4);
          param_3 = iVar6;
        } while (iVar6 != 0 && bVar2);
      }
      else {
        if (cVar1 != '\x11') {
          pVVar3 = (VARIANTARG *)System__RunError(CONCAT31((int3)((uint)variantarg >> 8),2));
          return pVVar3;
        }
        do {
          FUN_0040522c((int *)pVVar3,(int)param_2);
          iVar6 = param_3 + -1;
          bVar2 = 0 < param_3;
          pVVar3 = (VARIANTARG *)((int)&pVVar3->n1 + 4);
          param_3 = iVar6;
        } while (iVar6 != 0 && bVar2);
      }
    }
  }
  return variantarg;
}


/* ==== 0040508c FUN_0040508c ==== */

void FUN_0040508c(int *param_1,int param_2)

{
  FUN_0040522c(param_1,param_2);
  return;
}


/* ==== 00405094 FUN_00405094 ==== */

void FUN_00405094(int *param_1,int param_2,int param_3,int *param_4)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  char *pcVar4;
  int i_val;
  int *local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int k;
  int j;
  int *local_8;
  
  piVar2 = (int *)*param_1;
  i_val = *param_4;
  j = param_3;
  local_8 = param_1;
  if (i_val < 1) {
    if (i_val < 0) {
      System__RunError(CONCAT31((int3)((uint)param_4 >> 8),4));
    }
    FUN_0040508c(local_8,param_2);
  }
  else {
    local_14 = 0;
    if (piVar2 != (int *)0x0) {
      local_14 = piVar2[-1];
      piVar2 = piVar2 + -2;
    }
    iVar3 = param_2 + (uint)*(byte *)(param_2 + 1);
    local_1c = *(int *)(iVar3 + 2);
    puVar1 = *(undefined4 **)(iVar3 + 6);
    if (puVar1 == (undefined4 *)0x0) {
      pcVar4 = (char *)0x0;
    }
    else {
      pcVar4 = (char *)*puVar1;
    }
    local_20 = i_val * local_1c;
    if (local_20 / i_val != local_1c) {
      System__RunError(CONCAT31((int3)((uint)(local_20 / i_val) >> 8),4));
    }
    local_20 = local_20 + 8;
    if ((piVar2 == (int *)0x0) || (*piVar2 == 1)) {
      local_24 = piVar2;
      if ((i_val < local_14) && (pcVar4 != (char *)0x0)) {
        thunk_FUN_00404578((VARIANTARG *)((int)piVar2 + i_val * local_1c + 8),pcVar4,
                           local_14 - i_val);
      }
      FUN_004027ac((int *)&local_24,local_20);
      piVar2 = local_24;
    }
    else {
      *piVar2 = *piVar2 + -1;
      piVar2 = (int *)System__GetMem(local_20);
      local_18 = local_14;
      if (i_val < local_14) {
        local_18 = i_val;
      }
      if (pcVar4 == (char *)0x0) {
        System_Move((undefined4 *)*local_8,piVar2 + 2,local_18 * local_1c);
      }
      else {
        System_FillChar(piVar2 + 2,local_18 * local_1c,0);
        FUN_00405074((VARIANT *)(piVar2 + 2),(VARIANTARG *)*local_8,pcVar4,local_18);
      }
    }
    *piVar2 = 1;
    piVar2[1] = i_val;
    piVar2 = piVar2 + 2;
    System_FillChar((int *)(local_1c * local_14 + (int)piVar2),(i_val - local_14) * local_1c,0);
    if (1 < j) {
      j = j + -1;
      if (-1 < i_val + -1) {
        k = 0;
        do {
          FUN_00405094(piVar2 + k,(int)pcVar4,j,param_4 + 1);
          k = k + 1;
          i_val = i_val + -1;
        } while (i_val != 0);
      }
    }
    *local_8 = (int)piVar2;
  }
  return;
}


/* ==== 00405220 FUN_00405220 ==== */

void FUN_00405220(int *param_1,int param_2,int param_3)

{
  FUN_00405094(param_1,param_2,param_3,(int *)&stack0x00000004);
  return;
}


/* ==== 0040522c FUN_0040522c ==== */

int * FUN_0040522c(int *param_1,int param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  VARIANTARG *variantarg;
  
  variantarg = (VARIANTARG *)*param_1;
  if (variantarg != (VARIANTARG *)0x0) {
    *param_1 = 0;
    LOCK();
    piVar1 = (int *)((int)&variantarg[-1].n1 + 8);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      puVar2 = *(undefined4 **)(param_2 + 6 + (uint)*(byte *)(param_2 + 1));
      if ((puVar2 != (undefined4 *)0x0) &&
         (iVar3 = *(int *)((int)&variantarg[-1].n1 + 0xc), iVar3 != 0)) {
        variantarg = FUN_00404578(variantarg,(char *)*puVar2,iVar3);
      }
      System__FreeMem((int)((int)&variantarg[-1].n1 + 8));
    }
  }
  return param_1;
}


/* ==== 00405268 FUN_00405268 ==== */

void FUN_00405268(int *param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = *param_1;
  if (param_2 != 0) {
    LOCK();
    *(int *)(param_2 + -8) = *(int *)(param_2 + -8) + 1;
    UNLOCK();
  }
  if (iVar2 != 0) {
    LOCK();
    piVar1 = (int *)(iVar2 + -8);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      *(int *)(iVar2 + -8) = *(int *)(iVar2 + -8) + 1;
      FUN_0040522c(param_1,param_3);
    }
  }
  *param_1 = param_2;
  return;
}


/* ==== 00405290 FUN_00405290 ==== */

PVOID FUN_00405290(LPCVOID address)

{
  _MEMORY_BASIC_INFORMATION memory_basic_information;
  
  VirtualQuery(address,&memory_basic_information,0x1c);
  if (memory_basic_information.State != 0x1000) {
    memory_basic_information.AllocationBase = (PVOID)0x0;
  }
  return memory_basic_information.AllocationBase;
}


/* ==== 004052b8 FUN_004052b8 ==== */

void FUN_004052b8(LPCVOID address)

{
  FUN_00405290(address);
  return;
}


/* ==== 004052c0 FUN_004052c0 ==== */

int FUN_004052c0(int param_1)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_004aa01c;
  while( true ) {
    if (puVar1 == (undefined4 *)0x0) {
      return param_1;
    }
    if (((param_1 == puVar1[1]) || (param_1 == puVar1[2])) || (param_1 == puVar1[3])) break;
    puVar1 = (undefined4 *)*puVar1;
  }
  return puVar1[4];
}


/* ==== 004052e4 thunk_FUN_004052ec ==== */

void thunk_FUN_004052ec(LPCSTR lpsz_val)

{
  for (; (*lpsz_val != '\0' && (*lpsz_val != '\\')); lpsz_val = CharNextA(lpsz_val)) {
  }
  return;
}


/* ==== 004052ec FUN_004052ec ==== */

void FUN_004052ec(LPCSTR lpsz_val)

{
  for (; (*lpsz_val != '\0' && (*lpsz_val != '\\')); lpsz_val = CharNextA(lpsz_val)) {
  }
  return;
}


/* ==== 004052f8 FUN_004052f8 ==== */

char * FUN_004052f8(char *param_1)

{
  HMODULE hModule;
  int iVar1;
  char *string2;
  LPCSTR pCVar2;
  HANDLE hFindFile;
  int lstrlenA_result;
  CHAR local_253 [261];
  undefined1 local_14e [322];
  char *local_c;
  char *local_8;
  
  local_c = param_1;
  local_8 = param_1;
  hModule = GetModuleHandleA("kernel32.dll");
  if (((hModule == (HMODULE)0x0) ||
      (local_14e._318_4_ = GetProcAddress(hModule,"GetLongPathNameA"),
      (FARPROC)local_14e._318_4_ == (FARPROC)0x0)) ||
     (iVar1 = (*(code *)local_14e._318_4_)(), iVar1 == 0)) {
    if (*local_8 == '\\') {
      if (local_8[1] != '\\') {
        return local_c;
      }
      string2 = (char *)thunk_FUN_004052ec(local_8 + 2);
      if (*string2 == '\0') {
        return local_c;
      }
      string2 = (char *)thunk_FUN_004052ec(string2 + 1);
      if (*string2 == '\0') {
        return local_c;
      }
    }
    else {
      string2 = local_8 + 2;
    }
    iVar1 = (int)string2 - (int)local_8;
    lstrcpynA(local_253,local_8,iVar1 + 1);
    while (*string2 != '\0') {
      pCVar2 = (LPCSTR)thunk_FUN_004052ec(string2 + 1);
      if (0x105 < (int)(pCVar2 + (iVar1 - (int)string2) + 1)) {
        return local_c;
      }
      lstrcpynA(local_253 + iVar1,string2,(int)(pCVar2 + (1 - (int)string2)));
      hFindFile = FindFirstFileA(local_253,(LPWIN32_FIND_DATAA)local_14e);
      if (hFindFile == (HANDLE)0xffffffff) {
        return local_c;
      }
      FindClose(hFindFile);
      lstrlenA_result = lstrlenA(local_14e + 0x2c);
      if (0x105 < lstrlenA_result + iVar1 + 2) {
        return local_c;
      }
      local_253[iVar1] = '\\';
      lstrcpyA(local_253 + iVar1 + 1,local_14e + 0x2c);
      lstrlenA_result = lstrlenA(local_14e + 0x2c);
      iVar1 = iVar1 + lstrlenA_result + 1;
      string2 = pCVar2;
    }
    lstrcpyA(local_8,local_253);
  }
  else {
    lstrcpyA(local_8,local_253);
  }
  return local_c;
}


/* ==== 004054a0 FUN_004054a0 ==== */

HMODULE FUN_004054a0(LPCSTR param_1)

{
  LSTATUS LVar1;
  char *pcVar2;
  HMODULE pHVar3;
  LCID Locale;
  LPSTR lpString1;
  undefined4 *in_FS_OFFSET;
  LPDWORD lpReserved;
  LPDWORD lpType;
  BYTE *lpData;
  DWORD *lpcbData;
  undefined4 uVar4;
  LCTYPE LCType;
  char local_121 [261];
  DWORD local_1c;
  BYTE local_16 [5];
  char local_11 [2];
  undefined1 local_f;
  HKEY key;
  LPCSTR string2;
  int data;
  
  string2 = param_1;
  GetModuleFileNameA((HMODULE)0x0,local_121,0x105);
  local_16[0] = '\0';
  LVar1 = RegOpenKeyExA((HKEY)0x80000001,"Software\\Borland\\Locales",0,0xf003f,&key);
  if (LVar1 != 0) {
    LVar1 = RegOpenKeyExA((HKEY)0x80000001,"Software\\Borland\\Delphi\\Locales",0,0xf003f,&key);
    if (LVar1 != 0) {
      lstrcpyA(local_121,string2);
      data = 5;
      pcVar2 = local_11;
      LCType = 3;
      Locale = GetThreadLocale();
      GetLocaleInfoA(Locale,LCType,pcVar2,data);
      pHVar3 = (HMODULE)0x0;
      if ((local_121[0] != '\0') && ((local_11[0] != '\0' || (local_16[0] != '\0')))) {
        data = lstrlenA(local_121);
        for (pcVar2 = local_121 + data; (*pcVar2 != '.' && (pcVar2 != local_121));
            pcVar2 = pcVar2 + -1) {
        }
        if (pcVar2 != local_121) {
          lpString1 = pcVar2 + 1;
          if (local_16[0] != '\0') {
            lstrcpyA(lpString1,(LPCSTR)local_16);
            pHVar3 = LoadLibraryExA(local_121,(HANDLE)0x0,2);
          }
          if ((pHVar3 == (HMODULE)0x0) && (local_11[0] != '\0')) {
            lstrcpyA(lpString1,local_11);
            pHVar3 = LoadLibraryExA(local_121,(HANDLE)0x0,2);
            if (pHVar3 == (HMODULE)0x0) {
              local_f = 0;
              lstrcpyA(lpString1,local_11);
              pHVar3 = LoadLibraryExA(local_121,(HANDLE)0x0,2);
            }
          }
        }
      }
      return pHVar3;
    }
  }
  uVar4 = *in_FS_OFFSET;
  *in_FS_OFFSET = &stack0xfffffec8;
  local_1c = 5;
  lpcbData = &local_1c;
  lpData = local_16;
  lpType = (LPDWORD)0x0;
  lpReserved = (LPDWORD)0x0;
  pcVar2 = FUN_004052f8(local_121);
  LVar1 = RegQueryValueExA(key,pcVar2,lpReserved,lpType,lpData,lpcbData);
  if (LVar1 != 0) {
    RegQueryValueExA(key,"",(LPDWORD)0x0,(LPDWORD)0x0,local_16,&local_1c);
  }
  *in_FS_OFFSET = uVar4;
  pHVar3 = (HMODULE)RegCloseKey(key);
  return pHVar3;
}


/* ==== 0040569c FUN_0040569c ==== */

void FUN_0040569c(undefined4 param_1)

{
  FUN_004056ac(param_1);
  return;
}


/* ==== 004056a4 FUN_004056a4 ==== */

void FUN_004056a4(int param_1)

{
  FUN_004056cc(param_1);
  return;
}


/* ==== 004056ac FUN_004056ac ==== */

void FUN_004056ac(undefined4 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)System__GetMem(8);
  *puVar1 = DAT_004aa020;
  puVar1[1] = param_1;
  DAT_004aa020 = puVar1;
  return;
}


/* ==== 004056cc FUN_004056cc ==== */

void FUN_004056cc(int param_1)

{
  int *piVar1;
  int *piVar2;
  
  piVar2 = DAT_004aa020;
  if ((DAT_004aa020 != (int *)0x0) && (DAT_004aa020[1] == param_1)) {
    DAT_004aa020 = (int *)*DAT_004aa020;
    System__FreeMem((int)piVar2);
    return;
  }
  while( true ) {
    if (piVar2 == (int *)0x0) {
      return;
    }
    piVar1 = (int *)*piVar2;
    if ((piVar1 != (int *)0x0) && (piVar1[1] == param_1)) break;
    piVar2 = (int *)*piVar2;
  }
  *piVar2 = *piVar1;
  System__FreeMem((int)piVar1);
  return;
}


/* ==== 0040572c FUN_0040572c ==== */

void FUN_0040572c(undefined4 param_1,undefined4 param_2,undefined1 *param_3)

{
  undefined4 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  
  for (puVar1 = DAT_004aa020; puVar1 != (undefined4 *)0x0; puVar1 = (undefined4 *)*puVar1) {
    puStack_20 = &LAB_00405767;
    uStack_24 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_24;
    puStack_1c = &stack0xfffffffc;
    (*(code *)puVar1[1])(param_1,param_2,param_3);
    *in_FS_OFFSET = uStack_24;
    param_2 = uStack_24;
    param_3 = puStack_1c;
  }
  return;
}


/* ==== 00405788 FUN_00405788 ==== */

void FUN_00405788(undefined4 *param_1)

{
  *param_1 = DAT_004aa01c;
  DAT_004aa01c = param_1;
  return;
}


/* ==== 00405798 FUN_00405798 ==== */

void FUN_00405798(undefined4 *param_1,undefined4 param_2,undefined1 *param_3)

{
  undefined4 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_14;
  undefined1 *puStack_10;
  undefined1 *puStack_c;
  undefined4 *local_8;
  
  puStack_c = &stack0xfffffffc;
  puStack_10 = &LAB_004057fc;
  uStack_14 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_14;
  local_8 = param_1;
  FUN_0040572c(param_1[1],0,param_3);
  *in_FS_OFFSET = uStack_14;
  puVar1 = DAT_004aa01c;
  if (local_8 == DAT_004aa01c) {
    DAT_004aa01c = (undefined4 *)*local_8;
  }
  else {
    for (; puVar1 != (undefined4 *)0x0; puVar1 = (undefined4 *)*puVar1) {
      if ((undefined4 *)*puVar1 == local_8) {
        *puVar1 = *local_8;
        return;
      }
    }
  }
  return;
}


/* ==== 00405808 System.LoadResString ==== */

void System_LoadResString(undefined4 *param_1,int *param_2)

{
  HINSTANCE hInstance;
  uint string;
  UINT uID;
  CHAR *lpBuffer;
  int cchBufferMax;
  CHAR local_408 [1024];
  
  lpBuffer = local_408;
  if (param_1 != (undefined4 *)0x0) {
    if ((int)param_1[1] < 0x10000) {
      cchBufferMax = 0x400;
      uID = param_1[1];
      hInstance = (HINSTANCE)FUN_004052c0(*(int *)*param_1);
      string = LoadStringA(hInstance,uID,lpBuffer,cchBufferMax);
      System__LStrFromPCharLen(param_2,(undefined4 *)local_408,string);
    }
    else {
      FUN_00403e14(param_2,(char *)param_1[1]);
    }
  }
  return;
}


/* ==== 00405860 System._IntfClear ==== */

int * System__IntfClear(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)*param_1;
  if (piVar1 != (int *)0x0) {
    *param_1 = 0;
    (**(code **)(*piVar1 + 8))();
    param_1 = piVar1;
  }
  return param_1;
}


/* ==== 00405878 FUN_00405878 ==== */

void FUN_00405878(int *param_1,int *param_2)

{
  int *piVar1;
  
  piVar1 = (int *)*param_1;
  *param_1 = (int)param_2;
  if (param_2 != (int *)0x0) {
    (**(code **)(*param_2 + 4))();
  }
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))();
  }
  return;
}


/* ==== 00405894 FUN_00405894 ==== */

int * FUN_00405894(int *param_1,undefined4 *param_2)

{
  int iVar1;
  int *piVar2;
  
  if (param_2 == (undefined4 *)0x0) {
    piVar2 = (int *)*param_1;
    if (piVar2 != (int *)0x0) {
      *param_1 = 0;
      (**(code **)(*piVar2 + 8))();
      param_1 = piVar2;
    }
    return param_1;
  }
  if ((int *)*param_1 != (int *)0x0) {
    (**(code **)(*(int *)*param_1 + 8))();
  }
  iVar1 = (**(code **)*param_2)();
  if (iVar1 != 0) {
    piVar2 = (int *)System__RunError(CONCAT31((int3)((uint)iVar1 >> 8),0x17));
    return piVar2;
  }
  return (int *)0x0;
}


/* ==== 004058c0 FUN_004058c0 ==== */

void FUN_004058c0(int *param_1)

{
  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 4))();
  }
  return;
}


/* ==== 004058cc TInterfacedObject.AfterConstruction ==== */

void TInterfacedObject_AfterConstruction(int param_1)

{
  InterlockedDecrement((LONG *)(param_1 + 4));
  return;
}


/* ==== 004058d8 TInterfacedObject.BeforeDestruction ==== */

void TInterfacedObject_BeforeDestruction(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    System__RunError(CONCAT31((int3)((uint)param_1 >> 8),2));
  }
  return;
}


/* ==== 004058e8 TInterfacedObject.NewInstance ==== */

void TInterfacedObject_NewInstance(int param_1)

{
  int iVar1;
  
  iVar1 = TObject_NewInstance(param_1);
  *(undefined4 *)(iVar1 + 4) = 1;
  return;
}


/* ==== 00405934 FUN_00405934 ==== */

LONG FUN_00405934(void)

{
  LONG LVar1;
  int *in_stack_00000004;
  
  LVar1 = InterlockedDecrement(in_stack_00000004 + 1);
  if (LVar1 == 0) {
    (**(code **)(*in_stack_00000004 + -4))(in_stack_00000004,1);
  }
  return LVar1;
}


/* ==== 0040595c FUN_0040595c ==== */

void FUN_0040595c(int param_1)

{
  undefined4 in_stack_00000000;
  
  if (param_1 < 0) {
    if (DAT_004ac014 != (code *)0x0) {
      param_1 = (*DAT_004ac014)(param_1,in_stack_00000000);
    }
    System__RunError(CONCAT31((int3)((uint)param_1 >> 8),0x18));
    return;
  }
  return;
}


/* ==== 00405978 GetCurrentThreadId ==== */

DWORD __stdcall GetCurrentThreadId(void)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00405978. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = GetCurrentThreadId();
  return DVar1;
}


/* ==== 00405b82 FUN_00405b82 ==== */

void FUN_00405b82(undefined4 *param_1,char *param_2)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  char cVar4;
  
  param_1[5] = param_1 + 0x53;
  *param_1 = 0;
  param_1[1] = 0xd7b0;
  param_1[2] = 0x80;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[6] = &LAB_004059f4;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  pcVar3 = (char *)(param_1 + 0x12);
  if (param_2 != (char *)0x0) {
    cVar4 = -0x7e;
    do {
      pcVar2 = pcVar3;
      cVar1 = *param_2;
      *pcVar2 = cVar1;
      if (cVar1 == '\0') {
        return;
      }
      cVar1 = param_2[1];
      param_2 = param_2 + 2;
      pcVar2[1] = cVar1;
      if (cVar1 == '\0') {
        return;
      }
      cVar4 = cVar4 + -1;
      pcVar3 = pcVar2 + 2;
    } while (cVar4 != '\0');
    pcVar3 = pcVar2 + 1;
  }
  *pcVar3 = '\0';
  return;
}


/* ==== 00405bfd FUN_00405bfd ==== */

void FUN_00405bfd(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 4) == 0xd7b2) {
    iVar1 = (**(code **)(param_1 + 0x20))();
    if (iVar1 != 0) {
LAB_00405c1d:
      FUN_0040286c(iVar1);
      return;
    }
  }
  else if (*(int *)(param_1 + 4) != 0xd7b1) {
    iVar1 = 0x67;
    goto LAB_00405c1d;
  }
  return;
}


/* ==== 00405c24 FUN_00405c24 ==== */

void FUN_00405c24(undefined *param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 4) != 0xd7b1) {
    if (2 < *(int *)(param_1 + 4) - 0xd7b1U) {
      if (param_1 == &DAT_004ac050) {
        return;
      }
      iVar1 = 0x67;
      goto LAB_00405c49;
    }
    iVar1 = (**(code **)(param_1 + 0x1c))();
    if (iVar1 != 0) goto LAB_00405c49;
  }
  iVar1 = (**(code **)(param_1 + 0x24))(param_1);
  if (iVar1 == 0) {
    return;
  }
LAB_00405c49:
  FUN_0040286c(iVar1);
  return;
}


/* ==== 00405c60 FUN_00405c60 ==== */

void FUN_00405c60(undefined *param_1,undefined4 param_2)

{
  int iVar1;
  
  if (*(int *)(param_1 + 4) != 0xd7b0) {
    if (3 < *(int *)(param_1 + 4) - 0xd7b0U) {
      FUN_0040286c(0x66);
      return;
    }
    FUN_00405c24(param_1);
  }
  *(undefined4 *)(param_1 + 4) = param_2;
  iVar1 = (**(code **)(param_1 + 0x18))(param_1);
  if (iVar1 != 0) {
    FUN_0040286c(iVar1);
  }
  return;
}


/* ==== 00405ca2 FUN_00405ca2 ==== */

void FUN_00405ca2(undefined *param_1)

{
  FUN_00405c60(param_1,0xd7b2);
  return;
}


/* ==== 00405ca9 FUN_00405ca9 ==== */

void FUN_00405ca9(undefined *param_1)

{
  FUN_00405c60(param_1,0xd7b3);
  return;
}


/* ==== 00405cb0 FUN_00405cb0 ==== */

undefined * FUN_00405cb0(undefined *param_1,undefined1 *param_2,int param_3)

{
  int iVar1;
  int i_val;
  undefined1 *puVar2;
  byte bVar3;
  
  bVar3 = 0;
  if ((*(int *)(param_1 + 4) == 0xd7b2) ||
     ((param_1 == &DAT_004ac21c && (FUN_00405ca2(&DAT_004ac21c), iRam004ac220 == 0xd7b2)))) {
    do {
      iVar1 = *(int *)(param_1 + 0xc);
      i_val = *(int *)(param_1 + 8) - *(int *)(param_1 + 0xc);
      if (param_3 < i_val) {
        *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + param_3;
        puVar2 = (undefined1 *)(*(int *)(param_1 + 0x14) + iVar1);
        for (; param_3 != 0; param_3 = param_3 + -1) {
          *puVar2 = *param_2;
          param_2 = param_2 + (uint)bVar3 * -2 + 1;
          puVar2 = puVar2 + (uint)bVar3 * -2 + 1;
        }
        return param_1;
      }
      *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + i_val;
      param_3 = param_3 - i_val;
      puVar2 = (undefined1 *)(*(int *)(param_1 + 0x14) + iVar1);
      for (; i_val != 0; i_val = i_val + -1) {
        *puVar2 = *param_2;
        param_2 = param_2 + (uint)bVar3 * -2 + 1;
        puVar2 = puVar2 + (uint)bVar3 * -2 + 1;
      }
      iVar1 = (**(code **)(param_1 + 0x1c))();
    } while (iVar1 == 0);
    FUN_0040286c(iVar1);
  }
  else {
    param_1 = (undefined *)FUN_0040286c(0x69);
  }
  return param_1;
}


/* ==== 00405d1b FUN_00405d1b ==== */

undefined * FUN_00405d1b(undefined *param_1,int param_2)

{
  int iVar1;
  LPVOID pvVar2;
  int i_val;
  undefined *puVar3;
  undefined1 *puVar4;
  byte bVar5;
  
  bVar5 = 0;
  while (0x40 < param_2) {
    param_2 = param_2 + -0x40;
    FUN_00405cb0(param_1,&DAT_004aa070,0x40);
    pvVar2 = FUN_0040655c();
    if (*(int *)((int)pvVar2 + 4) != 0) {
      return param_1;
    }
  }
  if (0 < param_2) {
    puVar3 = &DAT_004aa070;
    if ((*(int *)(param_1 + 4) == 0xd7b2) ||
       ((param_1 == &DAT_004ac21c && (FUN_00405ca2(&DAT_004ac21c), iRam004ac220 == 0xd7b2)))) {
      do {
        iVar1 = *(int *)(param_1 + 0xc);
        i_val = *(int *)(param_1 + 8) - *(int *)(param_1 + 0xc);
        if (param_2 < i_val) {
          *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + param_2;
          puVar4 = (undefined1 *)(*(int *)(param_1 + 0x14) + iVar1);
          for (; param_2 != 0; param_2 = param_2 + -1) {
            *puVar4 = *puVar3;
            puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
            puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
          }
          return param_1;
        }
        *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + i_val;
        param_2 = param_2 - i_val;
        puVar4 = (undefined1 *)(*(int *)(param_1 + 0x14) + iVar1);
        for (; i_val != 0; i_val = i_val + -1) {
          *puVar4 = *puVar3;
          puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
          puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
        }
        iVar1 = (**(code **)(param_1 + 0x1c))();
      } while (iVar1 == 0);
      FUN_0040286c(iVar1);
    }
    else {
      param_1 = (undefined *)FUN_0040286c(0x69);
    }
    return param_1;
  }
  return param_1;
}


/* ==== 00405d7b FUN_00405d7b ==== */

void FUN_00405d7b(undefined *param_1)

{
  undefined *puVar1;
  
  puVar1 = FUN_00405cb0(param_1,&DAT_004aa0b0,2);
  FUN_00405bfd((int)puVar1);
  return;
}


/* ==== 00405df8 FUN_00405df8 ==== */

void FUN_00405df8(undefined *param_1,char *param_2)

{
  char cVar1;
  uint i_val;
  char *pcVar2;
  
  i_val = 0xffffffff;
  pcVar2 = param_2;
  do {
    if (i_val == 0) break;
    i_val = i_val - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_00405d1b(param_1,-(~i_val - 1));
  FUN_00405cb0(param_1,param_2,~i_val - 1);
  return;
}


/* ==== 00405e28 FUN_00405e28 ==== */

void FUN_00405e28(int param_1)

{
  uint uVar1;
  
  if (param_1 < 0) {
    uVar1 = -param_1;
    if (0x13ff < (int)uVar1) {
      return;
    }
    if ((uVar1 >> 5 != 0) && (uVar1 >> 9 != 0)) {
      return;
    }
  }
  else if ((param_1 != 0) && (0x13ff < param_1)) {
    return;
  }
  return;
}


/* ==== 004060fc FUN_004060fc ==== */

int FUN_004060fc(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  return param_1 * param_4;
}


/* ==== 004061ec FUN_004061ec ==== */

int FUN_004061ec(int param_1,uint param_2,undefined4 param_3,uint param_4,uint param_5)

{
  ulonglong uVar1;
  int i_val;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  
  if ((param_5 == 0) && ((param_2 == 0 || (param_4 == 0)))) {
    param_1 = (int)(CONCAT44(param_2,param_1) / (ulonglong)param_4);
  }
  else {
    i_val = 0x40;
    uVar3 = 0;
    uVar2 = 0;
    do {
      bVar4 = param_1 < 0;
      param_1 = param_1 * 2;
      uVar1 = (ulonglong)CONCAT14(bVar4,param_2) << 1;
      param_2 = (uint)uVar1 | (uint)bVar4;
      bVar4 = (uVar1 & 0x100000000) != 0;
      uVar1 = (ulonglong)CONCAT14(bVar4,uVar2) << 1;
      uVar2 = (uint)uVar1 | (uint)bVar4;
      uVar3 = uVar3 << 1 | (uint)((uVar1 & 0x100000000) != 0);
      if ((param_5 <= uVar3) && ((param_5 < uVar3 || (param_4 <= uVar2)))) {
        bVar4 = uVar2 < param_4;
        uVar2 = uVar2 - param_4;
        uVar3 = (uVar3 - param_5) - (uint)bVar4;
        param_1 = param_1 + 1;
      }
      i_val = i_val + -1;
    } while (i_val != 0);
  }
  return param_1;
}


/* ==== 004062e1 FUN_004062e1 ==== */

uint FUN_004062e1(int param_1,uint param_2,undefined4 param_3,uint param_4,uint param_5)

{
  ulonglong uVar1;
  int i_val;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  
  if ((param_5 == 0) && ((param_2 == 0 || (param_4 == 0)))) {
    uVar2 = (uint)(CONCAT44(param_2,param_1) % (ulonglong)param_4);
  }
  else {
    i_val = 0x40;
    uVar3 = 0;
    uVar2 = 0;
    do {
      bVar4 = param_1 < 0;
      param_1 = param_1 * 2;
      uVar1 = (ulonglong)CONCAT14(bVar4,param_2) << 1;
      param_2 = (uint)uVar1 | (uint)bVar4;
      bVar4 = (uVar1 & 0x100000000) != 0;
      uVar1 = (ulonglong)CONCAT14(bVar4,uVar2) << 1;
      uVar2 = (uint)uVar1 | (uint)bVar4;
      uVar3 = uVar3 << 1 | (uint)((uVar1 & 0x100000000) != 0);
      if ((param_5 <= uVar3) && ((param_5 < uVar3 || (param_4 <= uVar2)))) {
        bVar4 = uVar2 < param_4;
        uVar2 = uVar2 - param_4;
        uVar3 = (uVar3 - param_5) - (uint)bVar4;
        param_1 = param_1 + 1;
      }
      i_val = i_val + -1;
    } while (i_val != 0);
  }
  return uVar2;
}


/* ==== 00406384 FUN_00406384 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00406384(void)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_10;
  undefined1 *puStack_c;
  undefined1 *puStack_8;
  
  puStack_8 = &stack0xfffffffc;
  puStack_c = &LAB_004063e2;
  uStack_10 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_10;
  _DAT_004ac42c = _DAT_004ac42c + 1;
  if (_DAT_004ac42c == 0) {
    FUN_00405c24(&DAT_004ac050);
    FUN_00405c24(&DAT_004ac21c);
    FUN_00401bac();
    FUN_00405038(&VARIANTARG_004ac414);
    FUN_00405038(&VARIANTARG_004ac404);
    FUN_00405038(&VARIANTARG_004ac3f4);
  }
  *in_FS_OFFSET = uStack_10;
  return;
}


/* ==== 004063ec FUN_004063ec ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004063ec(void)

{
  WORD WVar1;
  undefined4 uVar2;
  undefined2 extraout_var;
  undefined4 *in_FS_OFFSET;
  bool bVar3;
  undefined4 uStack_10;
  undefined1 *puStack_c;
  undefined1 *puStack_8;
  
  puStack_8 = &stack0xfffffffc;
  puStack_c = &LAB_004064d4;
  uStack_10 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_10;
  bVar3 = _DAT_004ac42c == 0;
  _DAT_004ac42c = _DAT_004ac42c + -1;
  if (bVar3) {
    DAT_004ac038 = 0;
    DAT_004ac040 = 0;
    DAT_004ac044 = 0;
    DAT_004ac04a = 2;
    DAT_004ac04b = 2;
    DAT_004ac04c = 3;
    VARIANTARG_004ac3f4.n1.n2.vt = 0;
    VARIANTARG_004ac404.n1.n2.vt = 1;
    VARIANTARG_004ac414.n1.n2.vt = 10;
    VARIANTARG_004ac414.n1._8_4_ = 0x80020004;
    DAT_004ac3e8 = 0x4049e4;
    DAT_004ac3ec = System__RunError;
    _DAT_004ac3f0 = 0x4049e4;
    uVar2 = FUN_00402dd0();
    if ((char)uVar2 != '\0') {
      FUN_00402e00();
    }
    FUN_00402ec4();
    FUN_00405b82((undefined4 *)&DAT_004ac050,"");
    FUN_00405b82((undefined4 *)&DAT_004ac21c,"");
    _DAT_004ac030 = GetCommandLineA();
    WVar1 = FUN_004013f8();
    DAT_004ac02c = CONCAT22(extraout_var,WVar1);
    _DAT_004ac024 = GetCurrentThreadId();
  }
  *in_FS_OFFSET = uStack_10;
  return;
}


/* ==== 004064e4 GetModuleFileNameA ==== */

DWORD __stdcall GetModuleFileNameA(HMODULE hModule,LPSTR lpFilename,DWORD nSize)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004064e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = GetModuleFileNameA(hModule,lpFilename,nSize);
  return DVar1;
}


/* ==== 004064ec GetModuleHandleA ==== */

HMODULE __stdcall GetModuleHandleA(LPCSTR lpModuleName)

{
  HMODULE pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004064ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = GetModuleHandleA(lpModuleName);
  return pHVar1;
}


/* ==== 004064f4 LocalAlloc ==== */

HLOCAL __stdcall LocalAlloc(UINT uFlags,SIZE_T uBytes)

{
  HLOCAL pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004064f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = LocalAlloc(uFlags,uBytes);
  return pvVar1;
}


/* ==== 004064fc TlsGetValue ==== */

LPVOID __stdcall TlsGetValue(DWORD dwTlsIndex)

{
  LPVOID pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004064fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = TlsGetValue(dwTlsIndex);
  return pvVar1;
}


/* ==== 00406504 TlsSetValue ==== */

BOOL __stdcall TlsSetValue(DWORD dwTlsIndex,LPVOID lpTlsValue)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406504. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = TlsSetValue(dwTlsIndex,lpTlsValue);
  return BVar1;
}


/* ==== 0040650c FUN_0040650c ==== */

void FUN_0040650c(void)

{
  HLOCAL lpTlsValue;
  
  if ((int)_tls_index < 0) {
    FUN_00403c34(0xe2);
  }
  lpTlsValue = LocalAlloc(0x40,0x10);
  if (lpTlsValue == (HLOCAL)0x0) {
    FUN_00403c34(0xe2);
  }
  else {
    TlsSetValue(_tls_index,lpTlsValue);
  }
  DAT_004ac4e4 = lpTlsValue;
  return;
}


/* ==== 0040655c FUN_0040655c ==== */

LPVOID FUN_0040655c(void)

{
  LPVOID tls_get_value;
  int in_FS_OFFSET;
  
  if (DAT_004ac4d0 == '\0') {
    return *(LPVOID *)(*(int *)(in_FS_OFFSET + 0x2c) + _tls_index * 4);
  }
  tls_get_value = TlsGetValue(_tls_index);
  if (tls_get_value != (LPVOID)0x0) {
    return tls_get_value;
  }
  FUN_0040650c();
  tls_get_value = TlsGetValue(_tls_index);
  if (tls_get_value != (LPVOID)0x0) {
    return tls_get_value;
  }
  return DAT_004ac4e4;
}


/* ==== 004065a0 FUN_004065a0 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004065a0(void)

{
  CHAR local_10c [264];
  
  GetModuleFileNameA(DAT_004ac4dc,local_10c,0x105);
  _DAT_004aa0c4 = FUN_004054a0(local_10c);
  if (_DAT_004aa0c4 == (HMODULE)0x0) {
    _DAT_004aa0c4 = DAT_004aa0b8;
  }
  FUN_00405788((undefined4 *)&DAT_004aa0b4);
  return;
}


/* ==== 004065ec FUN_004065ec ==== */

void FUN_004065ec(undefined4 param_1)

{
  undefined *puVar1;
  
  DAT_004aa0b8 = GetModuleHandleA((LPCSTR)0x0);
  puVar1 = &DAT_004aa0b4;
  DAT_004aa0bc = 0;
  DAT_004aa0c0 = 0;
  DAT_004ac4dc = DAT_004aa0b8;
  FUN_004065a0();
  FUN_004039fc(param_1,(int)puVar1);
  return;
}


/* ==== 00406658 RegCloseKey ==== */

LSTATUS __stdcall RegCloseKey(HKEY hKey)

{
  LSTATUS LVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406658. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LVar1 = RegCloseKey(hKey);
  return LVar1;
}


/* ==== 00406660 RegOpenKeyExA ==== */

LSTATUS __stdcall
RegOpenKeyExA(HKEY hKey,LPCSTR lpSubKey,DWORD ulOptions,REGSAM samDesired,PHKEY phkResult)

{
  LSTATUS LVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406660. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LVar1 = RegOpenKeyExA(hKey,lpSubKey,ulOptions,samDesired,phkResult);
  return LVar1;
}


/* ==== 00406668 RegQueryValueExA ==== */

LSTATUS __stdcall
RegQueryValueExA(HKEY hKey,LPCSTR lpValueName,LPDWORD lpReserved,LPDWORD lpType,LPBYTE lpData,
                LPDWORD lpcbData)

{
  LSTATUS LVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406668. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LVar1 = RegQueryValueExA(hKey,lpValueName,lpReserved,lpType,lpData,lpcbData);
  return LVar1;
}


/* ==== 00406670 CloseHandle ==== */

BOOL __stdcall CloseHandle(HANDLE hObject)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = CloseHandle(hObject);
  return BVar1;
}


/* ==== 00406678 CompareStringA ==== */

int __stdcall
CompareStringA(LCID Locale,DWORD dwCmpFlags,PCNZCH lpString1,int cchCount1,PCNZCH lpString2,
              int cchCount2)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406678. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = CompareStringA(Locale,dwCmpFlags,lpString1,cchCount1,lpString2,cchCount2);
  return iVar1;
}


/* ==== 00406680 CopyFileA ==== */

BOOL __stdcall CopyFileA(LPCSTR lpExistingFileName,LPCSTR lpNewFileName,BOOL bFailIfExists)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406680. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = CopyFileA(lpExistingFileName,lpNewFileName,bFailIfExists);
  return BVar1;
}


/* ==== 00406688 CreateEventA ==== */

HANDLE __stdcall
CreateEventA(LPSECURITY_ATTRIBUTES lpEventAttributes,BOOL bManualReset,BOOL bInitialState,
            LPCSTR lpName)

{
  HANDLE pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406688. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = CreateEventA(lpEventAttributes,bManualReset,bInitialState,lpName);
  return pvVar1;
}


/* ==== 00406690 CreateFileA ==== */

HANDLE __stdcall
CreateFileA(LPCSTR lpFileName,DWORD dwDesiredAccess,DWORD dwShareMode,
           LPSECURITY_ATTRIBUTES lpSecurityAttributes,DWORD dwCreationDisposition,
           DWORD dwFlagsAndAttributes,HANDLE hTemplateFile)

{
  HANDLE pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = CreateFileA(lpFileName,dwDesiredAccess,dwShareMode,lpSecurityAttributes,
                       dwCreationDisposition,dwFlagsAndAttributes,hTemplateFile);
  return pvVar1;
}


/* ==== 00406698 CreateThread ==== */

HANDLE __stdcall
CreateThread(LPSECURITY_ATTRIBUTES lpThreadAttributes,SIZE_T dwStackSize,
            LPTHREAD_START_ROUTINE lpStartAddress,LPVOID lpParameter,DWORD dwCreationFlags,
            LPDWORD lpThreadId)

{
  HANDLE pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406698. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = CreateThread(lpThreadAttributes,dwStackSize,lpStartAddress,lpParameter,dwCreationFlags,
                        lpThreadId);
  return pvVar1;
}


/* ==== 004066a0 DeleteCriticalSection ==== */

void __stdcall DeleteCriticalSection(LPCRITICAL_SECTION lpCriticalSection)

{
                    /* WARNING: Could not recover jumptable at 0x004066a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection(lpCriticalSection);
  return;
}


/* ==== 004066a8 DeleteFileA ==== */

BOOL __stdcall DeleteFileA(LPCSTR lpFileName)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004066a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = DeleteFileA(lpFileName);
  return BVar1;
}


/* ==== 004066b0 EnterCriticalSection ==== */

void __stdcall EnterCriticalSection(LPCRITICAL_SECTION lpCriticalSection)

{
                    /* WARNING: Could not recover jumptable at 0x004066b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  EnterCriticalSection(lpCriticalSection);
  return;
}


/* ==== 004066b8 EnumCalendarInfoA ==== */

BOOL __stdcall
EnumCalendarInfoA(CALINFO_ENUMPROCA lpCalInfoEnumProc,LCID Locale,CALID Calendar,CALTYPE CalType)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004066b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = EnumCalendarInfoA(lpCalInfoEnumProc,Locale,Calendar,CalType);
  return BVar1;
}


/* ==== 004066c0 FileTimeToDosDateTime ==== */

BOOL __stdcall FileTimeToDosDateTime(FILETIME *lpFileTime,LPWORD lpFatDate,LPWORD lpFatTime)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004066c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = FileTimeToDosDateTime(lpFileTime,lpFatDate,lpFatTime);
  return BVar1;
}


/* ==== 004066c8 FileTimeToLocalFileTime ==== */

BOOL __stdcall FileTimeToLocalFileTime(FILETIME *lpFileTime,LPFILETIME lpLocalFileTime)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004066c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = FileTimeToLocalFileTime(lpFileTime,lpLocalFileTime);
  return BVar1;
}


/* ==== 004066d0 FindClose ==== */

BOOL __stdcall FindClose(HANDLE hFindFile)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004066d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = FindClose(hFindFile);
  return BVar1;
}


/* ==== 004066d8 FindFirstFileA ==== */

HANDLE __stdcall FindFirstFileA(LPCSTR lpFileName,LPWIN32_FIND_DATAA lpFindFileData)

{
  HANDLE pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004066d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = FindFirstFileA(lpFileName,lpFindFileData);
  return pvVar1;
}


/* ==== 004066e0 FindNextFileA ==== */

BOOL __stdcall FindNextFileA(HANDLE hFindFile,LPWIN32_FIND_DATAA lpFindFileData)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004066e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = FindNextFileA(hFindFile,lpFindFileData);
  return BVar1;
}


/* ==== 004066e8 FindResourceA ==== */

HRSRC __stdcall FindResourceA(HMODULE hModule,LPCSTR lpName,LPCSTR lpType)

{
  HRSRC pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004066e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = FindResourceA(hModule,lpName,lpType);
  return pHVar1;
}


/* ==== 004066f0 FormatMessageA ==== */

DWORD __stdcall
FormatMessageA(DWORD dwFlags,LPCVOID lpSource,DWORD dwMessageId,DWORD dwLanguageId,LPSTR lpBuffer,
              DWORD nSize,va_list *Arguments)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004066f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = FormatMessageA(dwFlags,lpSource,dwMessageId,dwLanguageId,lpBuffer,nSize,Arguments);
  return DVar1;
}


/* ==== 004066f8 FreeLibrary ==== */

BOOL __stdcall FreeLibrary(HMODULE hLibModule)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004066f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = FreeLibrary(hLibModule);
  return BVar1;
}


/* ==== 00406700 FreeResource ==== */

BOOL __stdcall FreeResource(HGLOBAL hResData)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406700. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = FreeResource(hResData);
  return BVar1;
}


/* ==== 00406708 GetCPInfo ==== */

BOOL __stdcall GetCPInfo(UINT CodePage,LPCPINFO lpCPInfo)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406708. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = GetCPInfo(CodePage,lpCPInfo);
  return BVar1;
}


/* ==== 00406710 GetCurrentProcessId ==== */

DWORD __stdcall GetCurrentProcessId(void)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = GetCurrentProcessId();
  return DVar1;
}


/* ==== 00406718 GetCurrentThreadId ==== */

DWORD __stdcall GetCurrentThreadId(void)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406718. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = GetCurrentThreadId();
  return DVar1;
}


/* ==== 00406720 GetDateFormatA ==== */

int __stdcall
GetDateFormatA(LCID Locale,DWORD dwFlags,SYSTEMTIME *lpDate,LPCSTR lpFormat,LPSTR lpDateStr,
              int cchDate)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406720. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = GetDateFormatA(Locale,dwFlags,lpDate,lpFormat,lpDateStr,cchDate);
  return iVar1;
}


/* ==== 00406728 GetDiskFreeSpaceA ==== */

BOOL __stdcall
GetDiskFreeSpaceA(LPCSTR lpRootPathName,LPDWORD lpSectorsPerCluster,LPDWORD lpBytesPerSector,
                 LPDWORD lpNumberOfFreeClusters,LPDWORD lpTotalNumberOfClusters)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406728. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = GetDiskFreeSpaceA(lpRootPathName,lpSectorsPerCluster,lpBytesPerSector,
                            lpNumberOfFreeClusters,lpTotalNumberOfClusters);
  return BVar1;
}


/* ==== 00406730 GetFileAttributesA ==== */

DWORD __stdcall GetFileAttributesA(LPCSTR lpFileName)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406730. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = GetFileAttributesA(lpFileName);
  return DVar1;
}


/* ==== 00406738 GetLastError ==== */

DWORD __stdcall GetLastError(void)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406738. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = GetLastError();
  return DVar1;
}


/* ==== 00406740 GetLocalTime ==== */

void __stdcall GetLocalTime(LPSYSTEMTIME lpSystemTime)

{
                    /* WARNING: Could not recover jumptable at 0x00406740. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  GetLocalTime(lpSystemTime);
  return;
}


/* ==== 00406748 GetLocaleInfoA ==== */

int __stdcall GetLocaleInfoA(LCID Locale,LCTYPE LCType,LPSTR lpLCData,int cchData)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406748. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = GetLocaleInfoA(Locale,LCType,lpLCData,cchData);
  return iVar1;
}


/* ==== 00406750 GetModuleFileNameA ==== */

DWORD __stdcall GetModuleFileNameA(HMODULE hModule,LPSTR lpFilename,DWORD nSize)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406750. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = GetModuleFileNameA(hModule,lpFilename,nSize);
  return DVar1;
}


/* ==== 00406758 GetModuleHandleA ==== */

HMODULE __stdcall GetModuleHandleA(LPCSTR lpModuleName)

{
  HMODULE pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406758. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = GetModuleHandleA(lpModuleName);
  return pHVar1;
}


/* ==== 00406760 GetPrivateProfileStringA ==== */

DWORD __stdcall
GetPrivateProfileStringA
          (LPCSTR lpAppName,LPCSTR lpKeyName,LPCSTR lpDefault,LPSTR lpReturnedString,DWORD nSize,
          LPCSTR lpFileName)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406760. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = GetPrivateProfileStringA(lpAppName,lpKeyName,lpDefault,lpReturnedString,nSize,lpFileName);
  return DVar1;
}


/* ==== 00406768 GetProcAddress ==== */

FARPROC __stdcall GetProcAddress(HMODULE hModule,LPCSTR lpProcName)

{
  FARPROC pFVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406768. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pFVar1 = GetProcAddress(hModule,lpProcName);
  return pFVar1;
}


/* ==== 00406770 GetSystemInfo ==== */

void __stdcall GetSystemInfo(LPSYSTEM_INFO lpSystemInfo)

{
                    /* WARNING: Could not recover jumptable at 0x00406770. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  GetSystemInfo(lpSystemInfo);
  return;
}


/* ==== 00406778 GetThreadLocale ==== */

LCID __stdcall GetThreadLocale(void)

{
  LCID LVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406778. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LVar1 = GetThreadLocale();
  return LVar1;
}


/* ==== 00406780 GetTickCount ==== */

DWORD __stdcall GetTickCount(void)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406780. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = GetTickCount();
  return DVar1;
}


/* ==== 00406788 GetUserDefaultLCID ==== */

LCID __stdcall GetUserDefaultLCID(void)

{
  LCID LVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406788. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LVar1 = GetUserDefaultLCID();
  return LVar1;
}


/* ==== 00406790 GetVersion ==== */

DWORD __stdcall GetVersion(void)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = GetVersion();
  return DVar1;
}


/* ==== 00406798 GetVersionExA ==== */

BOOL __stdcall GetVersionExA(LPOSVERSIONINFOA lpVersionInformation)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406798. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = GetVersionExA(lpVersionInformation);
  return BVar1;
}


/* ==== 004067a0 GlobalAddAtomA ==== */

ATOM __stdcall GlobalAddAtomA(LPCSTR lpString)

{
  ATOM AVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004067a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  AVar1 = GlobalAddAtomA(lpString);
  return AVar1;
}


/* ==== 004067a8 GlobalAlloc ==== */

HGLOBAL __stdcall GlobalAlloc(UINT uFlags,SIZE_T dwBytes)

{
  HGLOBAL pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004067a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = GlobalAlloc(uFlags,dwBytes);
  return pvVar1;
}


/* ==== 004067b0 GlobalDeleteAtom ==== */

ATOM __stdcall GlobalDeleteAtom(ATOM nAtom)

{
  ATOM AVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004067b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  AVar1 = GlobalDeleteAtom(nAtom);
  return AVar1;
}


/* ==== 004067b8 GlobalFree ==== */

HGLOBAL __stdcall GlobalFree(HGLOBAL hMem)

{
  HGLOBAL pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004067b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = GlobalFree(hMem);
  return pvVar1;
}


/* ==== 004067c0 GlobalLock ==== */

LPVOID __stdcall GlobalLock(HGLOBAL hMem)

{
  LPVOID pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004067c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = GlobalLock(hMem);
  return pvVar1;
}


/* ==== 004067c8 GlobalHandle ==== */

HGLOBAL __stdcall GlobalHandle(LPCVOID pMem)

{
  HGLOBAL pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004067c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = GlobalHandle(pMem);
  return pvVar1;
}


/* ==== 004067d0 GlobalReAlloc ==== */

HGLOBAL __stdcall GlobalReAlloc(HGLOBAL hMem,SIZE_T dwBytes,UINT uFlags)

{
  HGLOBAL pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004067d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = GlobalReAlloc(hMem,dwBytes,uFlags);
  return pvVar1;
}


/* ==== 004067d8 GlobalSize ==== */

SIZE_T __stdcall GlobalSize(HGLOBAL hMem)

{
  SIZE_T SVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004067d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  SVar1 = GlobalSize(hMem);
  return SVar1;
}


/* ==== 004067e0 GlobalUnlock ==== */

BOOL __stdcall GlobalUnlock(HGLOBAL hMem)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004067e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = GlobalUnlock(hMem);
  return BVar1;
}


/* ==== 004067e8 InitializeCriticalSection ==== */

void __stdcall InitializeCriticalSection(LPCRITICAL_SECTION lpCriticalSection)

{
                    /* WARNING: Could not recover jumptable at 0x004067e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  InitializeCriticalSection(lpCriticalSection);
  return;
}


/* ==== 004067f0 LeaveCriticalSection ==== */

void __stdcall LeaveCriticalSection(LPCRITICAL_SECTION lpCriticalSection)

{
                    /* WARNING: Could not recover jumptable at 0x004067f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection(lpCriticalSection);
  return;
}


/* ==== 004067f8 LoadLibraryA ==== */

HMODULE __stdcall LoadLibraryA(LPCSTR lpLibFileName)

{
  HMODULE pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004067f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = LoadLibraryA(lpLibFileName);
  return pHVar1;
}


/* ==== 00406800 LoadResource ==== */

HGLOBAL __stdcall LoadResource(HMODULE hModule,HRSRC hResInfo)

{
  HGLOBAL pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406800. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = LoadResource(hModule,hResInfo);
  return pvVar1;
}


/* ==== 00406808 LockResource ==== */

LPVOID __stdcall LockResource(HGLOBAL hResData)

{
  LPVOID pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406808. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = LockResource(hResData);
  return pvVar1;
}


/* ==== 00406810 MoveFileA ==== */

BOOL __stdcall MoveFileA(LPCSTR lpExistingFileName,LPCSTR lpNewFileName)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406810. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = MoveFileA(lpExistingFileName,lpNewFileName);
  return BVar1;
}


/* ==== 00406818 MulDiv ==== */

int __stdcall MulDiv(int nNumber,int nNumerator,int nDenominator)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406818. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = MulDiv(nNumber,nNumerator,nDenominator);
  return iVar1;
}


/* ==== 00406820 MultiByteToWideChar ==== */

int __stdcall
MultiByteToWideChar(UINT CodePage,DWORD dwFlags,LPCSTR lpMultiByteStr,int cbMultiByte,
                   LPWSTR lpWideCharStr,int cchWideChar)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406820. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = MultiByteToWideChar(CodePage,dwFlags,lpMultiByteStr,cbMultiByte,lpWideCharStr,cchWideChar)
  ;
  return iVar1;
}


/* ==== 00406828 ReadFile ==== */

BOOL __stdcall
ReadFile(HANDLE hFile,LPVOID lpBuffer,DWORD nNumberOfBytesToRead,LPDWORD lpNumberOfBytesRead,
        LPOVERLAPPED lpOverlapped)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406828. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = ReadFile(hFile,lpBuffer,nNumberOfBytesToRead,lpNumberOfBytesRead,lpOverlapped);
  return BVar1;
}


/* ==== 00406830 SetEndOfFile ==== */

BOOL __stdcall SetEndOfFile(HANDLE hFile)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406830. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = SetEndOfFile(hFile);
  return BVar1;
}


/* ==== 00406838 SetErrorMode ==== */

UINT __stdcall SetErrorMode(UINT uMode)

{
  UINT UVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406838. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  UVar1 = SetErrorMode(uMode);
  return UVar1;
}


/* ==== 00406840 SetEvent ==== */

BOOL __stdcall SetEvent(HANDLE hEvent)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406840. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = SetEvent(hEvent);
  return BVar1;
}


/* ==== 00406848 SetFileAttributesA ==== */

BOOL __stdcall SetFileAttributesA(LPCSTR lpFileName,DWORD dwFileAttributes)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406848. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = SetFileAttributesA(lpFileName,dwFileAttributes);
  return BVar1;
}


/* ==== 00406850 SetFilePointer ==== */

DWORD __stdcall
SetFilePointer(HANDLE hFile,LONG lDistanceToMove,PLONG lpDistanceToMoveHigh,DWORD dwMoveMethod)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = SetFilePointer(hFile,lDistanceToMove,lpDistanceToMoveHigh,dwMoveMethod);
  return DVar1;
}


/* ==== 00406858 SetThreadLocale ==== */

BOOL __stdcall SetThreadLocale(LCID Locale)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406858. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = SetThreadLocale(Locale);
  return BVar1;
}


/* ==== 00406860 SizeofResource ==== */

DWORD __stdcall SizeofResource(HMODULE hModule,HRSRC hResInfo)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406860. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = SizeofResource(hModule,hResInfo);
  return DVar1;
}


/* ==== 00406868 Sleep ==== */

void __stdcall Sleep(DWORD dwMilliseconds)

{
                    /* WARNING: Could not recover jumptable at 0x00406868. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  Sleep(dwMilliseconds);
  return;
}


/* ==== 00406870 VirtualAlloc ==== */

LPVOID __stdcall VirtualAlloc(LPVOID lpAddress,SIZE_T dwSize,DWORD flAllocationType,DWORD flProtect)

{
  LPVOID pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406870. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = VirtualAlloc(lpAddress,dwSize,flAllocationType,flProtect);
  return pvVar1;
}


/* ==== 00406878 VirtualQuery ==== */

SIZE_T __stdcall VirtualQuery(LPCVOID lpAddress,PMEMORY_BASIC_INFORMATION lpBuffer,SIZE_T dwLength)

{
  SIZE_T SVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406878. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  SVar1 = VirtualQuery(lpAddress,lpBuffer,dwLength);
  return SVar1;
}


/* ==== 00406880 WaitForSingleObject ==== */

DWORD __stdcall WaitForSingleObject(HANDLE hHandle,DWORD dwMilliseconds)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406880. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = WaitForSingleObject(hHandle,dwMilliseconds);
  return DVar1;
}


/* ==== 00406888 WideCharToMultiByte ==== */

int __stdcall
WideCharToMultiByte(UINT CodePage,DWORD dwFlags,LPCWSTR lpWideCharStr,int cchWideChar,
                   LPSTR lpMultiByteStr,int cbMultiByte,LPCSTR lpDefaultChar,
                   LPBOOL lpUsedDefaultChar)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406888. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = WideCharToMultiByte(CodePage,dwFlags,lpWideCharStr,cchWideChar,lpMultiByteStr,cbMultiByte,
                              lpDefaultChar,lpUsedDefaultChar);
  return iVar1;
}


/* ==== 00406890 WriteFile ==== */

BOOL __stdcall
WriteFile(HANDLE hFile,LPCVOID lpBuffer,DWORD nNumberOfBytesToWrite,LPDWORD lpNumberOfBytesWritten,
         LPOVERLAPPED lpOverlapped)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406890. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = WriteFile(hFile,lpBuffer,nNumberOfBytesToWrite,lpNumberOfBytesWritten,lpOverlapped);
  return BVar1;
}


/* ==== 00406898 WritePrivateProfileStringA ==== */

BOOL __stdcall
WritePrivateProfileStringA(LPCSTR lpAppName,LPCSTR lpKeyName,LPCSTR lpString,LPCSTR lpFileName)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406898. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = WritePrivateProfileStringA(lpAppName,lpKeyName,lpString,lpFileName);
  return BVar1;
}


/* ==== 004068a0 lstrcpyA ==== */

LPSTR __stdcall lstrcpyA(LPSTR lpString1,LPCSTR lpString2)

{
  LPSTR pCVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004068a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pCVar1 = lstrcpyA(lpString1,lpString2);
  return pCVar1;
}


/* ==== 004068a8 GetFileVersionInfoA ==== */

BOOL __stdcall GetFileVersionInfoA(LPCSTR lptstrFilename,DWORD dwHandle,DWORD dwLen,LPVOID lpData)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004068a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = GetFileVersionInfoA(lptstrFilename,dwHandle,dwLen,lpData);
  return BVar1;
}


/* ==== 004068b0 GetFileVersionInfoSizeA ==== */

DWORD __stdcall GetFileVersionInfoSizeA(LPCSTR lptstrFilename,LPDWORD lpdwHandle)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004068b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = GetFileVersionInfoSizeA(lptstrFilename,lpdwHandle);
  return DVar1;
}


/* ==== 004068b8 VerQueryValueA ==== */

BOOL __stdcall VerQueryValueA(LPCVOID pBlock,LPCSTR lpSubBlock,LPVOID *lplpBuffer,PUINT puLen)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004068b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = VerQueryValueA(pBlock,lpSubBlock,lplpBuffer,puLen);
  return BVar1;
}


/* ==== 004068c8 BitBlt ==== */

BOOL __stdcall BitBlt(HDC hdc,int x,int y,int cx,int cy,HDC hdcSrc,int x1,int y1,DWORD rop)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004068c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = BitBlt(hdc,x,y,cx,cy,hdcSrc,x1,y1,rop);
  return BVar1;
}


/* ==== 004068d0 CloseEnhMetaFile ==== */

HENHMETAFILE __stdcall CloseEnhMetaFile(HDC hdc)

{
  HENHMETAFILE pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004068d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = CloseEnhMetaFile(hdc);
  return pHVar1;
}


/* ==== 004068d8 CombineRgn ==== */

int __stdcall CombineRgn(HRGN hrgnDst,HRGN hrgnSrc1,HRGN hrgnSrc2,int iMode)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004068d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = CombineRgn(hrgnDst,hrgnSrc1,hrgnSrc2,iMode);
  return iVar1;
}


/* ==== 004068e0 CopyEnhMetaFileA ==== */

HENHMETAFILE __stdcall CopyEnhMetaFileA(HENHMETAFILE hEnh,LPCSTR lpFileName)

{
  HENHMETAFILE pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004068e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = CopyEnhMetaFileA(hEnh,lpFileName);
  return pHVar1;
}


/* ==== 004068e8 CreateBitmap ==== */

HBITMAP __stdcall CreateBitmap(int nWidth,int nHeight,UINT nPlanes,UINT nBitCount,void *lpBits)

{
  HBITMAP pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004068e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = CreateBitmap(nWidth,nHeight,nPlanes,nBitCount,lpBits);
  return pHVar1;
}


/* ==== 004068f0 CreateBrushIndirect ==== */

HBRUSH __stdcall CreateBrushIndirect(LOGBRUSH *plbrush)

{
  HBRUSH pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004068f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = CreateBrushIndirect(plbrush);
  return pHVar1;
}


/* ==== 004068f8 CreateCompatibleBitmap ==== */

HBITMAP __stdcall CreateCompatibleBitmap(HDC hdc,int cx,int cy)

{
  HBITMAP pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004068f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = CreateCompatibleBitmap(hdc,cx,cy);
  return pHVar1;
}


/* ==== 00406900 CreateCompatibleDC ==== */

HDC __stdcall CreateCompatibleDC(HDC hdc)

{
  HDC pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406900. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = CreateCompatibleDC(hdc);
  return pHVar1;
}


/* ==== 00406908 CreateDIBSection ==== */

HBITMAP __stdcall
CreateDIBSection(HDC hdc,BITMAPINFO *lpbmi,UINT usage,void **ppvBits,HANDLE hSection,DWORD offset)

{
  HBITMAP pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406908. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = CreateDIBSection(hdc,lpbmi,usage,ppvBits,hSection,offset);
  return pHVar1;
}


/* ==== 00406910 CreateDIBitmap ==== */

HBITMAP __stdcall
CreateDIBitmap(HDC hdc,BITMAPINFOHEADER *pbmih,DWORD flInit,void *pjBits,BITMAPINFO *pbmi,
              UINT iUsage)

{
  HBITMAP pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406910. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = CreateDIBitmap(hdc,pbmih,flInit,pjBits,pbmi,iUsage);
  return pHVar1;
}


/* ==== 00406918 CreateEnhMetaFileA ==== */

HDC __stdcall CreateEnhMetaFileA(HDC hdc,LPCSTR lpFilename,RECT *lprc,LPCSTR lpDesc)

{
  HDC pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406918. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = CreateEnhMetaFileA(hdc,lpFilename,lprc,lpDesc);
  return pHVar1;
}


/* ==== 00406928 CreateFontIndirectA ==== */

HFONT __stdcall CreateFontIndirectA(LOGFONTA *lplf)

{
  HFONT pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406928. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = CreateFontIndirectA(lplf);
  return pHVar1;
}


/* ==== 00406930 CreateHalftonePalette ==== */

HPALETTE __stdcall CreateHalftonePalette(HDC hdc)

{
  HPALETTE pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = CreateHalftonePalette(hdc);
  return pHVar1;
}


/* ==== 00406938 CreatePalette ==== */

HPALETTE __stdcall CreatePalette(LOGPALETTE *plpal)

{
  HPALETTE pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406938. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = CreatePalette(plpal);
  return pHVar1;
}


/* ==== 00406940 CreatePenIndirect ==== */

HPEN __stdcall CreatePenIndirect(LOGPEN *plpen)

{
  HPEN pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406940. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = CreatePenIndirect(plpen);
  return pHVar1;
}


/* ==== 00406948 CreatePolygonRgn ==== */

HRGN __stdcall CreatePolygonRgn(POINT *pptl,int cPoint,int iMode)

{
  HRGN pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406948. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = CreatePolygonRgn(pptl,cPoint,iMode);
  return pHVar1;
}


/* ==== 00406950 CreateRectRgn ==== */

HRGN __stdcall CreateRectRgn(int x1,int y1,int x2,int y2)

{
  HRGN pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406950. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = CreateRectRgn(x1,y1,x2,y2);
  return pHVar1;
}


/* ==== 00406960 CreateSolidBrush ==== */

HBRUSH __stdcall CreateSolidBrush(COLORREF color)

{
  HBRUSH pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406960. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = CreateSolidBrush(color);
  return pHVar1;
}


/* ==== 00406968 DeleteDC ==== */

BOOL __stdcall DeleteDC(HDC hdc)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406968. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = DeleteDC(hdc);
  return BVar1;
}


/* ==== 00406970 DeleteEnhMetaFile ==== */

BOOL __stdcall DeleteEnhMetaFile(HENHMETAFILE hmf)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = DeleteEnhMetaFile(hmf);
  return BVar1;
}


/* ==== 00406978 DeleteObject ==== */

BOOL __stdcall DeleteObject(HGDIOBJ ho)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406978. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = DeleteObject(ho);
  return BVar1;
}


/* ==== 00406980 ExcludeClipRect ==== */

int __stdcall ExcludeClipRect(HDC hdc,int left,int top,int right,int bottom)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406980. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = ExcludeClipRect(hdc,left,top,right,bottom);
  return iVar1;
}


/* ==== 00406988 ExtTextOutA ==== */

BOOL __stdcall
ExtTextOutA(HDC hdc,int x,int y,UINT options,RECT *lprect,LPCSTR lpString,UINT c,INT *lpDx)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406988. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = ExtTextOutA(hdc,x,y,options,lprect,lpString,c,lpDx);
  return BVar1;
}


/* ==== 00406990 GdiFlush ==== */

BOOL __stdcall GdiFlush(void)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = GdiFlush();
  return BVar1;
}


/* ==== 00406998 GetBitmapBits ==== */

LONG __stdcall GetBitmapBits(HBITMAP hbit,LONG cb,LPVOID lpvBits)

{
  LONG LVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406998. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LVar1 = GetBitmapBits(hbit,cb,lpvBits);
  return LVar1;
}


/* ==== 004069a0 GetBrushOrgEx ==== */

BOOL __stdcall GetBrushOrgEx(HDC hdc,LPPOINT lppt)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004069a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = GetBrushOrgEx(hdc,lppt);
  return BVar1;
}


/* ==== 004069a8 GetClipBox ==== */

int __stdcall GetClipBox(HDC hdc,LPRECT lprect)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004069a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = GetClipBox(hdc,lprect);
  return iVar1;
}


/* ==== 004069b0 GetCurrentPositionEx ==== */

BOOL __stdcall GetCurrentPositionEx(HDC hdc,LPPOINT lppt)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004069b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = GetCurrentPositionEx(hdc,lppt);
  return BVar1;
}


/* ==== 004069b8 GetDCOrgEx ==== */

BOOL __stdcall GetDCOrgEx(HDC hdc,LPPOINT lppt)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004069b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = GetDCOrgEx(hdc,lppt);
  return BVar1;
}


/* ==== 004069c0 GetDIBColorTable ==== */

UINT __stdcall GetDIBColorTable(HDC hdc,UINT iStart,UINT cEntries,RGBQUAD *prgbq)

{
  UINT UVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004069c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  UVar1 = GetDIBColorTable(hdc,iStart,cEntries,prgbq);
  return UVar1;
}


/* ==== 004069c8 GetDIBits ==== */

int __stdcall
GetDIBits(HDC hdc,HBITMAP hbm,UINT start,UINT cLines,LPVOID lpvBits,LPBITMAPINFO lpbmi,UINT usage)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004069c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = GetDIBits(hdc,hbm,start,cLines,lpvBits,lpbmi,usage);
  return iVar1;
}


/* ==== 004069d0 GetDeviceCaps ==== */

int __stdcall GetDeviceCaps(HDC hdc,int index)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004069d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = GetDeviceCaps(hdc,index);
  return iVar1;
}


/* ==== 004069d8 GetEnhMetaFileBits ==== */

UINT __stdcall GetEnhMetaFileBits(HENHMETAFILE hEMF,UINT nSize,LPBYTE lpData)

{
  UINT UVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004069d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  UVar1 = GetEnhMetaFileBits(hEMF,nSize,lpData);
  return UVar1;
}


/* ==== 004069e0 GetEnhMetaFileDescriptionA ==== */

UINT __stdcall GetEnhMetaFileDescriptionA(HENHMETAFILE hemf,UINT cchBuffer,LPSTR lpDescription)

{
  UINT UVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004069e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  UVar1 = GetEnhMetaFileDescriptionA(hemf,cchBuffer,lpDescription);
  return UVar1;
}


/* ==== 004069e8 GetEnhMetaFileHeader ==== */

UINT __stdcall GetEnhMetaFileHeader(HENHMETAFILE hemf,UINT nSize,LPENHMETAHEADER lpEnhMetaHeader)

{
  UINT UVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004069e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  UVar1 = GetEnhMetaFileHeader(hemf,nSize,lpEnhMetaHeader);
  return UVar1;
}


/* ==== 004069f0 GetEnhMetaFilePaletteEntries ==== */

UINT __stdcall
GetEnhMetaFilePaletteEntries(HENHMETAFILE hemf,UINT nNumEntries,LPPALETTEENTRY lpPaletteEntries)

{
  UINT UVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004069f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  UVar1 = GetEnhMetaFilePaletteEntries(hemf,nNumEntries,lpPaletteEntries);
  return UVar1;
}


/* ==== 004069f8 GetObjectA ==== */

int __stdcall GetObjectA(HANDLE h,int c,LPVOID pv)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004069f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = GetObjectA(h,c,pv);
  return iVar1;
}


/* ==== 00406a00 GetPaletteEntries ==== */

UINT __stdcall GetPaletteEntries(HPALETTE hpal,UINT iStart,UINT cEntries,LPPALETTEENTRY pPalEntries)

{
  UINT UVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406a00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  UVar1 = GetPaletteEntries(hpal,iStart,cEntries,pPalEntries);
  return UVar1;
}


/* ==== 00406a08 GetPixel ==== */

COLORREF __stdcall GetPixel(HDC hdc,int x,int y)

{
  COLORREF CVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406a08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CVar1 = GetPixel(hdc,x,y);
  return CVar1;
}


/* ==== 00406a10 GetStockObject ==== */

HGDIOBJ __stdcall GetStockObject(int i)

{
  HGDIOBJ pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406a10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = GetStockObject(i);
  return pvVar1;
}


/* ==== 00406a18 GetSystemPaletteEntries ==== */

UINT __stdcall GetSystemPaletteEntries(HDC hdc,UINT iStart,UINT cEntries,LPPALETTEENTRY pPalEntries)

{
  UINT UVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406a18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  UVar1 = GetSystemPaletteEntries(hdc,iStart,cEntries,pPalEntries);
  return UVar1;
}


/* ==== 00406a20 GetTextExtentPoint32A ==== */

BOOL __stdcall GetTextExtentPoint32A(HDC hdc,LPCSTR lpString,int c,LPSIZE psizl)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406a20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = GetTextExtentPoint32A(hdc,lpString,c,psizl);
  return BVar1;
}


/* ==== 00406a28 GetTextExtentPointA ==== */

BOOL __stdcall GetTextExtentPointA(HDC hdc,LPCSTR lpString,int c,LPSIZE lpsz)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406a28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = GetTextExtentPointA(hdc,lpString,c,lpsz);
  return BVar1;
}


/* ==== 00406a30 GetTextMetricsA ==== */

BOOL __stdcall GetTextMetricsA(HDC hdc,LPTEXTMETRICA lptm)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406a30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = GetTextMetricsA(hdc,lptm);
  return BVar1;
}


/* ==== 00406a38 GetWinMetaFileBits ==== */

UINT __stdcall
GetWinMetaFileBits(HENHMETAFILE hemf,UINT cbData16,LPBYTE pData16,INT iMapMode,HDC hdcRef)

{
  UINT UVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406a38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  UVar1 = GetWinMetaFileBits(hemf,cbData16,pData16,iMapMode,hdcRef);
  return UVar1;
}


/* ==== 00406a40 GetWindowOrgEx ==== */

BOOL __stdcall GetWindowOrgEx(HDC hdc,LPPOINT lppoint)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406a40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = GetWindowOrgEx(hdc,lppoint);
  return BVar1;
}


/* ==== 00406a48 IntersectClipRect ==== */

int __stdcall IntersectClipRect(HDC hdc,int left,int top,int right,int bottom)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406a48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = IntersectClipRect(hdc,left,top,right,bottom);
  return iVar1;
}


/* ==== 00406a50 LPtoDP ==== */

BOOL __stdcall LPtoDP(HDC hdc,LPPOINT lppt,int c)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406a50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = LPtoDP(hdc,lppt,c);
  return BVar1;
}


/* ==== 00406a58 LineTo ==== */

BOOL __stdcall LineTo(HDC hdc,int x,int y)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406a58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = LineTo(hdc,x,y);
  return BVar1;
}


/* ==== 00406a60 MaskBlt ==== */

BOOL __stdcall
MaskBlt(HDC hdcDest,int xDest,int yDest,int width,int height,HDC hdcSrc,int xSrc,int ySrc,
       HBITMAP hbmMask,int xMask,int yMask,DWORD rop)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406a60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = MaskBlt(hdcDest,xDest,yDest,width,height,hdcSrc,xSrc,ySrc,hbmMask,xMask,yMask,rop);
  return BVar1;
}


/* ==== 00406a68 MoveToEx ==== */

BOOL __stdcall MoveToEx(HDC hdc,int x,int y,LPPOINT lppt)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406a68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = MoveToEx(hdc,x,y,lppt);
  return BVar1;
}


/* ==== 00406a70 PatBlt ==== */

BOOL __stdcall PatBlt(HDC hdc,int x,int y,int w,int h,DWORD rop)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406a70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = PatBlt(hdc,x,y,w,h,rop);
  return BVar1;
}


/* ==== 00406a78 PlayEnhMetaFile ==== */

BOOL __stdcall PlayEnhMetaFile(HDC hdc,HENHMETAFILE hmf,RECT *lprect)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406a78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = PlayEnhMetaFile(hdc,hmf,lprect);
  return BVar1;
}


/* ==== 00406a80 Polyline ==== */

BOOL __stdcall Polyline(HDC hdc,POINT *apt,int cpt)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406a80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = Polyline(hdc,apt,cpt);
  return BVar1;
}


/* ==== 00406a88 RealizePalette ==== */

UINT __stdcall RealizePalette(HDC hdc)

{
  UINT UVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406a88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  UVar1 = RealizePalette(hdc);
  return UVar1;
}


/* ==== 00406a90 RectVisible ==== */

BOOL __stdcall RectVisible(HDC hdc,RECT *lprect)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406a90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = RectVisible(hdc,lprect);
  return BVar1;
}


/* ==== 00406a98 Rectangle ==== */

BOOL __stdcall Rectangle(HDC hdc,int left,int top,int right,int bottom)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406a98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = Rectangle(hdc,left,top,right,bottom);
  return BVar1;
}


/* ==== 00406aa0 RemoveFontResourceA ==== */

BOOL __stdcall RemoveFontResourceA(LPCSTR lpFileName)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406aa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = RemoveFontResourceA(lpFileName);
  return BVar1;
}


/* ==== 00406aa8 RestoreDC ==== */

BOOL __stdcall RestoreDC(HDC hdc,int nSavedDC)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406aa8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = RestoreDC(hdc,nSavedDC);
  return BVar1;
}


/* ==== 00406ab0 SaveDC ==== */

int __stdcall SaveDC(HDC hdc)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406ab0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = SaveDC(hdc);
  return iVar1;
}


/* ==== 00406ab8 SelectObject ==== */

HGDIOBJ __stdcall SelectObject(HDC hdc,HGDIOBJ h)

{
  HGDIOBJ pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406ab8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = SelectObject(hdc,h);
  return pvVar1;
}


/* ==== 00406ac0 SelectPalette ==== */

HPALETTE __stdcall SelectPalette(HDC hdc,HPALETTE hPal,BOOL bForceBkgd)

{
  HPALETTE pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406ac0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = SelectPalette(hdc,hPal,bForceBkgd);
  return pHVar1;
}


/* ==== 00406ac8 SetBkColor ==== */

COLORREF __stdcall SetBkColor(HDC hdc,COLORREF color)

{
  COLORREF CVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406ac8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CVar1 = SetBkColor(hdc,color);
  return CVar1;
}


/* ==== 00406ad0 SetBkMode ==== */

int __stdcall SetBkMode(HDC hdc,int mode)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406ad0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = SetBkMode(hdc,mode);
  return iVar1;
}


/* ==== 00406ad8 SetBrushOrgEx ==== */

BOOL __stdcall SetBrushOrgEx(HDC hdc,int x,int y,LPPOINT lppt)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406ad8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = SetBrushOrgEx(hdc,x,y,lppt);
  return BVar1;
}


/* ==== 00406ae0 SetDIBColorTable ==== */

UINT __stdcall SetDIBColorTable(HDC hdc,UINT iStart,UINT cEntries,RGBQUAD *prgbq)

{
  UINT UVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406ae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  UVar1 = SetDIBColorTable(hdc,iStart,cEntries,prgbq);
  return UVar1;
}


/* ==== 00406ae8 SetEnhMetaFileBits ==== */

HENHMETAFILE __stdcall SetEnhMetaFileBits(UINT nSize,BYTE *pb)

{
  HENHMETAFILE pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406ae8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = SetEnhMetaFileBits(nSize,pb);
  return pHVar1;
}


/* ==== 00406af0 SetMapMode ==== */

int __stdcall SetMapMode(HDC hdc,int iMode)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406af0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = SetMapMode(hdc,iMode);
  return iVar1;
}


/* ==== 00406af8 SetPixel ==== */

COLORREF __stdcall SetPixel(HDC hdc,int x,int y,COLORREF color)

{
  COLORREF CVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406af8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CVar1 = SetPixel(hdc,x,y,color);
  return CVar1;
}


/* ==== 00406b00 SetROP2 ==== */

int __stdcall SetROP2(HDC hdc,int rop2)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406b00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = SetROP2(hdc,rop2);
  return iVar1;
}


/* ==== 00406b08 SetStretchBltMode ==== */

int __stdcall SetStretchBltMode(HDC hdc,int mode)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406b08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = SetStretchBltMode(hdc,mode);
  return iVar1;
}


/* ==== 00406b10 SetTextColor ==== */

COLORREF __stdcall SetTextColor(HDC hdc,COLORREF color)

{
  COLORREF CVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CVar1 = SetTextColor(hdc,color);
  return CVar1;
}


/* ==== 00406b18 SetViewportOrgEx ==== */

BOOL __stdcall SetViewportOrgEx(HDC hdc,int x,int y,LPPOINT lppt)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406b18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = SetViewportOrgEx(hdc,x,y,lppt);
  return BVar1;
}


/* ==== 00406b20 SetWinMetaFileBits ==== */

HENHMETAFILE __stdcall
SetWinMetaFileBits(UINT nSize,BYTE *lpMeta16Data,HDC hdcRef,METAFILEPICT *lpMFP)

{
  HENHMETAFILE pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406b20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = SetWinMetaFileBits(nSize,lpMeta16Data,hdcRef,lpMFP);
  return pHVar1;
}


/* ==== 00406b28 SetWindowOrgEx ==== */

BOOL __stdcall SetWindowOrgEx(HDC hdc,int x,int y,LPPOINT lppt)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406b28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = SetWindowOrgEx(hdc,x,y,lppt);
  return BVar1;
}


/* ==== 00406b30 StretchBlt ==== */

BOOL __stdcall
StretchBlt(HDC hdcDest,int xDest,int yDest,int wDest,int hDest,HDC hdcSrc,int xSrc,int ySrc,int wSrc
          ,int hSrc,DWORD rop)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406b30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = StretchBlt(hdcDest,xDest,yDest,wDest,hDest,hdcSrc,xSrc,ySrc,wSrc,hSrc,rop);
  return BVar1;
}


/* ==== 00406b38 StretchDIBits ==== */

int __stdcall
StretchDIBits(HDC hdc,int xDest,int yDest,int DestWidth,int DestHeight,int xSrc,int ySrc,
             int SrcWidth,int SrcHeight,void *lpBits,BITMAPINFO *lpbmi,UINT iUsage,DWORD rop)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406b38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = StretchDIBits(hdc,xDest,yDest,DestWidth,DestHeight,xSrc,ySrc,SrcWidth,SrcHeight,lpBits,
                        lpbmi,iUsage,rop);
  return iVar1;
}


/* ==== 00406b40 UnrealizeObject ==== */

BOOL __stdcall UnrealizeObject(HGDIOBJ h)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406b40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = UnrealizeObject(h);
  return BVar1;
}


/* ==== 00406b48 ActivateKeyboardLayout ==== */

HKL __stdcall ActivateKeyboardLayout(HKL hkl,UINT Flags)

{
  HKL pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406b48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = ActivateKeyboardLayout(hkl,Flags);
  return pHVar1;
}


/* ==== 00406b50 AdjustWindowRectEx ==== */

BOOL __stdcall AdjustWindowRectEx(LPRECT lpRect,DWORD dwStyle,BOOL bMenu,DWORD dwExStyle)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406b50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = AdjustWindowRectEx(lpRect,dwStyle,bMenu,dwExStyle);
  return BVar1;
}


/* ==== 00406b58 CharLowerA ==== */

LPSTR __stdcall CharLowerA(LPSTR lpsz)

{
  LPSTR pCVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406b58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pCVar1 = CharLowerA(lpsz);
  return pCVar1;
}


/* ==== 00406b60 BeginPaint ==== */

HDC __stdcall BeginPaint(HWND hWnd,LPPAINTSTRUCT lpPaint)

{
  HDC pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406b60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = BeginPaint(hWnd,lpPaint);
  return pHVar1;
}


/* ==== 00406b68 CallNextHookEx ==== */

LRESULT __stdcall CallNextHookEx(HHOOK hhk,int nCode,WPARAM wParam,LPARAM lParam)

{
  LRESULT LVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406b68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LVar1 = CallNextHookEx(hhk,nCode,wParam,lParam);
  return LVar1;
}


/* ==== 00406b70 CallWindowProcA ==== */

LRESULT __stdcall
CallWindowProcA(WNDPROC lpPrevWndFunc,HWND hWnd,UINT Msg,WPARAM wParam,LPARAM lParam)

{
  LRESULT LVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LVar1 = CallWindowProcA(lpPrevWndFunc,hWnd,Msg,wParam,lParam);
  return LVar1;
}


/* ==== 00406b78 ChangeDisplaySettingsA ==== */

LONG __stdcall ChangeDisplaySettingsA(DEVMODEA *lpDevMode,DWORD dwFlags)

{
  LONG LVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406b78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LVar1 = ChangeDisplaySettingsA(lpDevMode,dwFlags);
  return LVar1;
}


/* ==== 00406b80 CharLowerBuffA ==== */

DWORD __stdcall CharLowerBuffA(LPSTR lpsz,DWORD cchLength)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406b80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = CharLowerBuffA(lpsz,cchLength);
  return DVar1;
}


/* ==== 00406b88 CheckMenuItem ==== */

DWORD __stdcall CheckMenuItem(HMENU hMenu,UINT uIDCheckItem,UINT uCheck)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406b88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = CheckMenuItem(hMenu,uIDCheckItem,uCheck);
  return DVar1;
}


/* ==== 00406b90 ClientToScreen ==== */

BOOL __stdcall ClientToScreen(HWND hWnd,LPPOINT lpPoint)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406b90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = ClientToScreen(hWnd,lpPoint);
  return BVar1;
}


/* ==== 00406b98 CloseClipboard ==== */

BOOL __stdcall CloseClipboard(void)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406b98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = CloseClipboard();
  return BVar1;
}


/* ==== 00406ba0 CreateIcon ==== */

HICON __stdcall
CreateIcon(HINSTANCE hInstance,int nWidth,int nHeight,BYTE cPlanes,BYTE cBitsPixel,BYTE *lpbANDbits,
          BYTE *lpbXORbits)

{
  HICON pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406ba0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = CreateIcon(hInstance,nWidth,nHeight,cPlanes,cBitsPixel,lpbANDbits,lpbXORbits);
  return pHVar1;
}


/* ==== 00406ba8 CreateMenu ==== */

HMENU __stdcall CreateMenu(void)

{
  HMENU pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = CreateMenu();
  return pHVar1;
}


/* ==== 00406bb0 CreatePopupMenu ==== */

HMENU __stdcall CreatePopupMenu(void)

{
  HMENU pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406bb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = CreatePopupMenu();
  return pHVar1;
}


/* ==== 00406bb8 CreateWindowExA ==== */

HWND __stdcall
CreateWindowExA(DWORD dwExStyle,LPCSTR lpClassName,LPCSTR lpWindowName,DWORD dwStyle,int X,int Y,
               int nWidth,int nHeight,HWND hWndParent,HMENU hMenu,HINSTANCE hInstance,LPVOID lpParam
               )

{
  HWND pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406bb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = CreateWindowExA(dwExStyle,lpClassName,lpWindowName,dwStyle,X,Y,nWidth,nHeight,hWndParent,
                           hMenu,hInstance,lpParam);
  return pHVar1;
}


/* ==== 00406bc0 DefFrameProcA ==== */

LRESULT __stdcall DefFrameProcA(HWND hWnd,HWND hWndMDIClient,UINT uMsg,WPARAM wParam,LPARAM lParam)

{
  LRESULT LVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406bc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LVar1 = DefFrameProcA(hWnd,hWndMDIClient,uMsg,wParam,lParam);
  return LVar1;
}


/* ==== 00406bd0 DefWindowProcA ==== */

LRESULT __stdcall DefWindowProcA(HWND hWnd,UINT Msg,WPARAM wParam,LPARAM lParam)

{
  LRESULT LVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406bd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LVar1 = DefWindowProcA(hWnd,Msg,wParam,lParam);
  return LVar1;
}


/* ==== 00406bd8 DeleteMenu ==== */

BOOL __stdcall DeleteMenu(HMENU hMenu,UINT uPosition,UINT uFlags)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406bd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = DeleteMenu(hMenu,uPosition,uFlags);
  return BVar1;
}


/* ==== 00406be0 DestroyCursor ==== */

BOOL __stdcall DestroyCursor(HCURSOR hCursor)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406be0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = DestroyCursor(hCursor);
  return BVar1;
}


/* ==== 00406be8 DestroyIcon ==== */

BOOL __stdcall DestroyIcon(HICON hIcon)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406be8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = DestroyIcon(hIcon);
  return BVar1;
}


/* ==== 00406bf0 DestroyMenu ==== */

BOOL __stdcall DestroyMenu(HMENU hMenu)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406bf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = DestroyMenu(hMenu);
  return BVar1;
}


/* ==== 00406bf8 DestroyWindow ==== */

BOOL __stdcall DestroyWindow(HWND hWnd)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406bf8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = DestroyWindow(hWnd);
  return BVar1;
}


/* ==== 00406c00 DispatchMessageA ==== */

LRESULT __stdcall DispatchMessageA(MSG *lpMsg)

{
  LRESULT LVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406c00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LVar1 = DispatchMessageA(lpMsg);
  return LVar1;
}


/* ==== 00406c08 DrawEdge ==== */

BOOL __stdcall DrawEdge(HDC hdc,LPRECT qrc,UINT edge,UINT grfFlags)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406c08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = DrawEdge(hdc,qrc,edge,grfFlags);
  return BVar1;
}


/* ==== 00406c10 DrawFocusRect ==== */

BOOL __stdcall DrawFocusRect(HDC hDC,RECT *lprc)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406c10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = DrawFocusRect(hDC,lprc);
  return BVar1;
}


/* ==== 00406c18 DrawFrameControl ==== */

BOOL __stdcall DrawFrameControl(HDC param_1,LPRECT param_2,UINT param_3,UINT param_4)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406c18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = DrawFrameControl(param_1,param_2,param_3,param_4);
  return BVar1;
}


/* ==== 00406c20 DrawIcon ==== */

BOOL __stdcall DrawIcon(HDC hDC,int X,int Y,HICON hIcon)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406c20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = DrawIcon(hDC,X,Y,hIcon);
  return BVar1;
}


/* ==== 00406c28 DrawIconEx ==== */

BOOL __stdcall
DrawIconEx(HDC hdc,int xLeft,int yTop,HICON hIcon,int cxWidth,int cyWidth,UINT istepIfAniCur,
          HBRUSH hbrFlickerFreeDraw,UINT diFlags)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406c28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = DrawIconEx(hdc,xLeft,yTop,hIcon,cxWidth,cyWidth,istepIfAniCur,hbrFlickerFreeDraw,diFlags);
  return BVar1;
}


/* ==== 00406c30 DrawMenuBar ==== */

BOOL __stdcall DrawMenuBar(HWND hWnd)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406c30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = DrawMenuBar(hWnd);
  return BVar1;
}


/* ==== 00406c38 DrawTextA ==== */

int __stdcall DrawTextA(HDC hdc,LPCSTR lpchText,int cchText,LPRECT lprc,UINT format)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406c38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = DrawTextA(hdc,lpchText,cchText,lprc,format);
  return iVar1;
}


/* ==== 00406c40 EmptyClipboard ==== */

BOOL __stdcall EmptyClipboard(void)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406c40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = EmptyClipboard();
  return BVar1;
}


/* ==== 00406c48 EnableMenuItem ==== */

BOOL __stdcall EnableMenuItem(HMENU hMenu,UINT uIDEnableItem,UINT uEnable)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406c48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = EnableMenuItem(hMenu,uIDEnableItem,uEnable);
  return BVar1;
}


/* ==== 00406c58 EnableWindow ==== */

BOOL __stdcall EnableWindow(HWND hWnd,BOOL bEnable)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406c58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = EnableWindow(hWnd,bEnable);
  return BVar1;
}


/* ==== 00406c60 EndPaint ==== */

BOOL __stdcall EndPaint(HWND hWnd,PAINTSTRUCT *lpPaint)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406c60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = EndPaint(hWnd,lpPaint);
  return BVar1;
}


/* ==== 00406c68 EnumClipboardFormats ==== */

UINT __stdcall EnumClipboardFormats(UINT format)

{
  UINT UVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406c68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  UVar1 = EnumClipboardFormats(format);
  return UVar1;
}


/* ==== 00406c70 EnumDisplaySettingsA ==== */

BOOL __stdcall EnumDisplaySettingsA(LPCSTR lpszDeviceName,DWORD iModeNum,DEVMODEA *lpDevMode)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406c70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = EnumDisplaySettingsA(lpszDeviceName,iModeNum,lpDevMode);
  return BVar1;
}


/* ==== 00406c78 EnumThreadWindows ==== */

BOOL __stdcall EnumThreadWindows(DWORD dwThreadId,WNDENUMPROC lpfn,LPARAM lParam)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406c78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = EnumThreadWindows(dwThreadId,lpfn,lParam);
  return BVar1;
}


/* ==== 00406c80 EnumWindows ==== */

BOOL __stdcall EnumWindows(WNDENUMPROC lpEnumFunc,LPARAM lParam)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406c80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = EnumWindows(lpEnumFunc,lParam);
  return BVar1;
}


/* ==== 00406c88 EqualRect ==== */

BOOL __stdcall EqualRect(RECT *lprc1,RECT *lprc2)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406c88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = EqualRect(lprc1,lprc2);
  return BVar1;
}


/* ==== 00406c90 FillRect ==== */

int __stdcall FillRect(HDC hDC,RECT *lprc,HBRUSH hbr)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406c90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = FillRect(hDC,lprc,hbr);
  return iVar1;
}


/* ==== 00406c98 FindWindowA ==== */

HWND __stdcall FindWindowA(LPCSTR lpClassName,LPCSTR lpWindowName)

{
  HWND pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406c98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = FindWindowA(lpClassName,lpWindowName);
  return pHVar1;
}


/* ==== 00406ca0 FrameRect ==== */

int __stdcall FrameRect(HDC hDC,RECT *lprc,HBRUSH hbr)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406ca0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = FrameRect(hDC,lprc,hbr);
  return iVar1;
}


/* ==== 00406ca8 GetActiveWindow ==== */

HWND __stdcall GetActiveWindow(void)

{
  HWND pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406ca8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = GetActiveWindow();
  return pHVar1;
}


/* ==== 00406cb0 GetCapture ==== */

HWND __stdcall GetCapture(void)

{
  HWND pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406cb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = GetCapture();
  return pHVar1;
}


/* ==== 00406cb8 GetClassInfoA ==== */

BOOL __stdcall GetClassInfoA(HINSTANCE hInstance,LPCSTR lpClassName,LPWNDCLASSA lpWndClass)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406cb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = GetClassInfoA(hInstance,lpClassName,lpWndClass);
  return BVar1;
}


/* ==== 00406cc0 GetClientRect ==== */

BOOL __stdcall GetClientRect(HWND hWnd,LPRECT lpRect)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406cc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = GetClientRect(hWnd,lpRect);
  return BVar1;
}


/* ==== 00406cc8 GetClipboardData ==== */

HANDLE __stdcall GetClipboardData(UINT uFormat)

{
  HANDLE pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406cc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = GetClipboardData(uFormat);
  return pvVar1;
}


/* ==== 00406cd0 GetCursor ==== */

HCURSOR __stdcall GetCursor(void)

{
  HCURSOR pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406cd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = GetCursor();
  return pHVar1;
}


/* ==== 00406cd8 GetCursorPos ==== */

BOOL __stdcall GetCursorPos(LPPOINT lpPoint)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406cd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = GetCursorPos(lpPoint);
  return BVar1;
}


/* ==== 00406ce0 GetDC ==== */

HDC __stdcall GetDC(HWND hWnd)

{
  HDC pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406ce0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = GetDC(hWnd);
  return pHVar1;
}


/* ==== 00406ce8 GetDCEx ==== */

HDC __stdcall GetDCEx(HWND hWnd,HRGN hrgnClip,DWORD flags)

{
  HDC pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406ce8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = GetDCEx(hWnd,hrgnClip,flags);
  return pHVar1;
}


/* ==== 00406cf0 GetDesktopWindow ==== */

HWND __stdcall GetDesktopWindow(void)

{
  HWND pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406cf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = GetDesktopWindow();
  return pHVar1;
}


/* ==== 00406cf8 GetFocus ==== */

HWND __stdcall GetFocus(void)

{
  HWND pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406cf8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = GetFocus();
  return pHVar1;
}


/* ==== 00406d00 GetForegroundWindow ==== */

HWND __stdcall GetForegroundWindow(void)

{
  HWND pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406d00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = GetForegroundWindow();
  return pHVar1;
}


/* ==== 00406d08 GetIconInfo ==== */

BOOL __stdcall GetIconInfo(HICON hIcon,PICONINFO piconinfo)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406d08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = GetIconInfo(hIcon,piconinfo);
  return BVar1;
}


/* ==== 00406d10 GetKeyNameTextA ==== */

int __stdcall GetKeyNameTextA(LONG lParam,LPSTR lpString,int cchSize)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406d10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = GetKeyNameTextA(lParam,lpString,cchSize);
  return iVar1;
}


/* ==== 00406d18 GetKeyState ==== */

SHORT __stdcall GetKeyState(int nVirtKey)

{
  SHORT SVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406d18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  SVar1 = GetKeyState(nVirtKey);
  return SVar1;
}


/* ==== 00406d20 GetKeyboardLayout ==== */

HKL __stdcall GetKeyboardLayout(DWORD idThread)

{
  HKL pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406d20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = GetKeyboardLayout(idThread);
  return pHVar1;
}


/* ==== 00406d28 GetKeyboardLayoutList ==== */

int __stdcall GetKeyboardLayoutList(int nBuff,HKL *lpList)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406d28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = GetKeyboardLayoutList(nBuff,lpList);
  return iVar1;
}


/* ==== 00406d30 GetKeyboardState ==== */

BOOL __stdcall GetKeyboardState(PBYTE lpKeyState)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406d30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = GetKeyboardState(lpKeyState);
  return BVar1;
}


/* ==== 00406d38 GetLastActivePopup ==== */

HWND __stdcall GetLastActivePopup(HWND hWnd)

{
  HWND pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406d38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = GetLastActivePopup(hWnd);
  return pHVar1;
}


/* ==== 00406d40 GetMenu ==== */

HMENU __stdcall GetMenu(HWND hWnd)

{
  HMENU pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406d40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = GetMenu(hWnd);
  return pHVar1;
}


/* ==== 00406d48 GetMenuItemCount ==== */

int __stdcall GetMenuItemCount(HMENU hMenu)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406d48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = GetMenuItemCount(hMenu);
  return iVar1;
}


/* ==== 00406d50 GetMenuItemID ==== */

UINT __stdcall GetMenuItemID(HMENU hMenu,int nPos)

{
  UINT UVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  UVar1 = GetMenuItemID(hMenu,nPos);
  return UVar1;
}


/* ==== 00406d58 GetMenuItemInfoA ==== */

BOOL __stdcall GetMenuItemInfoA(HMENU hmenu,UINT item,BOOL fByPosition,LPMENUITEMINFOA lpmii)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406d58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = GetMenuItemInfoA(hmenu,item,fByPosition,lpmii);
  return BVar1;
}


/* ==== 00406d60 GetMenuState ==== */

UINT __stdcall GetMenuState(HMENU hMenu,UINT uId,UINT uFlags)

{
  UINT UVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406d60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  UVar1 = GetMenuState(hMenu,uId,uFlags);
  return UVar1;
}


/* ==== 00406d68 GetMenuStringA ==== */

int __stdcall GetMenuStringA(HMENU hMenu,UINT uIDItem,LPSTR lpString,int cchMax,UINT flags)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406d68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = GetMenuStringA(hMenu,uIDItem,lpString,cchMax,flags);
  return iVar1;
}


/* ==== 00406d70 GetMessageTime ==== */

LONG __stdcall GetMessageTime(void)

{
  LONG LVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LVar1 = GetMessageTime();
  return LVar1;
}


/* ==== 00406d78 GetWindow ==== */

HWND __stdcall GetWindow(HWND hWnd,UINT uCmd)

{
  HWND pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406d78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = GetWindow(hWnd,uCmd);
  return pHVar1;
}


/* ==== 00406d80 GetParent ==== */

HWND __stdcall GetParent(HWND hWnd)

{
  HWND pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406d80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = GetParent(hWnd);
  return pHVar1;
}


/* ==== 00406d88 GetPropA ==== */

HANDLE __stdcall GetPropA(HWND hWnd,LPCSTR lpString)

{
  HANDLE pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406d88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = GetPropA(hWnd,lpString);
  return pvVar1;
}


/* ==== 00406da8 GetSubMenu ==== */

HMENU __stdcall GetSubMenu(HMENU hMenu,int nPos)

{
  HMENU pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406da8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = GetSubMenu(hMenu,nPos);
  return pHVar1;
}


/* ==== 00406db0 GetSysColor ==== */

DWORD __stdcall GetSysColor(int nIndex)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406db0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = GetSysColor(nIndex);
  return DVar1;
}


/* ==== 00406db8 GetSystemMenu ==== */

HMENU __stdcall GetSystemMenu(HWND hWnd,BOOL bRevert)

{
  HMENU pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406db8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = GetSystemMenu(hWnd,bRevert);
  return pHVar1;
}


/* ==== 00406dc0 GetSystemMetrics ==== */

int __stdcall GetSystemMetrics(int nIndex)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406dc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = GetSystemMetrics(nIndex);
  return iVar1;
}


/* ==== 00406dc8 GetTopWindow ==== */

HWND __stdcall GetTopWindow(HWND hWnd)

{
  HWND pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406dc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = GetTopWindow(hWnd);
  return pHVar1;
}


/* ==== 00406dd0 GetWindow ==== */

HWND __stdcall GetWindow(HWND hWnd,UINT uCmd)

{
  HWND pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406dd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = GetWindow(hWnd,uCmd);
  return pHVar1;
}


/* ==== 00406dd8 GetWindowDC ==== */

HDC __stdcall GetWindowDC(HWND hWnd)

{
  HDC pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406dd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = GetWindowDC(hWnd);
  return pHVar1;
}


/* ==== 00406de0 GetWindowLongA ==== */

LONG __stdcall GetWindowLongA(HWND hWnd,int nIndex)

{
  LONG LVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406de0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LVar1 = GetWindowLongA(hWnd,nIndex);
  return LVar1;
}


/* ==== 00406de8 GetWindowPlacement ==== */

BOOL __stdcall GetWindowPlacement(HWND hWnd,WINDOWPLACEMENT *lpwndpl)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406de8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = GetWindowPlacement(hWnd,lpwndpl);
  return BVar1;
}


/* ==== 00406df0 GetWindowRect ==== */

BOOL __stdcall GetWindowRect(HWND hWnd,LPRECT lpRect)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406df0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = GetWindowRect(hWnd,lpRect);
  return BVar1;
}


/* ==== 00406df8 GetWindowRgn ==== */

int __stdcall GetWindowRgn(HWND hWnd,HRGN hRgn)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406df8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = GetWindowRgn(hWnd,hRgn);
  return iVar1;
}


/* ==== 00406e00 GetWindowTextA ==== */

int __stdcall GetWindowTextA(HWND hWnd,LPSTR lpString,int nMaxCount)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406e00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = GetWindowTextA(hWnd,lpString,nMaxCount);
  return iVar1;
}


/* ==== 00406e08 GetWindowThreadProcessId ==== */

DWORD __stdcall GetWindowThreadProcessId(HWND hWnd,LPDWORD lpdwProcessId)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406e08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = GetWindowThreadProcessId(hWnd,lpdwProcessId);
  return DVar1;
}


/* ==== 00406e10 InflateRect ==== */

BOOL __stdcall InflateRect(LPRECT lprc,int dx,int dy)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406e10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = InflateRect(lprc,dx,dy);
  return BVar1;
}


/* ==== 00406e18 InsertMenuA ==== */

BOOL __stdcall
InsertMenuA(HMENU hMenu,UINT uPosition,UINT uFlags,UINT_PTR uIDNewItem,LPCSTR lpNewItem)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406e18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = InsertMenuA(hMenu,uPosition,uFlags,uIDNewItem,lpNewItem);
  return BVar1;
}


/* ==== 00406e20 InsertMenuItemA ==== */

BOOL __stdcall InsertMenuItemA(HMENU hmenu,UINT item,BOOL fByPosition,LPCMENUITEMINFOA lpmi)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406e20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = InsertMenuItemA(hmenu,item,fByPosition,lpmi);
  return BVar1;
}


/* ==== 00406e28 IntersectRect ==== */

BOOL __stdcall IntersectRect(LPRECT lprcDst,RECT *lprcSrc1,RECT *lprcSrc2)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406e28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = IntersectRect(lprcDst,lprcSrc1,lprcSrc2);
  return BVar1;
}


/* ==== 00406e30 InvalidateRect ==== */

BOOL __stdcall InvalidateRect(HWND hWnd,RECT *lpRect,BOOL bErase)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406e30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = InvalidateRect(hWnd,lpRect,bErase);
  return BVar1;
}


/* ==== 00406e38 IsChild ==== */

BOOL __stdcall IsChild(HWND hWndParent,HWND hWnd)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406e38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = IsChild(hWndParent,hWnd);
  return BVar1;
}


/* ==== 00406e40 IsDialogMessageA ==== */

BOOL __stdcall IsDialogMessageA(HWND hDlg,LPMSG lpMsg)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406e40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = IsDialogMessageA(hDlg,lpMsg);
  return BVar1;
}


/* ==== 00406e48 IsIconic ==== */

BOOL __stdcall IsIconic(HWND hWnd)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406e48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = IsIconic(hWnd);
  return BVar1;
}


/* ==== 00406e50 IsRectEmpty ==== */

BOOL __stdcall IsRectEmpty(RECT *lprc)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406e50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = IsRectEmpty(lprc);
  return BVar1;
}


/* ==== 00406e58 IsWindow ==== */

BOOL __stdcall IsWindow(HWND hWnd)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406e58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = IsWindow(hWnd);
  return BVar1;
}


/* ==== 00406e60 IsWindowEnabled ==== */

BOOL __stdcall IsWindowEnabled(HWND hWnd)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406e60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = IsWindowEnabled(hWnd);
  return BVar1;
}


/* ==== 00406e68 IsWindowVisible ==== */

BOOL __stdcall IsWindowVisible(HWND hWnd)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406e68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = IsWindowVisible(hWnd);
  return BVar1;
}


/* ==== 00406e70 IsZoomed ==== */

BOOL __stdcall IsZoomed(HWND hWnd)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = IsZoomed(hWnd);
  return BVar1;
}


/* ==== 00406e78 KillTimer ==== */

BOOL __stdcall KillTimer(HWND hWnd,UINT_PTR uIDEvent)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406e78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = KillTimer(hWnd,uIDEvent);
  return BVar1;
}


/* ==== 00406e80 LoadBitmapA ==== */

HBITMAP __stdcall LoadBitmapA(HINSTANCE hInstance,LPCSTR lpBitmapName)

{
  HBITMAP pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406e80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = LoadBitmapA(hInstance,lpBitmapName);
  return pHVar1;
}


/* ==== 00406e88 LoadCursorA ==== */

HCURSOR __stdcall LoadCursorA(HINSTANCE hInstance,LPCSTR lpCursorName)

{
  HCURSOR pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406e88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = LoadCursorA(hInstance,lpCursorName);
  return pHVar1;
}


/* ==== 00406e90 LoadIconA ==== */

HICON __stdcall LoadIconA(HINSTANCE hInstance,LPCSTR lpIconName)

{
  HICON pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406e90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = LoadIconA(hInstance,lpIconName);
  return pHVar1;
}


/* ==== 00406e98 LoadKeyboardLayoutA ==== */

HKL __stdcall LoadKeyboardLayoutA(LPCSTR pwszKLID,UINT Flags)

{
  HKL pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406e98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = LoadKeyboardLayoutA(pwszKLID,Flags);
  return pHVar1;
}


/* ==== 00406ea0 LoadStringA ==== */

int __stdcall LoadStringA(HINSTANCE hInstance,UINT uID,LPSTR lpBuffer,int cchBufferMax)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406ea0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = LoadStringA(hInstance,uID,lpBuffer,cchBufferMax);
  return iVar1;
}


/* ==== 00406ea8 MapVirtualKeyA ==== */

UINT __stdcall MapVirtualKeyA(UINT uCode,UINT uMapType)

{
  UINT UVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406ea8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  UVar1 = MapVirtualKeyA(uCode,uMapType);
  return UVar1;
}


/* ==== 00406eb0 MapWindowPoints ==== */

int __stdcall MapWindowPoints(HWND hWndFrom,HWND hWndTo,LPPOINT lpPoints,UINT cPoints)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406eb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = MapWindowPoints(hWndFrom,hWndTo,lpPoints,cPoints);
  return iVar1;
}


/* ==== 00406eb8 MessageBeep ==== */

BOOL __stdcall MessageBeep(UINT uType)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406eb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = MessageBeep(uType);
  return BVar1;
}


/* ==== 00406ec0 MessageBoxA ==== */

int __stdcall MessageBoxA(HWND hWnd,LPCSTR lpText,LPCSTR lpCaption,UINT uType)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406ec0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = MessageBoxA(hWnd,lpText,lpCaption,uType);
  return iVar1;
}


/* ==== 00406ec8 OemToCharA ==== */

BOOL __stdcall OemToCharA(LPCSTR pSrc,LPSTR pDst)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406ec8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = OemToCharA(pSrc,pDst);
  return BVar1;
}


/* ==== 00406ed0 OffsetRect ==== */

BOOL __stdcall OffsetRect(LPRECT lprc,int dx,int dy)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406ed0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = OffsetRect(lprc,dx,dy);
  return BVar1;
}


/* ==== 00406ed8 OpenClipboard ==== */

BOOL __stdcall OpenClipboard(HWND hWndNewOwner)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406ed8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = OpenClipboard(hWndNewOwner);
  return BVar1;
}


/* ==== 00406ee0 PeekMessageA ==== */

BOOL __stdcall
PeekMessageA(LPMSG lpMsg,HWND hWnd,UINT wMsgFilterMin,UINT wMsgFilterMax,UINT wRemoveMsg)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406ee0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = PeekMessageA(lpMsg,hWnd,wMsgFilterMin,wMsgFilterMax,wRemoveMsg);
  return BVar1;
}


/* ==== 00406ee8 PostMessageA ==== */

BOOL __stdcall PostMessageA(HWND hWnd,UINT Msg,WPARAM wParam,LPARAM lParam)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406ee8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = PostMessageA(hWnd,Msg,wParam,lParam);
  return BVar1;
}


/* ==== 00406ef0 PostQuitMessage ==== */

void __stdcall PostQuitMessage(int nExitCode)

{
                    /* WARNING: Could not recover jumptable at 0x00406ef0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  PostQuitMessage(nExitCode);
  return;
}


/* ==== 00406ef8 PtInRect ==== */

BOOL __stdcall PtInRect(RECT *lprc,POINT pt)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406ef8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = PtInRect(lprc,pt);
  return BVar1;
}


/* ==== 00406f00 RedrawWindow ==== */

BOOL __stdcall RedrawWindow(HWND hWnd,RECT *lprcUpdate,HRGN hrgnUpdate,UINT flags)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406f00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = RedrawWindow(hWnd,lprcUpdate,hrgnUpdate,flags);
  return BVar1;
}


/* ==== 00406f08 RegisterClassA ==== */

ATOM __stdcall RegisterClassA(WNDCLASSA *lpWndClass)

{
  ATOM AVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406f08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  AVar1 = RegisterClassA(lpWndClass);
  return AVar1;
}


/* ==== 00406f10 RegisterClipboardFormatA ==== */

UINT __stdcall RegisterClipboardFormatA(LPCSTR lpszFormat)

{
  UINT UVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406f10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  UVar1 = RegisterClipboardFormatA(lpszFormat);
  return UVar1;
}


/* ==== 00406f18 RegisterWindowMessageA ==== */

UINT __stdcall RegisterWindowMessageA(LPCSTR lpString)

{
  UINT UVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406f18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  UVar1 = RegisterWindowMessageA(lpString);
  return UVar1;
}


/* ==== 00406f20 ReleaseCapture ==== */

BOOL __stdcall ReleaseCapture(void)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406f20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = ReleaseCapture();
  return BVar1;
}


/* ==== 00406f28 ReleaseDC ==== */

int __stdcall ReleaseDC(HWND hWnd,HDC hDC)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406f28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = ReleaseDC(hWnd,hDC);
  return iVar1;
}


/* ==== 00406f30 RemoveMenu ==== */

BOOL __stdcall RemoveMenu(HMENU hMenu,UINT uPosition,UINT uFlags)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406f30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = RemoveMenu(hMenu,uPosition,uFlags);
  return BVar1;
}


/* ==== 00406f38 RemovePropA ==== */

HANDLE __stdcall RemovePropA(HWND hWnd,LPCSTR lpString)

{
  HANDLE pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406f38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = RemovePropA(hWnd,lpString);
  return pvVar1;
}


/* ==== 00406f40 ScreenToClient ==== */

BOOL __stdcall ScreenToClient(HWND hWnd,LPPOINT lpPoint)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406f40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = ScreenToClient(hWnd,lpPoint);
  return BVar1;
}


/* ==== 00406f48 ScrollWindow ==== */

BOOL __stdcall ScrollWindow(HWND hWnd,int XAmount,int YAmount,RECT *lpRect,RECT *lpClipRect)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406f48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = ScrollWindow(hWnd,XAmount,YAmount,lpRect,lpClipRect);
  return BVar1;
}


/* ==== 00406f50 SendMessageA ==== */

LRESULT __stdcall SendMessageA(HWND hWnd,UINT Msg,WPARAM wParam,LPARAM lParam)

{
  LRESULT LVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406f50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LVar1 = SendMessageA(hWnd,Msg,wParam,lParam);
  return LVar1;
}


/* ==== 00406f58 SetActiveWindow ==== */

HWND __stdcall SetActiveWindow(HWND hWnd)

{
  HWND pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406f58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = SetActiveWindow(hWnd);
  return pHVar1;
}


/* ==== 00406f60 SetCapture ==== */

HWND __stdcall SetCapture(HWND hWnd)

{
  HWND pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406f60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = SetCapture(hWnd);
  return pHVar1;
}


/* ==== 00406f68 SetClassLongA ==== */

DWORD __stdcall SetClassLongA(HWND hWnd,int nIndex,LONG dwNewLong)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406f68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = SetClassLongA(hWnd,nIndex,dwNewLong);
  return DVar1;
}


/* ==== 00406f70 SetClipboardData ==== */

HANDLE __stdcall SetClipboardData(UINT uFormat,HANDLE hMem)

{
  HANDLE pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = SetClipboardData(uFormat,hMem);
  return pvVar1;
}


/* ==== 00406f78 SetCursor ==== */

HCURSOR __stdcall SetCursor(HCURSOR hCursor)

{
  HCURSOR pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406f78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = SetCursor(hCursor);
  return pHVar1;
}


/* ==== 00406f80 SetFocus ==== */

HWND __stdcall SetFocus(HWND hWnd)

{
  HWND pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406f80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = SetFocus(hWnd);
  return pHVar1;
}


/* ==== 00406f88 SetForegroundWindow ==== */

BOOL __stdcall SetForegroundWindow(HWND hWnd)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406f88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = SetForegroundWindow(hWnd);
  return BVar1;
}


/* ==== 00406f90 SetMenu ==== */

BOOL __stdcall SetMenu(HWND hWnd,HMENU hMenu)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406f90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = SetMenu(hWnd,hMenu);
  return BVar1;
}


/* ==== 00406f98 SetMenuItemInfoA ==== */

BOOL __stdcall SetMenuItemInfoA(HMENU hmenu,UINT item,BOOL fByPositon,LPCMENUITEMINFOA lpmii)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406f98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = SetMenuItemInfoA(hmenu,item,fByPositon,lpmii);
  return BVar1;
}


/* ==== 00406fa0 SetPropA ==== */

BOOL __stdcall SetPropA(HWND hWnd,LPCSTR lpString,HANDLE hData)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406fa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = SetPropA(hWnd,lpString,hData);
  return BVar1;
}


/* ==== 00406fa8 SetRect ==== */

BOOL __stdcall SetRect(LPRECT lprc,int xLeft,int yTop,int xRight,int yBottom)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406fa8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = SetRect(lprc,xLeft,yTop,xRight,yBottom);
  return BVar1;
}


/* ==== 00406fc8 SetTimer ==== */

UINT_PTR __stdcall SetTimer(HWND hWnd,UINT_PTR nIDEvent,UINT uElapse,TIMERPROC lpTimerFunc)

{
  UINT_PTR UVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406fc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  UVar1 = SetTimer(hWnd,nIDEvent,uElapse,lpTimerFunc);
  return UVar1;
}


/* ==== 00406fd0 SetWindowLongA ==== */

LONG __stdcall SetWindowLongA(HWND hWnd,int nIndex,LONG dwNewLong)

{
  LONG LVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406fd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LVar1 = SetWindowLongA(hWnd,nIndex,dwNewLong);
  return LVar1;
}


/* ==== 00406fd8 SetWindowPlacement ==== */

BOOL __stdcall SetWindowPlacement(HWND hWnd,WINDOWPLACEMENT *lpwndpl)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406fd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = SetWindowPlacement(hWnd,lpwndpl);
  return BVar1;
}


/* ==== 00406fe0 SetWindowPos ==== */

BOOL __stdcall SetWindowPos(HWND hWnd,HWND hWndInsertAfter,int X,int Y,int cx,int cy,UINT uFlags)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406fe0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = SetWindowPos(hWnd,hWndInsertAfter,X,Y,cx,cy,uFlags);
  return BVar1;
}


/* ==== 00406fe8 SetWindowTextA ==== */

BOOL __stdcall SetWindowTextA(HWND hWnd,LPCSTR lpString)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406fe8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = SetWindowTextA(hWnd,lpString);
  return BVar1;
}


/* ==== 00406ff0 SetWindowsHookExA ==== */

HHOOK __stdcall SetWindowsHookExA(int idHook,HOOKPROC lpfn,HINSTANCE hmod,DWORD dwThreadId)

{
  HHOOK pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406ff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = SetWindowsHookExA(idHook,lpfn,hmod,dwThreadId);
  return pHVar1;
}


/* ==== 00406ff8 SetWindowRgn ==== */

int __stdcall SetWindowRgn(HWND hWnd,HRGN hRgn,BOOL bRedraw)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406ff8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = SetWindowRgn(hWnd,hRgn,bRedraw);
  return iVar1;
}


/* ==== 00407000 ShowCursor ==== */

int __stdcall ShowCursor(BOOL bShow)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00407000. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = ShowCursor(bShow);
  return iVar1;
}


/* ==== 00407008 ShowOwnedPopups ==== */

BOOL __stdcall ShowOwnedPopups(HWND hWnd,BOOL fShow)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00407008. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = ShowOwnedPopups(hWnd,fShow);
  return BVar1;
}


/* ==== 00407018 ShowWindow ==== */

BOOL __stdcall ShowWindow(HWND hWnd,int nCmdShow)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00407018. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = ShowWindow(hWnd,nCmdShow);
  return BVar1;
}


/* ==== 00407020 SystemParametersInfoA ==== */

BOOL __stdcall SystemParametersInfoA(UINT uiAction,UINT uiParam,PVOID pvParam,UINT fWinIni)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00407020. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = SystemParametersInfoA(uiAction,uiParam,pvParam,fWinIni);
  return BVar1;
}


/* ==== 00407028 TrackPopupMenu ==== */

BOOL __stdcall
TrackPopupMenu(HMENU hMenu,UINT uFlags,int x,int y,int nReserved,HWND hWnd,RECT *prcRect)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00407028. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = TrackPopupMenu(hMenu,uFlags,x,y,nReserved,hWnd,prcRect);
  return BVar1;
}


/* ==== 00407030 TranslateMDISysAccel ==== */

BOOL __stdcall TranslateMDISysAccel(HWND hWndClient,LPMSG lpMsg)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00407030. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = TranslateMDISysAccel(hWndClient,lpMsg);
  return BVar1;
}


/* ==== 00407038 TranslateMessage ==== */

BOOL __stdcall TranslateMessage(MSG *lpMsg)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00407038. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = TranslateMessage(lpMsg);
  return BVar1;
}


/* ==== 00407040 UnhookWindowsHookEx ==== */

BOOL __stdcall UnhookWindowsHookEx(HHOOK hhk)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00407040. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = UnhookWindowsHookEx(hhk);
  return BVar1;
}


/* ==== 00407048 UnregisterClassA ==== */

BOOL __stdcall UnregisterClassA(LPCSTR lpClassName,HINSTANCE hInstance)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00407048. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = UnregisterClassA(lpClassName,hInstance);
  return BVar1;
}


/* ==== 00407050 UpdateWindow ==== */

BOOL __stdcall UpdateWindow(HWND hWnd)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00407050. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = UpdateWindow(hWnd);
  return BVar1;
}


/* ==== 00407058 WaitMessage ==== */

BOOL __stdcall WaitMessage(void)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00407058. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = WaitMessage();
  return BVar1;
}


/* ==== 00407060 WinHelpA ==== */

BOOL __stdcall WinHelpA(HWND hWndMain,LPCSTR lpszHelp,UINT uCommand,ULONG_PTR dwData)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00407060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = WinHelpA(hWndMain,lpszHelp,uCommand,dwData);
  return BVar1;
}


/* ==== 00407068 WindowFromPoint ==== */

HWND __stdcall WindowFromPoint(POINT Point)

{
  HWND pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00407068. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = WindowFromPoint(Point);
  return pHVar1;
}


/* ==== 00407070 FUN_00407070 ==== */

uint FUN_00407070(uint param_1,int param_2)

{
  return param_1 & 0xffff | param_2 << 0x10;
}


/* ==== 0040707c FUN_0040707c ==== */

uint FUN_0040707c(uint param_1)

{
  return param_1 >> 0x10;
}


/* ==== 00407080 FUN_00407080 ==== */

uint FUN_00407080(uint param_1)

{
  return (param_1 & 0xffff) >> 8;
}


/* ==== 00407088 FUN_00407088 ==== */

void FUN_00407088(void)

{
  GetTickCount();
  return;
}


/* ==== 00407090 FUN_00407090 ==== */

void FUN_00407090(undefined4 *param_1,uint param_2)

{
  System_FillChar(param_1,param_2,0);
  return;
}


/* ==== 00407098 FUN_00407098 ==== */

undefined4 FUN_00407098(void)

{
  return 0;
}


/* ==== 0040709c FUN_0040709c ==== */

void FUN_0040709c(UINT flags_val,SIZE_T bytes)

{
  HGLOBAL hMem;
  
  hMem = GlobalAlloc(flags_val,bytes);
  GlobalLock(hMem);
  return;
}


/* ==== 004070ac FUN_004070ac ==== */

void FUN_004070ac(LPCVOID mem,SIZE_T bytes,UINT flags_val)

{
  HGLOBAL mem_2;
  
  mem_2 = GlobalHandle(mem);
  GlobalUnlock(mem_2);
  mem_2 = GlobalReAlloc(mem_2,bytes,flags_val);
  GlobalLock(mem_2);
  return;
}


/* ==== 004070c8 FUN_004070c8 ==== */

void FUN_004070c8(LPCVOID mem)

{
  HGLOBAL hMem;
  
  hMem = GlobalHandle(mem);
  GlobalUnlock(hMem);
  GlobalFree(hMem);
  return;
}


/* ==== 004070dc FUN_004070dc ==== */

uint FUN_004070dc(uint param_1,uint param_2)

{
  return param_1 | (param_2 & 0xff0000) << 8;
}


/* ==== 004070e8 FUN_004070e8 ==== */

void FUN_004070e8(undefined4 param_1,int *param_2)

{
  short local_4;
  short sStack_2;
  
  local_4 = (short)param_1;
  *param_2 = (int)local_4;
  sStack_2 = (short)((uint)param_1 >> 0x10);
  param_2[1] = (int)sStack_2;
  return;
}


/* ==== 004070fc FUN_004070fc ==== */

undefined4 FUN_004070fc(undefined2 *param_1)

{
  undefined4 local_4;
  
  local_4 = CONCAT22(param_1[2],*param_1);
  return local_4;
}


/* ==== 00407114 FUN_00407114 ==== */

void FUN_00407114(LPCSTR class_name,LPCSTR window_name,DWORD style,LPVOID param,HINSTANCE instance,
                 HMENU menu,HWND wnd_parent,int height_val,int width_val,int y_val,int x_val)

{
  CreateWindowExA(0,class_name,window_name,style,x_val,y_val,width_val,height_val,wnd_parent,menu,
                  instance,param);
  return;
}


/* ==== 00407148 FUN_00407148 ==== */

HWND FUN_00407148(UINT *param_1,UINT *param_2,UINT *param_3,LRESULT *param_4,LRESULT *param_5)

{
  HWND hWnd;
  UINT UVar1;
  LRESULT LVar2;
  
  hWnd = FindWindowA("MouseZ","Magellan MSWHEEL");
  UVar1 = RegisterWindowMessageA("MSWHEEL_ROLLMSG");
  *param_1 = UVar1;
  UVar1 = RegisterWindowMessageA("MSH_WHEELSUPPORT_MSG");
  *param_2 = UVar1;
  UVar1 = RegisterWindowMessageA("MSH_SCROLL_LINES_MSG");
  *param_3 = UVar1;
  if ((*param_2 == 0) || (hWnd == (HWND)0x0)) {
    *param_5 = 0;
  }
  else {
    LVar2 = SendMessageA(hWnd,*param_2,0,0);
    *param_5 = LVar2;
  }
  if ((*param_3 == 0) || (hWnd == (HWND)0x0)) {
    *param_4 = 3;
  }
  else {
    LVar2 = SendMessageA(hWnd,*param_3,0,0);
    *param_4 = LVar2;
  }
  return hWnd;
}


/* ==== 00407278 FUN_00407278 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00407278(void)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  uVar1 = *in_FS_OFFSET;
  *in_FS_OFFSET = auStack_10;
  _DAT_004ac4ec = _DAT_004ac4ec + 1;
  *in_FS_OFFSET = uVar1;
  return;
}


/* ==== 004080d8 FUN_004080d8 ==== */

void FUN_004080d8(uint param_1,uint param_2,undefined2 *param_3,undefined2 *param_4)

{
  *param_3 = (short)(param_1 / (param_2 & 0xffff));
  *param_4 = (short)(param_1 % (param_2 & 0xffff));
  return;
}


/* ==== 004080f4 FUN_004080f4 ==== */

void FUN_004080f4(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = SysUtils_Exception_Create((int *)&DAT_00407c7c,'\x01',param_1);
  System__RaiseExcept(piVar1);
  return;
}


/* ==== 0040810c FUN_0040810c ==== */

void FUN_0040810c(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  byte *local_8;
  
  puStack_18 = &stack0xfffffffc;
  local_8 = (byte *)0x0;
  puStack_1c = &LAB_0040815e;
  puStack_20 = (undefined1 *)*in_FS_OFFSET;
  *in_FS_OFFSET = &puStack_20;
  System_LoadResString(param_1,(int *)&local_8);
  uVar1 = SysUtils_Exception_CreateFmt((int)&DAT_00407c7c,'\x01',local_8,param_3,param_2);
  System__RaiseExcept(uVar1);
  *in_FS_OFFSET = param_3;
  puStack_20 = &LAB_00408165;
  System__LStrClr((int *)&local_8);
  return;
}


/* ==== 0040816c FUN_0040816c ==== */

undefined4 * FUN_0040816c(uint param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)System__GetMem(param_1);
  System_FillChar(puVar1,param_1,0);
  return puVar1;
}


/* ==== 004081b8 FUN_004081b8 ==== */

void FUN_004081b8(undefined4 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)System__GetMem(0xc);
  *puVar1 = DAT_004aa140;
  puVar1[1] = *(undefined4 *)PTR_DAT_004ab61c;
  puVar1[2] = param_1;
  DAT_004aa140 = puVar1;
  *(undefined1 **)PTR_DAT_004ab61c = &LAB_0040818c;
  return;
}


/* ==== 004081f0 FUN_004081f0 ==== */

void FUN_004081f0(byte *param_1,int *param_2)

{
  byte bVar1;
  uint i_val;
  byte *pbVar2;
  
  i_val = System__LStrLen((int)param_1);
  FUN_00404210(param_2,i_val);
  pbVar2 = (byte *)*param_2;
  for (; i_val != 0; i_val = i_val - 1) {
    bVar1 = *param_1;
    if ((0x60 < bVar1) && (bVar1 < 0x7b)) {
      bVar1 = bVar1 - 0x20;
    }
    *pbVar2 = bVar1;
    param_1 = param_1 + 1;
    pbVar2 = pbVar2 + 1;
  }
  return;
}


/* ==== 0040822c FUN_0040822c ==== */

void FUN_0040822c(byte *param_1,int *param_2)

{
  byte bVar1;
  uint i_val;
  byte *pbVar2;
  
  i_val = System__LStrLen((int)param_1);
  FUN_00404210(param_2,i_val);
  pbVar2 = (byte *)*param_2;
  for (; i_val != 0; i_val = i_val - 1) {
    bVar1 = *param_1;
    if ((0x40 < bVar1) && (bVar1 < 0x5b)) {
      bVar1 = bVar1 + 0x20;
    }
    *pbVar2 = bVar1;
    param_1 = param_1 + 1;
    pbVar2 = pbVar2 + 1;
  }
  return;
}


/* ==== 00408268 FUN_00408268 ==== */

int FUN_00408268(char *param_1,char *param_2)

{
  uint uVar1;
  uint i_val;
  uint uVar2;
  char *pcVar3;
  char *pcVar4;
  bool bVar5;
  
  uVar1 = 0;
  if (param_1 != (char *)0x0) {
    uVar1 = *(uint *)(param_1 + -4);
  }
  uVar2 = 0;
  if (param_2 != (char *)0x0) {
    uVar2 = *(uint *)(param_2 + -4);
  }
  i_val = uVar1;
  if (uVar2 < uVar1) {
    i_val = uVar2;
  }
  bVar5 = true;
  do {
    pcVar3 = param_1;
    pcVar4 = param_2;
    if (i_val == 0) break;
    i_val = i_val - 1;
    pcVar4 = param_2 + 1;
    pcVar3 = param_1 + 1;
    bVar5 = *param_1 == *param_2;
    param_1 = pcVar3;
    param_2 = pcVar4;
  } while (bVar5);
  if (!bVar5) {
    uVar1 = (uint)(byte)pcVar3[-1];
    uVar2 = (uint)(byte)pcVar4[-1];
  }
  return uVar1 - uVar2;
}


/* ==== 00408298 FUN_00408298 ==== */

undefined4 FUN_00408298(int *param_1,int *param_2,uint param_3)

{
  undefined4 uVar1;
  uint j;
  uint i_val;
  int *piVar2;
  int *piVar3;
  bool bVar4;
  
  uVar1 = 0;
  i_val = param_3 & 3;
  j = param_3 >> 2;
  bVar4 = j == 0;
  do {
    piVar2 = param_1;
    piVar3 = param_2;
    if (j == 0) break;
    j = j - 1;
    piVar3 = param_2 + 1;
    piVar2 = param_1 + 1;
    bVar4 = *param_1 == *param_2;
    param_1 = piVar2;
    param_2 = piVar3;
  } while (bVar4);
  if (bVar4) {
    bVar4 = true;
    do {
      if (i_val == 0) break;
      i_val = i_val - 1;
      bVar4 = (char)*piVar2 == (char)*piVar3;
      piVar2 = (int *)((int)piVar2 + 1);
      piVar3 = (int *)((int)piVar3 + 1);
    } while (bVar4);
    if (bVar4) {
      uVar1 = 1;
    }
  }
  return uVar1;
}


/* ==== 004082b8 FUN_004082b8 ==== */

int FUN_004082b8(char *param_1,char *param_2)

{
  char *pcVar1;
  char *pcVar2;
  uint uVar3;
  uint i_val;
  uint uVar4;
  byte bVar5;
  byte bVar6;
  bool bVar7;
  
  uVar3 = 0;
  if (param_1 != (char *)0x0) {
    uVar3 = *(uint *)(param_1 + -4);
  }
  uVar4 = 0;
  if (param_2 != (char *)0x0) {
    uVar4 = *(uint *)(param_2 + -4);
  }
  i_val = uVar3;
  if (uVar4 < uVar3) {
    i_val = uVar4;
  }
  bVar7 = true;
LAB_004082d7:
  do {
    if (i_val != 0) {
      i_val = i_val - 1;
      pcVar2 = param_2 + 1;
      pcVar1 = param_1 + 1;
      bVar7 = *param_1 == *param_2;
      param_1 = pcVar1;
      param_2 = pcVar2;
      if (bVar7) goto LAB_004082d7;
    }
    if (bVar7) goto LAB_00408305;
    bVar5 = param_1[-1];
    if ((0x60 < bVar5) && (bVar5 < 0x7b)) {
      bVar5 = bVar5 - 0x20;
    }
    bVar6 = param_2[-1];
    if ((0x60 < bVar6) && (bVar6 < 0x7b)) {
      bVar6 = bVar6 - 0x20;
    }
    bVar7 = bVar5 == bVar6;
    if (!bVar7) {
      uVar3 = (uint)bVar5;
      uVar4 = (uint)bVar6;
LAB_00408305:
      return uVar3 - uVar4;
    }
  } while( true );
}


/* ==== 0040830c FUN_0040830c ==== */

undefined4 FUN_0040830c(char *param_1,char *param_2)

{
  int iVar1;
  
  if (param_1 != param_2) {
    if (param_1 == (char *)0x0) {
      return 0;
    }
    if ((param_2 == (char *)0x0) || (*(int *)(param_1 + -4) != *(int *)(param_2 + -4))) {
      return 0;
    }
    iVar1 = FUN_004082b8(param_1,param_2);
    param_1 = (char *)0x0;
    if (iVar1 != 0) {
      return 0;
    }
  }
  return CONCAT31((int3)((uint)param_1 >> 8),1);
}


/* ==== 00408330 FUN_00408330 ==== */

void FUN_00408330(undefined *param_1,int *param_2)

{
  uint cchLength;
  undefined4 *puVar1;
  
  cchLength = System__LStrLen((int)param_1);
  puVar1 = (undefined4 *)System__LStrToPChar(param_1);
  System__LStrFromPCharLen(param_2,puVar1,cchLength);
  if (0 < (int)cchLength) {
    CharLowerBuffA((LPSTR)*param_2,cchLength);
  }
  return;
}


/* ==== 00408364 FUN_00408364 ==== */

int FUN_00408364(undefined *param_1,undefined *param_2)

{
  int count2;
  PCNZCH lpString2;
  int cchCount1;
  PCNZCH lpString1;
  
  count2 = System__LStrLen((int)param_2);
  lpString2 = System__LStrToPChar(param_2);
  cchCount1 = System__LStrLen((int)param_1);
  lpString1 = System__LStrToPChar(param_1);
  count2 = CompareStringA(0x400,1,lpString1,cchCount1,lpString2,count2);
  return count2 + -2;
}


/* ==== 0040839c FUN_0040839c ==== */

bool FUN_0040839c(undefined *param_1,undefined *param_2)

{
  int count2;
  PCNZCH lpString2;
  int cchCount1;
  PCNZCH lpString1;
  
  count2 = System__LStrLen((int)param_2);
  lpString2 = System__LStrToPChar(param_2);
  cchCount1 = System__LStrLen((int)param_1);
  lpString1 = System__LStrToPChar(param_1);
  count2 = CompareStringA(0x400,1,lpString1,cchCount1,lpString2,count2);
  return count2 == 2;
}


/* ==== 004083d8 FUN_004083d8 ==== */

int FUN_004083d8(PCNZCH string1,PCNZCH string2,int param_3)

{
  int compare_string;
  
  compare_string = CompareStringA(0x400,1,string1,param_3,string2,param_3);
  return compare_string + -2;
}


/* ==== 004083f8 FUN_004083f8 ==== */

void FUN_004083f8(int param_1,int *param_2)

{
  int i_val;
  int j;
  
  i_val = System__LStrLen(param_1);
  for (j = 1; (j <= i_val && (*(byte *)(param_1 + -1 + j) < 0x21)); j = j + 1) {
  }
  if (i_val < j) {
    System__LStrClr(param_2);
  }
  else {
    for (; *(byte *)(param_1 + -1 + i_val) < 0x21; i_val = i_val + -1) {
    }
    System__LStrCopy(param_1,j,(i_val - j) + 1,param_2);
  }
  return;
}


/* ==== 00408448 FUN_00408448 ==== */

void FUN_00408448(int param_1,int *param_2)

{
  uint i_val;
  
  for (i_val = System__LStrLen(param_1);
      (0 < (int)i_val && (*(byte *)(param_1 + -1 + i_val) < 0x21)); i_val = i_val - 1) {
  }
  System__LStrCopy(param_1,1,i_val,param_2);
  return;
}


/* ==== 0040847c FUN_0040847c ==== */

void FUN_0040847c(byte *param_1,int *param_2)

{
  byte bVar1;
  int i_val;
  byte *pbVar2;
  byte *pbVar3;
  byte *pbVar4;
  
  i_val = System__LStrLen((int)param_1);
  pbVar4 = param_1 + i_val;
  i_val = 0;
  for (pbVar2 = param_1; pbVar2 < pbVar4; pbVar2 = pbVar2 + 1) {
    bVar1 = *pbVar2;
    if (bVar1 == 10) {
      i_val = i_val + 1;
    }
    else if (bVar1 == 0xd) {
      if (pbVar2[1] == 10) {
        pbVar2 = pbVar2 + 1;
      }
      else {
        i_val = i_val + 1;
      }
    }
    else if (((byte)(&DAT_004aa118)[(int)(uint)bVar1 >> 3] >> (bVar1 & 7) & 1) != 0) {
      pbVar2 = pbVar2 + 1;
    }
  }
  if (i_val == 0) {
    System__LStrAsg(param_2,(undefined4 *)param_1);
  }
  else {
    System__LStrFromPCharLen(param_2,(undefined4 *)0x0,(uint)(pbVar4 + (i_val - (int)param_1)));
    pbVar2 = (byte *)*param_2;
    while (pbVar3 = param_1, pbVar3 < pbVar4) {
      bVar1 = *pbVar3;
      if (bVar1 == 10) {
        *pbVar2 = 0xd;
        pbVar2[1] = 10;
        pbVar2 = pbVar2 + 2;
        param_1 = pbVar3 + 1;
      }
      else if (bVar1 == 0xd) {
        *pbVar2 = 0xd;
        pbVar2[1] = 10;
        pbVar2 = pbVar2 + 2;
        param_1 = pbVar3 + 1;
        if (pbVar3[1] == 10) {
          param_1 = pbVar3 + 2;
        }
      }
      else {
        if (((byte)(&DAT_004aa118)[(int)(uint)bVar1 >> 3] >> (bVar1 & 7) & 1) != 0) {
          *pbVar2 = bVar1;
          pbVar2 = pbVar2 + 1;
          pbVar3 = pbVar3 + 1;
        }
        *pbVar2 = *pbVar3;
        pbVar2 = pbVar2 + 1;
        param_1 = pbVar3 + 1;
      }
    }
  }
  return;
}


/* ==== 00408548 FUN_00408548 ==== */

undefined4 FUN_00408548(char *param_1)

{
  char cVar1;
  int i_val;
  undefined4 uVar2;
  int j;
  
  uVar2 = 0;
  i_val = System__LStrLen((int)param_1);
  if ((i_val != 0) &&
     (((cVar1 = *param_1, (byte)(cVar1 + 0xbfU) < 0x1a || (cVar1 == '_')) ||
      ((byte)(cVar1 + 0x9fU) < 0x1a)))) {
    i_val = System__LStrLen((int)param_1);
    if (1 < i_val) {
      i_val = i_val + -1;
      j = 2;
      do {
        cVar1 = param_1[j + -1];
        if (((9 < (byte)(cVar1 - 0x30U)) && (0x19 < (byte)(cVar1 + 0xbfU))) &&
           ((cVar1 != '_' && (0x19 < (byte)(cVar1 + 0x9fU))))) {
          return 0;
        }
        j = j + 1;
        i_val = i_val + -1;
      } while (i_val != 0);
    }
    uVar2 = 1;
  }
  return uVar2;
}


/* ==== 004085ac SysUtils.IntToStr ==== */

void SysUtils_IntToStr(undefined4 param_1,int *param_2)

{
  undefined4 local_8;
  undefined1 local_4;
  
  local_4 = 0;
  local_8 = param_1;
  SysUtils_FmtStr(param_2,&DAT_004085d8,&local_8,0);
  return;
}


/* ==== 004085dc FUN_004085dc ==== */

void FUN_004085dc(undefined4 param_1,undefined4 param_2,int *param_3)

{
  undefined4 local_10;
  undefined1 local_c;
  undefined4 local_8;
  undefined1 local_4;
  
  local_c = 0;
  local_4 = 0;
  local_10 = param_2;
  local_8 = param_1;
  SysUtils_FmtStr(param_3,&DAT_00408610,&local_10,1);
  return;
}


/* ==== 00408618 FUN_00408618 ==== */

undefined4 FUN_00408618(byte *param_1)

{
  undefined4 uVar1;
  int local_14;
  byte *local_10;
  undefined1 local_c;
  
  uVar1 = FUN_00402c68(param_1,&local_14);
  if (local_14 != 0) {
    local_c = 0xb;
    local_10 = param_1;
    FUN_0040810c((undefined4 *)PTR_PTR_004ab774,&local_10,0);
  }
  return uVar1;
}


/* ==== 00408654 FUN_00408654 ==== */

undefined4 FUN_00408654(byte *param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  int local_8;
  
  local_8 = param_3;
  uVar1 = FUN_00402c68(param_1,&local_8);
  if (local_8 != 0) {
    uVar1 = param_2;
  }
  return uVar1;
}


/* ==== 0040866c FUN_0040866c ==== */

void FUN_0040866c(undefined *param_1,uint param_2)

{
  LPCSTR lpFileName;
  DWORD dwDesiredAccess;
  DWORD dwShareMode;
  LPSECURITY_ATTRIBUTES lpSecurityAttributes;
  DWORD dwCreationDisposition;
  DWORD dwFlagsAndAttributes;
  HANDLE hTemplateFile;
  
  hTemplateFile = (HANDLE)0x0;
  dwFlagsAndAttributes = 0x80;
  dwCreationDisposition = 3;
  lpSecurityAttributes = (LPSECURITY_ATTRIBUTES)0x0;
  dwShareMode = *(DWORD *)(&DAT_004aa150 + ((param_2 & 0xf0) >> 4) * 4);
  dwDesiredAccess = *(DWORD *)(&DAT_004aa144 + (param_2 & 3) * 4);
  lpFileName = System__LStrToPChar(param_1);
  CreateFileA(lpFileName,dwDesiredAccess,dwShareMode,lpSecurityAttributes,dwCreationDisposition,
              dwFlagsAndAttributes,hTemplateFile);
  return;
}


/* ==== 004086ac FUN_004086ac ==== */

void FUN_004086ac(undefined *param_1)

{
  LPCSTR lpFileName;
  DWORD dwDesiredAccess;
  DWORD dwShareMode;
  LPSECURITY_ATTRIBUTES lpSecurityAttributes;
  DWORD dwCreationDisposition;
  DWORD dwFlagsAndAttributes;
  HANDLE hTemplateFile;
  
  hTemplateFile = (HANDLE)0x0;
  dwFlagsAndAttributes = 0x80;
  dwCreationDisposition = 2;
  lpSecurityAttributes = (LPSECURITY_ATTRIBUTES)0x0;
  dwShareMode = 0;
  dwDesiredAccess = 0xc0000000;
  lpFileName = System__LStrToPChar(param_1);
  CreateFileA(lpFileName,dwDesiredAccess,dwShareMode,lpSecurityAttributes,dwCreationDisposition,
              dwFlagsAndAttributes,hTemplateFile);
  return;
}


/* ==== 004086d0 FUN_004086d0 ==== */

DWORD FUN_004086d0(HANDLE file,LPVOID buffer,DWORD number_of_bytes_to_read)

{
  BOOL BVar1;
  DWORD local_10;
  
  local_10 = number_of_bytes_to_read;
  BVar1 = ReadFile(file,buffer,number_of_bytes_to_read,&local_10,(LPOVERLAPPED)0x0);
  if (BVar1 == 0) {
    local_10 = 0xffffffff;
  }
  return local_10;
}


/* ==== 004086fc FUN_004086fc ==== */

DWORD FUN_004086fc(HANDLE file,LPCVOID buffer,DWORD number_of_bytes_to_write)

{
  BOOL BVar1;
  DWORD local_10;
  
  local_10 = number_of_bytes_to_write;
  BVar1 = WriteFile(file,buffer,number_of_bytes_to_write,&local_10,(LPOVERLAPPED)0x0);
  if (BVar1 == 0) {
    local_10 = 0xffffffff;
  }
  return local_10;
}


/* ==== 00408728 FUN_00408728 ==== */

void FUN_00408728(HANDLE file,LONG distance_to_move,DWORD move_method)

{
  SetFilePointer(file,distance_to_move,(PLONG)0x0,move_method);
  return;
}


/* ==== 00408734 FUN_00408734 ==== */

void FUN_00408734(HANDLE object)

{
  CloseHandle(object);
  return;
}


/* ==== 0040873c SysUtils.FileAge ==== */

undefined4 SysUtils_FileAge(undefined *param_1)

{
  LPCSTR lpFileName;
  HANDLE hFindFile;
  BOOL BVar1;
  _WIN32_FIND_DATAA *lpFindFileData;
  _WIN32_FIND_DATAA win32_find_data;
  _FILETIME local_10;
  undefined4 local_8;
  
  lpFindFileData = &win32_find_data;
  lpFileName = System__LStrToPChar(param_1);
  hFindFile = FindFirstFileA(lpFileName,lpFindFileData);
  if ((hFindFile != (HANDLE)0xffffffff) &&
     (FindClose(hFindFile), ((byte)win32_find_data.dwFileAttributes & 0x10) == 0)) {
    FileTimeToLocalFileTime(&win32_find_data.ftLastWriteTime,&local_10);
    BVar1 = FileTimeToDosDateTime(&local_10,(LPWORD)((int)&local_8 + 2),(LPWORD)&local_8);
    if (BVar1 != 0) {
      return local_8;
    }
  }
  return 0xffffffff;
}


/* ==== 004087a4 SysUtils.FileExists ==== */

undefined4 SysUtils_FileExists(undefined *param_1)

{
  int iVar1;
  
  iVar1 = SysUtils_FileAge(param_1);
  return CONCAT31((int3)((uint)(iVar1 + 1) >> 8),iVar1 + 1 != 0);
}


/* ==== 004087b4 FUN_004087b4 ==== */

void FUN_004087b4(undefined *param_1)

{
  LPCSTR lpFileName;
  
  lpFileName = System__LStrToPChar(param_1);
  GetFileAttributesA(lpFileName);
  return;
}


/* ==== 004087c8 FUN_004087c8 ==== */

DWORD FUN_004087c8(undefined *param_1,DWORD file_attributes)

{
  LPCSTR lpFileName;
  BOOL BVar1;
  DWORD DVar2;
  
  DVar2 = 0;
  lpFileName = System__LStrToPChar(param_1);
  BVar1 = SetFileAttributesA(lpFileName,file_attributes);
  if (BVar1 == 0) {
    DVar2 = GetLastError();
  }
  return DVar2;
}


/* ==== 004087f0 FUN_004087f0 ==== */

DWORD FUN_004087f0(LPWORD fat_time)

{
  BOOL BVar1;
  DWORD DVar2;
  _FILETIME local_c;
  
  do {
    if ((*(uint *)(fat_time + 0xc) & *(uint *)(fat_time + 8)) == 0) {
      FileTimeToLocalFileTime((FILETIME *)(fat_time + 0x16),&local_c);
      FileTimeToDosDateTime(&local_c,fat_time + 1,fat_time);
      *(undefined4 *)(fat_time + 2) = *(undefined4 *)(fat_time + 0x1c);
      *(undefined4 *)(fat_time + 4) = *(undefined4 *)(fat_time + 0xc);
      FUN_00403e8c((int *)(fat_time + 6),(char *)(fat_time + 0x22),0x104);
      return 0;
    }
    BVar1 = FindNextFileA(*(HANDLE *)(fat_time + 10),(LPWIN32_FIND_DATAA)(fat_time + 0xc));
  } while (BVar1 != 0);
  DVar2 = GetLastError();
  return DVar2;
}


/* ==== 00408854 FUN_00408854 ==== */

DWORD FUN_00408854(undefined *param_1,uint param_2,LPWORD fat_time)

{
  LPCSTR lpFileName;
  HANDLE first_file;
  DWORD DVar1;
  LPWIN32_FIND_DATAA lpFindFileData;
  
  *(uint *)(fat_time + 8) = ~param_2 & 0x1e;
  lpFindFileData = (LPWIN32_FIND_DATAA)(fat_time + 0xc);
  lpFileName = System__LStrToPChar(param_1);
  first_file = FindFirstFileA(lpFileName,lpFindFileData);
  *(HANDLE *)(fat_time + 10) = first_file;
  if (first_file == (HANDLE)0xffffffff) {
    DVar1 = GetLastError();
  }
  else {
    DVar1 = FUN_004087f0(fat_time);
    if (DVar1 != 0) {
      FUN_004088c8((int)fat_time);
    }
  }
  return DVar1;
}


/* ==== 004088a4 FUN_004088a4 ==== */

void FUN_004088a4(LPWORD fat_time)

{
  BOOL BVar1;
  
  BVar1 = FindNextFileA(*(HANDLE *)(fat_time + 10),(LPWIN32_FIND_DATAA)(fat_time + 0xc));
  if (BVar1 != 0) {
    FUN_004087f0(fat_time);
    return;
  }
  GetLastError();
  return;
}


/* ==== 004088c8 FUN_004088c8 ==== */

void FUN_004088c8(int param_1)

{
  if (*(HANDLE *)(param_1 + 0x14) != (HANDLE)0xffffffff) {
    FindClose(*(HANDLE *)(param_1 + 0x14));
    *(undefined4 *)(param_1 + 0x14) = 0xffffffff;
  }
  return;
}


/* ==== 004088e4 FUN_004088e4 ==== */

bool FUN_004088e4(undefined *param_1)

{
  LPCSTR lpFileName;
  BOOL BVar1;
  
  lpFileName = System__LStrToPChar(param_1);
  BVar1 = DeleteFileA(lpFileName);
  return BVar1 != 0;
}


/* ==== 004088fc FUN_004088fc ==== */

bool FUN_004088fc(undefined *param_1,undefined *param_2)

{
  LPCSTR lpNewFileName;
  LPCSTR lpExistingFileName;
  BOOL BVar1;
  
  lpNewFileName = System__LStrToPChar(param_2);
  lpExistingFileName = System__LStrToPChar(param_1);
  BVar1 = MoveFileA(lpExistingFileName,lpNewFileName);
  return BVar1 != 0;
}


/* ==== 00408920 FUN_00408920 ==== */

undefined * FUN_00408920(undefined *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined *puVar3;
  
  iVar1 = System__LStrLen((int)param_1);
  if (iVar1 == 0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    puVar3 = param_1 + iVar1 + -1;
    uVar2 = FUN_0040beec(param_1,iVar1);
    if ((char)uVar2 == '\x02') {
      puVar3 = puVar3 + -1;
    }
  }
  return puVar3;
}


/* ==== 00408950 FUN_00408950 ==== */

int FUN_00408950(undefined *param_1,undefined *param_2)

{
  int i_val;
  char *pcVar1;
  char *pcVar2;
  undefined4 uVar3;
  
  i_val = System__LStrLen((int)param_2);
  pcVar1 = System__LStrToPChar(param_1);
  do {
    if (i_val < 1) {
      return i_val;
    }
    if ((param_2[i_val + -1] != '\0') &&
       (pcVar2 = FUN_00408c98(pcVar1,param_2[i_val + -1]), pcVar2 != (char *)0x0)) {
      uVar3 = FUN_0040beec(param_2,i_val);
      if ((char)uVar3 != '\x02') {
        return i_val;
      }
      i_val = i_val + -1;
    }
    i_val = i_val + -1;
  } while( true );
}


/* ==== 004089a0 FUN_004089a0 ==== */

void FUN_004089a0(undefined *param_1,int *param_2)

{
  uint uVar1;
  
  uVar1 = FUN_00408950(&DAT_004089d0,param_1);
  System__LStrCopy((int)param_1,1,uVar1,param_2);
  return;
}


/* ==== 004089d4 FUN_004089d4 ==== */

void FUN_004089d4(undefined *param_1,int *param_2)

{
  uint i_val;
  undefined4 uVar1;
  
  i_val = FUN_00408950(&DAT_00408a2c,param_1);
  if ((1 < (int)i_val) && (param_1[i_val - 1] == '\\')) {
    if ((param_1[i_val - 2] == ':') || (param_1[i_val - 2] == '\\')) {
      uVar1 = FUN_0040beec(param_1,i_val - 1);
      if ((char)uVar1 != '\x02') goto LAB_00408a10;
    }
    i_val = i_val - 1;
  }
LAB_00408a10:
  System__LStrCopy((int)param_1,1,i_val,param_2);
  return;
}


/* ==== 00408a30 FUN_00408a30 ==== */

void FUN_00408a30(undefined *param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = FUN_00408950(&DAT_00408a64,param_1);
  System__LStrCopy((int)param_1,iVar1 + 1,0x7fffffff,param_2);
  return;
}


/* ==== 00408a68 FUN_00408a68 ==== */

void FUN_00408a68(undefined *param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = FUN_00408950(&DAT_00408aac,param_1);
  if ((iVar1 < 1) || (param_1[iVar1 + -1] != '.')) {
    System__LStrClr(param_2);
  }
  else {
    System__LStrCopy((int)param_1,iVar1,0x7fffffff,param_2);
  }
  return;
}


/* ==== 00408b24 FUN_00408b24 ==== */

int FUN_00408b24(char *param_1)

{
  char cVar1;
  int i_val;
  
  i_val = -1;
  do {
    if (i_val == 0) break;
    i_val = i_val + -1;
    cVar1 = *param_1;
    param_1 = param_1 + 1;
  } while (cVar1 != '\0');
  return -2 - i_val;
}


/* ==== 00408b3c FUN_00408b3c ==== */

char * FUN_00408b3c(char *param_1)

{
  char cVar1;
  int i_val;
  char *pcVar2;
  
  i_val = -1;
  do {
    pcVar2 = param_1;
    if (i_val == 0) break;
    i_val = i_val + -1;
    pcVar2 = param_1 + 1;
    cVar1 = *param_1;
    param_1 = pcVar2;
  } while (cVar1 != '\0');
  return pcVar2 + -1;
}


/* ==== 00408b50 FUN_00408b50 ==== */

void FUN_00408b50(undefined4 *param_1,undefined4 *param_2,uint param_3)

{
  uint i_val;
  undefined1 *puVar1;
  undefined4 *puVar2;
  undefined1 *puVar3;
  undefined4 *puVar4;
  
  if (param_2 < param_1) {
    puVar1 = (undefined1 *)((int)param_2 + (param_3 - 1));
    puVar3 = (undefined1 *)((int)param_1 + (param_3 - 1));
    for (i_val = param_3 & 3; i_val != 0; i_val = i_val - 1) {
      *puVar3 = *puVar1;
      puVar1 = puVar1 + -1;
      puVar3 = puVar3 + -1;
    }
    puVar2 = (undefined4 *)(puVar1 + -3);
    puVar4 = (undefined4 *)(puVar3 + -3);
    for (i_val = param_3 >> 2; i_val != 0; i_val = i_val - 1) {
      *puVar4 = *puVar2;
      puVar2 = puVar2 + -1;
      puVar4 = puVar4 + -1;
    }
  }
  else if (param_1 != param_2) {
    for (i_val = param_3 >> 2; i_val != 0; i_val = i_val - 1) {
      *param_1 = *param_2;
      param_2 = param_2 + 1;
      param_1 = param_1 + 1;
    }
    for (i_val = param_3 & 3; i_val != 0; i_val = i_val - 1) {
      *(undefined1 *)param_1 = *(undefined1 *)param_2;
      param_2 = (undefined4 *)((int)param_2 + 1);
      param_1 = (undefined4 *)((int)param_1 + 1);
    }
    return;
  }
  return;
}


/* ==== 00408b8c FUN_00408b8c ==== */

char * FUN_00408b8c(char *param_1,char *param_2)

{
  char cVar1;
  uint i_val;
  uint j;
  char *pcVar2;
  
  i_val = 0xffffffff;
  pcVar2 = param_2;
  do {
    if (i_val == 0) break;
    i_val = i_val - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = param_1;
  for (j = ~i_val >> 2; j != 0; j = j - 1) {
    *(undefined4 *)pcVar2 = *(undefined4 *)param_2;
    param_2 = param_2 + 4;
    pcVar2 = pcVar2 + 4;
  }
  for (i_val = ~i_val & 3; i_val != 0; i_val = i_val - 1) {
    *pcVar2 = *param_2;
    param_2 = param_2 + 1;
    pcVar2 = pcVar2 + 1;
  }
  return param_1;
}


/* ==== 00408bb4 FUN_00408bb4 ==== */

char * FUN_00408bb4(char *param_1,char *param_2,int param_3)

{
  int i_val;
  uint j;
  char *pcVar1;
  bool bVar2;
  
  bVar2 = param_3 == 0;
  i_val = param_3;
  pcVar1 = param_2;
  if (!bVar2) {
    do {
      if (i_val == 0) break;
      i_val = i_val + -1;
      bVar2 = *pcVar1 == '\0';
      pcVar1 = pcVar1 + 1;
    } while (!bVar2);
    if (bVar2) {
      i_val = i_val + 1;
    }
  }
  pcVar1 = param_1;
  for (j = (uint)(param_3 - i_val) >> 2; j != 0; j = j - 1) {
    *(undefined4 *)pcVar1 = *(undefined4 *)param_2;
    param_2 = param_2 + 4;
    pcVar1 = pcVar1 + 4;
  }
  for (j = param_3 - i_val & 3; j != 0; j = j - 1) {
    *pcVar1 = *param_2;
    param_2 = param_2 + 1;
    pcVar1 = pcVar1 + 1;
  }
  *pcVar1 = '\0';
  return param_1;
}


/* ==== 00408be8 FUN_00408be8 ==== */

void FUN_00408be8(char *param_1,undefined *param_2)

{
  int iVar1;
  char *pcVar2;
  
  iVar1 = System__LStrLen((int)param_2);
  pcVar2 = System__LStrToPChar(param_2);
  FUN_00408bb4(param_1,pcVar2,iVar1);
  return;
}


/* ==== 00408c0c FUN_00408c0c ==== */

void FUN_00408c0c(char *param_1,undefined *param_2,int param_3)

{
  char *pcVar1;
  
  pcVar1 = System__LStrToPChar(param_2);
  FUN_00408bb4(param_1,pcVar1,param_3);
  return;
}


/* ==== 00408c2c FUN_00408c2c ==== */

int FUN_00408c2c(char *param_1,char *param_2)

{
  char cVar1;
  char cVar2;
  uint i_val;
  char *pcVar3;
  char *pcVar4;
  
  i_val = 0xffffffff;
  pcVar3 = param_2;
  do {
    if (i_val == 0) break;
    i_val = i_val - 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  i_val = ~i_val;
  do {
    pcVar3 = param_1;
    pcVar4 = param_2;
    if (i_val == 0) break;
    i_val = i_val - 1;
    pcVar4 = param_2 + 1;
    pcVar3 = param_1 + 1;
    cVar2 = *param_2;
    cVar1 = *param_1;
    param_1 = pcVar3;
    param_2 = pcVar4;
  } while (cVar1 == cVar2);
  return (uint)(byte)pcVar3[-1] - (uint)(byte)pcVar4[-1];
}


/* ==== 00408c50 FUN_00408c50 ==== */

void FUN_00408c50(char *param_1,char *param_2,int param_3)

{
  char *pcVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  undefined3 uVar5;
  int i_val;
  uint uVar6;
  char *pcVar7;
  bool bVar8;
  
  iVar4 = 0;
  i_val = param_3;
  pcVar7 = param_2;
  if (param_3 != 0) {
    do {
      if (i_val == 0) break;
      i_val = i_val + -1;
      cVar2 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar2 != '\0');
    i_val = param_3 - i_val;
    bVar8 = true;
LAB_00408c69:
    do {
      if (i_val != 0) {
        i_val = i_val + -1;
        pcVar1 = param_2 + 1;
        pcVar7 = param_1 + 1;
        bVar8 = *param_1 == *param_2;
        param_1 = pcVar7;
        param_2 = pcVar1;
        if (bVar8) goto LAB_00408c69;
      }
      if (bVar8) {
        return;
      }
      bVar3 = param_1[-1];
      uVar5 = (undefined3)((uint)iVar4 >> 8);
      iVar4 = CONCAT31(uVar5,bVar3);
      if ((0x60 < bVar3) && (bVar3 < 0x7b)) {
        iVar4 = CONCAT31(uVar5,bVar3 - 0x20);
      }
      bVar3 = param_2[-1];
      uVar6 = (uint)bVar3;
      if ((0x60 < bVar3) && (bVar3 < 0x7b)) {
        uVar6 = (uint)(byte)(bVar3 - 0x20);
      }
      iVar4 = iVar4 - uVar6;
      bVar8 = true;
    } while (iVar4 == 0);
  }
  return;
}


/* ==== 00408c98 FUN_00408c98 ==== */

char * FUN_00408c98(char *param_1,char param_2)

{
  char *pcVar1;
  uint i_val;
  char *pcVar2;
  bool bVar3;
  
  i_val = 0xffffffff;
  bVar3 = true;
  pcVar2 = param_1;
  do {
    if (i_val == 0) break;
    i_val = i_val - 1;
    bVar3 = *pcVar2 == '\0';
    pcVar2 = pcVar2 + 1;
  } while (!bVar3);
  i_val = ~i_val;
  do {
    pcVar2 = param_1;
    if (i_val == 0) break;
    i_val = i_val - 1;
    pcVar2 = param_1 + 1;
    bVar3 = param_2 == *param_1;
    param_1 = pcVar2;
  } while (!bVar3);
  pcVar1 = (char *)0x0;
  if (bVar3) {
    pcVar1 = pcVar2 + -1;
  }
  return pcVar1;
}


/* ==== 00408cb8 FUN_00408cb8 ==== */

char * FUN_00408cb8(char *param_1,char *param_2)

{
  char cVar1;
  uint i_val;
  uint uVar2;
  uint j;
  int k;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  bool bVar6;
  
  if ((param_1 != (char *)0x0) && (param_2 != (char *)0x0)) {
    i_val = 0xffffffff;
    pcVar4 = param_2;
    do {
      if (i_val == 0) break;
      i_val = i_val - 1;
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    uVar2 = ~i_val - 1;
    if (uVar2 != 0) {
      j = 0xffffffff;
      pcVar4 = param_1;
      do {
        if (j == 0) break;
        j = j - 1;
        cVar1 = *pcVar4;
        pcVar4 = pcVar4 + 1;
      } while (cVar1 != '\0');
      k = ~j - uVar2;
      bVar6 = k == 0;
      if (uVar2 <= ~j && !bVar6) {
        do {
          pcVar4 = param_1;
          do {
            param_1 = pcVar4;
            if (k == 0) break;
            k = k + -1;
            param_1 = pcVar4 + 1;
            bVar6 = *param_2 == *pcVar4;
            pcVar4 = param_1;
          } while (!bVar6);
          iVar3 = ~i_val - 2;
          pcVar5 = param_1;
          pcVar4 = param_2;
          if (!bVar6) {
            return (char *)0x0;
          }
          do {
            if (iVar3 == 0) break;
            bVar6 = pcVar4[1] == *pcVar5;
            iVar3 = iVar3 + -1;
            pcVar5 = pcVar5 + 1;
            pcVar4 = pcVar4 + 1;
          } while (bVar6);
          if (bVar6) {
            return param_1 + -1;
          }
        } while( true );
      }
    }
  }
  return (char *)0x0;
}


/* ==== 00408d0c FUN_00408d0c ==== */

void FUN_00408d0c(char *param_1,int *param_2)

{
  FUN_00403e14(param_2,param_1);
  return;
}


/* ==== 00408d20 FUN_00408d20 ==== */

int * FUN_00408d20(int param_1)

{
  int *piVar1;
  
  piVar1 = (int *)System__GetMem(param_1 + 4);
  *piVar1 = param_1 + 4;
  return piVar1 + 1;
}


/* ==== 00408d34 FUN_00408d34 ==== */

int FUN_00408d34(int param_1)

{
  return *(int *)(param_1 + -4) + -4;
}


/* ==== 00408d40 FUN_00408d40 ==== */

undefined4 FUN_00408d40(char *param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  
  if (param_1 == (char *)0x0) {
    return 0;
  }
  iVar1 = FUN_00408b24(param_1);
  piVar2 = FUN_00408d20(iVar1 + 1U);
  uVar3 = FUN_00408b50(piVar2,(undefined4 *)param_1,iVar1 + 1U);
  return uVar3;
}


/* ==== 00408d6c FUN_00408d6c ==== */

void FUN_00408d6c(int param_1)

{
  if (param_1 != 0) {
    System__FreeMem(param_1 + -4);
  }
  return;
}


/* ==== 00408d7c FUN_00408d7c ==== */

/* WARNING: Type propagation algorithm not settling */

void FUN_00408d7c(int param_1,byte *param_2,uint param_3)

{
  undefined4 uVar1;
  undefined1 auStack_35 [33];
  undefined1 *local_14;
  undefined1 local_10;
  
  if (0x1f < param_3) {
    param_3 = 0x1f;
  }
  uVar1 = FUN_0040bf10(param_2,param_3 - 1);
  if ((char)uVar1 == '\x01') {
    param_3 = param_3 - 1;
  }
  FUN_00408b50((undefined4 *)((int)auStack_35 + 1),(undefined4 *)param_2,param_3);
  auStack_35[param_3 + 1] = 0;
  local_10 = 6;
  local_14 = (undefined1 *)((int)auStack_35 + 1);
  FUN_0040810c((undefined4 *)(&PTR_PTR_004aa164)[param_1],&local_14,0);
  return;
}


/* ==== 00408dd4 FUN_00408dd4 ==== */

void FUN_00408dd4(int *param_1,VARIANTARG *variantarg)

{
  FUN_00404da4(param_1,variantarg);
  return;
}


/* ==== 00408de8 FUN_00408de8 ==== */

void FUN_00408de8(int *param_1)

{
  System__LStrClr(param_1);
  return;
}


/* ==== 00408df4 FUN_00408df4 ==== */

void FUN_00408df4(byte *param_1,byte *param_2,byte *param_3,undefined4 param_4,undefined4 param_5,
                 int param_6)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  undefined3 uVar5;
  VARIANTARG *pVVar4;
  byte *pbVar6;
  byte *extraout_ECX;
  byte *extraout_ECX_00;
  byte *extraout_ECX_01;
  byte *pbVar7;
  byte *extraout_EDX;
  byte *extraout_EDX_00;
  byte *pbVar8;
  byte *pbVar9;
  byte *pbVar10;
  byte *pbVar11;
  bool bVar12;
  byte bVar13;
  int local_10;
  byte *local_c;
  byte *local_8;
  
  bVar13 = 0;
  pbVar6 = param_3 + param_6;
  uVar3 = 0;
  local_c = (byte *)0x0;
  local_10 = 0;
  local_8 = param_1;
LAB_00408e18:
  if (param_2 != (byte *)0x0) {
    do {
      if (param_3 == pbVar6) break;
      pbVar9 = param_3 + (uint)bVar13 * -2 + 1;
      bVar1 = *param_3;
      uVar5 = (undefined3)(uVar3 >> 8);
      uVar3 = CONCAT31(uVar5,bVar1);
      param_3 = pbVar9;
      if (bVar1 == 0x25) {
        if (pbVar9 == pbVar6) break;
        param_3 = pbVar9 + (uint)bVar13 * -2 + 1;
        uVar3 = CONCAT31(uVar5,*pbVar9);
        if (*pbVar9 != 0x25) goto code_r0x00408e3e;
      }
      pbVar9 = param_1 + (uint)bVar13 * -2 + 1;
      *param_1 = (byte)uVar3;
      param_2 = param_2 + -1;
      param_1 = pbVar9;
      if (param_2 == (byte *)0x0) break;
    } while( true );
  }
LAB_00408e2a:
  FUN_004091dc((int)param_1 - (int)local_8);
  return;
code_r0x00408e3e:
  pbVar9 = param_3 + -2;
  while( true ) {
    cVar2 = (char)uVar3;
    pbVar10 = param_3;
    if (cVar2 == '-') {
      if (param_3 == pbVar6) goto LAB_00408e2a;
      pbVar10 = param_3 + (uint)bVar13 * -2 + 1;
      uVar3 = CONCAT31((int3)(uVar3 >> 8),*param_3);
    }
    uVar3 = FUN_00408ed6(uVar3,param_2,pbVar6);
    uVar5 = (undefined3)(uVar3 >> 8);
    pbVar6 = extraout_ECX;
    if ((char)uVar3 != ':') break;
    local_c = pbVar9;
    if (pbVar10 == extraout_ECX) goto LAB_00408e2a;
    param_3 = pbVar10 + (uint)bVar13 * -2 + 1;
    uVar3 = CONCAT31(uVar5,*pbVar10);
    param_2 = extraout_EDX;
  }
  pbVar8 = extraout_EDX;
  param_3 = pbVar10;
  if ((char)uVar3 == '.') {
    if (pbVar10 == extraout_ECX) goto LAB_00408e2a;
    param_3 = pbVar10 + (uint)bVar13 * -2 + 1;
    uVar3 = FUN_00408ed6(CONCAT31(uVar5,*pbVar10),extraout_EDX,extraout_ECX);
    pbVar6 = extraout_ECX_00;
    pbVar8 = extraout_EDX_00;
  }
  pVVar4 = FUN_00408f1f((byte)uVar3);
  pbVar10 = pbVar9 + -(int)extraout_ECX_01;
  if (pbVar9 < extraout_ECX_01) {
    pbVar10 = (byte *)0x0;
  }
  pbVar9 = extraout_ECX_01;
  pbVar11 = param_3;
  if (cVar2 == '-') {
    bVar12 = pbVar8 < extraout_ECX_01;
    pbVar8 = pbVar8 + -(int)extraout_ECX_01;
    pbVar7 = extraout_ECX_01;
    if (bVar12) {
      pbVar7 = extraout_ECX_01 + (int)pbVar8;
      pbVar8 = (byte *)0x0;
    }
    for (; pbVar9 = (byte *)0x0, pbVar7 != (byte *)0x0; pbVar7 = pbVar7 + -1) {
      *param_1 = *pbVar11;
      pbVar11 = pbVar11 + (uint)bVar13 * -2 + 1;
      param_1 = param_1 + (uint)bVar13 * -2 + 1;
    }
  }
  pbVar7 = pbVar8 + -(int)pbVar10;
  if (pbVar8 < pbVar10) {
    pbVar10 = pbVar10 + (int)pbVar7;
    pbVar7 = (byte *)0x0;
  }
  uVar3 = CONCAT31((int3)((uint)pVVar4 >> 8),0x20);
  for (; pbVar10 != (byte *)0x0; pbVar10 = pbVar10 + -1) {
    *param_1 = 0x20;
    param_1 = param_1 + (uint)bVar13 * -2 + 1;
  }
  param_2 = pbVar7 + -(int)pbVar9;
  if (pbVar7 < pbVar9) {
    pbVar9 = pbVar9 + (int)param_2;
    param_2 = (byte *)0x0;
  }
  for (; pbVar9 != (byte *)0x0; pbVar9 = pbVar9 + -1) {
    *param_1 = *pbVar11;
    pbVar11 = pbVar11 + (uint)bVar13 * -2 + 1;
    param_1 = param_1 + (uint)bVar13 * -2 + 1;
  }
  if (local_10 != 0) {
    uVar3 = FUN_00408de8(&local_10);
  }
  goto LAB_00408e18;
}


/* ==== 00408ed6 FUN_00408ed6 ==== */

uint FUN_00408ed6(uint param_1,undefined4 param_2,byte *param_3)

{
  uint uVar1;
  int unaff_EBP;
  byte *unaff_ESI;
  int unaff_EDI;
  
  if ((char)param_1 == '*') {
    uVar1 = *(uint *)(unaff_EBP + -8);
    if (uVar1 <= *(uint *)(unaff_EBP + 8)) {
      *(int *)(unaff_EBP + -8) = *(int *)(unaff_EBP + -8) + 1;
    }
    if (unaff_ESI == param_3) {
LAB_00408e2a:
      uVar1 = FUN_004091dc(unaff_EDI - *(int *)(unaff_EBP + -4));
      return uVar1;
    }
    param_1 = CONCAT31((int3)(uVar1 >> 8),*unaff_ESI);
  }
  else {
    while ((0x2f < (byte)param_1 && ((byte)param_1 < 0x3a))) {
      if (unaff_ESI == param_3) goto LAB_00408e2a;
      param_1 = (uint)*unaff_ESI;
      unaff_ESI = unaff_ESI + 1;
    }
  }
  return param_1;
}


/* ==== 00408f1f FUN_00408f1f ==== */

VARIANTARG * FUN_00408f1f(byte param_1)

{
  int *piVar1;
  ulonglong uVar2;
  ushort uVar3;
  _union_2683 *p_Var4;
  undefined4 uVar5;
  uint3 uVar9;
  int i_val;
  VARIANTARG *pVVar6;
  uint uVar7;
  VARIANTARG *pVVar8;
  byte extraout_CL;
  uint uVar10;
  uint uVar11;
  byte bVar12;
  char cVar13;
  int extraout_EDX;
  short sVar14;
  int unaff_EBP;
  code *unaff_ESI;
  byte *pbVar15;
  
  bVar12 = param_1 & 0xdf;
  uVar5 = 1;
  uVar7 = *(uint *)(unaff_EBP + -8);
  if (*(uint *)(unaff_EBP + 8) < uVar7) goto LAB_00408f8c;
  *(int *)(unaff_EBP + -8) = *(int *)(unaff_EBP + -8) + 1;
  unaff_ESI = (code *)(*(int *)(unaff_EBP + 0xc) + uVar7 * 8);
  pVVar6 = *(VARIANTARG **)&((VARIANTARG *)unaff_ESI)->n1;
  uVar9 = (uint3)((uint)pVVar6 >> 8);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)((int)&((VARIANTARG *)unaff_ESI)->n1 + 4)) {
  case 0:
    if (bVar12 == 0x44) {
      if ((int)pVVar6 < 0) {
        uVar5 = FUN_00409066(-(int)pVVar6);
        *(undefined1 *)((int)&((VARIANTARG *)((int)unaff_ESI + -0x10))->n1 + 0xf) = 0x2d;
        return (VARIANTARG *)CONCAT31((int3)((uint)uVar5 >> 8),0x2d);
      }
    }
    else if (bVar12 != 0x55) {
      if (bVar12 == 0x58) {
        uVar7 = 0x10;
        goto LAB_0040906b;
      }
      goto switchD_00408f3f_caseD_1;
    }
    uVar7 = 10;
    goto LAB_0040906b;
  default:
    goto switchD_00408f3f_caseD_1;
  case 2:
    if (bVar12 == 0x53) {
      return pVVar6;
    }
    goto switchD_00408f3f_caseD_1;
  case 3:
    uVar3 = 0;
    goto LAB_00409161;
  case 4:
    if (bVar12 != 0x53) goto switchD_00408f3f_caseD_1;
    p_Var4 = &pVVar6->n1;
    pVVar6 = (VARIANTARG *)CONCAT31(uVar9,*(byte *)p_Var4);
    uVar7 = (uint)*(byte *)p_Var4;
    goto LAB_00409117;
  case 5:
    if (bVar12 != 0x50) goto switchD_00408f3f_caseD_1;
    *(undefined4 *)(unaff_EBP + -0x20) = 8;
    uVar7 = 0x10;
LAB_0040906b:
    pbVar15 = (byte *)(unaff_EBP + -0x61);
    do {
      uVar2 = ZEXT48(pVVar6);
      pVVar8 = (VARIANTARG *)(uVar2 / uVar7);
      cVar13 = (char)((uint)pVVar6 % uVar7);
      bVar12 = cVar13 + 0x30;
      if (0x39 < bVar12) {
        bVar12 = cVar13 + 0x37;
      }
      pbVar15 = pbVar15 + -1;
      *pbVar15 = bVar12;
      pVVar6 = pVVar8;
    } while (pVVar8 != (VARIANTARG *)0x0);
    uVar11 = (unaff_EBP + -0x61) - (int)pbVar15;
    uVar10 = *(uint *)(unaff_EBP + -0x20);
    if (uVar10 < 0x11) {
      i_val = uVar10 - uVar11;
      pVVar6 = (VARIANTARG *)0x0;
      if (uVar11 <= uVar10 && i_val != 0) {
        pVVar6 = (VARIANTARG *)CONCAT31((int3)(uVar2 / uVar7 >> 8),0x30);
        do {
          pbVar15 = pbVar15 + -1;
          *pbVar15 = 0x30;
          i_val = i_val + -1;
        } while (i_val != 0);
      }
      return pVVar6;
    }
    return (VARIANTARG *)0x0;
  case 6:
    if (bVar12 == 0x53) {
      pVVar8 = (VARIANTARG *)((uint)uVar9 << 8);
      i_val = *(int *)(unaff_EBP + -0x20);
      if (i_val != 0) {
        do {
          if (i_val == 0) {
            return pVVar8;
          }
          i_val = i_val + -1;
          p_Var4 = &pVVar6->n1;
          pVVar6 = (VARIANTARG *)((int)&pVVar6->n1 + 1);
        } while (*(char *)p_Var4 != '\0');
      }
      return pVVar8;
    }
switchD_00408f3f_caseD_1:
    do {
      uVar5 = 0;
LAB_00408f8c:
      i_val = FUN_004091d1(uVar5);
      pVVar6 = (VARIANTARG *)
               FUN_00408d7c(i_val,*(byte **)(unaff_EBP + -0x14),
                            *(int *)(unaff_EBP + -0x24) - (int)*(byte **)(unaff_EBP + -0x14));
      bVar12 = extraout_CL;
switchD_00408f3f_caseD_10:
      piVar1 = (int *)(unaff_EBP + -0x30);
      *piVar1 = *(int *)&pVVar6->n1;
      *(ULONG *)(unaff_EBP + -0x2c) = (pVVar6->n1).decVal.Hi32;
      if (bVar12 == 0x44) {
        if ((*(uint *)(unaff_EBP + -0x2c) & 0x80000000) != 0) {
          i_val = *piVar1;
          *piVar1 = -*piVar1;
          *(int *)(unaff_EBP + -0x2c) = *(int *)(unaff_EBP + -0x2c) + (uint)(i_val != 0);
          *(int *)(unaff_EBP + -0x2c) = -*(int *)(unaff_EBP + -0x2c);
          uVar5 = FUN_00408fdf();
          *(undefined1 *)((int)&((VARIANTARG *)((int)unaff_ESI + -0x10))->n1 + 0xf) = 0x2d;
          return (VARIANTARG *)CONCAT31((int3)((uint)uVar5 >> 8),0x2d);
        }
code_r0x00408fdf:
        uVar5 = 10;
        goto LAB_00408fe4;
      }
      if (bVar12 == 0x55) goto code_r0x00408fdf;
    } while (bVar12 != 0x58);
    uVar5 = 0x10;
LAB_00408fe4:
    pbVar15 = (byte *)(unaff_EBP + -0x51);
    do {
      uVar7 = FUN_004062e1(*piVar1,*(uint *)(unaff_EBP + -0x2c),uVar5,uVar5,0);
      bVar12 = (char)uVar7 + 0x30;
      if (0x39 < bVar12) {
        bVar12 = (char)uVar7 + 0x37;
      }
      pbVar15 = pbVar15 + -1;
      *pbVar15 = bVar12;
      i_val = FUN_004061ec(*piVar1,*(uint *)(unaff_EBP + -0x2c),uVar5,uVar5,0);
      *piVar1 = i_val;
      *(int *)(unaff_EBP + -0x2c) = extraout_EDX;
    } while (i_val != 0 || extraout_EDX != 0);
    uVar10 = (unaff_EBP + -0x51) - (int)pbVar15;
    uVar7 = *(uint *)(unaff_EBP + -0x20);
    if (uVar7 < 0x11) {
      i_val = uVar7 - uVar10;
      pVVar6 = (VARIANTARG *)0x0;
      if (uVar10 <= uVar7 && i_val != 0) {
        pVVar6 = (VARIANTARG *)0x30;
        do {
          pbVar15 = pbVar15 + -1;
          *pbVar15 = 0x30;
          i_val = i_val + -1;
        } while (i_val != 0);
      }
      return pVVar6;
    }
    return (VARIANTARG *)0x0;
  case 10:
    unaff_ESI = FUN_00403e44;
    goto LAB_004090ee;
  case 0xb:
    pVVar8 = pVVar6;
    if (bVar12 != 0x53) goto switchD_00408f3f_caseD_1;
    break;
  case 0xc:
    uVar3 = 1;
LAB_00409161:
    uVar9 = (uint3)uVar3;
    sVar14 = uVar3 << 8;
    if ((bVar12 == 0x47) || (sVar14 = (short)CONCAT31(uVar9,1), bVar12 == 0x45)) {
      uVar10 = *(uint *)(unaff_EBP + -0x20);
      uVar7 = 3;
      if (0x12 < uVar10) {
        uVar10 = 0xf;
      }
    }
    else {
      sVar14 = (short)CONCAT31(uVar9,2);
      if ((bVar12 != 0x46) && (sVar14 = (short)CONCAT31(uVar9,3), bVar12 != 0x4e)) {
        unaff_ESI = (code *)pVVar6;
        if (bVar12 != 0x4d) goto switchD_00408f3f_caseD_1;
        sVar14 = (short)CONCAT31(uVar9,4);
      }
      uVar10 = 0x12;
      uVar7 = *(uint *)(unaff_EBP + -0x20);
      if ((0x12 < uVar7) && (uVar7 = 2, bVar12 == 0x4d)) {
        uVar7 = (uint)DAT_004ac4fc;
      }
    }
    pVVar6 = (VARIANTARG *)
             FUN_0040ccee((undefined1 *)(unaff_EBP + -0x71),pVVar6,(char)((ushort)sVar14 >> 8),uVar7
                          ,uVar10,(byte)sVar14);
    return pVVar6;
  case 0xd:
    if (bVar12 != 0x53) goto switchD_00408f3f_caseD_1;
    if ((pVVar6->n1).n2.vt < 2) {
      return pVVar6;
    }
    pVVar6 = (VARIANTARG *)FUN_00408dd4((int *)(unaff_EBP + -0xc),pVVar6);
    pVVar8 = *(VARIANTARG **)(unaff_EBP + -0xc);
    break;
  case 0xf:
    unaff_ESI = FUN_00403ea4;
LAB_004090ee:
    if (bVar12 != 0x53) goto switchD_00408f3f_caseD_1;
    (*unaff_ESI)(unaff_EBP + -0x10,pVVar6);
    pVVar6 = *(VARIANTARG **)(unaff_EBP + -0x10);
    pVVar8 = pVVar6;
    break;
  case 0x10:
    goto switchD_00408f3f_caseD_10;
  }
  if (pVVar8 == (VARIANTARG *)0x0) {
    return pVVar6;
  }
  uVar7 = *(uint *)((int)&pVVar8[-1].n1 + 0xc);
LAB_00409117:
  if (*(uint *)(unaff_EBP + -0x20) < uVar7) {
    return pVVar6;
  }
  return pVVar6;
}


/* ==== 00408fdf FUN_00408fdf ==== */

void FUN_00408fdf(void)

{
  uint uVar1;
  int i_val;
  uint uVar2;
  byte bVar3;
  int extraout_EDX;
  int *unaff_EBX;
  int unaff_EBP;
  byte *pbVar4;
  
  pbVar4 = (byte *)(unaff_EBP + -0x51);
  do {
    uVar1 = FUN_004062e1(*unaff_EBX,unaff_EBX[1],10,10,0);
    bVar3 = (char)uVar1 + 0x30;
    if (0x39 < bVar3) {
      bVar3 = (char)uVar1 + 0x37;
    }
    pbVar4 = pbVar4 + -1;
    *pbVar4 = bVar3;
    i_val = FUN_004061ec(*unaff_EBX,unaff_EBX[1],10,10,0);
    *unaff_EBX = i_val;
    unaff_EBX[1] = extraout_EDX;
  } while (i_val != 0 || extraout_EDX != 0);
  uVar2 = (unaff_EBP + -0x51) - (int)pbVar4;
  uVar1 = *(uint *)(unaff_EBP + -0x20);
  if (uVar1 < 0x11) {
    i_val = uVar1 - uVar2;
    if (uVar2 <= uVar1 && i_val != 0) {
      do {
        pbVar4 = pbVar4 + -1;
        *pbVar4 = 0x30;
        i_val = i_val + -1;
      } while (i_val != 0);
    }
    return;
  }
  return;
}


/* ==== 0040903a caseD_0 ==== */

void switchD_00408f3f::caseD_0(uint param_1,undefined4 param_2,char param_3)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  char extraout_CL;
  undefined4 uVar4;
  uint uVar5;
  byte bVar6;
  int extraout_EDX;
  int i_val;
  int unaff_EBP;
  int unaff_ESI;
  byte *pbVar8;
  char cVar7;
  
  if (param_3 == 'D') {
    if ((int)param_1 < 0) {
      FUN_00409066(-param_1);
      *(undefined1 *)(unaff_ESI + -1) = 0x2d;
      return;
    }
  }
  else if (param_3 != 'U') {
    if (param_3 != 'X') {
      do {
        i_val = FUN_004091d1(0);
        piVar2 = (int *)FUN_00408d7c(i_val,*(byte **)(unaff_EBP + -0x14),
                                     *(int *)(unaff_EBP + -0x24) -
                                     (int)*(byte **)(unaff_EBP + -0x14));
        piVar1 = (int *)(unaff_EBP + -0x30);
        *piVar1 = *piVar2;
        *(int *)(unaff_EBP + -0x2c) = piVar2[1];
        if (extraout_CL == 'D') {
          if ((*(uint *)(unaff_EBP + -0x2c) & 0x80000000) != 0) {
            i_val = *piVar1;
            *piVar1 = -*piVar1;
            *(int *)(unaff_EBP + -0x2c) = *(int *)(unaff_EBP + -0x2c) + (uint)(i_val != 0);
            *(int *)(unaff_EBP + -0x2c) = -*(int *)(unaff_EBP + -0x2c);
            FUN_00408fdf();
            *(undefined1 *)(unaff_ESI + -1) = 0x2d;
            return;
          }
code_r0x00408fdf:
          uVar4 = 10;
          goto LAB_00408fe4;
        }
        if (extraout_CL == 'U') goto code_r0x00408fdf;
      } while (extraout_CL != 'X');
      uVar4 = 0x10;
LAB_00408fe4:
      pbVar8 = (byte *)(unaff_EBP + -0x51);
      do {
        uVar5 = FUN_004062e1(*piVar1,*(uint *)(unaff_EBP + -0x2c),uVar4,uVar4,0);
        bVar6 = (char)uVar5 + 0x30;
        if (0x39 < bVar6) {
          bVar6 = (char)uVar5 + 0x37;
        }
        pbVar8 = pbVar8 + -1;
        *pbVar8 = bVar6;
        i_val = FUN_004061ec(*piVar1,*(uint *)(unaff_EBP + -0x2c),uVar4,uVar4,0);
        *piVar1 = i_val;
        *(int *)(unaff_EBP + -0x2c) = extraout_EDX;
      } while (i_val != 0 || extraout_EDX != 0);
      uVar3 = (unaff_EBP + -0x51) - (int)pbVar8;
      uVar5 = *(uint *)(unaff_EBP + -0x20);
      if (uVar5 < 0x11) {
        i_val = uVar5 - uVar3;
        if (uVar3 <= uVar5 && i_val != 0) {
          do {
            pbVar8 = pbVar8 + -1;
            *pbVar8 = 0x30;
            i_val = i_val + -1;
          } while (i_val != 0);
        }
        return;
      }
      return;
    }
    uVar5 = 0x10;
    goto LAB_0040906b;
  }
  uVar5 = 10;
LAB_0040906b:
  pbVar8 = (byte *)(unaff_EBP + -0x61);
  do {
    uVar3 = param_1 / uVar5;
    cVar7 = (char)(param_1 % uVar5);
    bVar6 = cVar7 + 0x30;
    if (0x39 < bVar6) {
      bVar6 = cVar7 + 0x37;
    }
    pbVar8 = pbVar8 + -1;
    *pbVar8 = bVar6;
    param_1 = uVar3;
  } while (uVar3 != 0);
  uVar3 = (unaff_EBP + -0x61) - (int)pbVar8;
  uVar5 = *(uint *)(unaff_EBP + -0x20);
  if (uVar5 < 0x11) {
    i_val = uVar5 - uVar3;
    if (uVar3 <= uVar5 && i_val != 0) {
      do {
        pbVar8 = pbVar8 + -1;
        *pbVar8 = 0x30;
        i_val = i_val + -1;
      } while (i_val != 0);
    }
    return;
  }
  return;
}


/* ==== 00409066 FUN_00409066 ==== */

void FUN_00409066(uint param_1)

{
  uint uVar1;
  ulonglong uVar2;
  uint uVar3;
  byte bVar4;
  int i_val;
  int unaff_EBP;
  byte *pbVar6;
  char cVar5;
  
  pbVar6 = (byte *)(unaff_EBP + -0x61);
  do {
    uVar2 = (ulonglong)param_1;
    param_1 = param_1 / 10;
    cVar5 = (char)(uVar2 % 10);
    bVar4 = cVar5 + 0x30;
    if (0x39 < bVar4) {
      bVar4 = cVar5 + 0x37;
    }
    pbVar6 = pbVar6 + -1;
    *pbVar6 = bVar4;
  } while (param_1 != 0);
  uVar3 = (unaff_EBP + -0x61) - (int)pbVar6;
  uVar1 = *(uint *)(unaff_EBP + -0x20);
  if (uVar1 < 0x11) {
    i_val = uVar1 - uVar3;
    if (uVar3 <= uVar1 && i_val != 0) {
      do {
        pbVar6 = pbVar6 + -1;
        *pbVar6 = 0x30;
        i_val = i_val + -1;
      } while (i_val != 0);
    }
    return;
  }
  return;
}


/* ==== 004091d1 FUN_004091d1 ==== */

undefined4 FUN_004091d1(undefined4 param_1)

{
  int unaff_EBP;
  
  System__LStrClr((int *)(unaff_EBP + -0x10));
  return param_1;
}


/* ==== 004091dc FUN_004091dc ==== */

void FUN_004091dc(undefined4 param_1)

{
  FUN_004091d1(param_1);
  return;
}


/* ==== 004091ec FUN_004091ec ==== */

byte * FUN_004091ec(byte *param_1,byte *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = FUN_00408b24((char *)param_2);
  iVar1 = FUN_00408df4(param_1,(byte *)0x7fffffff,param_2,param_4,param_3,iVar1);
  param_1[iVar1] = 0;
  return param_1;
}


/* ==== 00409220 FUN_00409220 ==== */

byte * FUN_00409220(byte *param_1,byte *param_2,byte *param_3,undefined4 param_4,undefined4 param_5)

{
  int iVar1;
  
  iVar1 = FUN_00408b24((char *)param_3);
  iVar1 = FUN_00408df4(param_1,param_2,param_3,param_4,param_5,iVar1);
  param_1[iVar1] = 0;
  return param_1;
}


/* ==== 00409254 SysUtils.Format ==== */

void SysUtils_Format(byte *param_1,undefined4 param_2,undefined4 param_3,int *param_4)

{
  SysUtils_FmtStr(param_4,param_1,param_2,param_3);
  return;
}


/* ==== 00409268 SysUtils.FmtStr ==== */

/* WARNING: Removing unreachable block (ram,0x00409292) */

void SysUtils_FmtStr(int *param_1,byte *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  byte local_100e [10];
  int *piStack_1004;
  undefined4 local_c;
  byte *local_8;
  
  piStack_1004 = param_1;
  local_c = param_3;
  local_8 = param_2;
  iVar1 = System__LStrLen((int)param_2);
  if (iVar1 < 0xc02) {
    iVar1 = System__LStrLen((int)local_8);
    uVar2 = FUN_00408df4(local_100e,(byte *)0x1001,local_8,param_4,local_c,iVar1);
    uVar3 = 0x1002;
  }
  else {
    uVar2 = System__LStrLen((int)local_8);
    uVar3 = uVar2;
  }
  if ((int)uVar2 < (int)(uVar3 - 1)) {
    System__LStrFromPCharLen(param_1,(undefined4 *)local_100e,uVar2);
  }
  else {
    while ((int)(uVar3 - 1) <= (int)uVar2) {
      uVar3 = uVar3 * 2;
      System__LStrClr(param_1);
      FUN_00404210(param_1,uVar3);
      iVar1 = System__LStrLen((int)local_8);
      uVar2 = FUN_00408df4((byte *)*param_1,(byte *)(uVar3 - 1),local_8,param_4,local_c,iVar1);
    }
    FUN_00404210(param_1,uVar2);
  }
  return;
}


/* ==== 00409330 FUN_00409330 ==== */

void FUN_00409330(int *param_1)

{
  uint uVar1;
  undefined4 local_44 [16];
  
  uVar1 = FUN_0040ccee((undefined1 *)local_44,&stack0x00000004,'\0',0,0xf,0);
  System__LStrFromPCharLen(param_1,local_44,uVar1);
  return;
}


/* ==== 00409360 FUN_00409360 ==== */

void FUN_00409360(undefined *param_1)

{
  byte *pbVar1;
  undefined4 uVar2;
  float10 local_18;
  undefined *local_c;
  undefined1 local_8;
  
  pbVar1 = System__LStrToPChar(param_1);
  uVar2 = FUN_0040d490(pbVar1,&local_18,'\0');
  if ((char)uVar2 == '\0') {
    local_8 = 0xb;
    local_c = param_1;
    FUN_0040810c((undefined4 *)PTR_PTR_004ab69c,&local_c,0);
  }
  return;
}


/* ==== 0040939c FUN_0040939c ==== */

void FUN_0040939c(undefined4 *param_1,undefined4 param_2,undefined4 param_3,double param_4)

{
  ulonglong uVar1;
  int iVar2;
  undefined4 uVar3;
  int local_c;
  int iStack_8;
  
  uVar1 = (ulonglong)ROUND(param_4 * 86400000.0);
  local_c = (int)uVar1;
  iStack_8 = (int)(uVar1 >> 0x20);
  if ((longlong)uVar1 < 0) {
    uVar1 = CONCAT44(-(uint)(local_c != 0) - iStack_8,-local_c);
    uVar3 = (undefined4)(uVar1 % (ulonglong)DAT_004aa170);
    iVar2 = -(int)(uVar1 / DAT_004aa170);
  }
  else {
    iVar2 = (int)(uVar1 / DAT_004aa170);
    uVar3 = (undefined4)(uVar1 % (ulonglong)DAT_004aa170);
  }
  *param_1 = uVar3;
  param_1[1] = iVar2 + 0xa955a;
  return;
}


/* ==== 004093dc FUN_004093dc ==== */

undefined1 FUN_004093dc(ushort param_1,ushort param_2,ushort param_3,double *param_4,ushort param_5)

{
  undefined1 local_5;
  
  local_5 = 0;
  if ((((param_1 < 0x18) && (param_2 < 0x3c)) && (param_3 < 0x3c)) && (param_5 < 1000)) {
    *param_4 = (double)((float)(int)((uint)param_1 * 3600000 + (uint)param_2 * 60000 +
                                     (uint)param_3 * 1000 + (uint)param_5) / 8.64e+07);
    local_5 = 1;
  }
  return local_5;
}


/* ==== 0040944c FUN_0040944c ==== */

void FUN_0040944c(ushort param_1,ushort param_2,ushort param_3,ushort param_4)

{
  char cVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  undefined4 *local_10;
  double local_c;
  
  puStack_20 = &stack0xfffffffc;
  local_10 = (undefined4 *)0x0;
  puStack_24 = &LAB_004094b1;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  cVar1 = FUN_004093dc(param_1,param_2,param_3,&local_c,param_4);
  if (cVar1 == '\0') {
    System_LoadResString((undefined4 *)PTR_PTR_004ab804,(int *)&local_10);
    FUN_004080f4(local_10);
  }
  *in_FS_OFFSET = uStack_28;
  puStack_20 = &LAB_004094b8;
  puStack_24 = (undefined1 *)0x4094b0;
  System__LStrClr((int *)&local_10);
  return;
}


/* ==== 004094c4 FUN_004094c4 ==== */

void FUN_004094c4(undefined2 *param_1,undefined2 *param_2,undefined2 *param_3,undefined2 *param_4,
                 undefined4 param_5,undefined4 param_6)

{
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  undefined2 extraout_var_01;
  ushort *puVar1;
  uint local_10 [2];
  ushort local_8;
  ushort local_6;
  
  puVar1 = &local_8;
  FUN_0040939c(local_10,param_2,param_3,(double)CONCAT44(param_6,param_5));
  FUN_004080d8(local_10[0],CONCAT22(extraout_var,60000),&local_6,puVar1);
  FUN_004080d8((uint)local_6,CONCAT22(extraout_var_00,0x3c),param_1,param_2);
  FUN_004080d8((uint)local_8,CONCAT22(extraout_var_01,1000),param_3,param_4);
  return;
}


/* ==== 00409520 FUN_00409520 ==== */

undefined4 FUN_00409520(uint param_1)

{
  uint uVar1;
  uint uVar2;
  
  if ((param_1 & 3) == 0) {
    uVar2 = param_1 & 0xffff;
    uVar1 = 100;
    if ((uVar2 % 100 != 0) || (uVar1 = 400, uVar2 % 400 == 0)) {
      return CONCAT31((int3)(uVar2 / uVar1 >> 8),1);
    }
  }
  return 0;
}


/* ==== 0040955c FUN_0040955c ==== */

undefined1 FUN_0040955c(uint param_1,ushort param_2,ushort param_3,double *param_4)

{
  uint uVar1;
  int i_val;
  int j;
  int iVar2;
  undefined1 local_7;
  
  local_7 = 0;
  uVar1 = FUN_00409520(param_1);
  iVar2 = (uVar1 & 0x7f) * 0x18;
  if (((((ushort)param_1 != 0) && ((ushort)param_1 < 10000)) && (param_2 != 0)) &&
     (((param_2 < 0xd && (param_3 != 0)) &&
      (param_3 <= *(ushort *)(iVar2 + 0x4aa0e6 + (uint)param_2 * 2))))) {
    i_val = param_2 - 1;
    if (0 < i_val) {
      j = 1;
      do {
        param_3 = param_3 + *(short *)(iVar2 + 0x4aa0e6 + j * 2);
        j = j + 1;
        i_val = i_val + -1;
      } while (i_val != 0);
    }
    i_val = (param_1 & 0xffff) - 1;
    iVar2 = i_val;
    if (i_val < 0) {
      iVar2 = (param_1 & 0xffff) + 2;
    }
    *param_4 = (double)(int)(((i_val * 0x16d + (iVar2 >> 2)) - i_val / 100) + i_val / 400 +
                             (uint)param_3 + -0xa955a);
    local_7 = 1;
  }
  return local_7;
}


/* ==== 00409624 FUN_00409624 ==== */

void FUN_00409624(uint param_1,ushort param_2,ushort param_3)

{
  char cVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  undefined4 *local_10;
  double local_c;
  
  puStack_20 = &stack0xfffffffc;
  local_10 = (undefined4 *)0x0;
  puStack_24 = &LAB_00409684;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  cVar1 = FUN_0040955c(param_1,param_2,param_3,&local_c);
  if (cVar1 == '\0') {
    System_LoadResString((undefined4 *)PTR_PTR_004ab8d8,(int *)&local_10);
    FUN_004080f4(local_10);
  }
  *in_FS_OFFSET = uStack_28;
  puStack_20 = &LAB_0040968b;
  puStack_24 = (undefined1 *)0x409683;
  System__LStrClr((int *)&local_10);
  return;
}


/* ==== 00409698 FUN_00409698 ==== */

void FUN_00409698(short *param_1,ushort *param_2,short *param_3,undefined2 *param_4,
                 undefined4 param_5,undefined4 param_6)

{
  ushort uVar1;
  short sVar2;
  short sVar3;
  ushort i_val;
  uint uVar4;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  short sVar5;
  undefined4 local_1c;
  int local_18;
  short local_14;
  ushort local_12;
  short *local_10;
  ushort *local_c;
  short *local_8;
  
  local_10 = param_3;
  local_c = param_2;
  local_8 = param_1;
  FUN_0040939c(&local_1c,param_2,param_3,(double)CONCAT44(param_6,param_5));
  if (local_18 < 1) {
    *local_8 = 0;
    *local_c = 0;
    *local_10 = 0;
    *param_4 = 0;
  }
  else {
    *param_4 = (short)(local_18 % 7);
    sVar5 = 1;
    for (uVar4 = local_18 - 1; 0x23ab0 < (int)uVar4; uVar4 = uVar4 - 0x23ab1) {
      sVar5 = sVar5 + 400;
    }
    FUN_004080d8(uVar4,CONCAT22((short)((uint)(local_18 % 7) >> 0x10),0x8eac),&local_14,&local_12);
    if (local_14 == 4) {
      local_14 = 3;
      local_12 = local_12 + 0x8eac;
    }
    sVar2 = local_14 * 100;
    FUN_004080d8((uint)local_12,CONCAT22(extraout_var,0x5b5),&local_14,&local_12);
    sVar3 = local_14 * 4;
    FUN_004080d8((uint)local_12,CONCAT22(extraout_var_00,0x16d),&local_14,&local_12);
    if (local_14 == 4) {
      local_14 = 3;
      local_12 = local_12 + 0x16d;
    }
    sVar5 = sVar5 + sVar2 + sVar3 + local_14;
    uVar4 = FUN_00409520(CONCAT22((short)((uint)param_4 >> 0x10),sVar5));
    i_val = 1;
    for (; uVar1 = *(ushort *)((uVar4 & 0x7f) * 0x18 + 0x4aa0e6 + (uint)i_val * 2),
        uVar1 <= local_12; local_12 = local_12 - uVar1) {
      i_val = i_val + 1;
    }
    *local_8 = sVar5;
    *local_c = i_val;
    *local_10 = local_12 + 1;
  }
  return;
}


/* ==== 004097dc FUN_004097dc ==== */

void FUN_004097dc(short *param_1,ushort *param_2,short *param_3,undefined4 param_4,
                 undefined4 param_5)

{
  undefined4 uStack_8;
  
  uStack_8 = param_3;
  FUN_00409698(param_1,param_2,param_3,(undefined2 *)((int)&uStack_8 + 2),param_4,param_5);
  return;
}


/* ==== 004097fc FUN_004097fc ==== */

int FUN_004097fc(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5)

{
  undefined4 local_c;
  int local_8;
  
  FUN_0040939c(&local_c,param_2,param_3,(double)CONCAT44(param_5,param_4));
  return local_8 % 7 + 1;
}


/* ==== 00409824 FUN_00409824 ==== */

void FUN_00409824(void)

{
  LPSYSTEMTIME lpSystemTime;
  _SYSTEMTIME systemtime;
  
  lpSystemTime = &systemtime;
  GetLocalTime(lpSystemTime);
  FUN_00409624(CONCAT22((short)((uint)lpSystemTime >> 0x10),systemtime.wYear),systemtime.wMonth,
               systemtime.wDay);
  return;
}


/* ==== 00409850 FUN_00409850 ==== */

void FUN_00409850(void)

{
  LPSYSTEMTIME lpSystemTime;
  float10 in_ST0;
  _SYSTEMTIME systemtime;
  double dStack_8;
  
  lpSystemTime = &systemtime;
  GetLocalTime(lpSystemTime);
  FUN_00409624(CONCAT22((short)((uint)lpSystemTime >> 0x10),systemtime.wYear),systemtime.wMonth,
               systemtime.wDay);
  dStack_8 = (double)in_ST0;
  FUN_0040944c(systemtime.wHour,systemtime.wMinute,systemtime.wSecond,systemtime.wMilliseconds);
  return;
}


/* ==== 004098a0 FUN_004098a0 ==== */

WORD FUN_004098a0(void)

{
  _SYSTEMTIME systemtime;
  
  GetLocalTime(&systemtime);
  return systemtime.wYear;
}


/* ==== 004098b4 FUN_004098b4 ==== */

void FUN_004098b4(undefined4 *param_1,uint param_2,undefined4 param_3,int param_4)

{
  uint uVar1;
  
  uVar1 = 0x100 - *(int *)(param_4 + -0x104);
  if ((int)param_2 < (int)uVar1) {
    uVar1 = param_2;
  }
  if (uVar1 != 0) {
    System_Move(param_1,(undefined4 *)(param_4 + -0x100 + *(int *)(param_4 + -0x104)),uVar1);
  }
  *(int *)(param_4 + -0x104) = *(int *)(param_4 + -0x104) + uVar1;
  return;
}


/* ==== 004098f8 FUN_004098f8 ==== */

void FUN_004098f8(undefined4 *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  uint uVar1;
  undefined4 extraout_ECX;
  
  uVar1 = System__LStrLen((int)param_1);
  FUN_004098b4(param_1,uVar1,extraout_ECX,param_4);
  return;
}


/* ==== 00409918 FUN_00409918 ==== */

void FUN_00409918(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  uint uVar1;
  undefined4 extraout_ECX;
  undefined4 local_24;
  undefined1 local_20;
  undefined4 local_1c;
  undefined1 local_18;
  byte local_14 [16];
  
  local_20 = 0;
  local_18 = 0;
  local_24 = param_2;
  local_1c = param_1;
  uVar1 = FUN_00408df4(local_14,(byte *)0x10,&DAT_004aa174,1,&local_24,4);
  FUN_004098b4((undefined4 *)local_14,uVar1,extraout_ECX,param_4);
  return;
}


/* ==== 00409964 FUN_00409964 ==== */

void FUN_00409964(void)

{
  int iVar1;
  int *piVar2;
  int in_stack_00000004;
  
  piVar2 = (int *)(in_stack_00000004 + -4);
  iVar1 = *piVar2;
  while (*(char *)*piVar2 == *(char *)(in_stack_00000004 + -5)) {
    *piVar2 = *piVar2 + 1;
  }
  *(int *)(in_stack_00000004 + -0xc) = (*piVar2 - iVar1) + 1;
  return;
}


/* ==== 00409990 FUN_00409990 ==== */

void FUN_00409990(void)

{
  int in_stack_00000004;
  
  if (*(char *)(in_stack_00000004 + -0x13) == '\0') {
    FUN_004097dc((short *)(in_stack_00000004 + -0xe),(ushort *)(in_stack_00000004 + -0x10),
                 (short *)(in_stack_00000004 + -0x12),
                 *(undefined4 *)(*(int *)(in_stack_00000004 + 8) + 8),
                 *(undefined4 *)(*(int *)(in_stack_00000004 + 8) + 0xc));
    *(undefined1 *)(in_stack_00000004 + -0x13) = 1;
  }
  return;
}


/* ==== 004099c8 FUN_004099c8 ==== */

void FUN_004099c8(void)

{
  int in_stack_00000004;
  
  if (*(char *)(in_stack_00000004 + -0x1d) == '\0') {
    FUN_004094c4((undefined2 *)(in_stack_00000004 + -0x16),(undefined2 *)(in_stack_00000004 + -0x18)
                 ,(undefined2 *)(in_stack_00000004 + -0x1a),
                 (undefined2 *)(in_stack_00000004 + -0x1c),
                 *(undefined4 *)(*(int *)(in_stack_00000004 + 8) + 8),
                 *(undefined4 *)(*(int *)(in_stack_00000004 + 8) + 0xc));
    *(undefined1 *)(in_stack_00000004 + -0x1d) = 1;
  }
  return;
}


/* ==== 00409a08 FUN_00409a08 ==== */

void FUN_00409a08(int param_1,int *param_2,undefined4 param_3,int param_4)

{
  LPCSTR lpFormat;
  LCID Locale;
  uint uVar1;
  undefined4 *in_FS_OFFSET;
  DWORD dwFlags;
  SYSTEMTIME *lpDate;
  CHAR *lpDateStr;
  int *piVar2;
  undefined4 uStack_130;
  undefined1 *puStack_12c;
  undefined1 *puStack_128;
  undefined4 local_11c;
  CHAR local_118 [256];
  SYSTEMTIME systemtime;
  undefined *local_8;
  int date;
  
  puStack_128 = &stack0xfffffffc;
  local_11c = 0;
  local_8 = (undefined *)0x0;
  puStack_12c = &LAB_00409b5a;
  uStack_130 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_130;
  System__LStrClr(param_2);
  systemtime.wYear = *(WORD *)(param_4 + -0xe);
  systemtime.wMonth = *(WORD *)(param_4 + -0x10);
  systemtime.wDay = *(WORD *)(param_4 + -0x12);
  System__LStrLAsg((int *)&local_8,0x409b70);
  date = 0x100;
  lpDateStr = local_118;
  lpFormat = System__LStrToPChar(local_8);
  lpDate = &systemtime;
  dwFlags = 4;
  Locale = GetThreadLocale();
  date = GetDateFormatA(Locale,dwFlags,lpDate,lpFormat,lpDateStr,date);
  if (date != 0) {
    FUN_00403e8c(param_2,local_118,0x100);
    if (param_1 == 1) {
      if (DAT_004ac5b8 == 4) {
        if (DAT_004ac5ba == 1) {
          date = System__LStrLen(*param_2);
          date = FUN_0040bf28(*param_2,date);
          if (date == 4) {
            date = FUN_0040c014(*param_2,3);
            FUN_00403e14(&local_11c,local_118 + date + -1);
            uVar1 = FUN_0040c078(local_11c,2);
            System__LStrFromPCharLen(param_2,(undefined4 *)(local_118 + date + -1),uVar1);
          }
        }
      }
      else if (DAT_004ac5b8 == 0x11) {
        piVar2 = param_2;
        uVar1 = FUN_0040c078(*param_2,1);
        System__LStrCopy(*param_2,1,uVar1,piVar2);
      }
    }
  }
  *in_FS_OFFSET = uStack_130;
  puStack_128 = &LAB_00409b61;
  puStack_12c = (undefined1 *)0x409b51;
  System__LStrClr(&local_11c);
  puStack_12c = (undefined1 *)0x409b59;
  System__LStrClr((int *)&local_8);
  return;
}


/* ==== 00409b74 FUN_00409b74 ==== */

void FUN_00409b74(int param_1,int *param_2,undefined4 param_3,int param_4)

{
  LPCSTR lpFormat;
  LCID Locale;
  undefined4 *in_FS_OFFSET;
  DWORD dwFlags;
  SYSTEMTIME *lpDate;
  CHAR *lpDateStr;
  int *piVar1;
  undefined4 uStack_12c;
  undefined1 *puStack_128;
  undefined1 *puStack_124;
  CHAR local_118 [256];
  SYSTEMTIME systemtime;
  undefined *local_8;
  int date;
  
  puStack_124 = &stack0xfffffffc;
  local_8 = (undefined *)0x0;
  puStack_128 = &LAB_00409c52;
  uStack_12c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_12c;
  System__LStrClr(param_2);
  systemtime.wYear = *(WORD *)(param_4 + -0xe);
  systemtime.wMonth = *(WORD *)(param_4 + -0x10);
  systemtime.wDay = *(WORD *)(param_4 + -0x12);
  if (param_1 < 3) {
    System__LStrLAsg((int *)&local_8,0x409c68);
  }
  else {
    System__LStrLAsg((int *)&local_8,0x409c74);
  }
  date = 0x100;
  lpDateStr = local_118;
  lpFormat = System__LStrToPChar(local_8);
  lpDate = &systemtime;
  dwFlags = 4;
  Locale = GetThreadLocale();
  date = GetDateFormatA(Locale,dwFlags,lpDate,lpFormat,lpDateStr,date);
  if (date != 0) {
    FUN_00403e8c(param_2,local_118,0x100);
    if ((param_1 == 1) && (*(char *)*param_2 == '0')) {
      piVar1 = param_2;
      date = System__LStrLen(*param_2);
      System__LStrCopy(*param_2,2,date - 1,piVar1);
    }
  }
  *in_FS_OFFSET = uStack_12c;
  puStack_124 = &LAB_00409c59;
  puStack_128 = (undefined1 *)0x409c51;
  System__LStrClr((int *)&local_8);
  return;
}


/* ==== 00409c7c FUN_00409c7c ==== */

void FUN_00409c7c(byte *param_1,undefined4 param_2,undefined1 *param_3,undefined1 *param_4)

{
  byte bVar1;
  byte bVar2;
  ushort uVar3;
  int iVar4;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined1 *extraout_ECX_01;
  undefined1 *extraout_ECX_02;
  undefined1 *extraout_ECX_03;
  undefined1 *puVar5;
  undefined4 extraout_ECX_04;
  undefined4 extraout_ECX_05;
  undefined4 extraout_ECX_06;
  undefined4 extraout_ECX_07;
  undefined4 extraout_ECX_08;
  undefined4 extraout_ECX_09;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined4 extraout_EDX_02;
  undefined4 extraout_EDX_03;
  undefined4 extraout_EDX_04;
  undefined4 extraout_EDX_05;
  undefined4 extraout_EDX_06;
  undefined4 extraout_EDX_07;
  undefined4 extraout_EDX_08;
  undefined4 extraout_EDX_09;
  undefined4 extraout_EDX_10;
  undefined4 extraout_EDX_11;
  undefined4 extraout_EDX_12;
  byte bVar6;
  byte bVar7;
  byte *pbVar8;
  byte *pbVar9;
  undefined4 *in_FS_OFFSET;
  undefined1 *puVar10;
  undefined4 uStack_40;
  undefined1 *puStack_3c;
  undefined1 *puStack_38;
  undefined4 *local_2c;
  undefined4 *local_28;
  byte local_23;
  char local_22;
  undefined1 local_21;
  ushort local_20;
  ushort local_1e;
  ushort local_1c;
  ushort local_1a;
  undefined1 local_17;
  ushort local_16;
  ushort local_14;
  ushort local_12;
  int local_10;
  byte local_9;
  byte *local_8;
  
  puStack_38 = &stack0xfffffffc;
  local_2c = (undefined4 *)0x0;
  local_28 = (undefined4 *)0x0;
  puStack_3c = &LAB_0040a3bd;
  uStack_40 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_40;
  local_8 = param_1;
  if ((param_1 != (byte *)0x0) && (*(int *)(param_4 + -0x108) < 2)) {
    *(int *)(param_4 + -0x108) = *(int *)(param_4 + -0x108) + 1;
    local_17 = 0;
    local_21 = 0;
    local_22 = '\0';
    bVar7 = 0x20;
    while (bVar1 = *local_8, pbVar8 = local_8, bVar1 != 0) {
      pbVar8 = local_8 + 1;
      local_9 = bVar1;
      if (((byte)(&DAT_004aa118)[(int)(uint)bVar1 >> 3] >> (bVar1 & 7) & 1) == 0) {
        bVar2 = bVar1;
        if ((byte)(bVar1 + 0x9f) < 0x1a) {
          bVar2 = bVar1 - 0x20;
        }
        bVar6 = bVar7;
        if ((((byte)(bVar2 + 0xbf) < 0x1a) && (bVar6 = bVar2, bVar2 == 0x4d)) && (bVar7 == 0x48)) {
          bVar2 = 0x4e;
          bVar6 = bVar2;
        }
        bVar7 = bVar6;
        local_8 = pbVar8;
        switch(bVar2) {
        case 0x22:
        case 0x27:
          while( true ) {
            bVar2 = *local_8;
            if (((bVar2 == 0) || (bVar2 == bVar1)) ||
               ((((byte)(&DAT_004aa118)[(int)(uint)bVar2 >> 3] >> (bVar2 & 7) & 1) != 0 &&
                (local_8 = local_8 + 1, *local_8 == 0)))) break;
            local_8 = local_8 + 1;
          }
          puVar5 = param_4;
          FUN_004098b4((undefined4 *)pbVar8,(int)local_8 - (int)pbVar8,param_3,(int)param_4);
          param_3 = puVar5;
          if (*local_8 != 0) {
            local_8 = local_8 + 1;
          }
          break;
        default:
          puVar5 = param_4;
          FUN_004098b4((undefined4 *)&local_9,1,param_3,(int)param_4);
          param_3 = puVar5;
          break;
        case 0x2f:
          puVar5 = param_4;
          FUN_004098b4((undefined4 *)&DAT_004ac4fd,1,param_3,(int)param_4);
          param_3 = puVar5;
          break;
        case 0x3a:
          puVar5 = param_4;
          FUN_004098b4((undefined4 *)&DAT_004ac508,1,param_3,(int)param_4);
          param_3 = puVar5;
          break;
        case 0x41:
          FUN_004099c8();
          pbVar8 = local_8;
          pbVar9 = local_8 + -1;
          iVar4 = FUN_00408c50((char *)pbVar9,"AM/PM",5);
          if (iVar4 == 0) {
            if (0xb < local_1a) {
              pbVar9 = pbVar8 + 2;
            }
            param_3 = param_4;
            FUN_004098b4((undefined4 *)pbVar9,2,extraout_ECX_04,(int)param_4);
            local_8 = local_8 + 4;
            local_22 = '\x01';
          }
          else {
            iVar4 = FUN_00408c50((char *)pbVar9,"A/P",3);
            if (iVar4 == 0) {
              if (0xb < local_1a) {
                pbVar9 = pbVar8 + 1;
              }
              param_3 = param_4;
              FUN_004098b4((undefined4 *)pbVar9,1,extraout_ECX_05,(int)param_4);
              local_8 = local_8 + 2;
              local_22 = '\x01';
            }
            else {
              iVar4 = FUN_00408c50((char *)pbVar9,"AMPM",4);
              if (iVar4 == 0) {
                if (local_1a < 0xc) {
                  param_3 = param_4;
                  FUN_004098f8(DAT_004ac50c,extraout_EDX_06,extraout_ECX_06,(int)param_4);
                }
                else {
                  param_3 = param_4;
                  FUN_004098f8(DAT_004ac510,extraout_EDX_06,extraout_ECX_06,(int)param_4);
                }
                local_8 = local_8 + 3;
                local_22 = '\x01';
              }
              else {
                iVar4 = FUN_00408c50((char *)pbVar9,"AAAA",4);
                if (iVar4 == 0) {
                  puVar5 = &stack0xfffffffc;
                  FUN_00409990();
                  param_3 = param_4;
                  iVar4 = FUN_004097fc(param_4,extraout_EDX_07,puVar5,*(undefined4 *)(param_4 + 8),
                                       *(undefined4 *)(param_4 + 0xc));
                  FUN_004098f8(*(undefined4 **)(&DAT_004ac594 + iVar4 * 4),extraout_EDX_08,
                               extraout_ECX_07,(int)param_3);
                  local_8 = local_8 + 3;
                }
                else {
                  iVar4 = FUN_00408c50((char *)pbVar9,"AAA",3);
                  if (iVar4 == 0) {
                    puVar5 = &stack0xfffffffc;
                    FUN_00409990();
                    param_3 = param_4;
                    iVar4 = FUN_004097fc(param_4,extraout_EDX_09,puVar5,*(undefined4 *)(param_4 + 8)
                                         ,*(undefined4 *)(param_4 + 0xc));
                    FUN_004098f8(*(undefined4 **)(&DAT_004ac578 + iVar4 * 4),extraout_EDX_10,
                                 extraout_ECX_09,(int)param_3);
                    local_8 = local_8 + 2;
                  }
                  else {
                    param_3 = param_4;
                    FUN_004098b4((undefined4 *)&local_9,1,extraout_ECX_08,(int)param_4);
                  }
                }
              }
            }
          }
          break;
        case 0x43:
          puVar5 = &stack0xfffffffc;
          FUN_00409964();
          FUN_00409c7c(DAT_004ac500,extraout_EDX_11,puVar5,param_4);
          param_3 = &stack0xfffffffc;
          FUN_004099c8();
          if (((local_1a != 0) || (local_1c != 0)) || (local_1e != 0)) {
            puVar5 = param_4;
            FUN_004098b4((undefined4 *)&DAT_0040a3ec,1,param_3,(int)param_4);
            param_3 = param_4;
            FUN_00409c7c(DAT_004ac518,extraout_EDX_12,puVar5,param_4);
          }
          break;
        case 0x44:
          puVar5 = &stack0xfffffffc;
          FUN_00409964();
          if (local_10 - 1U < 2) {
            puVar5 = &stack0xfffffffc;
            FUN_00409990();
            param_3 = param_4;
            FUN_00409918((uint)local_16,local_10,puVar5,(int)param_4);
          }
          else if (local_10 == 3) {
            param_3 = param_4;
            iVar4 = FUN_004097fc(param_4,extraout_EDX_02,puVar5,*(undefined4 *)(param_4 + 8),
                                 *(undefined4 *)(param_4 + 0xc));
            FUN_004098f8(*(undefined4 **)(&DAT_004ac578 + iVar4 * 4),extraout_EDX_03,extraout_ECX,
                         (int)param_3);
          }
          else if (local_10 == 4) {
            param_3 = param_4;
            iVar4 = FUN_004097fc(param_4,extraout_EDX_02,puVar5,*(undefined4 *)(param_4 + 8),
                                 *(undefined4 *)(param_4 + 0xc));
            FUN_004098f8(*(undefined4 **)(&DAT_004ac594 + iVar4 * 4),extraout_EDX_04,extraout_ECX_00
                         ,(int)param_3);
          }
          else if (local_10 == 5) {
            param_3 = param_4;
            FUN_00409c7c(DAT_004ac500,extraout_EDX_02,puVar5,param_4);
          }
          else {
            param_3 = param_4;
            FUN_00409c7c(DAT_004ac504,extraout_EDX_02,puVar5,param_4);
          }
          break;
        case 0x45:
          FUN_00409964();
          puVar10 = &stack0xfffffffc;
          FUN_00409990();
          puVar5 = &stack0xfffffffc;
          param_3 = param_4;
          FUN_00409b74(local_10,(int *)&local_2c,puVar10,(int)&stack0xfffffffc);
          FUN_004098f8(local_2c,extraout_EDX_00,puVar5,(int)param_3);
          break;
        case 0x47:
          FUN_00409964();
          puVar10 = &stack0xfffffffc;
          FUN_00409990();
          puVar5 = &stack0xfffffffc;
          param_3 = param_4;
          FUN_00409a08(local_10,(int *)&local_28,puVar10,(int)&stack0xfffffffc);
          FUN_004098f8(local_28,extraout_EDX,puVar5,(int)param_3);
          break;
        case 0x48:
          FUN_00409964();
          puVar5 = &stack0xfffffffc;
          FUN_004099c8();
          local_23 = 0;
          pbVar8 = local_8;
          while (bVar1 = *pbVar8, bVar1 != 0) {
            if (((byte)(&DAT_004aa118)[(int)(uint)bVar1 >> 3] >> (bVar1 & 7) & 1) == 0) {
              bVar1 = *pbVar8;
              if (bVar1 < 0x49) {
                if (bVar1 == 0x48) break;
                if ((bVar1 == 0x22) || (bVar1 == 0x27)) {
                  local_23 = local_23 ^ 1;
                }
                else if (bVar1 == 0x41) goto LAB_00409fcf;
              }
              else if (bVar1 == 0x61) {
LAB_00409fcf:
                if (local_23 == 0) {
                  iVar4 = FUN_00408c50((char *)pbVar8,"AM/PM",5);
                  puVar5 = extraout_ECX_01;
                  if (((iVar4 == 0) ||
                      (iVar4 = FUN_00408c50((char *)pbVar8,"A/P",3), puVar5 = extraout_ECX_02,
                      iVar4 == 0)) ||
                     (iVar4 = FUN_00408c50((char *)pbVar8,"AMPM",4), puVar5 = extraout_ECX_03,
                     iVar4 == 0)) {
                    local_22 = '\x01';
                  }
                  break;
                }
              }
              else if (bVar1 == 0x68) break;
              pbVar8 = pbVar8 + 1;
            }
            else {
              if (pbVar8[1] == 0) break;
              pbVar8 = pbVar8 + 2;
            }
          }
          uVar3 = local_1a;
          if (local_22 != '\0') {
            if (local_1a == 0) {
              uVar3 = 0xc;
            }
            else if (0xc < local_1a) {
              uVar3 = local_1a - 0xc;
            }
          }
          if (2 < local_10) {
            local_10 = 2;
          }
          param_3 = param_4;
          FUN_00409918((uint)uVar3,local_10,puVar5,(int)param_4);
          break;
        case 0x4d:
          FUN_00409964();
          puVar5 = &stack0xfffffffc;
          FUN_00409990();
          if (local_10 - 1U < 2) {
            param_3 = param_4;
            FUN_00409918((uint)local_14,local_10,puVar5,(int)param_4);
          }
          else if (local_10 - 1U == 2) {
            param_3 = param_4;
            FUN_004098f8((undefined4 *)(&DAT_004ac518)[local_14],extraout_EDX_01,puVar5,(int)param_4
                        );
          }
          else {
            param_3 = param_4;
            FUN_004098f8(*(undefined4 **)(&DAT_004ac548 + (uint)local_14 * 4),extraout_EDX_01,puVar5
                         ,(int)param_4);
          }
          break;
        case 0x4e:
          FUN_00409964();
          puVar5 = &stack0xfffffffc;
          FUN_004099c8();
          if (2 < local_10) {
            local_10 = 2;
          }
          param_3 = param_4;
          FUN_00409918((uint)local_1c,local_10,puVar5,(int)param_4);
          break;
        case 0x53:
          FUN_00409964();
          puVar5 = &stack0xfffffffc;
          FUN_004099c8();
          if (2 < local_10) {
            local_10 = 2;
          }
          param_3 = param_4;
          FUN_00409918((uint)local_1e,local_10,puVar5,(int)param_4);
          break;
        case 0x54:
          puVar5 = &stack0xfffffffc;
          FUN_00409964();
          if (local_10 == 1) {
            param_3 = param_4;
            FUN_00409c7c(DAT_004ac514,extraout_EDX_05,puVar5,param_4);
          }
          else {
            param_3 = param_4;
            FUN_00409c7c(DAT_004ac518,extraout_EDX_05,puVar5,param_4);
          }
          break;
        case 0x59:
          FUN_00409964();
          puVar5 = &stack0xfffffffc;
          FUN_00409990();
          if (local_10 < 3) {
            param_3 = param_4;
            FUN_00409918((uint)local_12 % 100,2,100,(int)param_4);
          }
          else {
            param_3 = param_4;
            FUN_00409918((uint)local_12,4,puVar5,(int)param_4);
          }
          break;
        case 0x5a:
          FUN_00409964();
          puVar5 = &stack0xfffffffc;
          FUN_004099c8();
          if (3 < local_10) {
            local_10 = 3;
          }
          param_3 = param_4;
          FUN_00409918((uint)local_20,local_10,puVar5,(int)param_4);
        }
      }
      else {
        if (*pbVar8 == 0) break;
        local_8 = local_8 + 2;
        bVar7 = 0x20;
      }
    }
    local_8 = pbVar8;
    *(int *)(param_4 + -0x108) = *(int *)(param_4 + -0x108) + -1;
  }
  *in_FS_OFFSET = uStack_40;
  puStack_38 = &LAB_0040a3c4;
  puStack_3c = (undefined1 *)0x40a3bc;
  System__LStrArrayClr((int *)&local_2c,2);
  return;
}


/* ==== 0040a3f0 FUN_0040a3f0 ==== */

void FUN_0040a3f0(int *param_1,byte *param_2,undefined1 *param_3)

{
  undefined4 local_104 [64];
  
  if (param_2 == (byte *)0x0) {
    FUN_00409c7c(&DAT_0040a448,0,param_3,&stack0xfffffffc);
  }
  else {
    FUN_00409c7c(param_2,param_2,param_3,&stack0xfffffffc);
  }
  System__LStrFromPCharLen(param_1,local_104,0);
  return;
}


/* ==== 0040a44c FUN_0040a44c ==== */

void FUN_0040a44c(int *param_1,undefined4 param_2,undefined1 *param_3)

{
  FUN_0040a3f0(param_1,DAT_004ac500,param_3);
  return;
}


/* ==== 0040a464 FUN_0040a464 ==== */

void FUN_0040a464(int *param_1,undefined4 param_2,undefined1 *param_3)

{
  FUN_0040a3f0(param_1,DAT_004ac518,param_3);
  return;
}


/* ==== 0040a47c FUN_0040a47c ==== */

void FUN_0040a47c(int *param_1,undefined4 param_2,undefined1 *param_3)

{
  FUN_0040a3f0(param_1,(byte *)0x0,param_3);
  return;
}


/* ==== 0040a490 FUN_0040a490 ==== */

void FUN_0040a490(byte *param_1,int *param_2,undefined1 *param_3)

{
  FUN_0040a3f0(param_2,param_1,param_3);
  return;
}


/* ==== 0040a4a4 FUN_0040a4a4 ==== */

void FUN_0040a4a4(int param_1,int *param_2)

{
  int iVar1;
  int i_val;
  
  i_val = *param_2;
  while( true ) {
    iVar1 = System__LStrLen(param_1);
    if ((iVar1 < i_val) || (*(char *)(param_1 + -1 + i_val) != ' ')) break;
    i_val = i_val + 1;
  }
  *param_2 = i_val;
  return;
}


/* ==== 0040a4c8 FUN_0040a4c8 ==== */

bool FUN_0040a4c8(int param_1,int *param_2,ushort *param_3,char *param_4)

{
  ushort uVar1;
  int iVar2;
  int i_val;
  
  *param_4 = '\0';
  FUN_0040a4a4(param_1,param_2);
  i_val = *param_2;
  uVar1 = 0;
  while( true ) {
    iVar2 = System__LStrLen(param_1);
    if (((iVar2 < i_val) || (9 < (byte)(*(char *)(param_1 + -1 + i_val) - 0x30U))) || (999 < uVar1))
    break;
    uVar1 = uVar1 * 10 + (*(byte *)(param_1 + -1 + i_val) - 0x30);
    i_val = i_val + 1;
  }
  iVar2 = *param_2;
  if (iVar2 < i_val) {
    *param_4 = (char)i_val - (char)*param_2;
    *param_2 = i_val;
    *param_3 = uVar1;
  }
  return iVar2 < i_val;
}


/* ==== 0040a55c FUN_0040a55c ==== */

void FUN_0040a55c(int param_1,int *param_2,undefined *param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined **ppuVar3;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  undefined *local_c;
  int local_8;
  
  puStack_1c = &stack0xfffffffc;
  local_c = (undefined *)0x0;
  puStack_20 = &LAB_0040a5d5;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  local_8 = param_1;
  if (param_3 != (undefined *)0x0) {
    FUN_0040a4a4(param_1,param_2);
    ppuVar3 = &local_c;
    uVar1 = System__LStrLen((int)param_3);
    System__LStrCopy(local_8,*param_2,uVar1,(int *)ppuVar3);
    iVar2 = FUN_00408364(param_3,local_c);
    if (iVar2 == 0) {
      iVar2 = System__LStrLen((int)param_3);
      *param_2 = *param_2 + iVar2;
    }
  }
  *in_FS_OFFSET = uStack_24;
  puStack_1c = &LAB_0040a5dc;
  puStack_20 = (undefined1 *)0x40a5d4;
  System__LStrClr((int *)&local_c);
  return;
}


/* ==== 0040a5e8 FUN_0040a5e8 ==== */

undefined4 FUN_0040a5e8(int param_1,int *param_2,char param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  FUN_0040a4a4(param_1,param_2);
  iVar1 = System__LStrLen(param_1);
  if ((*param_2 <= iVar1) && (*(char *)(param_1 + -1 + *param_2) == param_3)) {
    *param_2 = *param_2 + 1;
    uVar2 = 1;
  }
  return uVar2;
}


/* ==== 0040a620 FUN_0040a620 ==== */

undefined4 FUN_0040a620(int param_1)

{
  byte bVar1;
  int iVar2;
  int i_val;
  
  i_val = 1;
  while( true ) {
    iVar2 = System__LStrLen(param_1);
    if (iVar2 < i_val) {
      return 0;
    }
    bVar1 = *(byte *)(param_1 + -1 + i_val) & 0xdf;
    if (bVar1 == 0x44) {
      return 1;
    }
    if (bVar1 == 0x45) {
      return 2;
    }
    if (bVar1 == 0x4d) break;
    if (bVar1 == 0x59) {
      return 2;
    }
    i_val = i_val + 1;
  }
  return 0;
}


/* ==== 0040a66c FUN_0040a66c ==== */

int FUN_0040a66c(int param_1,int *param_2)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  
  while( true ) {
    iVar3 = System__LStrLen(param_1);
    if ((iVar3 < *param_2) ||
       (cVar1 = *(char *)(param_1 + -1 + *param_2),
       iVar3 = CONCAT31((int3)((uint)*param_2 >> 8),cVar1 + -0x3a), (byte)(cVar1 - 0x30U) < 10))
    break;
    uVar2 = (uint)*(byte *)(param_1 + -1 + *param_2);
    if (((byte)(&DAT_004aa118)[(int)uVar2 >> 3] >> (uVar2 & 7) & 1) != 0) {
      *param_2 = *param_2 + 1;
    }
    *param_2 = *param_2 + 1;
  }
  return iVar3;
}


/* ==== 0040a6a8 FUN_0040a6a8 ==== */

undefined4 FUN_0040a6a8(undefined *param_1)

{
  char *string2;
  byte *pbVar1;
  PCNZCH pCVar2;
  int *piVar3;
  undefined4 *puVar4;
  int i_val;
  
  i_val = 7;
  piVar3 = &DAT_004ac5c0;
  puVar4 = &DAT_004ac5dc;
  while( true ) {
    if (*piVar3 == 0) {
      return 0;
    }
    string2 = System__LStrToPChar(param_1);
    pbVar1 = System__LStrToPChar((undefined *)*piVar3);
    pCVar2 = FUN_0040c19c(pbVar1,string2);
    if (pCVar2 != (PCNZCH)0x0) break;
    puVar4 = puVar4 + 1;
    piVar3 = piVar3 + 1;
    i_val = i_val + -1;
    if (i_val == 0) {
      return 0;
    }
  }
  return *puVar4;
}


/* ==== 0040a6fc FUN_0040a6fc ==== */

int FUN_0040a6fc(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  WORD WVar1;
  uint uVar2;
  
  if (DAT_004ac5b8 == 0x12) {
    if (param_1 < 100) {
      WVar1 = FUN_004098a0();
      uVar2 = (int)*(uint *)(param_4 + -4) >> 0x1f;
      param_1 = param_1 + ((int)((uint)WVar1 + ((*(uint *)(param_4 + -4) ^ uVar2) - uVar2)) / 100) *
                          100;
    }
    if (0 < *(int *)(param_4 + -4)) {
      *(int *)(param_4 + -4) = -*(int *)(param_4 + -4);
    }
  }
  else {
    *(int *)(param_4 + -4) = *(int *)(param_4 + -4) + -1;
  }
  return *(int *)(param_4 + -4) + param_1;
}


/* ==== 0040a758 FUN_0040a758 ==== */

void FUN_0040a758(int param_1,int *param_2,double *param_3)

{
  bool bVar1;
  WORD WVar2;
  undefined4 uVar3;
  PCNZCH pCVar4;
  undefined2 extraout_var;
  int iVar5;
  uint uVar6;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  ushort uVar7;
  uint uVar8;
  undefined4 *in_FS_OFFSET;
  undefined **ppuVar9;
  undefined4 uStack_44;
  undefined1 *puStack_40;
  undefined1 *puStack_3c;
  undefined *local_2c;
  undefined *local_28;
  int local_24;
  undefined *local_20;
  byte local_1c;
  byte local_1b;
  char local_1a;
  byte local_19;
  ushort local_18;
  ushort local_16;
  ushort local_14;
  ushort local_12;
  ushort local_10;
  char local_e;
  undefined1 local_d;
  double *local_c;
  int local_8;
  
  puStack_3c = &stack0xfffffffc;
  local_2c = (undefined *)0x0;
  local_28 = (undefined *)0x0;
  local_24 = 0;
  local_20 = (undefined *)0x0;
  puStack_40 = &LAB_0040aa6a;
  uStack_44 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_44;
  uVar8 = 0;
  local_16 = 0;
  local_18 = 0;
  local_1c = 0;
  local_d = 0;
  local_c = param_3;
  uVar3 = FUN_0040a620((int)DAT_004ac500);
  local_e = (char)uVar3;
  local_8 = 0;
  if (*DAT_004ac500 == 'g') {
    FUN_0040a66c(param_1,param_2);
    System__LStrCopy(param_1,1,*param_2 - 1,&local_24);
    FUN_004083f8(local_24,(int *)&local_20);
    local_8 = FUN_0040a6a8(local_20);
  }
  else {
    pCVar4 = FUN_0040c0d8(&DAT_0040aa84,DAT_004ac500);
    if (0 < (int)pCVar4) {
      local_8 = DAT_004ac5dc;
    }
  }
  bVar1 = FUN_0040a4c8(param_1,param_2,&local_10,(char *)&local_19);
  if (((bVar1) && (uVar3 = FUN_0040a5e8(param_1,param_2,DAT_004ac4fd), (char)uVar3 != '\0')) &&
     (bVar1 = FUN_0040a4c8(param_1,param_2,&local_12,&local_1a), bVar1)) {
    uVar3 = FUN_0040a5e8(param_1,param_2,DAT_004ac4fd);
    if ((char)uVar3 == '\0') {
      WVar2 = FUN_004098a0();
      uVar8 = CONCAT22(extraout_var,WVar2);
      if (local_e == '\x01') {
        local_18 = local_10;
        local_16 = local_12;
      }
      else {
        local_16 = local_10;
        local_18 = local_12;
      }
    }
    else {
      bVar1 = FUN_0040a4c8(param_1,param_2,&local_14,(char *)&local_1b);
      if (!bVar1) goto LAB_0040aa4f;
      if (local_e == '\0') {
        uVar8 = (uint)local_14;
        local_1c = local_1b;
        local_16 = local_10;
        local_18 = local_12;
      }
      else if (local_e == '\x01') {
        uVar8 = (uint)local_14;
        local_1c = local_1b;
        local_16 = local_12;
        local_18 = local_10;
      }
      else if (local_e == '\x02') {
        uVar8 = (uint)local_10;
        local_1c = local_19;
        local_16 = local_12;
        local_18 = local_14;
      }
      if (local_8 < 1) {
        if (local_1c < 3) {
          WVar2 = FUN_004098a0();
          uVar7 = (short)uVar8 + (short)((int)((uint)WVar2 - (uint)DAT_004aa0e4) / 100) * 100;
          uVar8 = (uint)uVar7;
          if ((DAT_004aa0e4 != 0) && ((int)(uint)uVar7 < (int)((uint)WVar2 - (uint)DAT_004aa0e4))) {
            uVar8 = (uint)(ushort)(uVar7 + 100);
          }
        }
      }
      else {
        uVar8 = FUN_0040a6fc(uVar8,extraout_EDX,extraout_ECX,(int)&stack0xfffffffc);
      }
    }
    FUN_0040a5e8(param_1,param_2,DAT_004ac4fd);
    FUN_0040a4a4(param_1,param_2);
    if ((DAT_004ac5bc != '\0') && (iVar5 = FUN_004041c8("ddd",DAT_004ac500), iVar5 != 0)) {
      if ((byte)(*DAT_004ac514 - 0x30U) < 10) {
        FUN_0040a66c(param_1,param_2);
      }
      else {
        do {
          while ((iVar5 = System__LStrLen(param_1), *param_2 <= iVar5 &&
                 (*(char *)(param_1 + -1 + *param_2) != ' '))) {
            *param_2 = *param_2 + 1;
          }
          FUN_0040a4a4(param_1,param_2);
          iVar5 = System__LStrLen(param_1);
          if (iVar5 < *param_2) break;
          ppuVar9 = &local_28;
          uVar6 = System__LStrLen((int)DAT_004ac50c);
          System__LStrCopy(param_1,*param_2,uVar6,(int *)ppuVar9);
          iVar5 = FUN_00408364(DAT_004ac50c,local_28);
          if (iVar5 == 0) break;
          ppuVar9 = &local_2c;
          uVar6 = System__LStrLen((int)DAT_004ac510);
          System__LStrCopy(param_1,*param_2,uVar6,(int *)ppuVar9);
          iVar5 = FUN_00408364(DAT_004ac510,local_2c);
        } while (iVar5 != 0);
      }
    }
    local_d = FUN_0040955c(uVar8,local_16,local_18,local_c);
  }
LAB_0040aa4f:
  *in_FS_OFFSET = uStack_44;
  puStack_3c = &LAB_0040aa71;
  puStack_40 = (undefined1 *)0x40aa69;
  System__LStrArrayClr((int *)&local_2c,4);
  return;
}


/* ==== 0040aa94 FUN_0040aa94 ==== */

undefined1 FUN_0040aa94(int param_1,int *param_2,double *param_3)

{
  char cVar1;
  bool bVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  int iVar5;
  ushort local_1c;
  ushort local_1a;
  ushort local_18;
  ushort local_16;
  char local_14 [4];
  
  iVar5 = -1;
  cVar1 = FUN_0040a55c(param_1,param_2,DAT_004ac50c);
  if ((cVar1 == '\0') && (cVar1 = FUN_0040a55c(param_1,param_2,&DAT_0040ac78), cVar1 == '\0')) {
    cVar1 = FUN_0040a55c(param_1,param_2,DAT_004ac510);
    if ((cVar1 != '\0') || (cVar1 = FUN_0040a55c(param_1,param_2,&DAT_0040ac84), cVar1 != '\0')) {
      iVar5 = 0xc;
    }
  }
  else {
    iVar5 = 0;
  }
  if (-1 < iVar5) {
    FUN_0040a4a4(param_1,param_2);
  }
  bVar2 = FUN_0040a4c8(param_1,param_2,&local_1c,local_14);
  if (!bVar2) {
    return 0;
  }
  local_1a = 0;
  uVar4 = FUN_0040a5e8(param_1,param_2,DAT_004ac508);
  if (((char)uVar4 != '\0') && (bVar2 = FUN_0040a4c8(param_1,param_2,&local_1a,local_14), !bVar2)) {
    return 0;
  }
  local_18 = 0;
  uVar4 = FUN_0040a5e8(param_1,param_2,DAT_004ac508);
  if (((char)uVar4 != '\0') && (bVar2 = FUN_0040a4c8(param_1,param_2,&local_18,local_14), !bVar2)) {
    return 0;
  }
  local_16 = 0;
  uVar4 = FUN_0040a5e8(param_1,param_2,DAT_004ac4fb);
  if (((char)uVar4 != '\0') && (bVar2 = FUN_0040a4c8(param_1,param_2,&local_16,local_14), !bVar2)) {
    return 0;
  }
  if (iVar5 < 0) {
    cVar1 = FUN_0040a55c(param_1,param_2,DAT_004ac50c);
    if ((cVar1 == '\0') && (cVar1 = FUN_0040a55c(param_1,param_2,&DAT_0040ac78), cVar1 == '\0')) {
      cVar1 = FUN_0040a55c(param_1,param_2,DAT_004ac510);
      if ((cVar1 != '\0') || (cVar1 = FUN_0040a55c(param_1,param_2,&DAT_0040ac84), cVar1 != '\0')) {
        iVar5 = 0xc;
      }
    }
    else {
      iVar5 = 0;
    }
  }
  if (-1 < iVar5) {
    if (local_1c == 0) {
      return 0;
    }
    if (0xc < local_1c) {
      return 0;
    }
    if (local_1c == 0xc) {
      local_1c = 0;
    }
    local_1c = local_1c + (short)iVar5;
  }
  FUN_0040a4a4(param_1,param_2);
  uVar3 = FUN_004093dc(local_1c,local_1a,local_18,param_3,local_16);
  return uVar3;
}


/* ==== 0040ac88 FUN_0040ac88 ==== */

void FUN_0040ac88(int param_1)

{
  char cVar1;
  int iVar2;
  double local_18;
  int local_10;
  int local_c;
  undefined1 local_8;
  
  local_10 = 1;
  cVar1 = FUN_0040a758(param_1,&local_10,&local_18);
  if ((cVar1 != '\0') && (iVar2 = System__LStrLen(param_1), iVar2 < local_10)) {
    return;
  }
  local_8 = 0xb;
  local_c = param_1;
  FUN_0040810c((undefined4 *)PTR_PTR_004ab814,&local_c,0);
  return;
}


/* ==== 0040acd8 FUN_0040acd8 ==== */

void FUN_0040acd8(int param_1)

{
  char cVar1;
  int iVar2;
  double local_18;
  int local_10;
  int local_c;
  undefined1 local_8;
  
  local_10 = 1;
  cVar1 = FUN_0040aa94(param_1,&local_10,&local_18);
  if ((cVar1 != '\0') && (iVar2 = System__LStrLen(param_1), iVar2 < local_10)) {
    return;
  }
  local_8 = 0xb;
  local_c = param_1;
  FUN_0040810c((undefined4 *)PTR_PTR_004ab700,&local_c,0);
  return;
}


/* ==== 0040ad28 FUN_0040ad28 ==== */

void FUN_0040ad28(int param_1)

{
  char cVar1;
  int iVar2;
  double local_2c;
  int local_24 [2];
  double local_1c;
  undefined4 local_14;
  undefined4 uStack_10;
  int local_c;
  undefined1 local_8;
  
  local_24[0] = 1;
  local_14 = 0;
  uStack_10 = 0;
  cVar1 = FUN_0040a758(param_1,local_24,&local_1c);
  if ((cVar1 == '\0') ||
     ((iVar2 = System__LStrLen(param_1), local_24[0] <= iVar2 &&
      (cVar1 = FUN_0040aa94(param_1,local_24,(double *)&local_14), cVar1 == '\0')))) {
    local_24[0] = 1;
    cVar1 = FUN_0040aa94(param_1,local_24,&local_2c);
    if ((cVar1 == '\0') || (iVar2 = System__LStrLen(param_1), local_24[0] <= iVar2)) {
      local_8 = 0xb;
      local_c = param_1;
      FUN_0040810c((undefined4 *)PTR_PTR_004ab624,&local_c,0);
    }
  }
  return;
}


/* ==== 0040adec FUN_0040adec ==== */

void FUN_0040adec(DWORD message_id,int *param_2)

{
  uint i_val;
  CHAR local_104 [256];
  
  i_val = FormatMessageA(0x3000,(LPCVOID)0x0,message_id,0,local_104,0x100,(va_list *)0x0);
  for (; (0 < (int)i_val && (((byte)local_104[i_val - 1] < 0x21 || (local_104[i_val - 1] == 0x2e))))
      ; i_val = i_val - 1) {
  }
  System__LStrFromPCharLen(param_2,(undefined4 *)local_104,i_val);
  return;
}


/* ==== 0040ae38 FUN_0040ae38 ==== */

void FUN_0040ae38(LCID locale,LCTYPE lc_type,undefined4 *param_3,int *param_4)

{
  int locale_info;
  CHAR local_104 [256];
  
  locale_info = GetLocaleInfoA(locale,lc_type,local_104,0x100);
  if (locale_info < 1) {
    System__LStrAsg(param_4,param_3);
  }
  else {
    System__LStrFromPCharLen(param_4,(undefined4 *)local_104,locale_info - 1);
  }
  return;
}


/* ==== 0040ae84 FUN_0040ae84 ==== */

uint FUN_0040ae84(LCID locale,LCTYPE lc_type,uint param_3)

{
  int locale_info;
  uint local_10;
  
  local_10 = param_3;
  locale_info = GetLocaleInfoA(locale,lc_type,(LPSTR)&local_10,2);
  if (0 < locale_info) {
    param_3 = CONCAT31((int3)((uint)locale_info >> 8),(undefined1)local_10);
  }
  return param_3;
}


/* ==== 0040aeac FUN_0040aeac ==== */

void FUN_0040aeac(LCTYPE lc_type,int param_2,int param_3,int *param_4,undefined4 param_5,int param_6
                 )

{
  FUN_0040ae38(*(LCID *)(param_6 + -4),lc_type,(undefined4 *)0x0,param_4);
  if (*param_4 == 0) {
    System_LoadResString(*(undefined4 **)(param_3 + param_2 * 4),param_4);
  }
  return;
}


/* ==== 0040aee8 FUN_0040aee8 ==== */

void FUN_0040aee8(void)

{
  int i_val;
  int *piVar1;
  int *piVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_34;
  undefined1 *puStack_30;
  undefined1 *puStack_2c;
  undefined4 *local_1c;
  undefined4 *local_18;
  undefined4 *local_14;
  undefined4 *local_10;
  int local_c;
  LCID thread_locale;
  
  puStack_2c = &stack0xfffffffc;
  thread_locale = 0;
  local_c = 0;
  local_10 = (undefined4 *)0x0;
  local_14 = (undefined4 *)0x0;
  local_18 = (undefined4 *)0x0;
  local_1c = (undefined4 *)0x0;
  puStack_30 = &LAB_0040affb;
  uStack_34 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_34;
  thread_locale = GetThreadLocale();
  i_val = 1;
  piVar1 = (int *)&DAT_004ac51c;
  piVar2 = (int *)&DAT_004ac54c;
  do {
    FUN_0040aeac(i_val + 0x43,i_val + -1,0x4aa178,(int *)&local_10,0xb,(int)&stack0xfffffffc);
    System__LStrAsg(piVar1,local_10);
    FUN_0040aeac(i_val + 0x37,i_val + -1,0x4aa1a8,(int *)&local_14,0xb,(int)&stack0xfffffffc);
    System__LStrAsg(piVar2,local_14);
    i_val = i_val + 1;
    piVar2 = piVar2 + 1;
    piVar1 = piVar1 + 1;
  } while (i_val != 0xd);
  i_val = 1;
  piVar1 = (int *)&DAT_004ac57c;
  piVar2 = (int *)&DAT_004ac598;
  do {
    local_c = (i_val + 5) % 7;
    FUN_0040aeac(local_c + 0x31,i_val + -1,0x4aa1d8,(int *)&local_18,6,(int)&stack0xfffffffc);
    System__LStrAsg(piVar1,local_18);
    FUN_0040aeac(local_c + 0x2a,i_val + -1,0x4aa1f4,(int *)&local_1c,6,(int)&stack0xfffffffc);
    System__LStrAsg(piVar2,local_1c);
    i_val = i_val + 1;
    piVar2 = piVar2 + 1;
    piVar1 = piVar1 + 1;
  } while (i_val != 8);
  *in_FS_OFFSET = uStack_34;
  puStack_2c = &LAB_0040b002;
  puStack_30 = (undefined1 *)0x40affa;
  System__LStrArrayClr((int *)&local_1c,4);
  return;
}


/* ==== 0040b0c0 FUN_0040b0c0 ==== */

void FUN_0040b0c0(void)

{
  LCID LVar1;
  CALID Calendar;
  undefined4 *puVar2;
  int extraout_ECX;
  int i_val;
  undefined4 *in_FS_OFFSET;
  CALID Calendar_00;
  byte **ppbVar3;
  CALTYPE CVar4;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  byte *local_8;
  
  puStack_10 = &stack0xfffffffc;
  local_8 = (byte *)0x0;
  puStack_14 = &LAB_0040b157;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  ppbVar3 = &local_8;
  LVar1 = GetThreadLocale();
  FUN_0040ae38(LVar1,0x100b,(undefined4 *)&DAT_0040b16c,(int *)ppbVar3);
  Calendar = FUN_00408654(local_8,1,extraout_ECX);
  if (Calendar - 3 < 3) {
    CVar4 = 4;
    Calendar_00 = Calendar;
    LVar1 = GetThreadLocale();
    EnumCalendarInfoA((CALINFO_ENUMPROCA)&LAB_0040b00c,LVar1,Calendar_00,CVar4);
    i_val = 7;
    puVar2 = &DAT_004ac5dc;
    do {
      *puVar2 = 0xffffffff;
      puVar2 = puVar2 + 1;
      i_val = i_val + -1;
    } while (i_val != 0);
    CVar4 = 3;
    LVar1 = GetThreadLocale();
    EnumCalendarInfoA((CALINFO_ENUMPROCA)&LAB_0040b048,LVar1,Calendar,CVar4);
  }
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_0040b15e;
  puStack_14 = (undefined1 *)0x40b156;
  System__LStrClr((int *)&local_8);
  return;
}


/* ==== 0040b170 FUN_0040b170 ==== */

void FUN_0040b170(undefined4 *param_1,int *param_2)

{
  char cVar1;
  bool bVar2;
  LCID locale;
  int iVar3;
  uint uVar4;
  int extraout_ECX;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  int i_val;
  undefined4 *in_FS_OFFSET;
  byte **ppbVar5;
  undefined4 uStack_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  undefined4 *local_14;
  undefined4 *local_10;
  undefined4 *local_c;
  byte *local_8;
  
  puStack_24 = &stack0xfffffffc;
  local_8 = (byte *)0x0;
  local_c = (undefined4 *)0x0;
  local_10 = (undefined4 *)0x0;
  local_14 = (undefined4 *)0x0;
  puStack_28 = &LAB_0040b332;
  uStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_2c;
  i_val = 1;
  System__LStrClr(param_2);
  ppbVar5 = &local_8;
  locale = GetThreadLocale();
  FUN_0040ae38(locale,0x1009,(undefined4 *)&DAT_0040b348,(int *)ppbVar5);
  iVar3 = FUN_00408654(local_8,1,extraout_ECX);
  if (iVar3 - 3U < 3) {
    while (iVar3 = System__LStrLen((int)param_1), i_val <= iVar3) {
      uVar4 = (uint)*(byte *)((int)param_1 + i_val + -1);
      if (((byte)(&DAT_004aa118)[(int)uVar4 >> 3] >> (uVar4 & 7) & 1) == 0) {
        iVar3 = FUN_00408c50((char *)((int)param_1 + i_val + -1),"gg",2);
        if (iVar3 == 0) {
          System__LStrCat(param_2,(undefined4 *)&DAT_0040b358);
          i_val = i_val + 1;
        }
        else {
          iVar3 = FUN_00408c50((char *)((int)param_1 + i_val + -1),"yyyy",4);
          if (iVar3 == 0) {
            System__LStrCat(param_2,(undefined4 *)&DAT_0040b36c);
            i_val = i_val + 3;
          }
          else {
            iVar3 = FUN_00408c50((char *)((int)param_1 + i_val + -1),"yy",2);
            if (iVar3 == 0) {
              System__LStrCat(param_2,(undefined4 *)&DAT_0040b380);
              i_val = i_val + 1;
            }
            else {
              cVar1 = *(char *)((int)param_1 + i_val + -1);
              if ((cVar1 == 'Y') || (cVar1 == 'y')) {
                System__LStrCat(param_2,(undefined4 *)&DAT_0040b38c);
              }
              else {
                System__LStrFromChar
                          ((int *)&local_14,
                           CONCAT31((int3)((uint)extraout_EDX_00 >> 8),
                                    *(undefined1 *)((int)param_1 + i_val + -1)));
                System__LStrCat(param_2,local_14);
              }
            }
          }
        }
        i_val = i_val + 1;
      }
      else {
        System__LStrCopy((int)param_1,i_val,2,(int *)&local_10);
        System__LStrCat(param_2,local_10);
        i_val = i_val + 2;
      }
    }
  }
  else {
    if ((DAT_004ac5b8 == 4) || ((ushort)(DAT_004ac5b8 - 0x11U) < 2)) {
      bVar2 = true;
    }
    else {
      bVar2 = false;
    }
    if (bVar2) {
      for (; iVar3 = System__LStrLen((int)param_1), i_val <= iVar3; i_val = i_val + 1) {
        cVar1 = *(char *)((int)param_1 + i_val + -1);
        if ((cVar1 != 'G') && (cVar1 != 'g')) {
          System__LStrFromChar
                    ((int *)&local_c,
                     CONCAT31((int3)((uint)extraout_EDX >> 8),
                              *(undefined1 *)((int)param_1 + i_val + -1)));
          System__LStrCat(param_2,local_c);
        }
      }
    }
    else {
      System__LStrAsg(param_2,param_1);
    }
  }
  *in_FS_OFFSET = uStack_2c;
  puStack_24 = &LAB_0040b339;
  puStack_28 = (undefined1 *)0x40b331;
  System__LStrArrayClr((int *)&local_14,4);
  return;
}


/* ==== 0040b3c0 FUN_0040b3c0 ==== */

int FUN_0040b3c0(int param_1)

{
  if (param_1 != 0) {
    param_1 = param_1 + -0x1000;
  }
  return param_1;
}


/* ==== 0040b3cc FUN_0040b3cc ==== */

void FUN_0040b3cc(int *param_1,LPCVOID address,byte *param_3,byte *param_4)

{
  DWORD DVar1;
  char *pcVar2;
  undefined4 uVar3;
  int buffer_max;
  HINSTANCE hInstance;
  undefined *puVar4;
  UINT uID;
  byte *lpBuffer;
  byte local_45c [256];
  byte *local_35c;
  undefined1 local_358;
  char *local_354;
  undefined1 local_350;
  int local_34c;
  undefined1 local_348;
  char *local_344;
  undefined1 local_340;
  undefined *local_33c;
  undefined1 local_338;
  _MEMORY_BASIC_INFORMATION module;
  byte local_316 [256];
  byte local_216 [261];
  char local_111 [261];
  int local_c;
  byte *local_8;
  
  local_8 = param_3;
  VirtualQuery(address,&module,0x1c);
  if (module.State == 0x1000) {
    DVar1 = GetModuleFileNameA(module.AllocationBase,(LPSTR)local_216,0x105);
    if (DVar1 != 0) {
      local_c = (int)address - (int)module.AllocationBase;
      goto LAB_0040b442;
    }
  }
  GetModuleFileNameA(DAT_004ac4dc,(LPSTR)local_216,0x105);
  local_c = FUN_0040b3c0((int)address);
LAB_0040b442:
  pcVar2 = FUN_0040c23c(local_216,'\\');
  FUN_00408bb4(local_111,pcVar2 + 1,0x104);
  pcVar2 = "";
  puVar4 = &DAT_0040b54c;
  uVar3 = System__IsClass(param_1,(int)&DAT_00407624);
  if ((char)uVar3 != '\0') {
    pcVar2 = System__LStrToPChar((undefined *)param_1[1]);
    buffer_max = FUN_00408b24(pcVar2);
    if ((buffer_max != 0) && (pcVar2[buffer_max + -1] != '.')) {
      puVar4 = &DAT_0040b550;
    }
  }
  buffer_max = 0x100;
  lpBuffer = local_316;
  uID = *(UINT *)(PTR_PTR_004ab9e8 + 4);
  hInstance = (HINSTANCE)FUN_004052c0((int)DAT_004ac4dc);
  LoadStringA(hInstance,uID,(LPSTR)lpBuffer,buffer_max);
  System_TObject_ClassName(*param_1,local_45c);
  local_35c = local_45c;
  local_358 = 4;
  local_354 = local_111;
  local_350 = 6;
  local_34c = local_c;
  local_348 = 5;
  local_340 = 6;
  local_338 = 6;
  local_344 = pcVar2;
  local_33c = puVar4;
  FUN_00409220(local_8,param_4,local_316,4,&local_35c);
  FUN_00408b24((char *)local_8);
  return;
}


/* ==== 0040b554 FUN_0040b554 ==== */

void FUN_0040b554(int *param_1,LPCVOID address)

{
  undefined *puVar1;
  HINSTANCE hInstance;
  UINT uID;
  CHAR *lpBuffer;
  int cchBufferMax;
  CHAR local_440 [64];
  byte local_400 [1024];
  
  FUN_0040b3cc(param_1,address,local_400,(byte *)0x400);
  lpBuffer = local_440;
  if (*PTR_DAT_004ab91c == '\0') {
    cchBufferMax = 0x40;
    uID = *(UINT *)(PTR_PTR_004ab6d0 + 4);
    hInstance = (HINSTANCE)FUN_004052c0(DAT_004ac4dc);
    LoadStringA(hInstance,uID,lpBuffer,cchBufferMax);
    MessageBoxA((HWND)0x0,(LPCSTR)local_400,local_440,0x2010);
  }
  else {
    puVar1 = (undefined *)FUN_00405df8(PTR_DAT_004ab71c,(char *)local_400);
    FUN_00405d7b(puVar1);
    FUN_0040284c();
  }
  return;
}


/* ==== 0040b5cc FUN_0040b5cc ==== */

void FUN_0040b5cc(void)

{
  System__RaiseExcept(DAT_004ac600);
  return;
}


/* ==== 0040b5d8 SysUtils.Exception.Create ==== */

int * SysUtils_Exception_Create(int *param_1,char param_2,undefined4 *param_3)

{
  undefined4 *extraout_ECX;
  char extraout_DL;
  char cVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_ffffffe4;
  undefined4 in_stack_ffffffe8;
  
  cVar1 = '\0';
  if (param_2 != '\0') {
    param_1 = (int *)System__ClassCreate((int)param_1,param_2,param_3,in_stack_ffffffe4,
                                         in_stack_ffffffe8);
    param_3 = extraout_ECX;
    cVar1 = extraout_DL;
  }
  System__LStrAsg(param_1 + 1,param_3);
  if (cVar1 != '\0') {
    System__AfterConstruction(param_1);
    *in_FS_OFFSET = in_stack_ffffffe4;
  }
  return param_1;
}


/* ==== 0040b614 SysUtils.Exception.CreateFmt ==== */

void SysUtils_Exception_CreateFmt
               (int param_1,char param_2,byte *param_3,undefined4 param_4,undefined4 param_5)

{
  byte *extraout_ECX;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_30;
  undefined1 *puStack_2c;
  undefined1 *puStack_28;
  undefined4 in_stack_ffffffdc;
  undefined4 in_stack_ffffffe0;
  undefined4 *local_8;
  
  local_8 = (undefined4 *)0x0;
  if (param_2 != '\0') {
    puStack_28 = (undefined1 *)0x40b628;
    param_1 = System__ClassCreate(param_1,param_2,param_3,in_stack_ffffffdc,in_stack_ffffffe0);
    param_3 = extraout_ECX;
  }
  puStack_2c = &LAB_0040b66e;
  uStack_30 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_30;
  puStack_28 = &stack0xfffffffc;
  SysUtils_Format(param_3,param_5,param_4,(int *)&local_8);
  System__LStrAsg((int *)(param_1 + 4),local_8);
  *in_FS_OFFSET = uStack_30;
  puStack_28 = &LAB_0040b675;
  puStack_2c = (undefined1 *)0x40b66d;
  System__LStrClr((int *)&local_8);
  return;
}


/* ==== 0040b694 SysUtils.Exception.CreateRes ==== */

int * SysUtils_Exception_CreateRes(int *param_1,char param_2,undefined4 *param_3)

{
  undefined4 *extraout_ECX;
  char extraout_DL;
  char cVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_ffffffe4;
  undefined4 in_stack_ffffffe8;
  
  cVar1 = '\0';
  if (param_2 != '\0') {
    param_1 = (int *)System__ClassCreate((int)param_1,param_2,param_3,in_stack_ffffffe4,
                                         in_stack_ffffffe8);
    param_3 = extraout_ECX;
    cVar1 = extraout_DL;
  }
  System_LoadResString(param_3,param_1 + 1);
  if (cVar1 != '\0') {
    System__AfterConstruction(param_1);
    *in_FS_OFFSET = in_stack_ffffffe4;
  }
  return param_1;
}


/* ==== 0040b6d0 FUN_0040b6d0 ==== */

void FUN_0040b6d0(int param_1,char param_2,undefined4 *param_3,undefined4 param_4,undefined4 param_5
                 )

{
  undefined4 *extraout_ECX;
  undefined4 *in_FS_OFFSET;
  undefined4 **ppuVar1;
  undefined4 uStack_34;
  undefined1 *puStack_30;
  undefined1 *puStack_2c;
  undefined4 in_stack_ffffffd8;
  undefined4 in_stack_ffffffdc;
  byte *local_c;
  undefined4 *local_8;
  
  local_8 = (undefined4 *)0x0;
  local_c = (byte *)0x0;
  if (param_2 != '\0') {
    puStack_2c = (undefined1 *)0x40b6e6;
    param_1 = System__ClassCreate(param_1,param_2,param_3,in_stack_ffffffd8,in_stack_ffffffdc);
    param_3 = extraout_ECX;
  }
  puStack_30 = &LAB_0040b73c;
  uStack_34 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_34;
  ppuVar1 = &local_8;
  puStack_2c = &stack0xfffffffc;
  System_LoadResString(param_3,(int *)&local_c);
  SysUtils_Format(local_c,param_5,param_4,(int *)ppuVar1);
  System__LStrAsg((int *)(param_1 + 4),local_8);
  *in_FS_OFFSET = uStack_34;
  puStack_2c = &LAB_0040b743;
  puStack_30 = (undefined1 *)0x40b73b;
  System__LStrArrayClr((int *)&local_c,2);
  return;
}


/* ==== 0040b764 FUN_0040b764 ==== */

int * FUN_0040b764(int *param_1,char param_2,undefined4 *param_3,int param_4)

{
  undefined4 *extraout_ECX;
  char extraout_DL;
  char cVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_ffffffe0;
  undefined4 in_stack_ffffffe4;
  
  cVar1 = '\0';
  if (param_2 != '\0') {
    param_1 = (int *)System__ClassCreate((int)param_1,param_2,param_3,in_stack_ffffffe0,
                                         in_stack_ffffffe4);
    param_3 = extraout_ECX;
    cVar1 = extraout_DL;
  }
  System__LStrAsg(param_1 + 1,param_3);
  param_1[2] = param_4;
  if (cVar1 != '\0') {
    System__AfterConstruction(param_1);
    *in_FS_OFFSET = in_stack_ffffffe0;
  }
  return param_1;
}


/* ==== 0040b7ac EHeapException.FreeInstance ==== */

void EHeapException_FreeInstance(int *param_1)

{
  if ((char)param_1[3] != '\0') {
    TObject_FreeInstance(param_1);
  }
  return;
}


/* ==== 0040b7d8 FUN_0040b7d8 ==== */

void FUN_0040b7d8(void)

{
  int iVar1;
  int *piVar2;
  int i_val;
  int local_10;
  undefined1 local_c;
  
  iVar1 = FUN_004028c0();
  for (i_val = 0; (i_val < 7 && (iVar1 != (&DAT_004aa210)[i_val * 2])); i_val = i_val + 1) {
  }
  if (i_val < 7) {
    piVar2 = SysUtils_Exception_Create
                       ((int *)&DAT_00407798,'\x01',(undefined4 *)(&DAT_004aa214)[i_val * 2]);
  }
  else {
    local_c = 0;
    local_10 = iVar1;
    piVar2 = (int *)FUN_0040b6d0((int)&DAT_00407798,'\x01',(undefined4 *)PTR_PTR_004ab6cc,0,
                                 &local_10);
  }
  piVar2[3] = iVar1;
  return;
}


/* ==== 0040b89c FUN_0040b89c ==== */

void FUN_0040b89c(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uVar1;
  int *piVar2;
  undefined1 *puStack_3c;
  undefined1 *puStack_38;
  undefined1 *puStack_34;
  byte *local_24;
  int local_20;
  undefined1 local_1c;
  undefined4 local_18;
  undefined1 local_14;
  undefined4 local_10;
  undefined1 local_c;
  int local_8;
  
  puStack_34 = &stack0xfffffffc;
  local_24 = (byte *)0x0;
  local_8 = 0;
  puStack_38 = &LAB_0040b938;
  puStack_3c = (undefined1 *)*in_FS_OFFSET;
  *in_FS_OFFSET = &puStack_3c;
  if (param_1 == 0) {
    System_LoadResString((undefined4 *)PTR_PTR_004ab8ec,&local_8);
  }
  else {
    puStack_34 = &stack0xfffffffc;
    System__LStrLAsg(&local_8,param_1);
  }
  local_20 = local_8;
  local_1c = 0xb;
  local_14 = 0xb;
  local_c = 0;
  piVar2 = &local_20;
  uVar1 = 2;
  local_18 = param_2;
  local_10 = param_3;
  System_LoadResString((undefined4 *)PTR_PTR_004ab964,(int *)&local_24);
  SysUtils_Exception_CreateFmt((int)&DAT_00407ea0,'\x01',local_24,uVar1,piVar2);
  *in_FS_OFFSET = uVar1;
  puStack_3c = &LAB_0040b93f;
  System__LStrClr((int *)&local_24);
  System__LStrClr(&local_8);
  return;
}


/* ==== 0040b948 FUN_0040b948 ==== */

void FUN_0040b948(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  *param_3 = param_2;
  System__RaiseExcept(param_1);
  return;
}


/* ==== 0040b9a0 FUN_0040b9a0 ==== */

undefined4 FUN_0040b9a0(int *param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = *param_1;
  if (iVar1 < -0x3fffff6d) {
    if (iVar1 == -0x3fffff6e) {
LAB_0040ba04:
      return CONCAT31((int3)((uint)iVar1 >> 8),6);
    }
    if (iVar1 < -0x3fffff71) {
      if (iVar1 == -0x3fffff72) {
        return 0xc0000007;
      }
      if (iVar1 == -0x3ffffffb) {
        return 0xb;
      }
      if (iVar1 == -0x3fffff74) {
        return 4;
      }
      iVar1 = iVar1 + 0x3fffff73;
      if (iVar1 == 0) {
        return 9;
      }
    }
    else {
      uVar2 = iVar1 + 0x3fffff71;
      iVar1 = iVar1 + 0x3fffff6f;
      if (uVar2 < 2) goto LAB_0040ba04;
      if (iVar1 == 0) {
        return 8;
      }
    }
  }
  else if (iVar1 < -0x3fffff69) {
    if (iVar1 == -0x3fffff6a) {
      return 0xc000000c;
    }
    if (iVar1 == -0x3fffff6d) {
      return 9;
    }
    if (iVar1 == -0x3fffff6c) {
      return 3;
    }
    iVar1 = iVar1 + 0x3fffff6b;
    if (iVar1 == 0) {
      return 5;
    }
  }
  else {
    if (iVar1 == -0x3fffff03) {
      return 0xe;
    }
    iVar1 = iVar1 + 0x3ffffec6;
    if (iVar1 == 0) {
      return 0xd;
    }
  }
  return CONCAT31((int3)((uint)iVar1 >> 8),0x16);
}


/* ==== 0040ba34 FUN_0040ba34 ==== */

void FUN_0040ba34(void)

{
  int iVar1;
  undefined4 uVar2;
  DWORD DVar3;
  undefined4 *in_FS_OFFSET;
  int in_stack_00000004;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined1 *puStack_188;
  undefined1 *puStack_184;
  undefined1 *puStack_180;
  byte *local_174;
  undefined4 local_170;
  undefined1 local_16c;
  int local_168;
  undefined1 local_164;
  undefined4 local_160;
  undefined1 local_15c;
  byte *local_158;
  undefined *local_154;
  int local_150;
  undefined4 local_14c;
  undefined1 local_148;
  int local_144;
  undefined1 local_140;
  int local_13c;
  undefined1 local_138;
  undefined4 local_134;
  undefined1 local_130;
  CHAR local_129 [261];
  _MEMORY_BASIC_INFORMATION module;
  int local_8;
  
  puStack_180 = &stack0xfffffffc;
  local_174 = (byte *)0x0;
  local_150 = 0;
  local_158 = (byte *)0x0;
  local_154 = (undefined *)0x0;
  local_8 = 0;
  puStack_184 = &LAB_0040bbef;
  puStack_188 = (undefined1 *)*in_FS_OFFSET;
  *in_FS_OFFSET = &puStack_188;
  iVar1 = *(int *)(in_stack_00000004 + -4);
  if (*(int *)(iVar1 + 0x14) == 0) {
    puStack_180 = &stack0xfffffffc;
    System_LoadResString((undefined4 *)PTR_PTR_004aba18,&local_8);
  }
  else {
    System_LoadResString((undefined4 *)PTR_PTR_004ab8b8,&local_8);
  }
  uVar2 = *(undefined4 *)(iVar1 + 0x18);
  VirtualQuery(*(LPCVOID *)(iVar1 + 0xc),&module,0x1c);
  if (module.State == 0x1000) {
    DVar3 = GetModuleFileNameA(module.AllocationBase,local_129,0x105);
    if (DVar3 != 0) {
      local_14c = *(undefined4 *)(iVar1 + 0xc);
      local_148 = 5;
      FUN_00403e8c((int *)&local_154,local_129,0x105);
      FUN_00408a30(local_154,&local_150);
      local_144 = local_150;
      local_140 = 0xb;
      local_13c = local_8;
      local_138 = 0xb;
      local_130 = 5;
      puVar5 = &local_14c;
      uVar4 = 3;
      local_134 = uVar2;
      System_LoadResString((undefined4 *)PTR_PTR_004ab934,(int *)&local_158);
      SysUtils_Exception_CreateFmt((int)&DAT_00407cd8,'\x01',local_158,uVar4,puVar5);
      goto LAB_0040bbbe;
    }
  }
  local_170 = *(undefined4 *)(iVar1 + 0xc);
  local_16c = 5;
  local_168 = local_8;
  local_164 = 0xb;
  local_15c = 5;
  puVar5 = &local_170;
  uVar4 = 2;
  local_160 = uVar2;
  System_LoadResString((undefined4 *)PTR_PTR_004ab998,(int *)&local_174);
  SysUtils_Exception_CreateFmt((int)&DAT_00407cd8,'\x01',local_174,uVar4,puVar5);
LAB_0040bbbe:
  *in_FS_OFFSET = uVar4;
  puStack_188 = &LAB_0040bbf6;
  System__LStrClr((int *)&local_174);
  System__LStrArrayClr((int *)&local_158,3);
  System__LStrClr(&local_8);
  return;
}


/* ==== 0040bcdc FUN_0040bcdc ==== */

void FUN_0040bcdc(void)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  undefined4 *local_c;
  undefined4 *local_8;
  
  puStack_10 = &stack0xfffffffc;
  local_8 = (undefined4 *)0x0;
  local_c = (undefined4 *)0x0;
  puStack_14 = &LAB_0040bd9d;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  System_LoadResString((undefined4 *)PTR_PTR_004ab6dc,(int *)&local_8);
  DAT_004ac600 = SysUtils_Exception_Create((int *)&DAT_0040773c,'\x01',local_8);
  System_LoadResString((undefined4 *)PTR_PTR_004ab874,(int *)&local_c);
  DAT_004ac604 = SysUtils_Exception_Create((int *)&DAT_00407bc4,'\x01',local_c);
  *(undefined1 **)PTR_DAT_004ab620 = &LAB_0040b858;
  *(undefined1 **)PTR_DAT_004ab75c = &LAB_0040bccc;
  *(undefined **)PTR_DAT_004ab6b8 = &DAT_00407624;
  *(undefined1 **)PTR_DAT_004ab738 = &LAB_0040ba20;
  *(undefined1 **)PTR_DAT_004ab764 = &LAB_0040bc00;
  *(undefined1 **)PTR_DAT_004ab8a4 = &LAB_0040b958;
  *(undefined1 **)PTR_DAT_004ab608 = &LAB_0040b974;
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_0040bda4;
  puStack_14 = (undefined1 *)0x40bd9c;
  System__LStrArrayClr((int *)&local_c,2);
  return;
}


/* ==== 0040bda8 FUN_0040bda8 ==== */

void FUN_0040bda8(void)

{
  *(undefined1 *)(DAT_004ac600 + 3) = 1;
  (**(code **)(*DAT_004ac600 + -8))();
  DAT_004ac600 = (int *)0x0;
  *(undefined1 *)(DAT_004ac604 + 3) = 1;
  System_TObject_Free(DAT_004ac604);
  DAT_004ac604 = (int *)0x0;
  *(undefined4 *)PTR_DAT_004ab620 = 0;
  *(undefined4 *)PTR_DAT_004ab75c = 0;
  *(undefined4 *)PTR_DAT_004ab6b8 = 0;
  *(undefined4 *)PTR_DAT_004ab738 = 0;
  *(undefined4 *)PTR_DAT_004ab764 = 0;
  *(undefined4 *)PTR_DAT_004ab8a4 = 0;
  return;
}


/* ==== 0040be14 FUN_0040be14 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040be14(void)

{
  BOOL BVar1;
  _OSVERSIONINFOA osversioninfo;
  
  osversioninfo.dwOSVersionInfoSize = 0x94;
  BVar1 = GetVersionExA(&osversioninfo);
  if (BVar1 != 0) {
    DAT_004aa0d0 = osversioninfo.dwPlatformId;
    DAT_004aa0d4 = osversioninfo.dwMajorVersion;
    DAT_004aa0d8 = osversioninfo.dwMinorVersion;
    _DAT_004aa0dc = osversioninfo.dwBuildNumber;
    FUN_00403e8c((int *)&DAT_004aa0e0,osversioninfo.szCSDVersion,0x80);
  }
  return;
}


/* ==== 0040be6c FUN_0040be6c ==== */

void FUN_0040be6c(void)

{
  MessageBeep(0);
  return;
}


/* ==== 0040be74 FUN_0040be74 ==== */

undefined4 FUN_0040be74(byte *param_1,int param_2)

{
  uint uVar1;
  undefined4 uVar2;
  int i_val;
  
  uVar2 = 0;
  if ((param_1 != (byte *)0x0) && (param_1[param_2] != 0)) {
    i_val = param_2;
    if (param_2 == 0) {
      if (((byte)(&DAT_004aa118)[(int)(uint)*param_1 >> 3] >> (*param_1 & 7) & 1) != 0) {
        uVar2 = 1;
      }
    }
    else {
      do {
        i_val = i_val + -1;
        if (i_val < 0) break;
      } while (((byte)(&DAT_004aa118)[(int)(uint)param_1[i_val] >> 3] >> (param_1[i_val] & 7) & 1)
               != 0);
      uVar1 = param_2 - i_val & 0x80000001;
      if ((int)uVar1 < 0) {
        uVar1 = (uVar1 - 1 | 0xfffffffe) + 1;
      }
      if (uVar1 == 0) {
        uVar2 = 2;
      }
      else if (((byte)(&DAT_004aa118)[(int)(uint)param_1[param_2] >> 3] >> (param_1[param_2] & 7) &
               1) != 0) {
        uVar2 = 1;
      }
    }
  }
  return uVar2;
}


/* ==== 0040beec FUN_0040beec ==== */

undefined4 FUN_0040beec(undefined *param_1,int param_2)

{
  undefined4 uVar1;
  byte *pbVar2;
  
  uVar1 = 0;
  if (DAT_004ac5bc != '\0') {
    pbVar2 = System__LStrToPChar(param_1);
    uVar1 = FUN_0040be74(pbVar2,param_2 + -1);
  }
  return uVar1;
}


/* ==== 0040bf10 FUN_0040bf10 ==== */

undefined4 FUN_0040bf10(byte *param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (DAT_004ac5bc != '\0') {
    uVar1 = FUN_0040be74(param_1,param_2);
  }
  return uVar1;
}


/* ==== 0040bf28 FUN_0040bf28 ==== */

void FUN_0040bf28(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = System__LStrLen(param_1);
  if (iVar1 < param_2) {
    param_2 = System__LStrLen(param_1);
  }
  FUN_0040bf50(param_1,param_2);
  return;
}


/* ==== 0040bf50 FUN_0040bf50 ==== */

int FUN_0040bf50(int param_1,int param_2)

{
  int j;
  uint uVar1;
  int i_val;
  
  i_val = 0;
  if (0 < param_2) {
    j = System__LStrLen(param_1);
    if ((param_2 <= j) && (i_val = param_2, DAT_004ac5bc != '\0')) {
      j = 1;
      i_val = 0;
      if (0 < param_2) {
        do {
          uVar1 = (uint)*(byte *)(param_1 + -1 + j);
          if (((byte)(&DAT_004aa118)[(int)uVar1 >> 3] >> (uVar1 & 7) & 1) != 0) {
            j = j + 1;
          }
          j = j + 1;
          i_val = i_val + 1;
        } while (j <= param_2);
      }
    }
  }
  return i_val;
}


/* ==== 0040bfa0 FUN_0040bfa0 ==== */

void FUN_0040bfa0(int param_1,int param_2,int *param_3,int *param_4)

{
  int iVar1;
  int j;
  uint uVar2;
  int i_val;
  
  iVar1 = System__LStrLen(param_1);
  i_val = 1;
  j = 1;
  while ((j < iVar1 && (i_val < param_2))) {
    i_val = i_val + 1;
    uVar2 = (uint)*(byte *)(param_1 + -1 + j);
    if (((byte)(&DAT_004aa118)[(int)uVar2 >> 3] >> (uVar2 & 7) & 1) != 0) {
      j = j + 1;
    }
    j = j + 1;
  }
  if (((i_val == param_2) && (j < iVar1)) &&
     (uVar2 = (uint)*(byte *)(param_1 + -1 + j),
     ((byte)(&DAT_004aa118)[(int)uVar2 >> 3] >> (uVar2 & 7) & 1) != 0)) {
    j = j + 1;
  }
  *param_3 = i_val;
  *param_4 = j;
  return;
}


/* ==== 0040c014 FUN_0040c014 ==== */

int FUN_0040c014(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int local_10;
  int local_c;
  
  local_10 = 0;
  iVar2 = local_10;
  if ((((0 < param_2) && (iVar1 = System__LStrLen(param_1), iVar2 = local_10, param_2 <= iVar1)) &&
      (iVar2 = param_2, 1 < param_2)) && (iVar2 = param_2, DAT_004ac5bc != '\0')) {
    FUN_0040bfa0(param_1,param_2 + -1,&local_c,&local_10);
    if ((local_c < param_2 + -1) || (iVar2 = System__LStrLen(param_1), iVar2 <= local_10)) {
      local_10 = 0;
      iVar2 = local_10;
    }
    else {
      iVar2 = local_10 + 1;
    }
  }
  local_10 = iVar2;
  return local_10;
}


/* ==== 0040c078 FUN_0040c078 ==== */

int FUN_0040c078(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int local_10;
  int local_c;
  
  local_10 = 0;
  iVar1 = local_10;
  if (0 < param_2) {
    iVar1 = System__LStrLen(param_1);
    if (iVar1 < param_2) {
      param_2 = System__LStrLen(param_1);
    }
    iVar1 = param_2;
    if (DAT_004ac5bc != '\0') {
      FUN_0040bfa0(param_1,param_2,&local_c,&local_10);
      iVar2 = System__LStrLen(param_1);
      iVar1 = local_10;
      if (iVar2 < local_10) {
        iVar1 = System__LStrLen(param_1);
      }
    }
  }
  local_10 = iVar1;
  return local_10;
}


/* ==== 0040c0d8 FUN_0040c0d8 ==== */

PCNZCH FUN_0040c0d8(undefined *param_1,undefined *param_2)

{
  char *string2;
  byte *pbVar1;
  PCNZCH pCVar2;
  PCNZCH pCVar3;
  
  pCVar3 = (PCNZCH)0x0;
  string2 = System__LStrToPChar(param_1);
  pbVar1 = System__LStrToPChar(param_2);
  pCVar2 = FUN_0040c19c(pbVar1,string2);
  if (pCVar2 != (PCNZCH)0x0) {
    pCVar3 = pCVar2 + (1 - (int)pbVar1);
  }
  return pCVar3;
}


/* ==== 0040c110 FUN_0040c110 ==== */

int FUN_0040c110(undefined *param_1,int *param_2)

{
  char *pcVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  int i_val;
  
  if (DAT_004ac5bc == '\0') {
    iVar4 = FUN_00408330(param_1,param_2);
  }
  else {
    uVar3 = System__LStrLen((int)param_1);
    iVar4 = FUN_00404210(param_2,uVar3);
    i_val = 1;
    if (0 < (int)uVar3) {
      do {
        iVar4 = FUN_004040ac(param_2);
        *(undefined *)(iVar4 + -1 + i_val) = param_1[i_val + -1];
        if (((byte)(&DAT_004aa118)[(int)(uint)(byte)param_1[i_val + -1] >> 3] >>
             ((byte)param_1[i_val + -1] & 7) & 1) == 0) {
          cVar2 = *(char *)(*param_2 + -1 + i_val);
          iVar4 = CONCAT31((int3)((uint)*param_2 >> 8),cVar2 + -0x5b);
          if ((byte)(cVar2 + 0xbfU) < 0x1a) {
            iVar4 = FUN_004040ac(param_2);
            pcVar1 = (char *)(iVar4 + -1 + i_val);
            *pcVar1 = *pcVar1 + ' ';
          }
        }
        else {
          iVar4 = FUN_004040ac(param_2);
          *(undefined *)(iVar4 + -1 + i_val + 1) = param_1[i_val];
          i_val = i_val + 1;
        }
        i_val = i_val + 1;
      } while (i_val <= (int)uVar3);
    }
  }
  return iVar4;
}


/* ==== 0040c19c FUN_0040c19c ==== */

PCNZCH FUN_0040c19c(byte *param_1,char *string2)

{
  int iVar1;
  uint cchCount1;
  char *lpString1;
  undefined4 uVar2;
  int compare_string;
  
  if ((((param_1 != (byte *)0x0) && (*param_1 != 0)) && (string2 != (char *)0x0)) &&
     (*string2 != '\0')) {
    iVar1 = FUN_00408b24((char *)param_1);
    cchCount1 = FUN_00408b24(string2);
    for (lpString1 = FUN_00408cb8((char *)param_1,string2);
        (lpString1 != (PCNZCH)0x0 && (cchCount1 <= (uint)(iVar1 - ((int)lpString1 - (int)param_1))))
        ; lpString1 = FUN_00408cb8(lpString1 + 1,string2)) {
      uVar2 = FUN_0040bf10(param_1,(int)lpString1 - (int)param_1);
      if (((char)uVar2 != '\x02') &&
         (compare_string = CompareStringA(0x400,0,lpString1,cchCount1,string2,cchCount1),
         compare_string == 2)) {
        return lpString1;
      }
      if ((char)uVar2 == '\x01') {
        lpString1 = lpString1 + 1;
      }
    }
  }
  return (PCNZCH)0x0;
}


/* ==== 0040c23c FUN_0040c23c ==== */

char * FUN_0040c23c(byte *param_1,char param_2)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  
  pcVar2 = FUN_0040c264(param_1,param_2);
  pcVar3 = pcVar2;
  if (param_2 != '\0') {
    while (pcVar1 = pcVar3, pcVar1 != (char *)0x0) {
      pcVar3 = FUN_0040c264((byte *)(pcVar1 + 1),param_2);
      pcVar2 = pcVar1;
    }
  }
  return pcVar2;
}


/* ==== 0040c264 FUN_0040c264 ==== */

char * FUN_0040c264(byte *param_1,char param_2)

{
  char *pcVar1;
  undefined4 uVar2;
  
  pcVar1 = FUN_00408c98((char *)param_1,param_2);
  while( true ) {
    if (pcVar1 == (char *)0x0) {
      return (char *)0x0;
    }
    uVar2 = FUN_0040bf10(param_1,(int)pcVar1 - (int)param_1);
    if ((char)uVar2 == '\0') break;
    if ((char)uVar2 == '\x01') {
      pcVar1 = pcVar1 + 1;
    }
    pcVar1 = FUN_00408c98(pcVar1 + 1,param_2);
  }
  return pcVar1;
}


/* ==== 0040c2a4 FUN_0040c2a4 ==== */

void FUN_0040c2a4(void)

{
  LCID LVar1;
  int iVar2;
  char cVar3;
  byte i_val;
  _cpinfo local_24;
  
  DAT_004ac5b4 = 0x409;
  DAT_004ac5b8 = 9;
  DAT_004ac5ba = 1;
  LVar1 = GetThreadLocale();
  if (LVar1 != 0) {
    DAT_004ac5b4 = LVar1;
  }
  if ((ushort)LVar1 != 0) {
    DAT_004ac5b8 = (ushort)LVar1 & 0x3ff;
    DAT_004ac5ba = (undefined2)((LVar1 & 0xffff) >> 10);
  }
  iVar2 = GetSystemMetrics(0x4a);
  DAT_004ac5bd = iVar2 != 0;
  iVar2 = GetSystemMetrics(0x2a);
  DAT_004ac5bc = iVar2 != 0;
  if ((bool)DAT_004ac5bc) {
    GetCPInfo(0,&local_24);
    for (iVar2 = 0;
        (iVar2 < 0xc && (local_24.LeadByte[iVar2] != '\0' || local_24.LeadByte[iVar2 + 1] != '\0'));
        iVar2 = iVar2 + 2) {
      i_val = local_24.LeadByte[iVar2];
      if (i_val <= local_24.LeadByte[iVar2 + 1]) {
        cVar3 = (local_24.LeadByte[iVar2 + 1] - i_val) + '\x01';
        do {
          (&DAT_004aa118)[(int)(uint)i_val >> 3] =
               (&DAT_004aa118)[(int)(uint)i_val >> 3] | '\x01' << (i_val & 7);
          i_val = i_val + 1;
          cVar3 = cVar3 + -1;
        } while (cVar3 != '\0');
      }
    }
  }
  return;
}


/* ==== 0040c35c FUN_0040c35c ==== */

void FUN_0040c35c(void)

{
  LCID locale;
  undefined4 uVar1;
  uint uVar2;
  int i_val;
  int extraout_ECX;
  int extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  int extraout_ECX_03;
  undefined4 extraout_ECX_04;
  undefined4 extraout_ECX_05;
  int extraout_ECX_06;
  int extraout_ECX_07;
  int extraout_ECX_08;
  undefined4 extraout_ECX_09;
  byte *unaff_EBX;
  undefined4 *in_FS_OFFSET;
  byte *local_44;
  byte *local_40;
  byte *local_3c;
  char *local_38;
  undefined4 *local_34;
  undefined4 *local_30;
  undefined4 *local_2c;
  undefined4 *local_28;
  undefined4 *local_24;
  byte *pbVar3;
  byte *local_1c;
  byte *local_18;
  undefined4 *local_14;
  undefined4 *local_c;
  undefined4 *local_8;
  
  local_14 = (undefined4 *)&stack0xfffffffc;
  i_val = 8;
  do {
    local_8 = (undefined4 *)0x0;
    i_val = i_val + -1;
  } while (i_val != 0);
  local_18 = &LAB_0040c627;
  local_1c = (byte *)*in_FS_OFFSET;
  *in_FS_OFFSET = &local_1c;
  FUN_0040c2a4();
  FUN_0040aee8();
  if (DAT_004ac5bc != '\0') {
    FUN_0040b0c0();
  }
  locale = GetThreadLocale();
  local_24 = (undefined4 *)0x40c3ab;
  FUN_0040ae38(locale,0x14,(undefined4 *)0x0,(int *)&local_14);
  System__LStrAsg((int *)&DAT_004ac4f4,local_14);
  local_24 = (undefined4 *)0x40c3cd;
  FUN_0040ae38(locale,0x1b,(undefined4 *)&DAT_0040c63c,(int *)&local_18);
  uVar1 = FUN_00408654(local_18,0,extraout_ECX);
  DAT_004ac4f8 = (undefined1)uVar1;
  local_24 = (undefined4 *)0x40c3f1;
  FUN_0040ae38(locale,0x1c,(undefined4 *)&DAT_0040c63c,(int *)&local_1c);
  uVar1 = FUN_00408654(local_1c,0,extraout_ECX_00);
  DAT_004ac4f9 = (undefined1)uVar1;
  uVar2 = FUN_0040ae84(locale,0xf,CONCAT31((int3)((uint)extraout_ECX_01 >> 8),0x2c));
  DAT_004ac4fa = (undefined1)uVar2;
  uVar2 = FUN_0040ae84(locale,0xe,CONCAT31((int3)((uint)extraout_ECX_02 >> 8),0x2e));
  DAT_004ac4fb = (undefined1)uVar2;
  pbVar3 = &stack0xffffffe0;
  local_24 = (undefined4 *)0x40c43b;
  FUN_0040ae38(locale,0x19,(undefined4 *)&DAT_0040c63c,(int *)pbVar3);
  uVar1 = FUN_00408654(pbVar3,0,extraout_ECX_03);
  DAT_004ac4fc = (undefined1)uVar1;
  uVar2 = FUN_0040ae84(locale,0x1d,CONCAT31((int3)((uint)extraout_ECX_04 >> 8),0x2f));
  DAT_004ac4fd = (undefined1)uVar2;
  local_24 = (undefined4 *)0x40c472;
  FUN_0040ae38(locale,0x1f,(undefined4 *)"m/d/yy",(int *)&local_28);
  FUN_0040b170(local_28,(int *)&local_24);
  System__LStrAsg(&DAT_004ac500,local_24);
  local_24 = (undefined4 *)0x40c49f;
  FUN_0040ae38(locale,0x20,(undefined4 *)"mmmm d, yyyy",(int *)&local_30);
  FUN_0040b170(local_30,(int *)&local_2c);
  System__LStrAsg(&DAT_004ac504,local_2c);
  uVar2 = FUN_0040ae84(locale,0x1e,CONCAT31((int3)((uint)extraout_ECX_05 >> 8),0x3a));
  DAT_004ac508 = (undefined1)uVar2;
  local_24 = (undefined4 *)0x40c4df;
  FUN_0040ae38(locale,0x28,(undefined4 *)&DAT_0040c670,(int *)&local_34);
  System__LStrAsg(&DAT_004ac50c,local_34);
  local_24 = (undefined4 *)0x40c501;
  FUN_0040ae38(locale,0x29,(undefined4 *)&DAT_0040c67c,(int *)&local_38);
  System__LStrAsg(&DAT_004ac510,(undefined4 *)local_38);
  System__LStrClr((int *)&local_c);
  System__LStrClr((int *)&stack0xfffffff0);
  local_24 = (undefined4 *)0x40c533;
  FUN_0040ae38(locale,0x25,(undefined4 *)&DAT_0040c63c,(int *)&local_3c);
  i_val = FUN_00408654(local_3c,0,extraout_ECX_06);
  if (i_val == 0) {
    System__LStrLAsg((int *)&local_8,0x40c688);
  }
  else {
    System__LStrLAsg((int *)&local_8,0x40c694);
  }
  local_24 = (undefined4 *)0x40c572;
  FUN_0040ae38(locale,0x23,(undefined4 *)&DAT_0040c63c,(int *)&local_40);
  i_val = FUN_00408654(local_40,0,extraout_ECX_07);
  if (i_val == 0) {
    local_24 = (undefined4 *)0x40c595;
    FUN_0040ae38(locale,0x1005,(undefined4 *)&DAT_0040c63c,(int *)&local_44);
    i_val = FUN_00408654(local_44,0,extraout_ECX_08);
    if (i_val == 0) {
      System__LStrLAsg((int *)&stack0xfffffff0,0x40c6a0);
    }
    else {
      System__LStrLAsg((int *)&local_c,0x40c6b0);
    }
  }
  local_24 = local_8;
  local_28 = (undefined4 *)&DAT_0040c6c0;
  local_30 = (undefined4 *)0x40c5dc;
  System__LStrCatN(&DAT_004ac514,4);
  local_30 = local_c;
  local_34 = local_8;
  local_38 = ":mm:ss";
  local_40 = (byte *)0x40c5f9;
  local_3c = unaff_EBX;
  System__LStrCatN(&DAT_004ac518,4);
  local_40 = (byte *)0x40c607;
  uVar2 = FUN_0040ae84(locale,0xc,CONCAT31((int3)((uint)extraout_ECX_09 >> 8),0x2c));
  DAT_004ac5f8 = (undefined1)uVar2;
  *in_FS_OFFSET = local_3c;
  local_34 = (undefined4 *)&LAB_0040c62e;
  local_38 = (char *)0x40c626;
  System__LStrArrayClr((int *)&local_44,0x10);
  return;
}


/* ==== 0040c6d4 FUN_0040c6d4 ==== */

void FUN_0040c6d4(void)

{
  DWORD message_id;
  int *piVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_ffffffd0;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  int local_18;
  DWORD local_14;
  undefined1 local_10;
  int local_c;
  undefined1 local_8;
  
  puStack_20 = &stack0xfffffffc;
  local_18 = 0;
  puStack_24 = &LAB_0040c75e;
  puStack_28 = (undefined1 *)*in_FS_OFFSET;
  *in_FS_OFFSET = &puStack_28;
  message_id = GetLastError();
  if (message_id == 0) {
    piVar1 = SysUtils_Exception_CreateRes
                       ((int *)&DAT_00407fb8,'\x01',(undefined4 *)PTR_PTR_004ab72c);
  }
  else {
    local_10 = 0;
    local_14 = message_id;
    FUN_0040adec(message_id,&local_18);
    local_c = local_18;
    local_8 = 0xb;
    in_stack_ffffffd0 = 1;
    piVar1 = (int *)FUN_0040b6d0((int)&DAT_00407fb8,'\x01',(undefined4 *)PTR_PTR_004ab648,1,
                                 &local_14);
  }
  piVar1[3] = message_id;
  System__RaiseExcept(piVar1);
  *in_FS_OFFSET = in_stack_ffffffd0;
  puStack_28 = &LAB_0040c765;
  System__LStrClr(&local_18);
  return;
}


/* ==== 0040c76c FUN_0040c76c ==== */

int FUN_0040c76c(int param_1)

{
  if (param_1 == 0) {
    FUN_0040c6d4();
  }
  return param_1;
}


/* ==== 0040c77c FUN_0040c77c ==== */

void FUN_0040c77c(void)

{
  char cVar1;
  undefined4 *puVar2;
  
  cVar1 = '\x01';
  for (puVar2 = DAT_004aa2f8; (cVar1 != '\0' && (puVar2 != (undefined4 *)0x0));
      puVar2 = (undefined4 *)*puVar2) {
    cVar1 = (*(code *)puVar2[1])();
  }
  return;
}


/* ==== 0040c798 FUN_0040c798 ==== */

void FUN_0040c798(void)

{
  undefined4 *puVar1;
  
  while (puVar1 = DAT_004aa2f8, DAT_004aa2f8 != (undefined4 *)0x0) {
    DAT_004aa2f8 = (undefined4 *)*DAT_004aa2f8;
    System__FreeMem((int)puVar1);
  }
  return;
}


/* ==== 0040c7b8 FUN_0040c7b8 ==== */

void FUN_0040c7b8(void)

{
  HMODULE hModule;
  
  hModule = GetModuleHandleA("kernel32.dll");
  if (hModule != (HMODULE)0x0) {
    DAT_004aa13c = GetProcAddress(hModule,"GetDiskFreeSpaceExA");
  }
  if (DAT_004aa13c == (FARPROC)0x0) {
    DAT_004aa13c = (FARPROC)&LAB_00408ab0;
  }
  return;
}


/* ==== 0040c814 FUN_0040c814 ==== */

int * FUN_0040c814(int *param_1,char param_2,undefined4 param_3)

{
  HANDLE event;
  undefined4 extraout_ECX;
  char extraout_DL;
  char cVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_ffffffe8;
  undefined4 in_stack_ffffffec;
  
  cVar1 = '\0';
  if (param_2 != '\0') {
    param_1 = (int *)System__ClassCreate((int)param_1,param_2,param_3,in_stack_ffffffe8,
                                         in_stack_ffffffec);
    param_3 = extraout_ECX;
    cVar1 = extraout_DL;
  }
  System_TObject_Create(param_1,'\0',param_3);
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 1));
  event = CreateEventA((LPSECURITY_ATTRIBUTES)0x0,-1,-1,(LPCSTR)0x0);
  param_1[7] = (int)event;
  FUN_00405220(param_1 + 10,(int)&DAT_00408034,1);
  if (cVar1 != '\0') {
    System__AfterConstruction(param_1);
    *in_FS_OFFSET = in_stack_ffffffe8;
  }
  return param_1;
}


/* ==== 0040c87c TMultiReadExclusiveWriteSynchronizer.Destroy ==== */

void TMultiReadExclusiveWriteSynchronizer_Destroy(int *param_1,char param_2)

{
  int *piVar1;
  byte extraout_DL;
  
  piVar1 = System__BeforeDestruction(param_1,param_2);
  FUN_0040c8f8((int)piVar1);
  TObject_Destroy(piVar1,extraout_DL & 0xfc);
  CloseHandle((HANDLE)piVar1[7]);
  DeleteCriticalSection((LPCRITICAL_SECTION)(piVar1 + 1));
  if ('\0' < (char)extraout_DL) {
    System__ClassDestroy(piVar1);
  }
  return;
}


/* ==== 0040c8bc FUN_0040c8bc ==== */

bool FUN_0040c8bc(int param_1)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  int i_val;
  
  bVar2 = false;
  if (*(int *)(param_1 + 0x2c) != 0) {
    iVar3 = FUN_0040506c(*(int *)(param_1 + 0x28));
    for (i_val = 0;
        (i_val < iVar3 &&
        ((iVar1 = *(int *)(*(int *)(param_1 + 0x28) + i_val * 8), iVar1 == 0 ||
         (iVar1 == *(int *)(param_1 + 0x2c))))); i_val = i_val + 1) {
    }
    bVar2 = iVar3 <= i_val;
  }
  return bVar2;
}


/* ==== 0040c8f8 FUN_0040c8f8 ==== */

void FUN_0040c8f8(int param_1)

{
  bool bVar1;
  DWORD DVar2;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 4));
  if (*(char *)(param_1 + 0x34) == '\0') {
    DVar2 = GetCurrentThreadId();
    *(DWORD *)(param_1 + 0x2c) = DVar2;
    bVar1 = FUN_0040c8bc(param_1);
    if (!bVar1) {
      WaitForSingleObject(*(HANDLE *)(param_1 + 0x1c),0xffffffff);
    }
    *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_1 + 0x20);
    *(undefined4 *)(param_1 + 0x20) = 0;
    *(undefined4 *)(param_1 + 0x2c) = 0;
    *(undefined1 *)(param_1 + 0x34) = 1;
  }
  *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
  return;
}


/* ==== 0040c944 FUN_0040c944 ==== */

void FUN_0040c944(int param_1)

{
  *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + -1;
  if (*(int *)(param_1 + 0x20) == 0) {
    *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_1 + 0x24);
    *(undefined4 *)(param_1 + 0x24) = 0;
    *(undefined1 *)(param_1 + 0x34) = 0;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 4));
  return;
}


/* ==== 0040c968 SysUtils.FreeAndNil ==== */

void SysUtils_FreeAndNil(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)*param_1;
  *param_1 = 0;
  System_TObject_Free(piVar1);
  return;
}


/* ==== 0040c978 FUN_0040c978 ==== */

void FUN_0040c978(undefined *param_1,UINT mode_val)

{
  LPCSTR lpLibFileName;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  
  puStack_1c = (undefined1 *)0x40c987;
  SetErrorMode(mode_val);
  puStack_1c = &LAB_0040c9ea;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  puStack_28 = &LAB_0040c9cc;
  uStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_2c;
  puStack_24 = &stack0xfffffffc;
  lpLibFileName = System__LStrToPChar(param_1);
  LoadLibraryA(lpLibFileName);
  *in_FS_OFFSET = uStack_2c;
  return;
}


/* ==== 0040ccee FUN_0040ccee ==== */

int FUN_0040ccee(undefined1 *param_1,undefined4 param_2,char param_3,undefined4 param_4,int param_5,
                byte param_6)

{
  int i_val;
  int extraout_ECX;
  uint uVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  byte bVar4;
  ushort local_20 [12];
  undefined1 *local_8;
  
  bVar4 = 0;
  i_val = 0x13;
  if (param_3 == '\0') {
    i_val = param_5;
    if (param_5 < 2) {
      i_val = 2;
    }
    if (0x12 < i_val) {
      i_val = 0x12;
    }
  }
  local_8 = param_1;
  FUN_0040d291(local_20,param_2,param_3);
  puVar3 = local_8;
  if (local_20[0] - 0x7fff < 2) {
    FUN_0040cdac();
    puVar2 = &DAT_0040cce8 + extraout_ECX * 3;
    for (i_val = 3; i_val != 0; i_val = i_val + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
      puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
    }
  }
  else {
    uVar1 = (uint)param_6;
    if ((param_6 != 1) && ((4 < param_6 || (i_val < (short)local_20[0])))) {
      uVar1 = 0;
    }
    (**(code **)(&DAT_0040cd8f + uVar1 * 4))();
  }
  return (int)puVar3 - (int)local_8;
}


/* ==== 0040cdac FUN_0040cdac ==== */

void FUN_0040cdac(void)

{
  int unaff_EBP;
  undefined1 *unaff_EDI;
  
  if (*(char *)(unaff_EBP + -0x1a) != '\0') {
    *unaff_EDI = 0x2d;
  }
  return;
}


/* ==== 0040d291 FUN_0040d291 ==== */

void FUN_0040d291(undefined4 param_1,undefined4 param_2,char param_3)

{
  if (param_3 == '\0') {
    FUN_0040d2b8();
  }
  else {
    FUN_0040d3bf();
  }
  return;
}


/* ==== 0040d2b8 FUN_0040d2b8 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040d2b8(void)

{
  char *pcVar1;
  unkbyte10 Var2;
  byte bVar3;
  undefined2 uVar4;
  uint uVar5;
  ushort uVar6;
  int i_val;
  undefined2 *unaff_EBX;
  int unaff_EBP;
  float10 *unaff_ESI;
  short *psVar7;
  short *psVar8;
  byte bVar9;
  float10 fVar10;
  
  bVar9 = 0;
  uVar6 = *(ushort *)((int)unaff_ESI + 8);
  uVar5 = uVar6 & 0x7fff;
  if ((uVar6 & 0x7fff) == 0) {
LAB_0040d2e3:
    uVar6 = 0;
  }
  else {
    if (uVar5 != 0x7fff) {
      fVar10 = *unaff_ESI;
      *(int *)(unaff_EBP + -8) = ((int)((uVar5 - 0x3fff) * 0x4d10) >> 0x10) + 1;
      fVar10 = ABS(fVar10);
      FUN_00405e28(0x12 - *(int *)(unaff_EBP + -8));
      fVar10 = ROUND(fVar10);
      *(ushort *)(unaff_EBP + -4) =
           (ushort)(_DAT_0040ccdc < fVar10) << 8 | (ushort)(NAN(_DAT_0040ccdc) || NAN(fVar10)) << 10
           | (ushort)(_DAT_0040ccdc == fVar10) << 0xe;
      if ((*(ushort *)(unaff_EBP + -4) & 0x4100) != 0) {
        fVar10 = fVar10 / (float10)10;
        *(int *)(unaff_EBP + -8) = *(int *)(unaff_EBP + -8) + 1;
      }
      Var2 = to_bcd(fVar10);
      *(unkbyte10 *)(unaff_EBP + -0x1a) = Var2;
      i_val = 9;
      psVar7 = (short *)((int)unaff_EBX + 3);
      do {
        bVar3 = *(byte *)(unaff_EBP + -0x1b + i_val);
        psVar8 = psVar7 + (uint)bVar9 * -2 + 1;
        *psVar7 = (CONCAT11(bVar3,bVar3 >> 4) & 0xfff) + 0x3030;
        i_val = i_val + -1;
        psVar7 = psVar8;
      } while (i_val != 0);
      *(undefined1 *)psVar8 = 0;
      uVar5 = *(int *)(unaff_EBP + -8) + *(int *)(unaff_EBP + 8);
      if ((int)uVar5 < 0) {
        uVar5 = 0;
        goto LAB_0040d2e3;
      }
      if (*(uint *)(unaff_EBP + 0xc) <= uVar5) {
        uVar5 = *(uint *)(unaff_EBP + 0xc);
      }
      if (uVar5 < 0x12) {
        if (*(byte *)((int)unaff_EBX + uVar5 + 3) < 0x35) goto LAB_0040d39a;
        do {
          *(undefined1 *)((int)unaff_EBX + uVar5 + 3) = 0;
          if ((int)(uVar5 - 1) < 0) {
            *(undefined2 *)((int)unaff_EBX + 3) = 0x31;
            *(int *)(unaff_EBP + -8) = *(int *)(unaff_EBP + -8) + 1;
            break;
          }
          pcVar1 = (char *)((int)unaff_EBX + uVar5 + 2);
          *pcVar1 = *pcVar1 + '\x01';
          i_val = uVar5 + 2;
          uVar5 = uVar5 - 1;
        } while (0x39 < *(byte *)((int)unaff_EBX + i_val));
      }
      else {
        uVar5 = 0x12;
LAB_0040d39a:
        do {
          *(undefined1 *)((int)unaff_EBX + uVar5 + 3) = 0;
          if ((int)(uVar5 - 1) < 0) {
            bVar9 = 0;
            goto LAB_0040d3ad;
          }
          i_val = uVar5 + 2;
          uVar5 = uVar5 - 1;
        } while (*(char *)((int)unaff_EBX + i_val) == '0');
      }
      bVar9 = (byte)((ushort)*(undefined2 *)((int)unaff_ESI + 8) >> 8);
LAB_0040d3ad:
      uVar4 = (undefined2)*(undefined4 *)(unaff_EBP + -8);
      goto LAB_0040d3b0;
    }
    if ((((unkuint10)*unaff_ESI & 0x8000000000000000) != 0) &&
       ((*(int *)unaff_ESI != 0 || (*(int *)((int)unaff_ESI + 4) != -0x80000000)))) {
      uVar5 = 0x8000;
      goto LAB_0040d2e3;
    }
  }
  bVar9 = (byte)(uVar6 >> 8);
  uVar4 = (undefined2)uVar5;
  *(undefined1 *)((int)unaff_EBX + 3) = 0;
LAB_0040d3b0:
  *unaff_EBX = uVar4;
  *(byte *)(unaff_EBX + 1) = bVar9 >> 7;
  return;
}


/* ==== 0040d3bf FUN_0040d3bf ==== */

void FUN_0040d3bf(void)

{
  unkbyte10 Var1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  byte bVar5;
  short sVar6;
  uint uVar7;
  int i_val;
  byte bVar8;
  uint uVar9;
  short *unaff_EBX;
  int unaff_EBP;
  uint *unaff_ESI;
  int iVar10;
  short *psVar11;
  short *psVar12;
  bool bVar13;
  float10 fVar14;
  
  uVar7 = *unaff_ESI;
  uVar9 = unaff_ESI[1];
  if (uVar7 != 0 || uVar9 != 0) {
    if ((int)uVar9 < 0) {
      bVar13 = uVar7 != 0;
      uVar7 = -uVar7;
      uVar9 = -(uint)bVar13 - uVar9;
    }
    i_val = 0;
    iVar10 = *(int *)(unaff_EBP + 8);
    if (iVar10 < 0) {
      iVar10 = 0;
    }
    if (3 < iVar10) {
      iVar10 = 4;
      uVar3 = uVar7;
      iVar4 = i_val;
      do {
        i_val = iVar4;
        uVar7 = uVar3;
        bVar13 = 0xde0b6b2 < uVar9;
        uVar2 = uVar9 + 0xf21f494d;
        uVar9 = uVar2 - (uVar7 < 0xa7640000);
        uVar3 = uVar7 + 0x589c0000;
        iVar4 = i_val + 1;
      } while (bVar13 && (uVar7 < 0xa7640000) <= uVar2);
      uVar9 = uVar9 + 0xde0b6b3 + (uint)(0x589bffff < uVar7 + 0x589c0000);
    }
    *(uint *)(unaff_EBP + -0x10) = uVar7;
    *(uint *)(unaff_EBP + -0xc) = uVar9;
    fVar14 = (float10)*(longlong *)(unaff_EBP + -0x10);
    if (4 - iVar10 != 0) {
      fVar14 = fVar14 / (float10)(int)(&DAT_0040ccc8)[4 - iVar10];
    }
    Var1 = to_bcd(fVar14);
    *(unkbyte10 *)(unaff_EBP + -0x1a) = Var1;
    psVar11 = (short *)((int)unaff_EBX + 3);
    if (i_val != 0) {
      psVar12 = unaff_EBX + 2;
      *(char *)psVar11 = (char)i_val + '0';
      i_val = 9;
      goto LAB_0040d453;
    }
    i_val = 9;
    do {
      bVar8 = *(byte *)(unaff_EBP + -0x1b + i_val);
      bVar5 = bVar8 >> 4;
      psVar12 = psVar11;
      if (bVar5 != 0) goto LAB_0040d45c;
      if ((bVar8 & 0xf) != 0) goto LAB_0040d463;
      i_val = i_val + -1;
    } while (i_val != 0);
  }
  sVar6 = 0;
  bVar8 = 0;
  *(undefined1 *)((int)unaff_EBX + 3) = 0;
LAB_0040d489:
  *unaff_EBX = sVar6;
  *(byte *)(unaff_EBX + 1) = bVar8;
  return;
LAB_0040d463:
  while( true ) {
    psVar12 = (short *)((int)psVar11 + 1);
    *(byte *)psVar11 = (bVar8 & 0xf) + 0x30;
    i_val = i_val + -1;
    if (i_val == 0) break;
LAB_0040d453:
    bVar8 = *(byte *)(unaff_EBP + -0x1b + i_val);
    bVar5 = bVar8 >> 4;
LAB_0040d45c:
    psVar11 = (short *)((int)psVar12 + 1);
    *(byte *)psVar12 = bVar5 + 0x30;
  }
  sVar6 = (short)psVar12 - ((short)unaff_EBX + 3 + (short)iVar10);
  do {
    *(char *)psVar12 = '\0';
    psVar12 = (short *)((int)psVar12 + -1);
  } while (*(char *)psVar12 == '0');
  bVar8 = (byte)(unaff_ESI[1] >> 0x1f);
  goto LAB_0040d489;
}


/* ==== 0040d490 FUN_0040d490 ==== */

undefined4 FUN_0040d490(byte *param_1,float10 *param_2,char param_3)

{
  byte bVar1;
  int iVar2;
  undefined2 extraout_var;
  byte *extraout_ECX;
  byte *extraout_ECX_00;
  byte *pbVar3;
  int extraout_EDX;
  ushort in_FPUStatusWord;
  ushort uVar4;
  float10 fVar5;
  
  uVar4 = (in_FPUStatusWord >> 8 & 0x7f) << 8;
  fVar5 = (float10)0;
  FUN_0040d53b();
  bVar1 = *param_1;
  if ((bVar1 == 0x2b) || (bVar1 == 0x2d)) {
    param_1 = param_1 + 1;
  }
  FUN_0040d546();
  pbVar3 = extraout_ECX;
  if (*param_1 == DAT_004ac4fb) {
    param_1 = param_1 + 1;
    FUN_0040d546();
    pbVar3 = extraout_ECX_00;
  }
  if (pbVar3 != param_1) {
    if ((*param_1 & 0xdf) == 0x45) {
      param_1 = param_1 + 1;
      FUN_0040d562();
    }
    FUN_0040d53b();
    if (*param_1 == 0) {
      iVar2 = extraout_EDX;
      if (param_3 == '\x01') {
        iVar2 = extraout_EDX + 4;
      }
      FUN_00405e28(iVar2);
      if (bVar1 == 0x2d) {
        fVar5 = -fVar5;
      }
      if (param_3 == '\0') {
        *param_2 = fVar5;
      }
      else {
        *(longlong *)param_2 = (longlong)ROUND(fVar5);
      }
      if ((uVar4 & 9) == 0) {
        return CONCAT31((int3)(CONCAT22(extraout_var,uVar4) >> 8),1);
      }
    }
  }
  return 0;
}


/* ==== 0040d53b FUN_0040d53b ==== */

void FUN_0040d53b(void)

{
  char cVar1;
  char *unaff_ESI;
  
  do {
    cVar1 = *unaff_ESI;
    if (cVar1 == '\0') {
      return;
    }
    unaff_ESI = unaff_ESI + 1;
  } while (cVar1 == ' ');
  return;
}


/* ==== 0040d546 FUN_0040d546 ==== */

void FUN_0040d546(void)

{
  int unaff_EBP;
  char *unaff_ESI;
  
  while( true ) {
    if ((byte)(*unaff_ESI - 0x3aU) < 0xf6) break;
    *(uint *)(unaff_EBP + -4) = (uint)(byte)(*unaff_ESI - 0x30);
    unaff_ESI = unaff_ESI + 1;
  }
  return;
}


/* ==== 0040d562 FUN_0040d562 ==== */

void FUN_0040d562(void)

{
  char cVar1;
  uint uVar2;
  char *unaff_ESI;
  
  uVar2 = 0;
  if ((*unaff_ESI == '+') || (*unaff_ESI == '-')) {
    unaff_ESI = unaff_ESI + 1;
  }
  do {
    cVar1 = *unaff_ESI;
    if ((byte)(cVar1 - 0x3aU) < 0xf6) {
      return;
    }
    unaff_ESI = unaff_ESI + 1;
    uVar2 = uVar2 * 10 + (uint)(byte)(cVar1 - 0x30);
  } while (uVar2 < 500);
  return;
}


/* ==== 0040d6d4 FUN_0040d6d4 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040d6d4(void)

{
  undefined4 *in_FS_OFFSET;
  bool bVar1;
  undefined4 uStack_10;
  undefined1 *puStack_c;
  undefined1 *puStack_8;
  
  puStack_8 = &stack0xfffffffc;
  puStack_c = &LAB_0040d73c;
  uStack_10 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_10;
  bVar1 = _DAT_004ac5fc == 0;
  _DAT_004ac5fc = _DAT_004ac5fc + -1;
  if (bVar1) {
    FUN_00403a2c((int *)&DAT_0040c9fc);
    FUN_00403a48((int *)&DAT_0040cae8);
    if (DAT_004ac4d1 != '\0') {
      System__LStrAsg((int *)&PTR_DAT_004aa138,(undefined4 *)&DAT_0040d750);
    }
    FUN_0040bcdc();
    FUN_0040c35c();
    FUN_0040be14();
    FUN_0040c7b8();
  }
  *in_FS_OFFSET = uStack_10;
  return;
}


/* ==== 0040d994 IsEqualGUID ==== */

void IsEqualGUID(void)

{
                    /* WARNING: Could not recover jumptable at 0x0040d994. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IsEqualGUID();
  return;
}


/* ==== 0040d99c CoInitialize ==== */

HRESULT __stdcall CoInitialize(LPVOID pvReserved)

{
  HRESULT HVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0040d99c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  HVar1 = CoInitialize(pvReserved);
  return HVar1;
}


/* ==== 0040d9a4 CoUninitialize ==== */

void __stdcall CoUninitialize(void)

{
                    /* WARNING: Could not recover jumptable at 0x0040d9a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CoUninitialize();
  return;
}


/* ==== 0040d9ac CoGetClassObject ==== */

HRESULT __stdcall
CoGetClassObject(IID *rclsid,DWORD dwClsContext,LPVOID pvReserved,IID *riid,LPVOID *ppv)

{
  HRESULT HVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0040d9ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  HVar1 = CoGetClassObject(rclsid,dwClsContext,pvReserved,riid,ppv);
  return HVar1;
}


/* ==== 0040d9b4 CoCreateInstance ==== */

HRESULT __stdcall
CoCreateInstance(IID *rclsid,LPUNKNOWN pUnkOuter,DWORD dwClsContext,IID *riid,LPVOID *ppv)

{
  HRESULT HVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0040d9b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  HVar1 = CoCreateInstance(rclsid,pUnkOuter,dwClsContext,riid,ppv);
  return HVar1;
}


/* ==== 0040d9bc OleSetMenuDescriptor ==== */

HRESULT __stdcall
OleSetMenuDescriptor
          (HOLEMENU holemenu,HWND hwndFrame,HWND hwndActiveObject,LPOLEINPLACEFRAME lpFrame,
          LPOLEINPLACEACTIVEOBJECT lpActiveObj)

{
  HRESULT HVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0040d9bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  HVar1 = OleSetMenuDescriptor(holemenu,hwndFrame,hwndActiveObject,lpFrame,lpActiveObj);
  return HVar1;
}


/* ==== 0040d9c4 OleDraw ==== */

HRESULT __stdcall OleDraw(LPUNKNOWN pUnknown,DWORD dwAspect,HDC hdcDraw,LPCRECT lprcBounds)

{
  HRESULT HVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0040d9c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  HVar1 = OleDraw(pUnknown,dwAspect,hdcDraw,lprcBounds);
  return HVar1;
}


/* ==== 0040d9cc IsAccelerator ==== */

BOOL __stdcall IsAccelerator(HACCEL hAccel,int cAccelEntries,LPMSG lpMsg,WORD *lpwCmd)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0040d9cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = IsAccelerator(hAccel,cAccelEntries,lpMsg,lpwCmd);
  return BVar1;
}


/* ==== 0040d9d4 CreateStreamOnHGlobal ==== */

HRESULT __stdcall CreateStreamOnHGlobal(HGLOBAL hGlobal,BOOL fDeleteOnRelease,LPSTREAM *ppstm)

{
  HRESULT HVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0040d9d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  HVar1 = CreateStreamOnHGlobal(hGlobal,fDeleteOnRelease,ppstm);
  return HVar1;
}


/* ==== 0040d9dc SysFreeString ==== */

void __stdcall SysFreeString(BSTR bstrString)

{
                    /* WARNING: Could not recover jumptable at 0x0040d9dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  SysFreeString(bstrString);
  return;
}


/* ==== 0040d9ec FUN_0040d9ec ==== */

bool FUN_0040d9ec(uint param_1)

{
  return (param_1 & 0x80000000) == 0;
}


/* ==== 0040de54 FUN_0040de54 ==== */

int FUN_0040de54(int param_1)

{
  return param_1 + 2 + (uint)*(byte *)(param_1 + 1);
}


/* ==== 0040de60 FUN_0040de60 ==== */

int FUN_0040de60(int param_1,int param_2)

{
  int *piVar1;
  int i_val;
  uint j;
  undefined1 *puVar2;
  
  if (param_2 != 0) {
    i_val = **(int **)(param_1 + 0xb + (uint)*(byte *)(param_1 + 1));
    j = (uint)*(byte *)(i_val + 1);
    puVar2 = (undefined1 *)(i_val + 0xf + j);
    piVar1 = (int *)(i_val + 7 + j);
    i_val = 0;
    do {
      j = CONCAT31((int3)(j >> 8),*puVar2);
      if (j == *(uint *)(param_2 + -4)) {
        while (((*(byte *)(param_2 + -1 + j) ^ puVar2[j]) & 0xdf) == 0) {
          j = j - 1;
          if (j == 0) {
            return i_val;
          }
        }
        j = CONCAT31((int3)(j >> 8),*puVar2);
      }
      i_val = i_val + 1;
      puVar2 = puVar2 + j + 1;
    } while (i_val <= *piVar1);
  }
  return -1;
}


/* ==== 0040deac FUN_0040deac ==== */

void FUN_0040deac(char *param_1,byte *param_2)

{
  if (*param_1 == '\x01') {
    FUN_00408618(param_2);
    return;
  }
  FUN_0040de60((int)param_1,(int)param_2);
  return;
}


/* ==== 0040dec0 FUN_0040dec0 ==== */

void FUN_0040dec0(int param_1,undefined1 *param_2)

{
  int iVar1;
  int iVar2;
  undefined1 uVar3;
  byte bVar5;
  undefined1 *puVar4;
  undefined2 uVar6;
  uint uVar7;
  undefined1 *puVar8;
  int j;
  uint i_val;
  
  puVar4 = param_2;
  if (param_2 != (undefined1 *)0x0) {
    puVar4 = (undefined1 *)(CONCAT11(*param_2,param_2[-4]) & 0xdfff);
  }
  while( true ) {
    iVar1 = param_1 + 2 + (uint)*(byte *)(param_1 + 1);
    uVar7 = (uint)*(byte *)(iVar1 + 10);
    i_val = (uint)*(ushort *)(iVar1 + 0xb + uVar7);
    if (i_val != 0) {
      iVar2 = iVar1 + 0xd + uVar7;
      do {
        puVar8 = (undefined1 *)
                 (CONCAT22((short)(uVar7 >> 0x10),*(undefined2 *)(iVar2 + 0x1a)) & 0xffffdfff);
        if (puVar8 == puVar4) {
          j = CONCAT22((short)((uint)puVar8 >> 0x10),(ushort)(byte)puVar8);
          while( true ) {
            uVar6 = (undefined2)((uint)puVar4 >> 0x10);
            uVar3 = SUB41(puVar4,0);
            bVar5 = param_2[j + -1] ^ *(byte *)(iVar2 + 0x1a + j);
            puVar4 = (undefined1 *)CONCAT22(uVar6,CONCAT11(bVar5,uVar3));
            if ((bVar5 & 0xdf) != 0) break;
            j = j + -1;
            if (j == 0) {
              return;
            }
          }
          puVar4 = (undefined1 *)(CONCAT22(uVar6,CONCAT11(*param_2,uVar3)) & 0xffffdfff);
          puVar8 = (undefined1 *)CONCAT31((int3)((uint)j >> 8),*(undefined1 *)(iVar2 + 0x1a));
        }
        uVar7 = CONCAT22((short)((uint)puVar8 >> 0x10),(ushort)(byte)puVar8);
        i_val = i_val - 1;
        iVar2 = iVar2 + 0x1b + uVar7;
      } while (i_val != 0);
    }
    if (*(int **)(iVar1 + 4) == (int *)0x0) break;
    param_1 = **(int **)(iVar1 + 4);
  }
  return;
}


/* ==== 0040df2c FUN_0040df2c ==== */

void FUN_0040df2c(int param_1,undefined4 *param_2)

{
  int iVar1;
  byte bVar2;
  uint i_val;
  undefined4 *puVar3;
  int iVar4;
  
  puVar3 = param_2;
  for (i_val = (uint)*(ushort *)(param_1 + 10 + (uint)*(byte *)(param_1 + 1)); i_val != 0;
      i_val = i_val - 1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  while( true ) {
    iVar1 = param_1 + 2 + (uint)*(byte *)(param_1 + 1);
    i_val = (uint)*(ushort *)(iVar1 + 0xb + (uint)*(byte *)(iVar1 + 10));
    if (i_val != 0) {
      iVar4 = iVar1 + 0xd + (uint)*(byte *)(iVar1 + 10);
      do {
        bVar2 = *(byte *)(iVar4 + 0x1a);
        if (param_2[*(ushort *)(iVar4 + 0x18)] == 0) {
          param_2[*(ushort *)(iVar4 + 0x18)] = iVar4;
        }
        iVar4 = iVar4 + 0x1b + (uint)bVar2;
        i_val = i_val - 1;
      } while (i_val != 0);
    }
    if (*(int **)(iVar1 + 4) == (int *)0x0) break;
    param_1 = **(int **)(iVar1 + 4);
  }
  return;
}


/* ==== 0040df80 FUN_0040df80 ==== */

uint FUN_0040df80(int *param_1,undefined4 *param_2)

{
  char *pcVar1;
  code *pcVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  byte bVar6;
  
  pcVar1 = *(char **)*param_2;
  bVar6 = 4;
  if (*pcVar1 != '\a') {
    bVar6 = pcVar1[(byte)pcVar1[1] + 2];
  }
  pcVar2 = (code *)param_2[1];
  if (*(byte *)((int)param_2 + 7) < 0xfe) {
    uVar3 = (*pcVar2)(param_1,param_2[4]);
  }
  else if (*(byte *)((int)param_2 + 7) == 0xff) {
    puVar5 = (uint *)(((uint)pcVar2 & 0xffffff) + (int)param_1);
    uVar3 = CONCAT31((int3)((uint)param_1 >> 8),(char)*puVar5);
    if ((1 < bVar6) && (uVar3 = CONCAT22((short)((uint)param_1 >> 0x10),(short)*puVar5), 3 < bVar6))
    {
      uVar3 = *puVar5;
    }
  }
  else {
    uVar3 = (**(code **)((int)(short)pcVar2 + *param_1))();
  }
  uVar4 = uVar3;
  if (bVar6 < 4) {
    if (bVar6 < 2) {
      uVar4 = (uint)(char)uVar3;
      if (bVar6 != 0) {
        return uVar3 & 0xff;
      }
    }
    else {
      uVar4 = (uint)(short)uVar3;
      if (bVar6 != 2) {
        uVar4 = uVar3 & 0xffff;
      }
    }
  }
  return uVar4;
}


/* ==== 0040dff4 FUN_0040dff4 ==== */

void FUN_0040dff4(int *param_1,undefined4 *param_2,int param_3)

{
  char *pcVar1;
  code *pcVar2;
  int *piVar3;
  int iVar4;
  byte bVar5;
  
  pcVar1 = *(char **)*param_2;
  bVar5 = 4;
  if (*pcVar1 != '\a') {
    bVar5 = pcVar1[(byte)pcVar1[1] + 2];
  }
  iVar4 = param_2[4];
  if (param_2[4] == -0x80000000) {
    iVar4 = param_3;
  }
  pcVar2 = (code *)param_2[2];
  if (*(byte *)((int)param_2 + 0xb) == 0xff) {
    piVar3 = (int *)((int)param_1 + ((uint)pcVar2 & 0xffffff));
    *(char *)piVar3 = (char)param_3;
    if ((1 < bVar5) && (*(short *)piVar3 = (short)param_3, 3 < bVar5)) {
      *piVar3 = param_3;
    }
  }
  else if (*(byte *)((int)param_2 + 0xb) < 0xfe) {
    (*pcVar2)(param_1,iVar4);
  }
  else {
    (**(code **)((int)(short)pcVar2 + *param_1))();
  }
  return;
}


/* ==== 0040e050 FUN_0040e050 ==== */

void FUN_0040e050(int *param_1,undefined4 *param_2,byte *param_3)

{
  byte bVar1;
  code *pcVar2;
  byte bVar3;
  uint i_val;
  byte *pbVar4;
  
  pbVar4 = (byte *)param_2[4];
  if ((byte *)param_2[4] == (byte *)0x80000000) {
    pbVar4 = param_3;
  }
  pcVar2 = (code *)param_2[2];
  if (*(byte *)((int)param_2 + 0xb) != 0xff) {
    if (0xfd < *(byte *)((int)param_2 + 0xb)) {
      (**(code **)((int)(short)pcVar2 + *param_1))();
      return;
    }
    (*pcVar2)(param_1,pbVar4);
    return;
  }
  pbVar4 = (byte *)(((uint)pcVar2 & 0xffffff) + (int)param_1);
  bVar1 = *(byte *)(*(int *)*param_2 + 2 + (uint)*(byte *)(*(int *)*param_2 + 1));
  bVar3 = *param_3;
  if (bVar1 <= *param_3) {
    bVar3 = bVar1;
  }
  *pbVar4 = bVar3;
  i_val = (uint)bVar3;
  while( true ) {
    pbVar4 = pbVar4 + 1;
    param_3 = param_3 + 1;
    if (i_val == 0) break;
    i_val = i_val - 1;
    *pbVar4 = *param_3;
  }
  return;
}


/* ==== 0040e0a4 FUN_0040e0a4 ==== */

void FUN_0040e0a4(int *param_1,undefined4 *param_2,undefined4 *param_3)

{
  byte abStack_10c [256];
  
  FUN_00403eb8(abStack_10c,param_3,0xff);
  FUN_0040e050(param_1,param_2,abStack_10c);
  return;
}


/* ==== 0040e0d8 FUN_0040e0d8 ==== */

void FUN_0040e0d8(int *param_1,undefined4 *param_2)

{
  System__LStrAsg(param_1,param_2);
  return;
}


/* ==== 0040e0ec FUN_0040e0ec ==== */

void FUN_0040e0ec(int *param_1,int param_2,undefined4 *param_3)

{
  code *pcVar1;
  undefined4 *puVar2;
  
  puVar2 = *(undefined4 **)(param_2 + 0x10);
  if (*(undefined4 **)(param_2 + 0x10) == (undefined4 *)0x80000000) {
    puVar2 = param_3;
  }
  pcVar1 = *(code **)(param_2 + 8);
  if (*(byte *)(param_2 + 0xb) != 0xff) {
    if (0xfd < *(byte *)(param_2 + 0xb)) {
      (**(code **)((int)(short)pcVar1 + *param_1))();
      return;
    }
    (*pcVar1)(param_1,puVar2);
    return;
  }
  FUN_0040e0d8((int *)((int)param_1 + ((uint)pcVar1 & 0xffffff)),param_3);
  return;
}


/* ==== 0040e12c FUN_0040e12c ==== */

void FUN_0040e12c(BSTR *pbstr_val,OLECHAR *psz_val)

{
  FUN_004042f0(pbstr_val,psz_val);
  return;
}


/* ==== 0040e140 FUN_0040e140 ==== */

void FUN_0040e140(int *param_1,int param_2,OLECHAR *psz_val)

{
  code *pcVar1;
  OLECHAR *pOVar2;
  
  pOVar2 = *(OLECHAR **)(param_2 + 0x10);
  if (*(OLECHAR **)(param_2 + 0x10) == (OLECHAR *)0x80000000) {
    pOVar2 = psz_val;
  }
  pcVar1 = *(code **)(param_2 + 8);
  if (*(byte *)(param_2 + 0xb) != 0xff) {
    if (0xfd < *(byte *)(param_2 + 0xb)) {
      (**(code **)((int)(short)pcVar1 + *param_1))();
      return;
    }
    (*pcVar1)(param_1,pOVar2);
    return;
  }
  FUN_0040e12c((BSTR *)((int)param_1 + ((uint)pcVar1 & 0xffffff)),psz_val);
  return;
}


/* ==== 0040e180 FUN_0040e180 ==== */

void FUN_0040e180(int *param_1,int param_2,LPCSTR multi_byte_str)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  OLECHAR *psz_val;
  
  puStack_18 = &stack0xfffffffc;
  psz_val = (OLECHAR *)0x0;
  puStack_1c = &LAB_0040e1c8;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  FUN_004043f8((BSTR)&psz_val,multi_byte_str);
  FUN_0040e140(param_1,param_2,psz_val);
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_0040e1cf;
  puStack_1c = (undefined1 *)0x40e1c7;
  FUN_004042b4(&psz_val);
  return;
}


/* ==== 0040e1d8 FUN_0040e1d8 ==== */

void FUN_0040e1d8(int *param_1,undefined4 *param_2,LPCSTR multi_byte_str)

{
  char cVar1;
  
  cVar1 = **(char **)*param_2;
  if (cVar1 == '\x05') {
    FUN_0040e0a4(param_1,param_2,(undefined4 *)multi_byte_str);
    return;
  }
  if (cVar1 == '\n') {
    FUN_0040e0ec(param_1,(int)param_2,(undefined4 *)multi_byte_str);
    return;
  }
  if (cVar1 == '\v') {
    FUN_0040e180(param_1,(int)param_2,multi_byte_str);
  }
  return;
}


/* ==== 0040e204 FUN_0040e204 ==== */

/* WARNING: Unable to track spacebase fully for stack */

void FUN_0040e204(undefined4 param_1,undefined4 *param_2)

{
  code *pcVar1;
  undefined4 uVar2;
  int *piVar3;
  code *extraout_ECX;
  int extraout_EDX;
  int iVar4;
  undefined1 *puVar5;
  undefined4 uStack_10;
  
  iVar4 = (uint)*(byte *)(*(int *)*param_2 + 2 + (uint)*(byte *)(*(int *)*param_2 + 1)) * 4;
  if (*(char *)((int)param_2 + 0xb) == -1) {
    uStack_10 = 0x40e295;
    (**(code **)(&DAT_0040e25d + iVar4))(param_1,param_2,param_2[2] & 0xffffff);
  }
  else {
    pcVar1 = *(code **)(&DAT_0040e25d + iVar4);
    puVar5 = (undefined1 *)((int)&uStack_10 + -*(int *)(&DAT_0040e249 + iVar4));
    *(undefined4 *)((int)&uStack_10 + -*(int *)(&DAT_0040e249 + iVar4)) = 0x40e233;
    piVar3 = (int *)(*pcVar1)();
    uVar2 = *(undefined4 *)(extraout_EDX + 0x10);
    if (*(byte *)(extraout_EDX + 0xb) < 0xfe) {
      *(undefined4 *)(puVar5 + -4) = 0x40e247;
      (*extraout_ECX)(piVar3,uVar2);
    }
    else {
      pcVar1 = *(code **)((int)(short)extraout_ECX + *piVar3);
      *(undefined4 *)(puVar5 + -4) = 0x40e243;
      (*pcVar1)();
    }
  }
  return;
}


/* ==== 0040e29c FUN_0040e29c ==== */

void FUN_0040e29c(VARIANT *variant,VARIANTARG *pvarg_src)

{
  FUN_00404a30(variant,pvarg_src);
  return;
}


/* ==== 0040e2b0 FUN_0040e2b0 ==== */

void FUN_0040e2b0(int *param_1,int param_2,VARIANTARG *pvarg_src)

{
  code *pcVar1;
  VARIANTARG *pVVar2;
  
  pVVar2 = *(VARIANTARG **)(param_2 + 0x10);
  if (*(VARIANTARG **)(param_2 + 0x10) == (VARIANTARG *)0x80000000) {
    pVVar2 = pvarg_src;
  }
  pcVar1 = *(code **)(param_2 + 8);
  if (*(byte *)(param_2 + 0xb) != 0xff) {
    if (0xfd < *(byte *)(param_2 + 0xb)) {
      (**(code **)((int)(short)pcVar1 + *param_1))();
      return;
    }
    (*pcVar1)(param_1,pVVar2);
    return;
  }
  FUN_0040e29c((VARIANT *)((int)param_1 + ((uint)pcVar1 & 0xffffff)),pvarg_src);
  return;
}


/* ==== 0040e2f0 FUN_0040e2f0 ==== */

void FUN_0040e2f0(int *param_1,int param_2,undefined4 *param_3)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  
  pcVar1 = *(code **)(param_2 + 8);
  if (*(byte *)(param_2 + 0xb) == 0xff) {
    puVar3 = (undefined4 *)((int)param_1 + ((uint)pcVar1 & 0xffffff));
    uVar2 = param_3[1];
    *puVar3 = *param_3;
    puVar3[1] = uVar2;
    return;
  }
  if (0xfd < *(byte *)(param_2 + 0xb)) {
    (**(code **)((int)(short)pcVar1 + *param_1))();
    return;
  }
  (*pcVar1)(param_1,*(undefined4 *)(param_2 + 0x10),param_3,*param_3,param_3[1]);
  return;
}


/* ==== 0040e328 FUN_0040e328 ==== */

void FUN_0040e328(int *param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  code *pcVar1;
  undefined4 *puVar2;
  
  pcVar1 = *(code **)(param_2 + 8);
  if (*(byte *)(param_2 + 0xb) == 0xff) {
    puVar2 = (undefined4 *)((int)param_1 + ((uint)pcVar1 & 0xffffff));
    *puVar2 = param_4;
    puVar2[1] = param_5;
  }
  else if (*(byte *)(param_2 + 0xb) < 0xfe) {
    (*pcVar1)(param_1,*(undefined4 *)(param_2 + 0x10),pcVar1,param_4,param_5);
  }
  else {
    (**(code **)((int)(short)pcVar1 + *param_1))();
  }
  return;
}


/* ==== 0040e364 FUN_0040e364 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040e364(void)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_10;
  undefined1 *puStack_c;
  undefined1 *puStack_8;
  
  puStack_8 = &stack0xfffffffc;
  puStack_c = &LAB_0040e3aa;
  uStack_10 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_10;
  _DAT_004ac614 = _DAT_004ac614 + 1;
  if (_DAT_004ac614 == 0) {
    System__LStrClr((int *)&PTR_DAT_004aa314);
    FUN_00404578((VARIANTARG *)&PTR_s_False_004aa30c,&DAT_004010d8,2);
  }
  *in_FS_OFFSET = uStack_10;
  return;
}


/* ==== 0040f7d0 Classes.Point ==== */

void Classes_Point(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  *param_3 = param_1;
  param_3[1] = param_2;
  return;
}


/* ==== 0040f7d8 FUN_0040f7d8 ==== */

undefined4 FUN_0040f7d8(undefined2 param_1,undefined2 param_2)

{
  undefined4 local_4;
  
  local_4 = CONCAT22(param_2,param_1);
  return local_4;
}


/* ==== 0040f7e8 Classes.Rect ==== */

void Classes_Rect(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,
                 undefined4 param_5)

{
  *param_4 = param_1;
  param_4[1] = param_2;
  param_4[2] = param_3;
  param_4[3] = param_5;
  return;
}


/* ==== 0040f804 FUN_0040f804 ==== */

void FUN_0040f804(int param_1,int param_2,int param_3,int *param_4,int param_5)

{
  *param_4 = param_1;
  param_4[1] = param_2;
  param_4[2] = param_3 + param_1;
  param_4[3] = param_2 + param_5;
  return;
}


/* ==== 0040f820 FUN_0040f820 ==== */

undefined4 FUN_0040f820(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (*(int *)(param_1 + -0x38) != 0) {
    uVar1 = *(undefined4 *)(*(int *)(param_1 + -0x38) + 2);
  }
  return uVar1;
}


/* ==== 0040f82c FUN_0040f82c ==== */

void FUN_0040f82c(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  byte *local_10;
  undefined4 local_c;
  undefined1 local_8;
  
  puStack_18 = &stack0xfffffffc;
  local_10 = (byte *)0x0;
  puStack_1c = &LAB_0040f88c;
  puStack_20 = (undefined1 *)*in_FS_OFFSET;
  *in_FS_OFFSET = &puStack_20;
  local_8 = 0xb;
  puVar3 = &local_c;
  uVar2 = 0;
  local_c = param_1;
  System_LoadResString((undefined4 *)PTR_PTR_004ab98c,(int *)&local_10);
  uVar1 = SysUtils_Exception_CreateFmt((int)&DAT_0040e78c,'\x01',local_10,uVar2,puVar3);
  System__RaiseExcept(uVar1);
  *in_FS_OFFSET = uVar2;
  puStack_20 = &LAB_0040f893;
  System__LStrClr((int *)&local_10);
  return;
}


/* ==== 0040f898 FUN_0040f898 ==== */

int FUN_0040f898(int param_1)

{
  char cVar1;
  undefined4 *puVar2;
  int iVar3;
  int j;
  int i_val;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  
  puStack_1c = (undefined1 *)0x40f8ae;
  puVar2 = (undefined4 *)FUN_00410750(DAT_004ac624);
  puStack_20 = &LAB_0040f935;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  i_val = puVar2[2];
  puStack_1c = &stack0xfffffffc;
  if (-1 < i_val + -1) {
    j = 0;
    puStack_1c = &stack0xfffffffc;
    do {
      iVar3 = Classes_TList_Get(puVar2,j);
      cVar1 = FUN_00402ef8(iVar3,param_1);
      if (cVar1 != '\0') {
        FUN_00403794();
        return iVar3;
      }
      j = j + 1;
      i_val = i_val + -1;
    } while (i_val != 0);
  }
  i_val = (**(code **)(*DAT_004ac628 + 0x50))(DAT_004ac628,param_1);
  if (-1 < i_val) {
    i_val = (**(code **)(*DAT_004ac628 + 0x18))(DAT_004ac628,i_val);
    FUN_00403794();
    return i_val;
  }
  *in_FS_OFFSET = uStack_24;
  puStack_1c = (undefined1 *)0x40f93c;
  puStack_20 = (undefined1 *)0x40f934;
  i_val = FUN_004107b4(DAT_004ac624);
  return i_val;
}


/* ==== 0040f948 FUN_0040f948 ==== */

int FUN_0040f948(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_0040f898(param_1);
  if (iVar1 == 0) {
    FUN_0040f82c(param_1);
  }
  return iVar1;
}


/* ==== 0040f968 FUN_0040f968 ==== */

void FUN_0040f968(undefined4 *param_1,char *param_2)

{
  short *psVar1;
  undefined4 uVar2;
  int j;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_12c;
  undefined1 *puStack_128;
  undefined1 *puStack_124;
  byte local_114 [256];
  char *local_14;
  undefined **local_10;
  int i_val;
  char *local_8;
  
  puStack_124 = &stack0xfffffffc;
  local_14 = (char *)0x0;
  puStack_128 = &LAB_0040fa21;
  uStack_12c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_12c;
  local_8 = param_2;
  for (local_10 = (undefined **)FUN_00402ee0(param_1);
      local_10 != &PTR_TPersistent_virtual_000_0040eb7c;
      local_10 = (undefined **)FUN_00402f20((int)local_10)) {
    psVar1 = (short *)FUN_0040f820((int)local_10);
    if ((psVar1 != (short *)0x0) && (j = (int)*psVar1, -1 < j + -1)) {
      i_val = 0;
      do {
        System_TObject_ClassName(**(int **)(psVar1 + i_val * 2 + 1),local_114);
        System__LStrFromString((int *)&local_14,local_114);
        uVar2 = FUN_0040830c(local_14,local_8);
        if ((char)uVar2 != '\0') goto LAB_0040fa0b;
        i_val = i_val + 1;
        j = j + -1;
      } while (j != 0);
    }
  }
  FUN_0040f898((int)local_8);
LAB_0040fa0b:
  *in_FS_OFFSET = uStack_12c;
  puStack_124 = &LAB_0040fa28;
  puStack_128 = (undefined1 *)0x40fa20;
  System__LStrClr((int *)&local_14);
  return;
}


/* ==== 0040fa34 FUN_0040fa34 ==== */

void FUN_0040fa34(undefined **param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_130;
  undefined1 *puStack_12c;
  undefined1 *puStack_128;
  undefined4 uStack_124;
  undefined1 *puStack_120;
  undefined1 *puStack_11c;
  int local_110;
  undefined1 local_10c;
  byte local_108 [256];
  int local_8;
  
  puStack_11c = &stack0xfffffffc;
  local_8 = 0;
  puStack_120 = &LAB_0040fb22;
  uStack_124 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_124;
  puStack_128 = (undefined1 *)0x40fa5e;
  piVar1 = (int *)FUN_00410750(DAT_004ac624);
  puStack_12c = &LAB_0040fb05;
  uStack_130 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_130;
  puStack_128 = &stack0xfffffffc;
  while( true ) {
    iVar3 = Classes_TList_IndexOf((int)piVar1,(int)param_1);
    if (iVar3 != -1) break;
    System_TObject_ClassName((int)param_1,local_108);
    System__LStrFromString(&local_8,local_108);
    iVar3 = FUN_0040f898(local_8);
    if (iVar3 != 0) {
      local_110 = local_8;
      local_10c = 0xb;
      uVar2 = FUN_0040b6d0((int)&DAT_0040e684,'\x01',(undefined4 *)PTR_PTR_004ab8c8,0,&local_110);
      System__RaiseExcept(uVar2);
    }
    Classes_TList_Add(piVar1,(int)param_1);
    if (param_1 == &PTR_TPersistent_virtual_000_0040eb7c) break;
    param_1 = (undefined **)FUN_00402f20((int)param_1);
  }
  *in_FS_OFFSET = uStack_130;
  puStack_128 = &LAB_0040fb0c;
  puStack_12c = (undefined1 *)0x40fb04;
  FUN_004107b4(DAT_004ac624);
  return;
}


/* ==== 0040fb30 FUN_0040fb30 ==== */

void FUN_0040fb30(undefined4 param_1,int param_2)

{
  int i_val;
  undefined4 *puVar1;
  
  for (i_val = param_2; -1 < i_val; i_val = i_val + -1) {
  }
  puVar1 = (undefined4 *)&stack0xfffffff4;
  if (-1 < param_2) {
    i_val = param_2 + 1;
    do {
      FUN_0040fa34((undefined **)*puVar1);
      puVar1 = puVar1 + 1;
      i_val = i_val + -1;
    } while (i_val != 0);
  }
  return;
}


/* ==== 0040fb64 FUN_0040fb64 ==== */

void FUN_0040fb64(PVOID param_1)

{
  undefined1 *puVar1;
  int *piVar2;
  LPCVOID address;
  int i_val;
  undefined4 *in_FS_OFFSET;
  _MEMORY_BASIC_INFORMATION *p_Var3;
  SIZE_T SVar4;
  undefined4 uStack_38;
  undefined1 *puStack_34;
  undefined1 *puStack_30;
  _MEMORY_BASIC_INFORMATION memory_basic_information;
  
  puStack_30 = (undefined1 *)0x40fb79;
  piVar2 = (int *)FUN_00410750(DAT_004ac624);
  puStack_34 = &LAB_0040fc1c;
  uStack_38 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_38;
  i_val = piVar2[2] + -1;
  puStack_30 = &stack0xfffffffc;
  puVar1 = &stack0xfffffffc;
  if (-1 < i_val) {
    do {
      SVar4 = 0x1c;
      p_Var3 = &memory_basic_information;
      address = (LPCVOID)Classes_TList_Get(piVar2,i_val);
      VirtualQuery(address,p_Var3,SVar4);
      if ((param_1 == (PVOID)0x0) || (param_1 == memory_basic_information.AllocationBase)) {
        Classes_TList_Delete(piVar2,i_val);
      }
      i_val = i_val + -1;
      puVar1 = puStack_30;
    } while (i_val != -1);
  }
  puStack_30 = puVar1;
  i_val = (**(code **)(*DAT_004ac628 + 0x14))();
  i_val = i_val + -1;
  if (-1 < i_val) {
    do {
      SVar4 = 0x1c;
      p_Var3 = &memory_basic_information;
      address = (LPCVOID)(**(code **)(*DAT_004ac628 + 0x18))(DAT_004ac628,i_val);
      VirtualQuery(address,p_Var3,SVar4);
      if ((param_1 == (PVOID)0x0) || (param_1 == memory_basic_information.AllocationBase)) {
        (**(code **)(*DAT_004ac628 + 0x44))(DAT_004ac628,i_val);
      }
      i_val = i_val + -1;
    } while (i_val != -1);
  }
  *in_FS_OFFSET = uStack_38;
  puStack_30 = &LAB_0040fc23;
  puStack_34 = (undefined1 *)0x40fc1b;
  FUN_004107b4(DAT_004ac624);
  return;
}


/* ==== 0040fc84 FUN_0040fc84 ==== */

void FUN_0040fc84(int *param_1,char param_2,int param_3,int param_4,int param_5)

{
  int extraout_ECX;
  char extraout_DL;
  char cVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_ffffffec;
  undefined4 in_stack_fffffff0;
  
  cVar1 = '\0';
  if (param_2 != '\0') {
    param_1 = (int *)System__ClassCreate((int)param_1,param_2,param_3,in_stack_ffffffec,
                                         in_stack_fffffff0);
    param_3 = extraout_ECX;
    cVar1 = extraout_DL;
  }
  param_1[1] = param_3;
  param_1[2] = param_5;
  param_1[3] = param_4;
  if (cVar1 != '\0') {
    System__AfterConstruction(param_1);
    *in_FS_OFFSET = in_stack_ffffffec;
  }
  return;
}


/* ==== 0040fcbc FUN_0040fcbc ==== */

void FUN_0040fcbc(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = FUN_0040fc84((int *)&LAB_0040fc78,'\x01',param_1,param_3,param_2);
  FUN_004106c8(DAT_004ac62c,iVar1);
  return;
}


/* ==== 0040fce8 FUN_0040fce8 ==== */

undefined4 FUN_0040fce8(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  int i_val;
  int j;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  
  puStack_1c = (undefined1 *)0x40fd03;
  puVar1 = (undefined4 *)FUN_00410750(DAT_004ac62c);
  puStack_20 = &LAB_0040fd58;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  i_val = puVar1[2];
  if (-1 < i_val + -1) {
    j = 0;
    puStack_1c = &stack0xfffffffc;
    do {
      iVar2 = Classes_TList_Get(puVar1,j);
      if (*(int *)(iVar2 + 4) == param_1) {
        uVar3 = *(undefined4 *)(iVar2 + 8);
        FUN_00403794();
        return uVar3;
      }
      j = j + 1;
      i_val = i_val + -1;
    } while (i_val != 0);
  }
  *in_FS_OFFSET = uStack_24;
  puStack_1c = (undefined1 *)0x40fd5f;
  puStack_20 = (undefined1 *)0x40fd57;
  uVar3 = FUN_004107b4(DAT_004ac62c);
  return uVar3;
}


/* ==== 0040fd6c FUN_0040fd6c ==== */

undefined4 FUN_0040fd6c(char *param_1,undefined4 *param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int i_val;
  
  if (-1 < param_4) {
    i_val = param_4 + 1;
    puVar2 = (undefined4 *)(param_3 + 4);
    do {
      uVar1 = FUN_0040830c((char *)*puVar2,param_1);
      if ((char)uVar1 != '\0') {
        *param_2 = puVar2[-1];
        return CONCAT31((int3)((uint)uVar1 >> 8),1);
      }
      puVar2 = puVar2 + 2;
      i_val = i_val + -1;
    } while (i_val != 0);
  }
  return 0;
}


/* ==== 0040fdac FUN_0040fdac ==== */

undefined1 FUN_0040fdac(int param_1,int *param_2,int *param_3,int param_4)

{
  int i_val;
  
  if (-1 < param_4) {
    i_val = param_4 + 1;
    do {
      if (param_1 == *param_3) {
        System__LStrAsg(param_2,(undefined4 *)param_3[1]);
        return 1;
      }
      param_3 = param_3 + 2;
      i_val = i_val + -1;
    } while (i_val != 0);
  }
  return 0;
}


/* ==== 0040fdf0 FUN_0040fdf0 ==== */

void FUN_0040fdf0(undefined *param_1,HMODULE module,undefined4 *param_3)

{
  LPCSTR lpName;
  HRSRC pHVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar4;
  LPCSTR lpType;
  
  if (module == (HMODULE)0x0) {
    module = DAT_004ac4dc;
  }
  lpType = (LPCSTR)0xa;
  lpName = System__LStrToPChar(param_1);
  pHVar1 = FindResourceA(module,lpName,lpType);
  if (pHVar1 != (HRSRC)0x0) {
    piVar2 = FUN_00412b5c((int *)&PTR_TStream_virtual_000_0040f204,'\x01',module,(LPCSTR)0xa,param_1
                         );
    uVar4 = *in_FS_OFFSET;
    *in_FS_OFFSET = &stack0xffffffe0;
    uVar3 = FUN_004127dc((int)piVar2,(int *)*param_3);
    *param_3 = uVar3;
    *in_FS_OFFSET = uVar4;
    System_TObject_Free(piVar2);
    return;
  }
  return;
}


/* ==== 0040fe74 FUN_0040fe74 ==== */

void FUN_0040fe74(void)

{
  int iVar1;
  LPVOID pvVar2;
  undefined4 uVar3;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  
  pvVar2 = FUN_0040655c();
  if (*(int *)((int)pvVar2 + 0xc) == 0) {
    uVar3 = System_TObject_Create((int *)&PTR_TList_virtual_000_0040ea6c,'\x01',extraout_ECX);
    pvVar2 = FUN_0040655c();
    *(undefined4 *)((int)pvVar2 + 0xc) = uVar3;
  }
  pvVar2 = FUN_0040655c();
  iVar1 = *(int *)((int)pvVar2 + 8);
  pvVar2 = FUN_0040655c();
  Classes_TList_Add(*(int **)((int)pvVar2 + 0xc),iVar1);
  uVar3 = System_TObject_Create((int *)&PTR_TList_virtual_000_0040ea6c,'\x01',extraout_ECX_00);
  pvVar2 = FUN_0040655c();
  *(undefined4 *)((int)pvVar2 + 8) = uVar3;
  return;
}


/* ==== 0040fed4 FUN_0040fed4 ==== */

void FUN_0040fed4(void)

{
  undefined4 *puVar1;
  LPVOID pvVar2;
  int *piVar3;
  int i_val;
  int j;
  
  pvVar2 = FUN_0040655c();
  puVar1 = *(undefined4 **)((int)pvVar2 + 8);
  i_val = puVar1[2];
  if (-1 < i_val + -1) {
    j = 0;
    do {
      piVar3 = (int *)Classes_TList_Get(puVar1,j);
      (**(code **)(*piVar3 + 0xc))();
      j = j + 1;
      i_val = i_val + -1;
    } while (i_val != 0);
  }
  return;
}


/* ==== 0040ff04 FUN_0040ff04 ==== */

void FUN_0040ff04(void)

{
  int iVar1;
  LPVOID pvVar2;
  undefined4 uVar3;
  
  pvVar2 = FUN_0040655c();
  System_TObject_Free(*(int **)((int)pvVar2 + 8));
  pvVar2 = FUN_0040655c();
  uVar3 = FUN_00410398(*(undefined4 **)((int)pvVar2 + 0xc));
  pvVar2 = FUN_0040655c();
  *(undefined4 *)((int)pvVar2 + 8) = uVar3;
  pvVar2 = FUN_0040655c();
  iVar1 = *(int *)(*(int *)((int)pvVar2 + 0xc) + 8);
  pvVar2 = FUN_0040655c();
  Classes_TList_Delete(*(int **)((int)pvVar2 + 0xc),iVar1 + -1);
  pvVar2 = FUN_0040655c();
  if (*(int *)(*(int *)((int)pvVar2 + 0xc) + 8) == 0) {
    pvVar2 = FUN_0040655c();
    SysUtils_FreeAndNil((undefined4 *)((int)pvVar2 + 0xc));
  }
  return;
}


/* ==== 0040ff78 FUN_0040ff78 ==== */

void FUN_0040ff78(undefined **address,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined **address_00;
  int iVar1;
  HMODULE module;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  undefined4 *in_FS_OFFSET;
  undefined *puVar2;
  undefined4 uStack_11c;
  undefined1 *puStack_118;
  undefined1 *puStack_114;
  byte local_108 [256];
  undefined *local_8;
  
  puStack_114 = &stack0xfffffffc;
  local_8 = (undefined *)0x0;
  puStack_118 = &LAB_0041000e;
  uStack_11c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_11c;
  if ((address != &PTR_TPersistent_virtual_000_0040f548) &&
     (address != *(undefined ***)(param_4 + -8))) {
    iVar1 = param_4;
    address_00 = (undefined **)FUN_00402f20((int)address);
    FUN_0040ff78(address_00,extraout_EDX,extraout_ECX,iVar1);
    System_TObject_ClassName((int)address,local_108);
    System__LStrFromString((int *)&local_8,local_108);
    puVar2 = local_8;
    iVar1 = FUN_004052b8(address);
    module = (HMODULE)FUN_004052c0(iVar1);
    FUN_0040fdf0(puVar2,module,(undefined4 *)(param_4 + -4));
  }
  *in_FS_OFFSET = uStack_11c;
  puStack_114 = &LAB_00410015;
  puStack_118 = (undefined1 *)0x41000d;
  System__LStrClr((int *)&local_8);
  return;
}


/* ==== 00410020 FUN_00410020 ==== */

void FUN_00410020(undefined4 *param_1,undefined4 param_2)

{
  undefined **address;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  undefined4 *in_FS_OFFSET;
  undefined1 *puVar1;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  char local_e;
  undefined1 local_d;
  undefined4 local_c;
  undefined4 *local_8;
  
  puVar1 = &stack0xfffffffc;
  puStack_14 = (undefined1 *)0x410036;
  local_c = param_2;
  local_8 = param_1;
  FUN_0040c8f8(DAT_004ac618);
  puStack_18 = &LAB_004100ce;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  local_e = (*(ushort *)(local_8 + 8) & 0x201) == 0;
  puStack_14 = &stack0xfffffffc;
  if ((bool)local_e) {
    puStack_20 = (undefined1 *)0x41006b;
    puStack_14 = &stack0xfffffffc;
    FUN_0040fe74();
  }
  puStack_24 = &LAB_004100af;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  puStack_20 = &stack0xfffffffc;
  address = (undefined **)FUN_00402ee0(local_8);
  local_d = FUN_0040ff78(address,extraout_EDX,extraout_ECX,(int)puVar1);
  if (local_e != '\0') {
    FUN_0040fed4();
  }
  *in_FS_OFFSET = uStack_28;
  puStack_20 = &LAB_004100b6;
  if (local_e != '\0') {
    puStack_24 = (undefined1 *)0x4100ae;
    FUN_0040ff04();
  }
  return;
}


/* ==== 004100e4 TList.Destroy ==== */

void TList_Destroy(int *param_1,char param_2)

{
  int *piVar1;
  char extraout_DL;
  
  piVar1 = System__BeforeDestruction(param_1,param_2);
  (**(code **)(*piVar1 + 8))();
  if ('\0' < extraout_DL) {
    System__ClassDestroy(piVar1);
  }
  return;
}


/* ==== 00410104 Classes.TList.Add ==== */

int Classes_TList_Add(int *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = param_1[2];
  if (iVar1 == param_1[3]) {
    (**(code **)*param_1)();
  }
  *(int *)(param_1[1] + iVar1 * 4) = param_2;
  param_1[2] = param_1[2] + 1;
  if (param_2 != 0) {
    (**(code **)(*param_1 + 4))(param_1,param_2,0);
  }
  return iVar1;
}


/* ==== 00410138 TList.virtual_008 ==== */

void TList_virtual_008(int *param_1)

{
  FUN_004104a4(param_1,0);
  FUN_00410468(param_1,0);
  return;
}


/* ==== 00410150 Classes.TList.Delete ==== */

void Classes_TList_Delete(int *param_1,int param_2)

{
  int iVar1;
  
  if ((param_2 < 0) || (param_1[2] <= param_2)) {
    FUN_004101ec(*param_1,(undefined4 *)PTR_PTR_004ab930,param_2);
  }
  iVar1 = Classes_TList_Get(param_1,param_2);
  param_1[2] = param_1[2] + -1;
  if (param_2 < param_1[2]) {
    System_Move((undefined4 *)(param_1[1] + 4 + param_2 * 4),
                (undefined4 *)(param_1[1] + param_2 * 4),(param_1[2] - param_2) * 4);
  }
  if (iVar1 != 0) {
    (**(code **)(*param_1 + 4))(param_1,iVar1,2);
  }
  return;
}


/* ==== 004101b0 FUN_004101b0 ==== */

undefined4 FUN_004101b0(void)

{
  int unaff_EBP;
  
  return *(undefined4 *)(unaff_EBP + 4);
}


/* ==== 004101b4 TList.virtual_00c ==== */

void TList_virtual_00c(undefined4 param_1,byte *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 local_10;
  undefined1 local_c;
  
  FUN_004101b0();
  local_c = 0;
  local_10 = param_3;
  uVar1 = SysUtils_Exception_CreateFmt((int)&DAT_0040e844,'\x01',param_2,0,&local_10);
  System__RaiseExcept(uVar1);
  return;
}


/* ==== 004101ec FUN_004101ec ==== */

void FUN_004101ec(undefined4 param_1,undefined4 *param_2,undefined4 param_3)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  byte *local_8;
  
  puStack_14 = &stack0xfffffffc;
  local_8 = (byte *)0x0;
  puStack_18 = &LAB_00410234;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  System_LoadResString(param_2,(int *)&local_8);
  TList_virtual_00c(&PTR_TList_virtual_000_0040ea6c,local_8,param_3);
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_0041023b;
  puStack_18 = (undefined1 *)0x410233;
  System__LStrClr((int *)&local_8);
  return;
}


/* ==== 00410240 FUN_00410240 ==== */

void FUN_00410240(undefined4 *param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((param_2 < 0) || ((int)param_1[2] <= param_2)) {
    FUN_004101ec(*param_1,(undefined4 *)PTR_PTR_004ab930,param_2);
  }
  if ((param_3 < 0) || ((int)param_1[2] <= param_3)) {
    FUN_004101ec(*param_1,(undefined4 *)PTR_PTR_004ab930,param_3);
  }
  iVar1 = param_1[1];
  uVar2 = *(undefined4 *)(iVar1 + param_2 * 4);
  *(undefined4 *)(iVar1 + param_2 * 4) = *(undefined4 *)(param_1[1] + param_3 * 4);
  *(undefined4 *)(iVar1 + param_3 * 4) = uVar2;
  return;
}


/* ==== 00410290 FUN_00410290 ==== */

undefined4 * FUN_00410290(undefined4 *param_1)

{
  if (param_1[2] == param_1[3]) {
    (**(code **)*param_1)();
  }
  return param_1;
}


/* ==== 004102a8 FUN_004102a8 ==== */

void FUN_004102a8(undefined4 *param_1)

{
  Classes_TList_Get(param_1,0);
  return;
}


/* ==== 004102b0 Classes.TList.Get ==== */

undefined4 Classes_TList_Get(undefined4 *param_1,int param_2)

{
  if ((param_2 < 0) || ((int)param_1[2] <= param_2)) {
    FUN_004101ec(*param_1,(undefined4 *)PTR_PTR_004ab930,param_2);
  }
  return *(undefined4 *)(param_1[1] + param_2 * 4);
}


/* ==== 004102d8 TList.virtual_000 ==== */

void TList_virtual_000(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1[3];
  if (iVar1 < 0x41) {
    if (iVar1 < 9) {
      iVar2 = 4;
    }
    else {
      iVar2 = 0x10;
    }
  }
  else {
    iVar2 = iVar1;
    if (iVar1 < 0) {
      iVar2 = iVar1 + 3;
    }
    iVar2 = iVar2 >> 2;
  }
  FUN_00410468(param_1,iVar2 + iVar1);
  return;
}


/* ==== 0041030c Classes.TList.IndexOf ==== */

int Classes_TList_IndexOf(int param_1,int param_2)

{
  int i_val;
  
  for (i_val = 0;
      (i_val < *(int *)(param_1 + 8) && (param_2 != *(int *)(*(int *)(param_1 + 4) + i_val * 4)));
      i_val = i_val + 1) {
  }
  if (i_val == *(int *)(param_1 + 8)) {
    i_val = -1;
  }
  return i_val;
}


/* ==== 0041032c FUN_0041032c ==== */

void FUN_0041032c(int *param_1,int param_2,int param_3)

{
  if ((param_2 < 0) || (param_1[2] < param_2)) {
    FUN_004101ec(*param_1,(undefined4 *)PTR_PTR_004ab930,param_2);
  }
  if (param_1[2] == param_1[3]) {
    (**(code **)*param_1)();
  }
  if (param_2 < param_1[2]) {
    System_Move((undefined4 *)(param_1[1] + param_2 * 4),
                (undefined4 *)(param_1[1] + 4 + param_2 * 4),(param_1[2] - param_2) * 4);
  }
  *(int *)(param_1[1] + param_2 * 4) = param_3;
  param_1[2] = param_1[2] + 1;
  if (param_3 != 0) {
    (**(code **)(*param_1 + 4))(param_1,param_3,0);
  }
  return;
}


/* ==== 00410398 FUN_00410398 ==== */

void FUN_00410398(undefined4 *param_1)

{
  Classes_TList_Get(param_1,param_1[2] + -1);
  return;
}


/* ==== 004103a4 FUN_004103a4 ==== */

void FUN_004103a4(int *param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  
  if (param_3 != param_2) {
    if ((param_3 < 0) || (param_1[2] <= param_3)) {
      FUN_004101ec(*param_1,(undefined4 *)PTR_PTR_004ab930,param_3);
    }
    uVar1 = Classes_TList_Get(param_1,param_2);
    *(undefined4 *)(param_1[1] + param_2 * 4) = 0;
    Classes_TList_Delete(param_1,param_2);
    FUN_0041032c(param_1,param_3,0);
    *(undefined4 *)(param_1[1] + param_3 * 4) = uVar1;
  }
  return;
}


/* ==== 004103fc FUN_004103fc ==== */

void FUN_004103fc(int *param_1,int param_2,int param_3)

{
  int iVar1;
  
  if ((param_2 < 0) || (param_1[2] <= param_2)) {
    FUN_004101ec(*param_1,(undefined4 *)PTR_PTR_004ab930,param_2);
  }
  iVar1 = *(int *)(param_1[1] + param_2 * 4);
  *(int *)(param_1[1] + param_2 * 4) = param_3;
  if (iVar1 != 0) {
    (**(code **)(*param_1 + 4))(param_1,param_3,2);
  }
  if (param_3 != 0) {
    (**(code **)(*param_1 + 4))(param_1,param_3,0);
  }
  return;
}


/* ==== 00410448 FUN_00410448 ==== */

int FUN_00410448(int *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = Classes_TList_IndexOf((int)param_1,param_2);
  if (-1 < iVar1) {
    Classes_TList_Delete(param_1,iVar1);
  }
  return iVar1;
}


/* ==== 00410468 FUN_00410468 ==== */

void FUN_00410468(undefined4 *param_1,int param_2)

{
  if ((param_2 < (int)param_1[2]) || (0x7ffffff < param_2)) {
    FUN_004101ec(*param_1,(undefined4 *)PTR_PTR_004ab854,param_2);
  }
  if (param_2 != param_1[3]) {
    FUN_004027ac(param_1 + 1,param_2 << 2);
    param_1[3] = param_2;
  }
  return;
}


/* ==== 004104a4 FUN_004104a4 ==== */

void FUN_004104a4(int *param_1,int param_2)

{
  int i_val;
  int j;
  
  if ((param_2 < 0) || (0x7ffffff < param_2)) {
    FUN_004101ec(*param_1,(undefined4 *)PTR_PTR_004ab7c0,param_2);
  }
  if (param_1[3] < param_2) {
    FUN_00410468(param_1,param_2);
  }
  i_val = param_1[2];
  if (i_val < param_2) {
    System_FillChar((undefined4 *)(param_1[1] + i_val * 4),(param_2 - i_val) * 4,0);
  }
  else {
    i_val = i_val + -1;
    if (param_2 - i_val == 0 || param_2 < i_val) {
      j = (param_2 - i_val) + -1;
      do {
        Classes_TList_Delete(param_1,i_val);
        i_val = i_val + -1;
        j = j + 1;
      } while (j != 0);
    }
  }
  param_1[2] = param_2;
  return;
}


/* ==== 00410514 FUN_00410514 ==== */

void FUN_00410514(int param_1,int param_2,int param_3,undefined *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int i_val;
  int j;
  int local_8;
  
  local_8 = param_2;
  do {
    uVar1 = *(undefined4 *)(param_1 + ((uint)(local_8 + param_3) >> 1) * 4);
    i_val = local_8;
    j = param_3;
    do {
      while (iVar3 = (*(code *)param_4)(*(undefined4 *)(param_1 + i_val * 4),uVar1), iVar3 < 0) {
        i_val = i_val + 1;
      }
      while (iVar3 = (*(code *)param_4)(*(undefined4 *)(param_1 + j * 4),uVar1), 0 < iVar3) {
        j = j + -1;
      }
      if (i_val <= j) {
        uVar2 = *(undefined4 *)(param_1 + i_val * 4);
        *(undefined4 *)(param_1 + i_val * 4) = *(undefined4 *)(param_1 + j * 4);
        *(undefined4 *)(param_1 + j * 4) = uVar2;
        i_val = i_val + 1;
        j = j + -1;
      }
    } while (i_val <= j);
    if (local_8 < j) {
      FUN_00410514(param_1,local_8,j,param_4);
    }
    local_8 = i_val;
  } while (i_val < param_3);
  return;
}


/* ==== 00410598 FUN_00410598 ==== */

void FUN_00410598(int param_1,undefined *param_2)

{
  if ((*(int *)(param_1 + 4) != 0) && (0 < *(int *)(param_1 + 8))) {
    FUN_00410514(*(int *)(param_1 + 4),0,*(int *)(param_1 + 8) + -1,param_2);
  }
  return;
}


/* ==== 004105b8 FUN_004105b8 ==== */

int FUN_004105b8(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = Classes_TList_IndexOf((int)param_1,param_2);
  iVar2 = 0;
  if (-1 < iVar1) {
    *(undefined4 *)(param_1[1] + iVar1 * 4) = 0;
    Classes_TList_Delete(param_1,iVar1);
    (**(code **)(*param_1 + 4))(param_1,param_2,1);
    iVar2 = param_2;
  }
  return iVar2;
}


/* ==== 004105f4 TList.virtual_004 ==== */

void TList_virtual_004(void)

{
  return;
}


/* ==== 004105f8 FUN_004105f8 ==== */

int * FUN_004105f8(int *param_1,char param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  char extraout_DL;
  char cVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_ffffffe8;
  undefined4 in_stack_ffffffec;
  
  cVar2 = '\0';
  if (param_2 != '\0') {
    param_1 = (int *)System__ClassCreate((int)param_1,param_2,param_3,in_stack_ffffffe8,
                                         in_stack_ffffffec);
    param_3 = extraout_ECX;
    cVar2 = extraout_DL;
  }
  System_TObject_Create(param_1,'\0',param_3);
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 2));
  iVar1 = System_TObject_Create((int *)&PTR_TList_virtual_000_0040ea6c,'\x01',extraout_ECX_00);
  param_1[1] = iVar1;
  *(undefined1 *)(param_1 + 8) = 0;
  if (cVar2 != '\0') {
    System__AfterConstruction(param_1);
    *in_FS_OFFSET = in_stack_ffffffe8;
  }
  return param_1;
}


/* ==== 0041064c TThreadList.Destroy ==== */

void TThreadList_Destroy(int *param_1,char param_2)

{
  int *piVar1;
  byte extraout_DL;
  undefined4 *in_FS_OFFSET;
  undefined4 uStackY_18;
  
  piVar1 = System__BeforeDestruction(param_1,param_2);
  FUN_00410750((int)piVar1);
  uStackY_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStackY_18;
  System_TObject_Free((int *)piVar1[1]);
  TObject_Destroy(piVar1,extraout_DL & 0xfc);
  *in_FS_OFFSET = uStackY_18;
  FUN_004107b4((int)piVar1);
  uStackY_18 = 0x4106ad;
  DeleteCriticalSection((LPCRITICAL_SECTION)(piVar1 + 2));
  return;
}


/* ==== 004106c8 FUN_004106c8 ==== */

void FUN_004106c8(int param_1,int param_2)

{
  int iVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  
  puStack_10 = (undefined1 *)0x4106da;
  FUN_00410750(param_1);
  puStack_14 = &LAB_00410744;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  puStack_10 = &stack0xfffffffc;
  if (*(char *)(param_1 + 0x20) != '\x01') {
    puStack_10 = &stack0xfffffffc;
    iVar1 = Classes_TList_IndexOf(*(int *)(param_1 + 4),param_2);
    if (iVar1 != -1) {
      if (*(char *)(param_1 + 0x20) == '\x02') {
        FUN_004101ec(**(undefined4 **)(param_1 + 4),(undefined4 *)PTR_LAB_004ab7ac,param_2);
      }
      goto LAB_0041072e;
    }
  }
  Classes_TList_Add(*(int **)(param_1 + 4),param_2);
LAB_0041072e:
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_0041074b;
  puStack_14 = (undefined1 *)0x410743;
  FUN_004107b4(param_1);
  return;
}


/* ==== 00410750 FUN_00410750 ==== */

undefined4 FUN_00410750(int param_1)

{
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  return *(undefined4 *)(param_1 + 4);
}


/* ==== 00410764 FUN_00410764 ==== */

void FUN_00410764(int param_1,int param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  
  puStack_10 = (undefined1 *)0x410776;
  FUN_00410750(param_1);
  puStack_14 = &LAB_004107a7;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  puStack_10 = &stack0xfffffffc;
  FUN_00410448(*(int **)(param_1 + 4),param_2);
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_004107ae;
  puStack_14 = (undefined1 *)0x4107a6;
  FUN_004107b4(param_1);
  return;
}


/* ==== 004107b4 FUN_004107b4 ==== */

void FUN_004107b4(int param_1)

{
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  return;
}


/* ==== 004107c0 TBits.Destroy ==== */

void TBits_Destroy(int *param_1,char param_2)

{
  int *piVar1;
  byte extraout_DL;
  
  piVar1 = System__BeforeDestruction(param_1,param_2);
  FUN_00410814((int)piVar1,0);
  TObject_Destroy(piVar1,extraout_DL & 0xfc);
  if ('\0' < (char)extraout_DL) {
    System__ClassDestroy(piVar1);
  }
  return;
}


/* ==== 004107f0 FUN_004107f0 ==== */

void FUN_004107f0(void)

{
  int *piVar1;
  
  piVar1 = SysUtils_Exception_CreateRes((int *)&DAT_0040e89c,'\x01',(undefined4 *)PTR_PTR_004ab970);
  System__RaiseExcept(piVar1);
  return;
}


/* ==== 00410808 FUN_00410808 ==== */

int FUN_00410808(int param_1,int param_2)

{
  if (param_2 < param_1) {
    param_1 = param_2;
  }
  return param_1;
}


/* ==== 00410814 FUN_00410814 ==== */

void FUN_00410814(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 local_14;
  
  if (param_2 != *(int *)(param_1 + 4)) {
    if (param_2 < 0) {
      FUN_004107f0();
    }
    iVar1 = param_2 + 0x1f;
    if (iVar1 < 0) {
      iVar1 = param_2 + 0x3e;
    }
    uVar3 = (iVar1 >> 5) << 2;
    iVar1 = *(int *)(param_1 + 4) + 0x1f;
    if (iVar1 < 0) {
      iVar1 = *(int *)(param_1 + 4) + 0x3e;
    }
    uVar2 = (iVar1 >> 5) << 2;
    if (uVar2 != uVar3) {
      local_14 = (undefined4 *)0x0;
      if (uVar3 != 0) {
        local_14 = (undefined4 *)System__GetMem(uVar3);
        System_FillChar(local_14,uVar3,0);
      }
      if (uVar2 != 0) {
        if (local_14 != (undefined4 *)0x0) {
          uVar3 = FUN_00410808(uVar2,uVar3);
          System_Move(*(undefined4 **)(param_1 + 8),local_14,uVar3);
        }
        System__FreeMem(*(int *)(param_1 + 8));
      }
      *(undefined4 **)(param_1 + 8) = local_14;
    }
    *(int *)(param_1 + 4) = param_2;
  }
  return;
}


/* ==== 004108b8 FUN_004108b8 ==== */

void FUN_004108b8(int param_1,uint param_2,char param_3)

{
  byte *pbVar1;
  int *piVar2;
  
  if (*(uint *)(param_1 + 4) <= param_2) {
    if ((int)param_2 < 0) {
      piVar2 = SysUtils_Exception_CreateRes
                         ((int *)&DAT_0040e89c,'\x01',(undefined4 *)PTR_PTR_004ab970);
      System__RaiseExcept(piVar2);
      return;
    }
    FUN_00410814(param_1,param_2 + 1);
  }
  if (param_3 != '\0') {
    pbVar1 = (byte *)(*(int *)(param_1 + 8) + ((int)param_2 >> 3));
    *pbVar1 = *pbVar1 | '\x01' << (param_2 & 7);
    return;
  }
  pbVar1 = (byte *)(*(int *)(param_1 + 8) + ((int)param_2 >> 3));
  *pbVar1 = *pbVar1 & ~('\x01' << (param_2 & 7));
  return;
}


/* ==== 004108e4 FUN_004108e4 ==== */

uint FUN_004108e4(int param_1,uint param_2)

{
  int *piVar1;
  uint uVar2;
  
  if (param_2 < *(uint *)(param_1 + 4)) {
    return -(uint)((*(byte *)(*(int *)(param_1 + 8) + ((int)param_2 >> 3)) >> (param_2 & 7) & 1) !=
                  0) & 1;
  }
  piVar1 = SysUtils_Exception_CreateRes((int *)&DAT_0040e89c,'\x01',(undefined4 *)PTR_PTR_004ab970);
  uVar2 = System__RaiseExcept(piVar1);
  return uVar2;
}


/* ==== 004108fc FUN_004108fc ==== */

int FUN_004108fc(int param_1)

{
  uint k;
  int j;
  bool bVar1;
  int i_val;
  
  i_val = *(int *)(param_1 + 4) + 0x1f;
  if (i_val < 0) {
    i_val = *(int *)(param_1 + 4) + 0x3e;
  }
  i_val = i_val >> 5;
  if (-1 < i_val + -1) {
    j = 0;
    do {
      if (*(int *)(*(int *)(param_1 + 8) + j * 4) != -1) {
        k = 0;
        do {
          bVar1 = (byte)k < 0x1f;
          if ((byte)k < 0x20) {
            bVar1 = (*(uint *)(*(int *)(param_1 + 8) + j * 4) >> (k & 0x1f) & 1) != 0;
          }
          if (!bVar1) {
            j = j * 0x20 + (k & 0x7f);
            if (j < *(int *)(param_1 + 4)) {
              return j;
            }
            return *(int *)(param_1 + 4);
          }
          k = k + 1;
        } while ((char)k != ' ');
      }
      j = j + 1;
      i_val = i_val + -1;
    } while (i_val != 0);
  }
  return *(int *)(param_1 + 4);
}


/* ==== 00410974 TPersistent.Destroy ==== */

void TPersistent_Destroy(int *param_1,char param_2)

{
  int *piVar1;
  byte extraout_DL;
  
  piVar1 = System__BeforeDestruction(param_1,param_2);
  FUN_00413218((int)piVar1);
  TObject_Destroy(piVar1,extraout_DL & 0xfc);
  if ('\0' < (char)extraout_DL) {
    System__ClassDestroy(piVar1);
  }
  return;
}


/* ==== 004109a0 TPersistent.virtual_008 ==== */

void TPersistent_virtual_008(int *param_1,undefined4 *param_2)

{
  if (param_2 != (undefined4 *)0x0) {
    (**(code **)*param_2)(param_2,param_1);
    return;
  }
  FUN_004109b4(param_1,(int *)0x0);
  return;
}


/* ==== 004109b4 FUN_004109b4 ==== */

void FUN_004109b4(int *param_1,int *param_2)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar2;
  undefined1 *puStack_12c;
  undefined1 *puStack_128;
  undefined1 *puStack_124;
  int local_118;
  undefined1 local_114;
  byte *local_110;
  undefined1 local_10c;
  byte local_108 [256];
  int local_8;
  
  puStack_124 = &stack0xfffffffc;
  local_8 = 0;
  puStack_128 = &LAB_00410a6a;
  puStack_12c = (undefined1 *)*in_FS_OFFSET;
  *in_FS_OFFSET = &puStack_12c;
  if (param_2 == (int *)0x0) {
    System__LStrLAsg(&local_8,0x410a80);
  }
  else {
    puStack_124 = &stack0xfffffffc;
    System_TObject_ClassName(*param_2,local_108);
    System__LStrFromString(&local_8,local_108);
  }
  local_118 = local_8;
  local_114 = 0xb;
  System_TObject_ClassName(*param_1,local_108);
  local_110 = local_108;
  local_10c = 4;
  uVar2 = 1;
  uVar1 = FUN_0040b6d0((int)&DAT_00407c7c,'\x01',(undefined4 *)PTR_PTR_004ab7dc,1,&local_118);
  System__RaiseExcept(uVar1);
  *in_FS_OFFSET = uVar2;
  puStack_12c = &LAB_00410a71;
  System__LStrClr(&local_8);
  return;
}


/* ==== 00410a84 TPersistent.virtual_000 ==== */

void TPersistent_virtual_000(int *param_1,int *param_2)

{
  FUN_004109b4(param_2,param_1);
  return;
}


/* ==== 00410a8c TPersistent.virtual_004 ==== */

void TPersistent_virtual_004(void)

{
  return;
}


/* ==== 00410a90 TPersistent.dynamic_fffe ==== */

void TPersistent_dynamic_fffe(int *param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  int *in_FS_OFFSET;
  int iStack_12c;
  int iStack_120;
  undefined1 *puStack_11c;
  undefined1 *puStack_118;
  byte local_108 [256];
  int local_8;
  
  puStack_118 = &stack0xfffffffc;
  local_8 = 0;
  puStack_11c = &LAB_00410b25;
  iStack_120 = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStack_120;
  System_TObject_ClassName(*param_1,local_108);
  System__LStrFromString(param_2,local_108);
  iVar1 = System__CallDynaInst(param_1,extraout_EDX,extraout_ECX);
  if (iVar1 != 0) {
    piVar2 = (int *)System__CallDynaInst(param_1,extraout_EDX_00,extraout_ECX_00);
    System__CallDynaInst(piVar2,&local_8,extraout_ECX_01);
    if (local_8 != 0) {
      iStack_12c = *param_2;
      System__LStrCatN(param_2,3);
    }
  }
  *in_FS_OFFSET = iStack_12c;
  System__LStrClr(&local_8);
  return;
}


/* ==== 00410b40 TPersistent.dynamic_ffff ==== */

undefined4 TPersistent_dynamic_ffff(void)

{
  return 0;
}


/* ==== 00410b44 TCollectionItem.virtual_018 ==== */

int * TCollectionItem_virtual_018(int *param_1,char param_2,int *param_3)

{
  int *extraout_ECX;
  char extraout_DL;
  char cVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_ffffffe8;
  undefined4 in_stack_ffffffec;
  
  cVar1 = '\0';
  if (param_2 != '\0') {
    param_1 = (int *)System__ClassCreate((int)param_1,param_2,param_3,in_stack_ffffffe8,
                                         in_stack_ffffffec);
    param_3 = extraout_ECX;
    cVar1 = extraout_DL;
  }
  FUN_00410cc8(param_1,param_3,param_3);
  if (cVar1 != '\0') {
    System__AfterConstruction(param_1);
    *in_FS_OFFSET = in_stack_ffffffe8;
  }
  return param_1;
}


/* ==== 00410b7c TCollectionItem.Destroy ==== */

void TCollectionItem_Destroy(int *param_1,char param_2)

{
  int *piVar1;
  undefined4 extraout_ECX;
  byte extraout_DL;
  
  piVar1 = System__BeforeDestruction(param_1,param_2);
  FUN_00410cc8(piVar1,(int *)0x0,extraout_ECX);
  TPersistent_Destroy(piVar1,extraout_DL & 0xfc);
  if ('\0' < (char)extraout_DL) {
    System__ClassDestroy(piVar1);
  }
  return;
}


/* ==== 00410bac FUN_00410bac ==== */

void FUN_00410bac(int param_1,char param_2)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 4);
  if ((piVar1 != (int *)0x0) && (piVar1[3] == 0)) {
    if (param_2 != '\0') {
      param_1 = 0;
    }
    (**(code **)(*piVar1 + 0x10))(piVar1,param_1);
  }
  return;
}


/* ==== 00410bd0 FUN_00410bd0 ==== */

int FUN_00410bd0(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 4) != 0) {
    iVar1 = Classes_TList_IndexOf(*(int *)(*(int *)(param_1 + 4) + 8),param_1);
    return iVar1;
  }
  return -1;
}


/* ==== 00410be8 TCollectionItem.virtual_00c ==== */

void TCollectionItem_virtual_00c(int *param_1,int *param_2)

{
  byte abStack_108 [256];
  
  System_TObject_ClassName(*param_1,abStack_108);
  System__LStrFromString(param_2,abStack_108);
  return;
}


/* ==== 00410c10 TCollectionItem.dynamic_fffe ==== */

void TCollectionItem_dynamic_fffe(int *param_1,int *param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_130;
  undefined1 *puStack_12c;
  undefined1 *puStack_128;
  byte local_118 [256];
  int local_18;
  int local_14;
  undefined1 local_10;
  int local_c;
  undefined1 local_8;
  
  puStack_128 = &stack0xfffffffc;
  local_18 = 0;
  puStack_12c = &LAB_00410ca5;
  uStack_130 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_130;
  if (param_1[1] == 0) {
    System_TObject_ClassName(*param_1,local_118);
    System__LStrFromString(param_2,local_118);
  }
  else {
    puStack_128 = &stack0xfffffffc;
    System__CallDynaInst((int *)param_1[1],&local_18,0);
    local_14 = local_18;
    local_10 = 0xb;
    local_c = FUN_00410bd0((int)param_1);
    local_8 = 0;
    SysUtils_Format((byte *)"%s[%d]",&local_14,1,param_2);
  }
  *in_FS_OFFSET = uStack_130;
  puStack_128 = &LAB_00410cac;
  puStack_12c = (undefined1 *)0x410ca4;
  System__LStrClr(&local_18);
  return;
}


/* ==== 00410cc4 TCollectionItem.dynamic_ffff ==== */

undefined4 TCollectionItem_dynamic_ffff(int param_1)

{
  return *(undefined4 *)(param_1 + 4);
}


/* ==== 00410cc8 FUN_00410cc8 ==== */

void FUN_00410cc8(int *param_1,int *param_2,undefined4 param_3)

{
  int *piVar1;
  
  piVar1 = (int *)param_1[1];
  if (param_2 != piVar1) {
    if (piVar1 != (int *)0x0) {
      FUN_00411260(piVar1,(int)param_1,param_3);
    }
    if (param_2 != (int *)0x0) {
      FUN_00411204(param_2,param_1);
    }
  }
  return;
}


/* ==== 00410cf0 TCollectionItem.virtual_014 ==== */

void TCollectionItem_virtual_014(int param_1)

{
  FUN_00410bac(param_1,'\0');
  return;
}


/* ==== 00410cf8 TCollectionItem.virtual_010 ==== */

void TCollectionItem_virtual_010(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_00410bd0(param_1);
  if ((-1 < iVar1) && (param_2 != iVar1)) {
    FUN_004103a4(*(int **)(*(int *)(param_1 + 4) + 8),iVar1,param_2);
    FUN_00410bac(param_1,'\x01');
  }
  return;
}


/* ==== 00410d28 FUN_00410d28 ==== */

int * FUN_00410d28(int *param_1,char param_2,int param_3)

{
  int iVar1;
  int extraout_ECX;
  char extraout_DL;
  char cVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_ffffffe8;
  undefined4 in_stack_ffffffec;
  
  cVar2 = '\0';
  if (param_2 != '\0') {
    param_1 = (int *)System__ClassCreate((int)param_1,param_2,param_3,in_stack_ffffffe8,
                                         in_stack_ffffffec);
    param_3 = extraout_ECX;
    cVar2 = extraout_DL;
  }
  param_1[1] = param_3;
  iVar1 = System_TObject_Create((int *)&PTR_TList_virtual_000_0040ea6c,'\x01',param_3);
  param_1[2] = iVar1;
  if (cVar2 != '\0') {
    System__AfterConstruction(param_1);
    *in_FS_OFFSET = in_stack_ffffffe8;
  }
  return param_1;
}


/* ==== 00410d68 TCollection.Destroy ==== */

void TCollection_Destroy(int *param_1,char param_2)

{
  int *piVar1;
  byte extraout_DL;
  
  piVar1 = System__BeforeDestruction(param_1,param_2);
  piVar1[3] = 1;
  if (piVar1[2] != 0) {
    FUN_00410e64(piVar1);
  }
  System_TObject_Free((int *)piVar1[2]);
  TPersistent_Destroy(piVar1,extraout_DL & 0xfc);
  if ('\0' < (char)extraout_DL) {
    System__ClassDestroy(piVar1);
  }
  return;
}


/* ==== 00410dac FUN_00410dac ==== */

void FUN_00410dac(int param_1)

{
  (**(code **)(*(int *)(param_1 + 4) + 0x18))(*(int *)(param_1 + 4),1,param_1);
  return;
}


/* ==== 00410db8 TCollection.virtual_008 ==== */

void TCollection_virtual_008(int *param_1,int *param_2)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  int i_val;
  int *piVar3;
  int j;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  
  puStack_18 = (undefined1 *)0x410dd1;
  uVar2 = System__IsClass(param_2,(int)&PTR_TPersistent_virtual_000_0040eccc);
  if ((char)uVar2 != '\0') {
    puStack_18 = (undefined1 *)0x410ddd;
    (**(code **)(*param_1 + 0x14))();
    puStack_1c = &LAB_00410e36;
    uStack_20 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_20;
    puStack_18 = &stack0xfffffffc;
    FUN_00410e64(param_1);
    i_val = FUN_00410f08((int)param_2);
    if (-1 < i_val + -1) {
      j = 0;
      do {
        uVar2 = FUN_00410f10((int)param_2,j);
        piVar3 = (int *)FUN_00410dac((int)param_1);
        (**(code **)(*piVar3 + 8))(piVar3,uVar2);
        j = j + 1;
        i_val = i_val + -1;
      } while (i_val != 0);
    }
    puVar1 = puStack_18;
    *in_FS_OFFSET = uStack_20;
    puStack_18 = (undefined1 *)0x410e47;
    puStack_1c = (undefined1 *)0x410e35;
    (**(code **)(*param_1 + 0x18))(param_1,*param_1,puVar1);
    return;
  }
  puStack_18 = (undefined1 *)0x410e47;
  TPersistent_virtual_008(param_1,param_2);
  return;
}


/* ==== 00410e50 TCollection.virtual_014 ==== */

void TCollection_virtual_014(int param_1)

{
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  return;
}


/* ==== 00410e54 FUN_00410e54 ==== */

void FUN_00410e54(int *param_1)

{
  if (param_1[3] == 0) {
    (**(code **)(*param_1 + 0x10))(param_1,0);
  }
  return;
}


/* ==== 00410e64 FUN_00410e64 ==== */

void FUN_00410e64(int *param_1)

{
  undefined1 *puVar1;
  int *piVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  
  if (0 < *(int *)(param_1[2] + 8)) {
    puStack_10 = (undefined1 *)0x410e80;
    (**(code **)(*param_1 + 0x14))();
    puStack_14 = &LAB_00410ebe;
    uStack_18 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_18;
    puStack_10 = &stack0xfffffffc;
    while (puVar1 = puStack_10, 0 < (int)((undefined4 *)param_1[2])[2]) {
      piVar2 = (int *)FUN_00410398((undefined4 *)param_1[2]);
      System_TObject_Free(piVar2);
    }
    *in_FS_OFFSET = uStack_18;
    puStack_10 = (undefined1 *)0x410ec5;
    puStack_14 = (undefined1 *)0x410ebd;
    (**(code **)(*param_1 + 0x18))(param_1,*param_1,puVar1);
    return;
  }
  return;
}


/* ==== 00410ecc TCollection.virtual_018 ==== */

void TCollection_virtual_018(int *param_1)

{
  param_1[3] = param_1[3] + -1;
  FUN_00410e54(param_1);
  return;
}


/* ==== 00410ed8 TCollection.dynamic_fffd ==== */

undefined4 TCollection_dynamic_fffd(void)

{
  return 0;
}


/* ==== 00410edc TCollection.dynamic_fffc ==== */

void TCollection_dynamic_fffc(undefined4 param_1,undefined4 param_2,int *param_3)

{
  System__LStrClr(param_3);
  return;
}


/* ==== 00410ee8 TCollection.dynamic_fffb ==== */

void TCollection_dynamic_fffb(int param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_00410f10(param_1,param_3);
  (**(code **)(*piVar1 + 0xc))(piVar1,param_4);
  return;
}


/* ==== 00410f08 FUN_00410f08 ==== */

undefined4 FUN_00410f08(int param_1)

{
  return *(undefined4 *)(*(int *)(param_1 + 8) + 8);
}


/* ==== 00410f10 FUN_00410f10 ==== */

void FUN_00410f10(int param_1,int param_2)

{
  Classes_TList_Get(*(undefined4 **)(param_1 + 8),param_2);
  return;
}


/* ==== 00410f24 TCollection.dynamic_fffe ==== */

void TCollection_dynamic_fffe(int *param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  int *in_FS_OFFSET;
  int iStack_130;
  int iStack_124;
  undefined1 *puStack_120;
  undefined1 *puStack_11c;
  byte local_10c [256];
  int local_c;
  int local_8;
  
  puStack_11c = &stack0xfffffffc;
  local_8 = 0;
  local_c = 0;
  puStack_120 = &LAB_00410fd2;
  iStack_124 = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStack_124;
  System_TObject_ClassName(*param_1,local_10c);
  System__LStrFromString(param_2,local_10c);
  iVar1 = System__CallDynaInst(param_1,extraout_EDX,extraout_ECX);
  if (iVar1 != 0) {
    piVar2 = (int *)System__CallDynaInst(param_1,extraout_EDX_00,extraout_ECX_00);
    System__CallDynaInst(piVar2,&local_8,extraout_ECX_01);
    if (local_8 != 0) {
      FUN_00410fec(param_1,&local_c);
      if (local_c != 0) {
        iStack_130 = local_c;
        System__LStrCatN(param_2,3);
      }
    }
  }
  *in_FS_OFFSET = iStack_130;
  System__LStrArrayClr(&local_c,2);
  return;
}


/* ==== 00410fec FUN_00410fec ==== */

void FUN_00410fec(int *param_1,int *param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  int i_val;
  undefined4 *puVar3;
  int j;
  int *piVar4;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  
  puStack_24 = (undefined1 *)0x411009;
  System__LStrAsg(param_2,(undefined4 *)param_1[5]);
  puStack_24 = (undefined1 *)0x411015;
  piVar2 = (int *)System__CallDynaInst(param_1,extraout_EDX,extraout_ECX);
  if ((*param_2 == 0) && (piVar2 != (int *)0x0)) {
    puStack_24 = (undefined1 *)0x411038;
    i_val = FUN_004031bc(*piVar2);
    if (i_val != 0) {
      puStack_24 = (undefined1 *)0x41104a;
      i_val = FUN_004031bc(*piVar2);
      puStack_24 = (undefined1 *)0x41104f;
      i_val = FUN_0040de54(i_val);
      if ((i_val != 0) && (*(short *)(i_val + 8) != 0)) {
        puStack_24 = (undefined1 *)0x411070;
        puVar3 = (undefined4 *)System__GetMem((int)*(short *)(i_val + 8) << 2);
        puStack_28 = &LAB_004110e9;
        uStack_2c = *in_FS_OFFSET;
        *in_FS_OFFSET = &uStack_2c;
        puStack_24 = &stack0xfffffffc;
        j = FUN_004031bc(*piVar2);
        FUN_0040df2c(j,puVar3);
        i_val = (int)*(short *)(i_val + 8);
        if (-1 < i_val + -1) {
          j = 0;
          do {
            puVar1 = (undefined4 *)puVar3[j];
            if (**(char **)*puVar1 == '\a') {
              piVar4 = (int *)FUN_0040df80(piVar2,(undefined4 *)puVar3[j]);
              if (piVar4 == param_1) {
                System__LStrFromString(param_1 + 5,(byte *)((int)puVar1 + 0x1a));
              }
            }
            j = j + 1;
            i_val = i_val + -1;
          } while (i_val != 0);
        }
        *in_FS_OFFSET = uStack_2c;
        puStack_24 = &DAT_004110f0;
        puStack_28 = (undefined1 *)0x4110e8;
        System__FreeMem((int)puVar3);
        return;
      }
    }
  }
  return;
}


/* ==== 00411108 FUN_00411108 ==== */

void FUN_00411108(int *param_1,int *param_2)

{
  int *piVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  
  if (param_2 != (int *)0x0) {
    *param_2 = 0;
  }
  System__IntfClear(param_2);
  if (param_1 != (int *)0x0) {
    piVar1 = (int *)System__CallDynaInst(param_1,extraout_EDX,extraout_ECX);
    if (piVar1 == (int *)0x0) {
      uVar2 = System__IsClass(param_1,(int)&PTR_TPersistent_virtual_000_0040f548);
      if (((char)uVar2 != '\0') && ((*(byte *)(param_1 + 8) & 0x10) != 0)) {
        System__IntfClear(param_2);
        (**(code **)(*param_1 + 0x28))();
      }
    }
    else {
      uVar2 = System__IsClass(param_1,(int)&PTR_TPersistent_virtual_000_0040f548);
      if (((char)uVar2 == '\0') || ((*(byte *)(param_1 + 8) & 0x10) != 0)) {
        piVar3 = System__IntfClear(param_2);
        FUN_00411108(piVar1,piVar3);
      }
    }
  }
  return;
}


/* ==== 004111a0 FUN_004111a0 ==== */

void FUN_004111a0(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  int *local_8;
  
  puStack_18 = &stack0xfffffffc;
  local_8 = (int *)0x0;
  puStack_1c = &LAB_004111f5;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  piVar1 = System__IntfClear((int *)&local_8);
  FUN_00411108(param_1,piVar1);
  if (local_8 != (int *)0x0) {
    (**(code **)(*local_8 + 0x10))(local_8,param_2,param_3);
  }
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_004111fc;
  puStack_1c = (undefined1 *)0x4111f4;
  System__IntfClear((int *)&local_8);
  return;
}


/* ==== 00411204 FUN_00411204 ==== */

void FUN_00411204(int *param_1,int *param_2)

{
  undefined4 uVar1;
  
  uVar1 = System__IsClass(param_2,param_1[1]);
  if ((char)uVar1 == '\0') {
    FUN_004101ec(&PTR_TList_virtual_000_0040ea6c,(undefined4 *)PTR_PTR_004ab884,0);
  }
  Classes_TList_Add((int *)param_1[2],(int)param_2);
  param_2[1] = (int)param_1;
  param_2[2] = param_1[4];
  param_1[4] = param_1[4] + 1;
  (**(code **)(*param_1 + 0xc))(param_1,param_2);
  FUN_00410e54(param_1);
  FUN_004111a0(param_1,param_2,0);
  return;
}


/* ==== 00411260 FUN_00411260 ==== */

void FUN_00411260(int *param_1,int param_2,undefined4 param_3)

{
  FUN_004111a0(param_1,param_2,CONCAT31((int3)((uint)param_3 >> 8),1));
  FUN_00410448((int *)param_1[2],param_2);
  *(undefined4 *)(param_2 + 4) = 0;
  FUN_00410e54(param_1);
  return;
}


/* ==== 0041128c TCollection.virtual_00c ==== */

void TCollection_virtual_00c(void)

{
  return;
}


/* ==== 00411290 TCollection.virtual_010 ==== */

void TCollection_virtual_010(void)

{
  return;
}


/* ==== 00411294 TStrings.Destroy ==== */

void TStrings_Destroy(int *param_1,char param_2)

{
  int *piVar1;
  byte extraout_DL;
  
  piVar1 = System__BeforeDestruction(param_1,param_2);
  FUN_00411e3c((int)piVar1,(int *)0x0);
  TPersistent_Destroy(piVar1,extraout_DL & 0xfc);
  if ('\0' < (char)extraout_DL) {
    System__ClassDestroy(piVar1);
  }
  return;
}


/* ==== 004112c4 TStrings.virtual_034 ==== */

undefined4 TStrings_virtual_034(int *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(*param_1 + 0x14))();
  (**(code **)(*param_1 + 0x54))(param_1,uVar1,param_2);
  return uVar1;
}


/* ==== 004112e8 TStrings.virtual_038 ==== */

undefined4 TStrings_virtual_038(int *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(*param_1 + 0x34))();
  (**(code **)(*param_1 + 0x24))(param_1,uVar1,param_3);
  return uVar1;
}


/* ==== 0041130c TStrings.virtual_03c ==== */

void TStrings_virtual_03c(int *param_1,int *param_2)

{
  undefined4 uVar1;
  int i_val;
  undefined4 uVar2;
  int j;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_34;
  undefined1 *puStack_30;
  undefined1 *puStack_2c;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  undefined4 local_10;
  int *local_c;
  int *local_8;
  
  puStack_20 = &stack0xfffffffc;
  local_10 = 0;
  puStack_24 = &LAB_004113b3;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  puStack_2c = (undefined1 *)0x411336;
  local_c = param_2;
  local_8 = param_1;
  FUN_00411434(param_1);
  puStack_30 = &LAB_00411396;
  uStack_34 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_34;
  puStack_2c = &stack0xfffffffc;
  i_val = (**(code **)(*local_c + 0x14))();
  if (-1 < i_val + -1) {
    j = 0;
    do {
      (**(code **)(*local_c + 0xc))(local_c,j,&local_10);
      uVar1 = local_10;
      uVar2 = (**(code **)(*local_c + 0x18))(local_c,j);
      (**(code **)(*local_8 + 0x38))(local_8,uVar1,uVar2);
      j = j + 1;
      i_val = i_val + -1;
    } while (i_val != 0);
  }
  *in_FS_OFFSET = uStack_34;
  puStack_2c = &LAB_0041139d;
  puStack_30 = (undefined1 *)0x411395;
  FUN_004114f0(local_8);
  return;
}


/* ==== 004113c4 TStrings.virtual_008 ==== */

void TStrings_virtual_008(int *param_1,int *param_2)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  
  puStack_10 = (undefined1 *)0x4113db;
  uVar1 = System__IsClass(param_2,(int)&PTR_TPersistent_virtual_000_0040edc8);
  if ((char)uVar1 != '\0') {
    puStack_10 = (undefined1 *)0x4113e7;
    FUN_00411434(param_1);
    puStack_14 = &LAB_0041141d;
    uStack_18 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_18;
    puStack_10 = &stack0xfffffffc;
    (**(code **)(*param_1 + 0x40))();
    (**(code **)(*param_1 + 0x3c))(param_1,param_2);
    *in_FS_OFFSET = uStack_18;
    puStack_10 = (undefined1 *)0x41142e;
    puStack_14 = (undefined1 *)0x41141c;
    FUN_004114f0(param_1);
    return;
  }
  puStack_10 = (undefined1 *)0x41142e;
  TPersistent_virtual_008(param_1,param_2);
  return;
}


/* ==== 00411434 FUN_00411434 ==== */

void FUN_00411434(int *param_1)

{
  if (param_1[1] == 0) {
    (**(code **)(*param_1 + 0x30))(param_1,1);
  }
  param_1[1] = param_1[1] + 1;
  return;
}


/* ==== 0041144c FUN_0041144c ==== */

byte FUN_0041144c(void)

{
  int *piVar1;
  byte bVar2;
  undefined4 uVar3;
  int iVar4;
  int in_stack_00000004;
  
  piVar1 = *(int **)(*(int *)(in_stack_00000004 + -4) + 0x20);
  if (piVar1 == (int *)0x0) {
    iVar4 = (**(code **)(**(int **)(in_stack_00000004 + -8) + 0x14))();
    bVar2 = 0 < iVar4;
  }
  else {
    bVar2 = 1;
    uVar3 = System__IsClass(piVar1,(int)&PTR_TPersistent_virtual_000_0040edc8);
    if ((char)uVar3 != '\0') {
      bVar2 = FUN_00411504(*(int **)(in_stack_00000004 + -8),piVar1);
      bVar2 = bVar2 ^ 1;
    }
  }
  return bVar2;
}


/* ==== 004114a4 TStrings.virtual_004 ==== */

void TStrings_virtual_004(undefined4 param_1,int *param_2)

{
  byte bVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  
  puVar3 = &LAB_00411cd4;
  puVar2 = &LAB_00412028;
  uVar4 = param_1;
  bVar1 = FUN_0041144c();
  (**(code **)(*param_2 + 4))(param_2,"Strings",bVar1,puVar2,param_1,puVar3,uVar4);
  return;
}


/* ==== 004114f0 FUN_004114f0 ==== */

void FUN_004114f0(int *param_1)

{
  param_1[1] = param_1[1] + -1;
  if (param_1[1] == 0) {
    (**(code **)(*param_1 + 0x30))(param_1,0);
  }
  return;
}


/* ==== 00411504 FUN_00411504 ==== */

void FUN_00411504(int *param_1,int *param_2)

{
  uint *puVar1;
  int i_val;
  int j;
  undefined4 *in_FS_OFFSET;
  undefined1 uVar2;
  undefined4 uStack_30;
  undefined1 *puStack_2c;
  undefined1 *puStack_28;
  uint *local_18;
  uint *local_14;
  undefined1 local_d;
  int *local_c;
  int *local_8;
  
  puStack_28 = &stack0xfffffffc;
  local_14 = (uint *)0x0;
  local_18 = (uint *)0x0;
  puStack_2c = &LAB_00411599;
  uStack_30 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_30;
  local_d = 0;
  local_c = param_2;
  local_8 = param_1;
  i_val = (**(code **)(*param_1 + 0x14))();
  j = (**(code **)(*local_c + 0x14))();
  if (i_val == j) {
    if (-1 < i_val + -1) {
      j = 0;
      uVar2 = true;
      do {
        (**(code **)(*local_8 + 0xc))(local_8,j,&local_14);
        puVar1 = local_14;
        (**(code **)(*local_c + 0xc))(local_c,j,&local_18);
        System__LStrCmp(puVar1,local_18);
        if (!(bool)uVar2) goto LAB_0041157e;
        j = j + 1;
        i_val = i_val + -1;
        uVar2 = i_val == 0;
      } while (!(bool)uVar2);
    }
    local_d = 1;
  }
LAB_0041157e:
  *in_FS_OFFSET = uStack_30;
  puStack_28 = &LAB_004115a0;
  puStack_2c = (undefined1 *)0x411598;
  System__LStrArrayClr((int *)&local_18,2);
  return;
}


/* ==== 004115ac FUN_004115ac ==== */

undefined4 FUN_004115ac(void)

{
  int unaff_EBP;
  
  return *(undefined4 *)(unaff_EBP + 4);
}


/* ==== 004115b0 FUN_004115b0 ==== */

void FUN_004115b0(undefined4 param_1,byte *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 local_10;
  undefined1 local_c;
  
  FUN_004115ac();
  local_c = 0;
  local_10 = param_3;
  uVar1 = SysUtils_Exception_CreateFmt((int)&DAT_0040e8f4,'\x01',param_2,0,&local_10);
  System__RaiseExcept(uVar1);
  return;
}


/* ==== 004115e8 FUN_004115e8 ==== */

void FUN_004115e8(undefined4 param_1,undefined4 *param_2,undefined4 param_3)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  byte *local_8;
  
  puStack_18 = &stack0xfffffffc;
  local_8 = (byte *)0x0;
  puStack_1c = &LAB_00411630;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  System_LoadResString(param_2,(int *)&local_8);
  FUN_004115b0(param_1,local_8,param_3);
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_00411637;
  puStack_1c = (undefined1 *)0x41162f;
  System__LStrClr((int *)&local_8);
  return;
}


/* ==== 00411640 TStrings.virtual_048 ==== */

void TStrings_virtual_048(int *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_38;
  undefined1 *puStack_34;
  undefined1 *puStack_30;
  undefined4 uStack_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  int *local_8;
  
  puStack_24 = &stack0xfffffffc;
  local_14 = 0;
  local_10 = 0;
  puStack_28 = &LAB_00411718;
  uStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_2c;
  puStack_30 = (undefined1 *)0x41166e;
  local_8 = param_1;
  FUN_00411434(param_1);
  puStack_34 = &LAB_004116f6;
  uStack_38 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_38;
  puStack_30 = &stack0xfffffffc;
  (**(code **)(*local_8 + 0xc))(local_8,param_2,&local_10);
  local_c = (**(code **)(*local_8 + 0x18))(local_8,param_2);
  (**(code **)(*local_8 + 0xc))(local_8,param_3,&local_14);
  (**(code **)(*local_8 + 0x20))(local_8,param_2,local_14);
  uVar1 = (**(code **)(*local_8 + 0x18))(local_8,param_3);
  (**(code **)(*local_8 + 0x24))(local_8,param_2,uVar1);
  (**(code **)(*local_8 + 0x20))(local_8,param_3,local_10);
  (**(code **)(*local_8 + 0x24))(local_8,param_3,local_c);
  *in_FS_OFFSET = uStack_38;
  puStack_30 = &LAB_004116fd;
  puStack_34 = (undefined1 *)0x4116f5;
  FUN_004114f0(local_8);
  return;
}


/* ==== 00411728 TStrings.virtual_010 ==== */

void TStrings_virtual_010(int *param_1)

{
  (**(code **)(*param_1 + 0x14))();
  return;
}


/* ==== 00411730 FUN_00411730 ==== */

void FUN_00411730(int *param_1,undefined4 param_2,int *param_3)

{
  PCNZCH pCVar1;
  
  (**(code **)(*param_1 + 0xc))(param_1,param_2,param_3);
  pCVar1 = FUN_0040c0d8(&DAT_00411778,(undefined *)*param_3);
  if (pCVar1 == (PCNZCH)0x0) {
    FUN_00404210(param_3,0);
  }
  else {
    FUN_00404210(param_3,(uint)(pCVar1 + -1));
  }
  return;
}


/* ==== 0041177c TStrings.virtual_018 ==== */

undefined4 TStrings_virtual_018(void)

{
  return 0;
}


/* ==== 00411780 TStrings.virtual_04c ==== */

void TStrings_virtual_04c(int *param_1)

{
  char *pcVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  undefined *local_8;
  
  puStack_10 = &stack0xfffffffc;
  local_8 = (undefined *)0x0;
  puStack_14 = &LAB_004117c5;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  (**(code **)(*param_1 + 0x1c))(param_1,&local_8);
  pcVar1 = System__LStrToPChar(local_8);
  FUN_00408d40(pcVar1);
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_004117cc;
  puStack_14 = (undefined1 *)0x4117c4;
  System__LStrClr((int *)&local_8);
  return;
}


/* ==== 004117d4 TStrings.virtual_01c ==== */

void TStrings_virtual_01c(int *param_1,int *param_2)

{
  int j;
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_34;
  undefined1 *puStack_30;
  undefined1 *puStack_2c;
  int local_1c;
  undefined4 *local_18;
  int local_14;
  int i_val;
  int *local_c;
  int *local_8;
  
  puStack_2c = &stack0xfffffffc;
  local_1c = 0;
  local_18 = (undefined4 *)0x0;
  puStack_30 = &LAB_004118ab;
  uStack_34 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_34;
  local_c = param_2;
  local_8 = param_1;
  j = (**(code **)(*param_1 + 0x14))();
  uVar2 = 0;
  local_14 = j;
  if (-1 < j + -1) {
    i_val = 0;
    do {
      (**(code **)(*local_8 + 0xc))(local_8,i_val,&local_1c);
      iVar1 = System__LStrLen(local_1c);
      uVar2 = uVar2 + iVar1 + 2;
      i_val = i_val + 1;
      j = j + -1;
    } while (j != 0);
  }
  System__LStrFromPCharLen(local_c,(undefined4 *)0x0,uVar2);
  puVar3 = (undefined4 *)*local_c;
  if (-1 < local_14 + -1) {
    i_val = 0;
    j = local_14;
    do {
      (**(code **)(*local_8 + 0xc))(local_8,i_val,&local_18);
      uVar2 = System__LStrLen((int)local_18);
      if (uVar2 != 0) {
        System_Move(local_18,puVar3,uVar2);
        puVar3 = (undefined4 *)((int)puVar3 + uVar2);
      }
      *(undefined1 *)puVar3 = 0xd;
      *(undefined1 *)((int)puVar3 + 1) = 10;
      puVar3 = (undefined4 *)((int)puVar3 + 2);
      i_val = i_val + 1;
      j = j + -1;
    } while (j != 0);
  }
  *in_FS_OFFSET = uStack_34;
  puStack_2c = &LAB_004118b2;
  puStack_30 = (undefined1 *)0x4118aa;
  System__LStrArrayClr(&local_1c,2);
  return;
}


/* ==== 004118bc FUN_004118bc ==== */

void FUN_004118bc(int *param_1,undefined *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  int *piVar3;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  int local_10;
  int *local_c;
  undefined *local_8;
  
  puStack_1c = &stack0xfffffffc;
  local_10 = 0;
  puStack_20 = &LAB_0041193b;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  local_c = param_3;
  local_8 = param_2;
  iVar1 = FUN_004119c8(param_1,param_2);
  if (iVar1 < 0) {
    System__LStrClr(local_c);
  }
  else {
    piVar3 = local_c;
    (**(code **)(*param_1 + 0xc))(param_1,iVar1,&local_10);
    iVar1 = local_10;
    iVar2 = System__LStrLen((int)local_8);
    System__LStrCopy(iVar1,iVar2 + 2,0x7fffffff,piVar3);
  }
  *in_FS_OFFSET = uStack_24;
  puStack_1c = &LAB_00411942;
  puStack_20 = (undefined1 *)0x41193a;
  System__LStrClr(&local_10);
  return;
}


/* ==== 00411948 TStrings.virtual_050 ==== */

void TStrings_virtual_050(int *param_1,undefined *param_2)

{
  int i_val;
  int iVar1;
  int j;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  undefined *local_10;
  undefined *local_c;
  int *local_8;
  
  puStack_20 = &stack0xfffffffc;
  local_10 = (undefined *)0x0;
  puStack_24 = &LAB_004119b5;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  local_c = param_2;
  local_8 = param_1;
  i_val = (**(code **)(*param_1 + 0x14))();
  if (-1 < i_val + -1) {
    j = 0;
    do {
      (**(code **)(*local_8 + 0xc))(local_8,j,&local_10);
      iVar1 = FUN_00408364(local_10,local_c);
      if (iVar1 == 0) break;
      j = j + 1;
      i_val = i_val + -1;
    } while (i_val != 0);
  }
  *in_FS_OFFSET = uStack_28;
  puStack_20 = &LAB_004119bc;
  puStack_24 = (undefined1 *)0x4119b4;
  System__LStrClr((int *)&local_10);
  return;
}


/* ==== 004119c8 FUN_004119c8 ==== */

void FUN_004119c8(int *param_1,undefined *param_2)

{
  int i_val;
  PCNZCH pCVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  undefined *local_18;
  undefined *local_14;
  int j;
  undefined *local_c;
  int *local_8;
  
  puStack_24 = &stack0xfffffffc;
  local_18 = (undefined *)0x0;
  local_14 = (undefined *)0x0;
  puStack_28 = &LAB_00411a6f;
  uStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_2c;
  local_c = param_2;
  local_8 = param_1;
  i_val = (**(code **)(*param_1 + 0x14))();
  if (-1 < i_val + -1) {
    j = 0;
    do {
      (**(code **)(*local_8 + 0xc))(local_8,j,&local_14);
      pCVar1 = FUN_0040c0d8(&DAT_00411a88,local_14);
      if (pCVar1 != (PCNZCH)0x0) {
        System__LStrCopy((int)local_14,1,(uint)(pCVar1 + -1),(int *)&local_18);
        iVar2 = FUN_00408364(local_18,local_c);
        if (iVar2 == 0) goto LAB_00411a54;
      }
      j = j + 1;
      i_val = i_val + -1;
    } while (i_val != 0);
  }
  j = -1;
LAB_00411a54:
  *in_FS_OFFSET = uStack_2c;
  puStack_24 = &LAB_00411a76;
  puStack_28 = (undefined1 *)0x411a6e;
  System__LStrArrayClr((int *)&local_18,2);
  return;
}


/* ==== 00411a8c FUN_00411a8c ==== */

int FUN_00411a8c(int *param_1,int param_2)

{
  int i_val;
  int iVar1;
  int j;
  
  i_val = (**(code **)(*param_1 + 0x14))();
  if (-1 < i_val + -1) {
    j = 0;
    do {
      iVar1 = (**(code **)(*param_1 + 0x18))(param_1,j);
      if (param_2 == iVar1) {
        return j;
      }
      j = j + 1;
      i_val = i_val + -1;
    } while (i_val != 0);
  }
  return -1;
}


/* ==== 00411ac0 FUN_00411ac0 ==== */

void FUN_00411ac0(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  (**(code **)(*param_1 + 0x54))(param_1,param_2,param_3);
  (**(code **)(*param_1 + 0x24))(param_1,param_2,param_4);
  return;
}


/* ==== 00411af0 TStrings.virtual_058 ==== */

void TStrings_virtual_058(int *param_1,undefined *param_2)

{
  int *piVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStackY_18;
  undefined1 *puStackY_14;
  
  puStackY_14 = (undefined1 *)0x411b07;
  piVar1 = FUN_004128ac((int *)&PTR_THandleStream_virtual_000_0040f0bc,'\x01',param_2,0x20);
  puStackY_14 = &LAB_00411b38;
  uStackY_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStackY_18;
  (**(code **)(*param_1 + 0x5c))(param_1,piVar1);
  *in_FS_OFFSET = uStackY_18;
  puStackY_14 = (undefined1 *)0x411b37;
  System_TObject_Free(piVar1);
  return;
}


/* ==== 00411b44 TStrings.virtual_05c ==== */

void TStrings_virtual_05c(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  int local_c;
  int *local_8;
  
  puStack_18 = &stack0xfffffffc;
  local_c = 0;
  puStack_1c = &LAB_00411be2;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  puStack_24 = (undefined1 *)0x411b6c;
  local_8 = param_1;
  FUN_00411434(param_1);
  puStack_28 = &LAB_00411bc5;
  uStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_2c;
  puStack_24 = &stack0xfffffffc;
  iVar1 = FUN_00412680(param_2);
  iVar2 = FUN_00412664(param_2);
  System__LStrFromPCharLen(&local_c,(undefined4 *)0x0,iVar1 - iVar2);
  (**(code **)(*param_2 + 4))(param_2,local_c,iVar1 - iVar2);
  (**(code **)(*local_8 + 0x2c))(local_8,local_c);
  *in_FS_OFFSET = uStack_2c;
  puStack_24 = &LAB_00411bcc;
  puStack_28 = (undefined1 *)0x411bc4;
  FUN_004114f0(local_8);
  return;
}


/* ==== 00411bf0 TStrings.virtual_060 ==== */

void TStrings_virtual_060(int *param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_30;
  undefined1 *puStack_2c;
  undefined1 *puStack_28;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  int local_c;
  int *local_8;
  
  puStack_1c = &stack0xfffffffc;
  local_c = 0;
  puStack_20 = &LAB_00411c91;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  local_8 = param_1;
  if (param_3 != param_2) {
    puStack_28 = (undefined1 *)0x411c1f;
    FUN_00411434(param_1);
    puStack_2c = &LAB_00411c74;
    uStack_30 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_30;
    puStack_28 = &stack0xfffffffc;
    (**(code **)(*local_8 + 0xc))(local_8,param_2,&local_c);
    uVar1 = (**(code **)(*local_8 + 0x18))(local_8,param_2);
    (**(code **)(*local_8 + 0x44))(local_8,param_2);
    FUN_00411ac0(local_8,param_3,local_c,uVar1);
    *in_FS_OFFSET = uStack_30;
    puStack_28 = (undefined1 *)0x411c7b;
    puStack_2c = (undefined1 *)0x411c73;
    FUN_004114f0(local_8);
    return;
  }
  *in_FS_OFFSET = uStack_24;
  puStack_1c = &LAB_00411c98;
  puStack_20 = (undefined1 *)0x411c90;
  System__LStrClr(&local_c);
  return;
}


/* ==== 00411ca0 TStrings.virtual_020 ==== */

void TStrings_virtual_020(int *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(*param_1 + 0x18))(param_1,param_2);
  (**(code **)(*param_1 + 0x44))(param_1,param_2);
  FUN_00411ac0(param_1,param_2,param_3,uVar1);
  return;
}


/* ==== 00411cd0 TStrings.virtual_024 ==== */

void TStrings_virtual_024(void)

{
  return;
}


/* ==== 00411d84 TStrings.virtual_064 ==== */

void TStrings_virtual_064(int *param_1,undefined *param_2)

{
  int *piVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStackY_18;
  undefined1 *puStackY_14;
  
  puStackY_14 = (undefined1 *)0x411d9e;
  piVar1 = FUN_004128ac((int *)&PTR_THandleStream_virtual_000_0040f0bc,'\x01',param_2,0xffff);
  puStackY_14 = &LAB_00411dcf;
  uStackY_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStackY_18;
  (**(code **)(*param_1 + 0x68))(param_1,piVar1);
  *in_FS_OFFSET = uStackY_18;
  puStackY_14 = (undefined1 *)0x411dce;
  System_TObject_Free(piVar1);
  return;
}


/* ==== 00411ddc TStrings.virtual_068 ==== */

void TStrings_virtual_068(int *param_1,int *param_2)

{
  int iVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  int local_8;
  
  puStack_14 = &stack0xfffffffc;
  local_8 = 0;
  puStack_18 = &LAB_00411e29;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  (**(code **)(*param_1 + 0x1c))(param_1,&local_8);
  iVar1 = System__LStrLen(local_8);
  FUN_004126f0(param_2,local_8,iVar1);
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_00411e30;
  puStack_18 = (undefined1 *)0x411e28;
  System__LStrClr(&local_8);
  return;
}


/* ==== 00411e38 TStrings.virtual_028 ==== */

void TStrings_virtual_028(void)

{
  return;
}


/* ==== 00411e3c FUN_00411e3c ==== */

void FUN_00411e3c(int param_1,int *param_2)

{
  if (*(int *)(param_1 + 8) != 0) {
    (**(code **)(**(int **)(param_1 + 8) + 0x10))();
  }
  FUN_00405878((int *)(param_1 + 8),param_2);
  if (*(int *)(param_1 + 8) != 0) {
    (**(code **)(**(int **)(param_1 + 8) + 0xc))(*(int **)(param_1 + 8),param_1);
  }
  return;
}


/* ==== 00411e70 TStrings.virtual_06c ==== */

void TStrings_virtual_06c(int *param_1,char *param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  int local_8;
  
  puStack_14 = &stack0xfffffffc;
  local_8 = 0;
  puStack_18 = &LAB_00411eb3;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  FUN_00403e14(&local_8,param_2);
  (**(code **)(*param_1 + 0x2c))(param_1,local_8);
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_00411eba;
  puStack_18 = (undefined1 *)0x411eb2;
  System__LStrClr(&local_8);
  return;
}


/* ==== 00411ec0 TStrings.virtual_02c ==== */

void TStrings_virtual_02c(int *param_1,char *param_2)

{
  char cVar1;
  char *pcVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  int local_c;
  int *local_8;
  
  puStack_14 = &stack0xfffffffc;
  local_c = 0;
  puStack_18 = &LAB_00411f74;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  puStack_20 = (undefined1 *)0x411ee7;
  local_8 = param_1;
  FUN_00411434(param_1);
  puStack_24 = &LAB_00411f57;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  puStack_20 = &stack0xfffffffc;
  (**(code **)(*local_8 + 0x40))();
  if (param_2 != (char *)0x0) {
    while (pcVar2 = param_2, *param_2 != '\0') {
      for (; ((cVar1 = *pcVar2, cVar1 != '\0' && (cVar1 != '\n')) && (cVar1 != '\r'));
          pcVar2 = pcVar2 + 1) {
      }
      System__LStrFromPCharLen(&local_c,(undefined4 *)param_2,(int)pcVar2 - (int)param_2);
      (**(code **)(*local_8 + 0x34))(local_8,local_c);
      param_2 = pcVar2;
      if (*pcVar2 == '\r') {
        param_2 = pcVar2 + 1;
      }
      if (*param_2 == '\n') {
        param_2 = param_2 + 1;
      }
    }
  }
  *in_FS_OFFSET = uStack_28;
  puStack_20 = &LAB_00411f5e;
  puStack_24 = (undefined1 *)0x411f56;
  FUN_004114f0(local_8);
  return;
}


/* ==== 00411f80 TStrings.virtual_030 ==== */

void TStrings_virtual_030(void)

{
  return;
}


/* ==== 00411f84 FUN_00411f84 ==== */

void FUN_00411f84(int *param_1,undefined *param_2,int param_3)

{
  int iVar1;
  undefined4 *in_FS_OFFSET;
  int iVar2;
  undefined *puVar3;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  int local_c;
  int local_8;
  
  puStack_1c = &stack0xfffffffc;
  local_c = 0;
  puStack_20 = &LAB_0041200e;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  local_8 = param_3;
  iVar1 = FUN_004119c8(param_1,param_2);
  if (local_8 == 0) {
    if (-1 < iVar1) {
      (**(code **)(*param_1 + 0x44))(param_1,iVar1);
    }
  }
  else {
    if (iVar1 < 0) {
      iVar1 = (**(code **)(*param_1 + 0x34))(param_1,0);
    }
    puVar3 = &DAT_00412024;
    iVar2 = local_8;
    System__LStrCatN(&local_c,3);
    (**(code **)(*param_1 + 0x20))(param_1,iVar1,local_c,iVar2,puVar3,param_2);
  }
  *in_FS_OFFSET = uStack_24;
  puStack_1c = &LAB_00412015;
  puStack_20 = (undefined1 *)0x41200d;
  System__LStrClr(&local_c);
  return;
}


/* ==== 004120ac TStringList.Destroy ==== */

void TStringList_Destroy(int *param_1,char param_2)

{
  int *piVar1;
  byte extraout_DL;
  
  piVar1 = System__BeforeDestruction(param_1,param_2);
  piVar1[8] = 0;
  piVar1[9] = 0;
  piVar1[10] = 0;
  piVar1[0xb] = 0;
  TStrings_Destroy(piVar1,extraout_DL & 0xfc);
  if (piVar1[4] != 0) {
    FUN_00404578((VARIANTARG *)piVar1[3],"\x0e\vTStringItem\b",piVar1[4]);
  }
  piVar1[4] = 0;
  (**(code **)(*piVar1 + 0x28))(piVar1,0);
  if ('\0' < (char)extraout_DL) {
    System__ClassDestroy(piVar1);
  }
  return;
}


/* ==== 00412108 TStringList.virtual_034 ==== */

int TStringList_virtual_034(int *param_1,undefined4 *param_2,int param_3)

{
  char cVar1;
  int local_10;
  
  if ((char)param_1[6] == '\0') {
    local_10 = param_1[4];
  }
  else {
    local_10 = param_3;
    cVar1 = (**(code **)(*param_1 + 0x78))(param_1,param_2,&local_10);
    if (cVar1 != '\0') {
      if (*(char *)((int)param_1 + 0x19) == '\0') {
        return local_10;
      }
      if (*(char *)((int)param_1 + 0x19) == '\x02') {
        FUN_004115e8(param_1,(undefined4 *)PTR_PTR_004ab6f8,0);
      }
    }
  }
  FUN_00412430(param_1,local_10,param_2);
  return local_10;
}


/* ==== 00412160 TStringList.virtual_070 ==== */

void TStringList_virtual_070(int param_1)

{
  if ((*(int *)(param_1 + 4) == 0) && (*(short *)(param_1 + 0x22) != 0)) {
    (**(code **)(param_1 + 0x20))(*(undefined4 *)(param_1 + 0x24),param_1);
  }
  return;
}


/* ==== 0041217c TStringList.virtual_074 ==== */

void TStringList_virtual_074(int param_1)

{
  if ((*(int *)(param_1 + 4) == 0) && (*(short *)(param_1 + 0x2a) != 0)) {
    (**(code **)(param_1 + 0x28))(*(undefined4 *)(param_1 + 0x2c),param_1);
  }
  return;
}


/* ==== 00412198 TStringList.virtual_040 ==== */

void TStringList_virtual_040(int *param_1)

{
  if (param_1[4] != 0) {
    (**(code **)(*param_1 + 0x74))();
    FUN_00404578((VARIANTARG *)param_1[3],"\x0e\vTStringItem\b",param_1[4]);
    param_1[4] = 0;
    (**(code **)(*param_1 + 0x28))(param_1,0);
    (**(code **)(*param_1 + 0x70))();
  }
  return;
}


/* ==== 004121d0 TStringList.virtual_044 ==== */

void TStringList_virtual_044(int *param_1,int param_2)

{
  if ((param_2 < 0) || (param_1[4] <= param_2)) {
    FUN_004115e8(param_1,(undefined4 *)PTR_PTR_004ab930,param_2);
  }
  (**(code **)(*param_1 + 0x74))();
  FUN_00404660((VARIANTARG *)(param_1[3] + param_2 * 8),"\x0e\vTStringItem\b");
  param_1[4] = param_1[4] + -1;
  if (param_2 < param_1[4]) {
    System_Move((undefined4 *)(param_1[3] + 8 + param_2 * 8),
                (undefined4 *)(param_1[3] + param_2 * 8),(param_1[4] - param_2) * 8);
  }
  (**(code **)(*param_1 + 0x70))();
  return;
}


/* ==== 00412234 TStringList.virtual_048 ==== */

void TStringList_virtual_048(int *param_1,int param_2,int param_3)

{
  if ((param_2 < 0) || (param_1[4] <= param_2)) {
    FUN_004115e8(param_1,(undefined4 *)PTR_PTR_004ab930,param_2);
  }
  if ((param_3 < 0) || (param_1[4] <= param_3)) {
    FUN_004115e8(param_1,(undefined4 *)PTR_PTR_004ab930,param_3);
  }
  (**(code **)(*param_1 + 0x74))();
  FUN_0041228c((int)param_1,param_2,param_3);
  (**(code **)(*param_1 + 0x70))();
  return;
}


/* ==== 0041228c FUN_0041228c ==== */

void FUN_0041228c(int param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  
  puVar1 = (undefined4 *)(*(int *)(param_1 + 0xc) + param_2 * 8);
  puVar2 = (undefined4 *)(*(int *)(param_1 + 0xc) + param_3 * 8);
  uVar3 = *puVar1;
  *puVar1 = *puVar2;
  *puVar2 = uVar3;
  uVar3 = puVar1[1];
  puVar1[1] = puVar2[1];
  puVar2[1] = uVar3;
  return;
}


/* ==== 004122b0 TStringList.virtual_078 ==== */

undefined1 TStringList_virtual_078(int param_1,undefined *param_2,uint *param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined1 local_14;
  
  local_14 = 0;
  uVar3 = 0;
  iVar4 = *(int *)(param_1 + 0x10) + -1;
  if (-1 < iVar4) {
    do {
      uVar2 = iVar4 + uVar3 >> 1;
      iVar1 = FUN_00408364(*(undefined **)(*(int *)(param_1 + 0xc) + uVar2 * 8),param_2);
      if (iVar1 < 0) {
        uVar3 = uVar2 + 1;
      }
      else {
        iVar4 = uVar2 - 1;
        if ((iVar1 == 0) && (local_14 = 1, *(char *)(param_1 + 0x19) != '\x01')) {
          uVar3 = uVar2;
        }
      }
    } while ((int)uVar3 <= iVar4);
  }
  *param_3 = uVar3;
  return local_14;
}


/* ==== 00412318 TStringList.virtual_00c ==== */

void TStringList_virtual_00c(int param_1,int param_2,int *param_3)

{
  if ((param_2 < 0) || (*(int *)(param_1 + 0x10) <= param_2)) {
    FUN_004115e8(param_1,(undefined4 *)PTR_PTR_004ab930,param_2);
  }
  System__LStrAsg(param_3,*(undefined4 **)(*(int *)(param_1 + 0xc) + param_2 * 8));
  return;
}


/* ==== 0041234c TStringList.virtual_010 ==== */

undefined4 TStringList_virtual_010(int param_1)

{
  return *(undefined4 *)(param_1 + 0x14);
}


/* ==== 00412350 TStringList.virtual_014 ==== */

undefined4 TStringList_virtual_014(int param_1)

{
  return *(undefined4 *)(param_1 + 0x10);
}


/* ==== 00412354 TStringList.virtual_018 ==== */

undefined4 TStringList_virtual_018(int param_1,int param_2)

{
  if ((param_2 < 0) || (*(int *)(param_1 + 0x10) <= param_2)) {
    FUN_004115e8(param_1,(undefined4 *)PTR_PTR_004ab930,param_2);
  }
  return *(undefined4 *)(*(int *)(param_1 + 0xc) + 4 + param_2 * 8);
}


/* ==== 0041237c FUN_0041237c ==== */

void FUN_0041237c(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1[5];
  if (iVar1 < 0x41) {
    if (iVar1 < 9) {
      iVar2 = 4;
    }
    else {
      iVar2 = 0x10;
    }
  }
  else {
    iVar2 = iVar1;
    if (iVar1 < 0) {
      iVar2 = iVar1 + 3;
    }
    iVar2 = iVar2 >> 2;
  }
  (**(code **)(*param_1 + 0x28))(param_1,iVar2 + iVar1);
  return;
}


/* ==== 004123b0 TStringList.virtual_050 ==== */

undefined4 TStringList_virtual_050(int *param_1,undefined *param_2,undefined4 param_3)

{
  char cVar1;
  undefined4 local_c;
  
  local_c = param_3;
  if ((char)param_1[6] == '\0') {
    local_c = TStrings_virtual_050(param_1,param_2);
  }
  else {
    cVar1 = (**(code **)(*param_1 + 0x78))(param_1,param_2,&local_c);
    if (cVar1 == '\0') {
      local_c = 0xffffffff;
    }
  }
  return local_c;
}


/* ==== 004123e8 TStringList.virtual_054 ==== */

void TStringList_virtual_054(int *param_1,int param_2,undefined4 *param_3)

{
  if ((char)param_1[6] != '\0') {
    FUN_004115e8(param_1,(undefined4 *)PTR_PTR_004ab7bc,0);
  }
  if ((param_2 < 0) || (param_1[4] < param_2)) {
    FUN_004115e8(param_1,(undefined4 *)PTR_PTR_004ab930,param_2);
  }
  FUN_00412430(param_1,param_2,param_3);
  return;
}


/* ==== 00412430 FUN_00412430 ==== */

void FUN_00412430(int *param_1,int param_2,undefined4 *param_3)

{
  int *piVar1;
  
  (**(code **)(*param_1 + 0x74))();
  if (param_1[4] == param_1[5]) {
    FUN_0041237c(param_1);
  }
  if (param_2 < param_1[4]) {
    System_Move((undefined4 *)(param_1[3] + param_2 * 8),
                (undefined4 *)(param_1[3] + 8 + param_2 * 8),(param_1[4] - param_2) * 8);
  }
  piVar1 = (int *)(param_1[3] + param_2 * 8);
  *piVar1 = 0;
  piVar1[1] = 0;
  System__LStrAsg(piVar1,param_3);
  param_1[4] = param_1[4] + 1;
  (**(code **)(*param_1 + 0x70))();
  return;
}


/* ==== 00412498 TStringList.virtual_020 ==== */

void TStringList_virtual_020(int *param_1,int param_2,undefined4 *param_3)

{
  if ((char)param_1[6] != '\0') {
    FUN_004115e8(param_1,(undefined4 *)PTR_PTR_004ab7bc,0);
  }
  if ((param_2 < 0) || (param_1[4] <= param_2)) {
    FUN_004115e8(param_1,(undefined4 *)PTR_PTR_004ab930,param_2);
  }
  (**(code **)(*param_1 + 0x74))();
  System__LStrAsg((int *)(param_1[3] + param_2 * 8),param_3);
  (**(code **)(*param_1 + 0x70))();
  return;
}


/* ==== 004124f0 TStringList.virtual_024 ==== */

void TStringList_virtual_024(int *param_1,int param_2,undefined4 param_3)

{
  if ((param_2 < 0) || (param_1[4] <= param_2)) {
    FUN_004115e8(param_1,(undefined4 *)PTR_PTR_004ab930,param_2);
  }
  (**(code **)(*param_1 + 0x74))();
  *(undefined4 *)(param_1[3] + 4 + param_2 * 8) = param_3;
  (**(code **)(*param_1 + 0x70))();
  return;
}


/* ==== 0041252c FUN_0041252c ==== */

void FUN_0041252c(int param_1,uint param_2,uint param_3,undefined *param_4)

{
  uint uVar1;
  int iVar2;
  uint i_val;
  uint j;
  uint local_14;
  uint local_c;
  
  local_c = param_2;
  do {
    local_14 = local_c + param_3 >> 1;
    i_val = local_c;
    j = param_3;
    do {
      while (iVar2 = (*(code *)param_4)(param_1,i_val,local_14), iVar2 < 0) {
        i_val = i_val + 1;
      }
      while (iVar2 = (*(code *)param_4)(param_1,j,local_14), 0 < iVar2) {
        j = j - 1;
      }
      if ((int)i_val <= (int)j) {
        FUN_0041228c(param_1,i_val,j);
        uVar1 = j;
        if ((i_val != local_14) && (uVar1 = local_14, j == local_14)) {
          uVar1 = i_val;
        }
        local_14 = uVar1;
        i_val = i_val + 1;
        j = j - 1;
      }
    } while ((int)i_val <= (int)j);
    if ((int)local_c < (int)j) {
      FUN_0041252c(param_1,local_c,j,param_4);
    }
    local_c = i_val;
  } while ((int)i_val < (int)param_3);
  return;
}


/* ==== 004125c0 TStringList.virtual_028 ==== */

void TStringList_virtual_028(int param_1,int param_2)

{
  FUN_004027ac((int *)(param_1 + 0xc),param_2 << 3);
  *(int *)(param_1 + 0x14) = param_2;
  return;
}


/* ==== 004125dc FUN_004125dc ==== */

void FUN_004125dc(int *param_1,char param_2)

{
  if (param_2 != (char)param_1[6]) {
    if (param_2 != '\0') {
      (**(code **)(*param_1 + 0x7c))();
    }
    *(char *)(param_1 + 6) = param_2;
  }
  return;
}


/* ==== 004125f8 TStringList.virtual_030 ==== */

void TStringList_virtual_030(int *param_1,char param_2)

{
  if (param_2 != '\0') {
    (**(code **)(*param_1 + 0x74))();
    return;
  }
  (**(code **)(*param_1 + 0x70))();
  return;
}


/* ==== 00412620 TStringList.virtual_07c ==== */

void TStringList_virtual_07c(int *param_1)

{
  (**(code **)(*param_1 + 0x80))(param_1,&LAB_00412608);
  return;
}


/* ==== 00412630 TStringList.virtual_080 ==== */

void TStringList_virtual_080(int *param_1,undefined *param_2)

{
  if (((char)param_1[6] == '\0') && (1 < param_1[4])) {
    (**(code **)(*param_1 + 0x74))();
    FUN_0041252c((int)param_1,0,param_1[4] - 1,param_2);
    (**(code **)(*param_1 + 0x70))();
  }
  return;
}


/* ==== 00412664 FUN_00412664 ==== */

void FUN_00412664(int *param_1)

{
  (**(code **)(*param_1 + 0xc))(param_1,0,1);
  return;
}


/* ==== 00412674 FUN_00412674 ==== */

void FUN_00412674(int *param_1,undefined4 param_2)

{
  (**(code **)(*param_1 + 0xc))(param_1,param_2,0);
  return;
}


/* ==== 00412680 FUN_00412680 ==== */

undefined4 FUN_00412680(int *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined2 extraout_var;
  
  uVar1 = (**(code **)(*param_1 + 0xc))(param_1,0,1);
  uVar2 = (**(code **)(*param_1 + 0xc))(param_1,0,CONCAT22(extraout_var,2));
  (**(code **)(*param_1 + 0xc))(param_1,uVar1,0);
  return uVar2;
}


/* ==== 004126b4 TStream.virtual_000 ==== */

void TStream_virtual_000(void)

{
  return;
}


/* ==== 004126b8 FUN_004126b8 ==== */

void FUN_004126b8(int *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  
  if (param_3 != 0) {
    iVar1 = (**(code **)(*param_1 + 4))(param_1,param_2,param_3);
    if (param_3 != iVar1) {
      piVar2 = SysUtils_Exception_CreateRes
                         ((int *)&DAT_0040e6dc,'\x01',(undefined4 *)PTR_PTR_004ab99c);
      System__RaiseExcept(piVar2);
    }
  }
  return;
}


/* ==== 004126f0 FUN_004126f0 ==== */

void FUN_004126f0(int *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  
  if (param_3 != 0) {
    iVar1 = (**(code **)(*param_1 + 8))(param_1,param_2,param_3);
    if (param_3 != iVar1) {
      piVar2 = SysUtils_Exception_CreateRes
                         ((int *)&DAT_0040e734,'\x01',(undefined4 *)PTR_PTR_004ab82c);
      System__RaiseExcept(piVar2);
    }
  }
  return;
}


/* ==== 00412728 FUN_00412728 ==== */

void FUN_00412728(int *param_1,int *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_30;
  undefined1 *puStack_2c;
  undefined1 *puStack_28;
  int local_14;
  
  if (param_3 == 0) {
    puStack_28 = (undefined1 *)0x412747;
    FUN_00412674(param_2,0);
    puStack_28 = (undefined1 *)0x41274f;
    param_3 = FUN_00412680(param_2);
  }
  local_14 = param_3;
  if (0xf000 < param_3) {
    local_14 = 0xf000;
  }
  puStack_28 = (undefined1 *)0x412770;
  iVar1 = System__GetMem(local_14);
  puStack_2c = &LAB_004127cb;
  uStack_30 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_30;
  puStack_28 = &stack0xfffffffc;
  for (; param_3 != 0; param_3 = param_3 - iVar2) {
    iVar2 = param_3;
    if (local_14 < param_3) {
      iVar2 = local_14;
    }
    FUN_004126b8(param_2,iVar1,iVar2);
    FUN_004126f0(param_1,iVar1,iVar2);
  }
  *in_FS_OFFSET = uStack_30;
  puStack_28 = &LAB_004127d2;
  puStack_2c = (undefined1 *)0x4127ca;
  System__FreeMem(iVar1);
  return;
}


/* ==== 004127dc FUN_004127dc ==== */

void FUN_004127dc(int param_1,int *param_2)

{
  int *piVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStackY_1c;
  undefined1 *puStackY_18;
  
  puStackY_18 = (undefined1 *)0x4127f8;
  piVar1 = FUN_00412ce0((int *)&PTR_TFiler_virtual_000_0040f470,'\x01',param_1,0x1000);
  puStackY_18 = &LAB_0041282c;
  uStackY_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStackY_1c;
  FUN_00414a5c(piVar1,param_2);
  *in_FS_OFFSET = uStackY_1c;
  puStackY_18 = (undefined1 *)0x41282b;
  System_TObject_Free(piVar1);
  return;
}


/* ==== 0041283c FUN_0041283c ==== */

void FUN_0041283c(int *param_1,char param_2,int param_3)

{
  int extraout_ECX;
  char extraout_DL;
  char cVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_00000000;
  undefined4 in_stack_fffffff0;
  undefined4 in_stack_fffffff4;
  
  cVar1 = '\0';
  if (param_2 != '\0') {
    param_1 = (int *)System__ClassCreate((int)param_1,param_2,param_3,in_stack_fffffff0,
                                         in_stack_fffffff4);
    param_3 = extraout_ECX;
    cVar1 = extraout_DL;
  }
  param_1[1] = param_3;
  if (cVar1 != '\0') {
    System__AfterConstruction(param_1);
    *in_FS_OFFSET = in_stack_00000000;
  }
  return;
}


/* ==== 00412860 THandleStream.virtual_004 ==== */

DWORD THandleStream_virtual_004(int param_1,LPVOID buffer,DWORD number_of_bytes_to_read)

{
  DWORD DVar1;
  
  DVar1 = FUN_004086d0(*(HANDLE *)(param_1 + 4),buffer,number_of_bytes_to_read);
  if (DVar1 == 0xffffffff) {
    DVar1 = 0;
  }
  return DVar1;
}


/* ==== 00412870 THandleStream.virtual_008 ==== */

DWORD THandleStream_virtual_008(int param_1,LPCVOID buffer,DWORD number_of_bytes_to_write)

{
  DWORD DVar1;
  
  DVar1 = FUN_004086fc(*(HANDLE *)(param_1 + 4),buffer,number_of_bytes_to_write);
  if (DVar1 == 0xffffffff) {
    DVar1 = 0;
  }
  return DVar1;
}


/* ==== 00412880 THandleStream.virtual_00c ==== */

void THandleStream_virtual_00c(int param_1,LONG distance_to_move,uint param_3)

{
  FUN_00408728(*(HANDLE *)(param_1 + 4),distance_to_move,param_3 & 0xffff);
  return;
}


/* ==== 0041288c THandleStream.virtual_000 ==== */

void THandleStream_virtual_000(int *param_1,undefined4 param_2)

{
  BOOL BVar1;
  
  (**(code **)(*param_1 + 0xc))(param_1,param_2,0);
  BVar1 = SetEndOfFile((HANDLE)param_1[1]);
  FUN_0040c76c(BVar1);
  return;
}


/* ==== 004128ac FUN_004128ac ==== */

int * FUN_004128ac(int *param_1,char param_2,undefined *param_3,ushort param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined *extraout_ECX;
  char extraout_DL;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_ffffffd4;
  undefined4 in_stack_ffffffd8;
  undefined *local_10;
  undefined1 local_c;
  char local_5;
  
  local_5 = '\0';
  if (param_2 != '\0') {
    param_1 = (int *)System__ClassCreate((int)param_1,param_2,param_3,in_stack_ffffffd4,
                                         in_stack_ffffffd8);
    param_3 = extraout_ECX;
    local_5 = extraout_DL;
  }
  if (param_4 == 0xffff) {
    iVar1 = FUN_004086ac(param_3);
    param_1[1] = iVar1;
    if (iVar1 < 0) {
      local_c = 0xb;
      local_10 = param_3;
      uVar2 = FUN_0040b6d0((int)&DAT_0040e5d0,'\x01',(undefined4 *)PTR_PTR_004ab93c,0,&local_10);
      System__RaiseExcept(uVar2);
    }
  }
  else {
    iVar1 = FUN_0040866c(param_3,(uint)param_4);
    param_1[1] = iVar1;
    if (param_1[1] < 0) {
      local_c = 0xb;
      local_10 = param_3;
      uVar2 = FUN_0040b6d0((int)&DAT_0040e62c,'\x01',(undefined4 *)PTR_PTR_004ab954,0,&local_10);
      System__RaiseExcept(uVar2);
    }
  }
  if (local_5 != '\0') {
    System__AfterConstruction(param_1);
    *in_FS_OFFSET = in_stack_ffffffd4;
  }
  return param_1;
}


/* ==== 00412964 TFileStream.Destroy ==== */

void TFileStream_Destroy(int *param_1,char param_2)

{
  int *piVar1;
  char extraout_DL;
  
  piVar1 = System__BeforeDestruction(param_1,param_2);
  if (-1 < piVar1[1]) {
    FUN_00408734((HANDLE)piVar1[1]);
  }
  if ('\0' < extraout_DL) {
    System__ClassDestroy(piVar1);
  }
  return;
}


/* ==== 0041298c FUN_0041298c ==== */

void FUN_0041298c(int param_1,undefined4 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 4) = param_2;
  *(undefined4 *)(param_1 + 8) = param_3;
  return;
}


/* ==== 00412994 TCustomMemoryStream.virtual_004 ==== */

uint TCustomMemoryStream_virtual_004(int param_1,undefined4 *param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)(param_1 + 0xc);
  if (((iVar1 < 0) || ((int)param_3 < 0)) || (uVar2 = *(int *)(param_1 + 8) - iVar1, (int)uVar2 < 1)
     ) {
    uVar2 = 0;
  }
  else {
    if ((int)param_3 < (int)uVar2) {
      uVar2 = param_3;
    }
    System_Move((undefined4 *)(*(int *)(param_1 + 4) + iVar1),param_2,uVar2);
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + uVar2;
  }
  return uVar2;
}


/* ==== 004129cc TCustomMemoryStream.virtual_00c ==== */

undefined4 TCustomMemoryStream_virtual_00c(int param_1,int param_2,short param_3)

{
  if (param_3 == 0) {
    *(int *)(param_1 + 0xc) = param_2;
  }
  else if (param_3 == 1) {
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + param_2;
  }
  else if (param_3 == 2) {
    *(int *)(param_1 + 0xc) = param_2 + *(int *)(param_1 + 8);
  }
  return *(undefined4 *)(param_1 + 0xc);
}


/* ==== 004129f0 TMemoryStream.Destroy ==== */

void TMemoryStream_Destroy(int *param_1,char param_2)

{
  int *piVar1;
  byte extraout_DL;
  
  piVar1 = System__BeforeDestruction(param_1,param_2);
  FUN_00412a1c(piVar1);
  TObject_Destroy(piVar1,extraout_DL & 0xfc);
  if ('\0' < (char)extraout_DL) {
    System__ClassDestroy(piVar1);
  }
  return;
}


/* ==== 00412a1c FUN_00412a1c ==== */

void FUN_00412a1c(int *param_1)

{
  FUN_00412a34(param_1,0);
  param_1[2] = 0;
  param_1[3] = 0;
  return;
}


/* ==== 00412a34 FUN_00412a34 ==== */

void FUN_00412a34(int *param_1,int param_2)

{
  undefined4 uVar1;
  int local_8;
  
  local_8 = param_2;
  uVar1 = (**(code **)(*param_1 + 0x10))(param_1,&local_8);
  FUN_0041298c((int)param_1,uVar1,param_1[2]);
  param_1[4] = local_8;
  return;
}


/* ==== 00412a5c TMemoryStream.virtual_000 ==== */

void TMemoryStream_virtual_000(int *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = param_1[3];
  FUN_00412a34(param_1,param_2);
  param_1[2] = param_2;
  if (param_2 < iVar1) {
    (**(code **)(*param_1 + 0xc))(param_1,0,2);
  }
  return;
}


/* ==== 00412a88 TMemoryStream.virtual_010 ==== */

LPCVOID TMemoryStream_virtual_010(int param_1,SIZE_T *param_2)

{
  int *piVar1;
  LPCVOID mem;
  LPCVOID extraout_ECX;
  
  if (0 < (int)*param_2) {
    *param_2 = *param_2 + 0x1fff & 0xffffe000;
  }
  mem = *(LPCVOID *)(param_1 + 4);
  if (*param_2 != *(SIZE_T *)(param_1 + 0x10)) {
    if (*param_2 == 0) {
      FUN_004070c8(mem);
      mem = (LPCVOID)0x0;
    }
    else {
      if (*(SIZE_T *)(param_1 + 0x10) == 0) {
        mem = (LPCVOID)FUN_0040709c((uint)*(ushort *)PTR_DAT_004ab948,*param_2);
      }
      else {
        mem = (LPCVOID)FUN_004070ac(mem,*param_2,(uint)*(ushort *)PTR_DAT_004ab948);
      }
      if (mem == (LPCVOID)0x0) {
        piVar1 = SysUtils_Exception_CreateRes
                           ((int *)&DAT_0040e574,'\x01',(undefined4 *)PTR_PTR_004ab9bc);
        System__RaiseExcept(piVar1);
        mem = extraout_ECX;
      }
    }
  }
  return mem;
}


/* ==== 00412b0c TMemoryStream.virtual_008 ==== */

uint TMemoryStream_virtual_008(int *param_1,undefined4 *param_2,uint param_3)

{
  int iVar1;
  
  if (((param_1[3] < 0) || ((int)param_3 < 0)) || (iVar1 = param_1[3] + param_3, iVar1 < 1)) {
    param_3 = 0;
  }
  else {
    if (param_1[2] < iVar1) {
      if (param_1[4] < iVar1) {
        FUN_00412a34(param_1,iVar1);
      }
      param_1[2] = iVar1;
    }
    System_Move(param_2,(undefined4 *)(param_1[1] + param_1[3]),param_3);
    param_1[3] = iVar1;
  }
  return param_3;
}


/* ==== 00412b5c FUN_00412b5c ==== */

int * FUN_00412b5c(int *param_1,char param_2,HMODULE module,LPCSTR type,undefined *param_5)

{
  LPCSTR name;
  HMODULE extraout_ECX;
  char extraout_DL;
  char cVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_ffffffe0;
  undefined4 in_stack_ffffffe4;
  
  cVar1 = '\0';
  if (param_2 != '\0') {
    param_1 = (int *)System__ClassCreate((int)param_1,param_2,module,in_stack_ffffffe0,
                                         in_stack_ffffffe4);
    module = extraout_ECX;
    cVar1 = extraout_DL;
  }
  System_TObject_Create(param_1,'\0',module);
  name = System__LStrToPChar(param_5);
  FUN_00412c24((int)param_1,module,name,type);
  if (cVar1 != '\0') {
    System__AfterConstruction(param_1);
    *in_FS_OFFSET = in_stack_ffffffe0;
  }
  return param_1;
}


/* ==== 00412bb4 FUN_00412bb4 ==== */

void FUN_00412bb4(void)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  int in_stack_00000004;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  byte *local_10;
  undefined4 local_c;
  undefined1 local_8;
  
  puStack_14 = &stack0xfffffffc;
  local_10 = (byte *)0x0;
  puStack_18 = &LAB_00412c17;
  puStack_1c = (undefined1 *)*in_FS_OFFSET;
  *in_FS_OFFSET = &puStack_1c;
  local_c = *(undefined4 *)(in_stack_00000004 + -4);
  local_8 = 6;
  puVar3 = &local_c;
  uVar2 = 0;
  System_LoadResString((undefined4 *)PTR_PTR_004ab7f0,(int *)&local_10);
  uVar1 = SysUtils_Exception_CreateFmt((int)&DAT_0040e7e8,'\x01',local_10,uVar2,puVar3);
  System__RaiseExcept(uVar1);
  *in_FS_OFFSET = uVar2;
  puStack_1c = &LAB_00412c1e;
  System__LStrClr((int *)&local_10);
  return;
}


/* ==== 00412c24 FUN_00412c24 ==== */

void FUN_00412c24(int param_1,HMODULE module,LPCSTR name,LPCSTR type)

{
  HRSRC pHVar1;
  HGLOBAL resource;
  DWORD DVar2;
  LPVOID lock_resource;
  
  pHVar1 = FindResourceA(module,name,type);
  *(HRSRC *)(param_1 + 0x10) = pHVar1;
  if (pHVar1 == (HRSRC)0x0) {
    FUN_00412bb4();
  }
  resource = LoadResource(module,*(HRSRC *)(param_1 + 0x10));
  *(HGLOBAL *)(param_1 + 0x14) = resource;
  if (resource == (HGLOBAL)0x0) {
    FUN_00412bb4();
  }
  DVar2 = SizeofResource(module,*(HRSRC *)(param_1 + 0x10));
  lock_resource = LockResource(*(HGLOBAL *)(param_1 + 0x14));
  FUN_0041298c(param_1,lock_resource,DVar2);
  return;
}


/* ==== 00412c90 TResourceStream.Destroy ==== */

void TResourceStream_Destroy(int *param_1,char param_2)

{
  int *piVar1;
  byte extraout_DL;
  
  piVar1 = System__BeforeDestruction(param_1,param_2);
  FUN_00407098();
  FreeResource((HGLOBAL)piVar1[5]);
  TObject_Destroy(piVar1,extraout_DL & 0xfc);
  if ('\0' < (char)extraout_DL) {
    System__ClassDestroy(piVar1);
  }
  return;
}


/* ==== 00412cc8 TResourceStream.virtual_008 ==== */

void TResourceStream_virtual_008(void)

{
  int *piVar1;
  
  piVar1 = SysUtils_Exception_CreateRes((int *)&DAT_0040e574,'\x01',(undefined4 *)PTR_PTR_004ab818);
  System__RaiseExcept(piVar1);
  return;
}


/* ==== 00412ce0 FUN_00412ce0 ==== */

int * FUN_00412ce0(int *param_1,char param_2,int param_3,int param_4)

{
  int iVar1;
  int extraout_ECX;
  char extraout_DL;
  char cVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_ffffffe0;
  undefined4 in_stack_ffffffe4;
  
  cVar2 = '\0';
  if (param_2 != '\0') {
    param_1 = (int *)System__ClassCreate((int)param_1,param_2,param_3,in_stack_ffffffe0,
                                         in_stack_ffffffe4);
    param_3 = extraout_ECX;
    cVar2 = extraout_DL;
  }
  param_1[1] = param_3;
  iVar1 = System__GetMem(param_4);
  param_1[2] = iVar1;
  param_1[3] = param_4;
  if (cVar2 != '\0') {
    System__AfterConstruction(param_1);
    *in_FS_OFFSET = in_stack_ffffffe0;
  }
  return param_1;
}


/* ==== 00412d28 TFiler.Destroy ==== */

void TFiler_Destroy(int *param_1,char param_2)

{
  int *piVar1;
  char extraout_DL;
  
  piVar1 = System__BeforeDestruction(param_1,param_2);
  if (piVar1[2] != 0) {
    System__FreeMem(piVar1[2]);
  }
  if ('\0' < extraout_DL) {
    System__ClassDestroy(piVar1);
  }
  return;
}


/* ==== 00412d50 TFiler.virtual_000 ==== */

void TFiler_virtual_000(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x18) = param_2;
  return;
}


/* ==== 00412dc8 FUN_00412dc8 ==== */

int * FUN_00412dc8(int *param_1,char param_2,int param_3,undefined4 *param_4,undefined4 *param_5,
                  int param_6,int param_7)

{
  int extraout_ECX;
  char extraout_DL;
  char cVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_ffffffe4;
  undefined4 in_stack_ffffffe8;
  
  cVar1 = '\0';
  if (param_2 != '\0') {
    param_1 = (int *)System__ClassCreate((int)param_1,param_2,param_3,in_stack_ffffffe4,
                                         in_stack_ffffffe8);
    param_3 = extraout_ECX;
    cVar1 = extraout_DL;
  }
  param_1[1] = param_3;
  param_1[2] = param_7;
  param_1[3] = param_6;
  System__LStrAsg(param_1 + 4,param_5);
  System__LStrAsg(param_1 + 5,param_4);
  if (cVar1 != '\0') {
    System__AfterConstruction(param_1);
    *in_FS_OFFSET = in_stack_ffffffe4;
  }
  return param_1;
}


/* ==== 00412e20 FUN_00412e20 ==== */

bool FUN_00412e20(int param_1)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  
  pcVar2 = *(char **)(param_1 + 0x14);
  for (pcVar3 = pcVar2; (*pcVar3 != '\0' && (*pcVar3 != '.')); pcVar3 = pcVar3 + 1) {
  }
  cVar1 = *pcVar3;
  if (cVar1 != '\0') {
    System__LStrFromPCharLen((int *)(param_1 + 0x10),(undefined4 *)pcVar2,(int)pcVar3 - (int)pcVar2)
    ;
    FUN_00404124((int *)(param_1 + 0x14),1,((int)pcVar3 - (int)pcVar2) + 1);
  }
  return cVar1 != '\0';
}


/* ==== 00412e68 FUN_00412e68 ==== */

void FUN_00412e68(int param_1,char *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  char *local_c;
  int local_8;
  
  puStack_1c = &stack0xfffffffc;
  local_c = (char *)0x0;
  puStack_20 = &LAB_00412f0e;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  local_8 = 0;
  iVar1 = local_8;
  if (param_2 != (char *)0x0) {
    while (pcVar4 = param_2, iVar1 = param_1, *param_2 != '\0') {
      for (; (*pcVar4 != '\0' && (1 < (byte)(*pcVar4 - 0x2dU))); pcVar4 = pcVar4 + 1) {
      }
      System__LStrFromPCharLen((int *)&local_c,(undefined4 *)param_2,(int)pcVar4 - (int)param_2);
      iVar2 = FUN_00415a80(param_1,local_c);
      if ((iVar2 == 0) && (uVar3 = FUN_0040830c(local_c,"Owner"), (char)uVar3 != '\0')) {
        iVar2 = param_1;
      }
      iVar1 = local_8;
      if (iVar2 == 0) break;
      param_2 = pcVar4;
      if (*pcVar4 == '.') {
        param_2 = pcVar4 + 1;
      }
      if (*param_2 == '-') {
        param_2 = param_2 + 1;
      }
      param_1 = iVar2;
      if (*param_2 == '>') {
        param_2 = param_2 + 1;
      }
    }
  }
  local_8 = iVar1;
  *in_FS_OFFSET = uStack_24;
  puStack_1c = &LAB_00412f15;
  puStack_20 = (undefined1 *)0x412f0d;
  System__LStrClr((int *)&local_c);
  return;
}


/* ==== 00412f30 FUN_00412f30 ==== */

void FUN_00412f30(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  
  iVar1 = Classes_TList_IndexOf(*(int *)(param_4 + -4),param_1);
  if (iVar1 < 0) {
    iVar1 = Classes_TList_IndexOf(*(int *)(param_4 + -8),param_1);
    if (-1 < iVar1) {
      Classes_TList_Add(*(int **)(param_4 + -4),param_1);
    }
  }
  return;
}


/* ==== 00412f68 FUN_00412f68 ==== */

void FUN_00412f68(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  
  iVar1 = Classes_TList_IndexOf(*(int *)(param_4 + -4),param_1);
  if (iVar1 != -1) {
    Classes_TList_Delete(*(int **)(param_4 + -4),iVar1);
  }
  iVar1 = Classes_TList_IndexOf(*(int *)(param_4 + -8),param_1);
  if (iVar1 < 0) {
    Classes_TList_Add(*(int **)(param_4 + -8),param_1);
  }
  return;
}


/* ==== 00412fb0 FUN_00412fb0 ==== */

void FUN_00412fb0(void)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 extraout_ECX_03;
  undefined4 uVar6;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined4 uVar7;
  int i_val;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_4c;
  undefined1 *puStack_48;
  undefined1 *puStack_44;
  undefined4 uStack_40;
  undefined1 *puStack_3c;
  undefined1 *puStack_38;
  undefined4 uStack_34;
  undefined1 *puStack_30;
  undefined1 *puStack_2c;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  
  if (DAT_004ac61c == (code *)0x0) {
    return;
  }
  puStack_20 = (undefined1 *)0x412fd0;
  FUN_0040c8f8(DAT_004ac618);
  puStack_24 = &LAB_0041315b;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  puStack_2c = (undefined1 *)0x412fe8;
  puStack_20 = &stack0xfffffffc;
  piVar1 = (int *)FUN_00410750(DAT_004ac630);
  puStack_30 = &LAB_0041313c;
  uStack_34 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_34;
  if (piVar1[2] < 1) {
    *in_FS_OFFSET = uStack_34;
    puStack_2c = &LAB_00413143;
    puStack_30 = (undefined1 *)0x41313b;
    FUN_004107b4(DAT_004ac630);
    return;
  }
  puStack_38 = (undefined1 *)0x41300e;
  puStack_2c = &stack0xfffffffc;
  System_TObject_Create((int *)&PTR_TList_virtual_000_0040ea6c,'\x01',extraout_ECX);
  puStack_3c = &LAB_0041311d;
  uStack_40 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_40;
  puStack_44 = (undefined1 *)0x41302b;
  puStack_38 = &stack0xfffffffc;
  piVar2 = (int *)System_TObject_Create
                            ((int *)&PTR_TList_virtual_000_0040ea6c,'\x01',extraout_ECX_00);
  puStack_48 = &LAB_004130cb;
  uStack_4c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_4c;
  i_val = 0;
  puStack_44 = &stack0xfffffffc;
  do {
    while( true ) {
      if (piVar1[2] <= i_val) {
        *in_FS_OFFSET = uStack_4c;
        puStack_44 = &LAB_004130d2;
        puStack_48 = (undefined1 *)0x4130ca;
        System_TObject_Free(piVar2);
        return;
      }
      piVar3 = (int *)Classes_TList_Get(piVar1,i_val);
      iVar4 = (*DAT_004ac61c)(piVar3[4]);
      uVar6 = extraout_ECX_01;
      uVar7 = extraout_EDX;
      if (iVar4 == 0) break;
LAB_0041306c:
      if (iVar4 != 0) {
        iVar4 = FUN_00412e68(iVar4,(char *)piVar3[5]);
        FUN_0040dff4((int *)piVar3[1],(undefined4 *)piVar3[3],iVar4);
        uVar6 = extraout_ECX_03;
        uVar7 = extraout_EDX_01;
      }
      FUN_00412f30(piVar3[1],uVar7,uVar6,(int)&stack0xfffffffc);
      Classes_TList_Delete(piVar1,i_val);
      System_TObject_Free(piVar3);
    }
    uVar5 = FUN_0040df80((int *)piVar3[1],(undefined4 *)piVar3[3]);
    uVar6 = extraout_ECX_02;
    uVar7 = extraout_EDX_00;
    if (uVar5 != 0) goto LAB_0041306c;
    FUN_00412f68(piVar3[1],extraout_EDX_00,extraout_ECX_02,(int)&stack0xfffffffc);
    i_val = i_val + 1;
  } while( true );
}


/* ==== 0041316c FUN_0041316c ==== */

void FUN_0041316c(int param_1,char *param_2)

{
  int *piVar1;
  int *piVar2;
  undefined4 uVar3;
  int i_val;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  
  if (DAT_004ac630 == 0) {
    return;
  }
  puStack_1c = (undefined1 *)0x413192;
  piVar1 = (int *)FUN_00410750(DAT_004ac630);
  puStack_20 = &LAB_00413207;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  i_val = piVar1[2] + -1;
  puStack_1c = &stack0xfffffffc;
  if (-1 < i_val) {
    do {
      piVar2 = (int *)Classes_TList_Get(piVar1,i_val);
      if ((param_1 == 0) || (piVar2[2] == param_1)) {
        if (param_2 != (char *)0x0) {
          uVar3 = FUN_0040830c(param_2,(char *)piVar2[4]);
          if ((char)uVar3 == '\0') goto LAB_004131e9;
        }
        Classes_TList_Delete(piVar1,i_val);
        System_TObject_Free(piVar2);
      }
LAB_004131e9:
      i_val = i_val + -1;
    } while (i_val != -1);
  }
  *in_FS_OFFSET = uStack_24;
  puStack_1c = (undefined1 *)0x41320e;
  puStack_20 = (undefined1 *)0x413206;
  FUN_004107b4(DAT_004ac630);
  return;
}


/* ==== 00413218 FUN_00413218 ==== */

void FUN_00413218(int param_1)

{
  int *piVar1;
  int *piVar2;
  int i_val;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  
  if (DAT_004ac630 != 0) {
    puStack_18 = (undefined1 *)0x413235;
    piVar1 = (int *)FUN_00410750(DAT_004ac630);
    puStack_1c = &LAB_0041328f;
    uStack_20 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_20;
    i_val = piVar1[2] + -1;
    puStack_18 = &stack0xfffffffc;
    if (-1 < i_val) {
      do {
        piVar2 = (int *)Classes_TList_Get(piVar1,i_val);
        if (piVar2[1] == param_1) {
          Classes_TList_Delete(piVar1,i_val);
          System_TObject_Free(piVar2);
        }
        i_val = i_val + -1;
      } while (i_val != -1);
    }
    *in_FS_OFFSET = uStack_20;
    puStack_18 = (undefined1 *)0x413296;
    puStack_1c = (undefined1 *)0x41328e;
    FUN_004107b4(DAT_004ac630);
    return;
  }
  return;
}


/* ==== 0041329c FUN_0041329c ==== */

void FUN_0041329c(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = SysUtils_Exception_CreateRes((int *)&DAT_0040e6dc,'\x01',param_1);
  System__RaiseExcept(piVar1);
  return;
}


/* ==== 004132b4 FUN_004132b4 ==== */

void FUN_004132b4(void)

{
  FUN_0041329c((undefined4 *)PTR_PTR_004ab890);
  return;
}


/* ==== 004132c0 FUN_004132c0 ==== */

void FUN_004132c0(void)

{
  FUN_0041329c((undefined4 *)PTR_PTR_004ab6a4);
  return;
}


/* ==== 004132cc FUN_004132cc ==== */

int FUN_004132cc(char *param_1,byte *param_2)

{
  int iVar1;
  
  iVar1 = FUN_0040deac(param_1,param_2);
  if (iVar1 == -1) {
    FUN_004132b4();
  }
  return iVar1;
}


/* ==== 004132e4 TReader.Destroy ==== */

void TReader_Destroy(int *param_1,char param_2)

{
  int *piVar1;
  byte extraout_DL;
  
  piVar1 = System__BeforeDestruction(param_1,param_2);
  (**(code **)(*(int *)piVar1[1] + 0xc))((int *)piVar1[1],piVar1[4] - piVar1[5],1);
  TFiler_Destroy(piVar1,extraout_DL & 0xfc);
  if ('\0' < (char)extraout_DL) {
    System__ClassDestroy(piVar1);
  }
  return;
}


/* ==== 00413320 FUN_00413320 ==== */

void FUN_00413320(int param_1,undefined4 param_2,uint param_3)

{
  uint uVar1;
  uint extraout_ECX;
  undefined4 extraout_EDX;
  
  uVar1 = FUN_00414ec4(param_1,param_2,param_3);
  if ((char)param_2 != (char)uVar1) {
    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + -1;
    FUN_00415024(param_1,extraout_EDX,extraout_ECX);
    FUN_004132b4();
  }
  return;
}


/* ==== 00413344 TReader.virtual_004 ==== */

void TReader_virtual_004(int param_1,char *param_2)

{
  undefined4 uVar1;
  code *in_stack_0000000c;
  undefined4 in_stack_00000010;
  
  uVar1 = FUN_0040830c(param_2,*(char **)(param_1 + 0x70));
  if (((char)uVar1 != '\0') && (in_stack_0000000c._2_2_ != 0)) {
    (*in_stack_0000000c)(in_stack_00000010,param_1);
    System__LStrClr((int *)(param_1 + 0x70));
  }
  return;
}


/* ==== 00413378 TReader.virtual_008 ==== */

void TReader_virtual_008(int param_1,char *param_2)

{
  undefined4 uVar1;
  uint uVar2;
  uint extraout_ECX;
  uint extraout_ECX_00;
  uint extraout_ECX_01;
  uint uVar3;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 *in_FS_OFFSET;
  code *in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  uint local_10;
  int *local_c;
  int local_8;
  
  puStack_18 = (undefined1 *)0x413391;
  local_8 = param_1;
  uVar1 = FUN_0040830c(param_2,*(char **)(param_1 + 0x70));
  if (((char)uVar1 != '\0') && (in_stack_0000000c._2_2_ != 0)) {
    puStack_18 = (undefined1 *)0x4133ac;
    uVar2 = FUN_00414ec4(local_8,extraout_EDX,extraout_ECX);
    uVar3 = extraout_ECX_00;
    if ((char)uVar2 != '\n') {
      *(int *)(local_8 + 0x10) = *(int *)(local_8 + 0x10) + -1;
      puStack_18 = (undefined1 *)0x4133be;
      FUN_00415024(local_8,extraout_EDX_00,extraout_ECX_00);
      *(undefined1 *)(local_8 + 0x74) = 1;
      puStack_18 = (undefined1 *)0x4133ca;
      FUN_004132b4();
      uVar3 = extraout_ECX_01;
    }
    puStack_18 = (undefined1 *)0x4133d6;
    local_c = (int *)System_TObject_Create
                               ((int *)&PTR_TMemoryStream_virtual_000_0040f194,'\x01',uVar3);
    puStack_1c = &LAB_00413438;
    uStack_20 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_20;
    puStack_18 = &stack0xfffffffc;
    FUN_00413720(local_8,&local_10,4);
    (**(code **)*local_c)(local_c,local_10);
    FUN_00413720(local_8,(undefined4 *)local_c[1],local_10);
    *(undefined1 *)(local_8 + 0x74) = 1;
    (*in_stack_0000000c)(in_stack_00000010,local_c);
    *in_FS_OFFSET = uStack_20;
    puStack_18 = &DAT_0041343f;
    puStack_1c = (undefined1 *)0x413437;
    System_TObject_Free(local_c);
    return;
  }
  return;
}


/* ==== 00413454 FUN_00413454 ==== */

bool FUN_00413454(int param_1,undefined4 param_2,uint param_3)

{
  uint uVar1;
  
  uVar1 = FUN_00414ec4(param_1,param_2,param_3);
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + -1;
  return (char)uVar1 == '\0';
}


/* ==== 00413468 TReader.virtual_010 ==== */

uint TReader_virtual_010(int param_1,undefined4 param_2,uint param_3)

{
  uint local_8;
  
  local_8 = param_3 & 0xffffff00;
  if (*(short *)(param_1 + 0x5a) != 0) {
    param_1 = (**(code **)(param_1 + 0x58))
                        (*(undefined4 *)(param_1 + 0x5c),param_1,param_2,&local_8);
  }
  return CONCAT31((int3)((uint)param_1 >> 8),(undefined1)local_8);
}


/* ==== 00413488 TReader.virtual_018 ==== */

int TReader_virtual_018(int param_1,int *param_2,undefined4 *param_3)

{
  int local_114;
  char local_110 [4];
  byte local_10c [256];
  
  FUN_00403eb8(local_10c,param_3,0xff);
  local_114 = FUN_004031fc(*param_2,local_10c);
  local_110[0] = local_114 == 0;
  if (*(short *)(param_1 + 0x3a) != 0) {
    (**(code **)(param_1 + 0x38))
              (*(undefined4 *)(param_1 + 0x3c),param_1,param_3,local_110,&local_114);
  }
  if (local_110[0] != '\0') {
    FUN_004132b4();
  }
  return local_114;
}


/* ==== 004134f0 FUN_004134f0 ==== */

void FUN_004134f0(int param_1)

{
  int *piVar1;
  int *piVar2;
  int i_val;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  
  puStack_14 = (undefined1 *)0x413502;
  piVar1 = (int *)FUN_00410750(DAT_004ac630);
  puStack_18 = &LAB_00413560;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  i_val = piVar1[2] + -1;
  puStack_14 = &stack0xfffffffc;
  if (-1 < i_val) {
    do {
      piVar2 = (int *)Classes_TList_Get(piVar1,i_val);
      if ((piVar2[1] == *(int *)(param_1 + 4)) && (piVar2[3] == *(int *)(param_1 + 0xc))) {
        System_TObject_Free(piVar2);
        Classes_TList_Delete(piVar1,i_val);
      }
      i_val = i_val + -1;
    } while (i_val != -1);
  }
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_00413567;
  puStack_18 = (undefined1 *)0x41355f;
  FUN_004107b4(DAT_004ac630);
  return;
}


/* ==== 0041356c FUN_0041356c ==== */

void FUN_0041356c(int *param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int i_val;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_34;
  undefined1 *puStack_30;
  undefined1 *puStack_2c;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  int j;
  char *local_c;
  int *local_8;
  
  puStack_20 = &stack0xfffffffc;
  puStack_2c = &stack0xfffffffc;
  local_c = (char *)0x0;
  puStack_24 = &LAB_00413680;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  i_val = param_1[0xc];
  local_8 = param_1;
  if (i_val == 0) {
    *in_FS_OFFSET = uStack_28;
    puStack_20 = &LAB_00413687;
    puStack_24 = (undefined1 *)0x41367f;
    System__LStrClr((int *)&local_c);
    return;
  }
  puStack_30 = &LAB_00413663;
  uStack_34 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_34;
  j = *(int *)(i_val + 8);
  if (-1 < j + -1) {
    i_val = 0;
    puStack_20 = &stack0xfffffffc;
    do {
      iVar2 = Classes_TList_Get((undefined4 *)local_8[0xc],i_val);
      System__LStrLAsg((int *)&local_c,*(int *)(iVar2 + 0x14));
      (**(code **)(*local_8 + 0x20))(local_8,&local_c);
      iVar3 = FUN_00412e68(*(int *)(iVar2 + 8),local_c);
      iVar4 = Classes_TList_Get((undefined4 *)local_8[0xc],i_val);
      FUN_004134f0(iVar4);
      if (iVar3 == 0) {
        bVar1 = FUN_00412e20(iVar2);
        if (!bVar1) goto LAB_00413636;
        iVar2 = Classes_TList_Get((undefined4 *)local_8[0xc],i_val);
        FUN_004106c8(DAT_004ac630,iVar2);
        FUN_004103fc((int *)local_8[0xc],i_val,0);
      }
      else {
LAB_00413636:
        FUN_0040dff4(*(int **)(iVar2 + 4),*(undefined4 **)(iVar2 + 0xc),iVar3);
      }
      i_val = i_val + 1;
      j = j + -1;
    } while (j != 0);
  }
  *in_FS_OFFSET = uStack_34;
  puStack_2c = (undefined1 *)0x41366a;
  puStack_30 = (undefined1 *)0x413662;
  FUN_004136b0((int)local_8);
  return;
}


/* ==== 00413690 TReader.virtual_00c ==== */

void TReader_virtual_00c(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_004136ec(param_1);
  FUN_00412674(*(int **)(param_1 + 4),iVar1);
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  return;
}


/* ==== 004136b0 FUN_004136b0 ==== */

void FUN_004136b0(int param_1)

{
  int *piVar1;
  int i_val;
  int j;
  
  if (*(int *)(param_1 + 0x30) != 0) {
    i_val = *(int *)(*(int *)(param_1 + 0x30) + 8);
    if (-1 < i_val + -1) {
      j = 0;
      do {
        piVar1 = (int *)Classes_TList_Get(*(undefined4 **)(param_1 + 0x30),j);
        System_TObject_Free(piVar1);
        j = j + 1;
        i_val = i_val + -1;
      } while (i_val != 0);
    }
    System_TObject_Free(*(int **)(param_1 + 0x30));
    *(undefined4 *)(param_1 + 0x30) = 0;
  }
  return;
}


/* ==== 004136ec FUN_004136ec ==== */

int FUN_004136ec(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00412664(*(int **)(param_1 + 4));
  return iVar1 - (*(int *)(param_1 + 0x14) - *(int *)(param_1 + 0x10));
}


/* ==== 00413704 FUN_00413704 ==== */

void FUN_00413704(int param_1,undefined4 param_2,uint param_3)

{
  FUN_00414ec4(param_1,param_2,param_3);
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + -1;
  return;
}


/* ==== 00413714 FUN_00413714 ==== */

void FUN_00413714(int param_1,undefined4 param_2,uint param_3)

{
  FUN_00415024(param_1,param_2,param_3);
  FUN_004132c0();
  return;
}


/* ==== 00413720 FUN_00413720 ==== */

void FUN_00413720(int param_1,undefined4 *param_2,uint param_3)

{
  int iVar1;
  uint i_val;
  uint j;
  undefined4 *puVar2;
  
  while (param_3 != 0) {
    i_val = *(uint *)(param_1 + 0x14) - *(uint *)(param_1 + 0x10);
    if (*(uint *)(param_1 + 0x14) < *(uint *)(param_1 + 0x10) || i_val == 0) {
      FUN_0041376c(param_1);
      i_val = *(uint *)(param_1 + 0x14);
    }
    if (param_3 <= i_val) {
      i_val = param_3;
    }
    param_3 = param_3 - i_val;
    iVar1 = *(int *)(param_1 + 0x10);
    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + i_val;
    puVar2 = (undefined4 *)(*(int *)(param_1 + 8) + iVar1);
    for (j = i_val >> 2; j != 0; j = j - 1) {
      *param_2 = *puVar2;
      puVar2 = puVar2 + 1;
      param_2 = param_2 + 1;
    }
    for (i_val = i_val & 3; i_val != 0; i_val = i_val - 1) {
      *(undefined1 *)param_2 = *(undefined1 *)puVar2;
      puVar2 = (undefined4 *)((int)puVar2 + 1);
      param_2 = (undefined4 *)((int)param_2 + 1);
    }
  }
  return;
}


/* ==== 0041376c FUN_0041376c ==== */

void FUN_0041376c(int param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = (**(code **)(**(int **)(param_1 + 4) + 4))
                    (*(int **)(param_1 + 4),*(undefined4 *)(param_1 + 8),
                     *(undefined4 *)(param_1 + 0xc));
  *(int *)(param_1 + 0x14) = iVar1;
  if (iVar1 == 0) {
    piVar2 = SysUtils_Exception_CreateRes
                       ((int *)&DAT_0040e6dc,'\x01',(undefined4 *)PTR_PTR_004ab99c);
    System__RaiseExcept(piVar2);
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  return;
}


/* ==== 004137a8 FUN_004137a8 ==== */

bool FUN_004137a8(int param_1,undefined4 param_2,uint param_3)

{
  uint uVar1;
  
  uVar1 = FUN_00414ec4(param_1,param_2,param_3);
  return (char)uVar1 == '\t';
}


/* ==== 004137bc FUN_004137bc ==== */

void FUN_004137bc(int param_1,undefined4 param_2,uint param_3)

{
  uint extraout_ECX;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  int local_c;
  char local_5;
  
  puStack_14 = &stack0xfffffffc;
  local_c = 0;
  puStack_18 = &LAB_0041382e;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  FUN_00413320(param_1,6,param_3);
  FUN_00413720(param_1,(undefined4 *)&local_5,1);
  if (local_5 != '\x01') {
    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + -1;
    FUN_00414de0(param_1,&local_c,extraout_ECX);
    FUN_004132b4();
  }
  FUN_00413720(param_1,(undefined4 *)&local_5,1);
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_00413835;
  puStack_18 = (undefined1 *)0x41382d;
  System__LStrClr(&local_c);
  return;
}


/* ==== 00413840 FUN_00413840 ==== */

void FUN_00413840(int param_1,int *param_2)

{
  undefined1 *puVar1;
  bool bVar2;
  char cVar3;
  int *piVar4;
  uint extraout_ECX;
  uint extraout_ECX_00;
  uint extraout_ECX_01;
  uint extraout_ECX_02;
  uint extraout_ECX_03;
  uint extraout_ECX_04;
  uint extraout_ECX_05;
  uint extraout_ECX_06;
  uint extraout_ECX_07;
  uint uVar5;
  uint extraout_ECX_08;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined4 extraout_EDX_02;
  undefined4 extraout_EDX_03;
  undefined4 extraout_EDX_04;
  undefined4 extraout_EDX_05;
  undefined4 extraout_EDX_06;
  undefined4 extraout_EDX_07;
  undefined4 uVar6;
  undefined4 extraout_EDX_08;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  
  puStack_14 = (undefined1 *)0x413853;
  (**(code **)(*param_2 + 0x14))();
  puStack_18 = &LAB_004138e0;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  puStack_14 = &stack0xfffffffc;
  bVar2 = FUN_00413454(param_1,extraout_EDX,extraout_ECX);
  uVar5 = extraout_ECX_00;
  uVar6 = extraout_EDX_00;
  if (!bVar2) {
    FUN_00410e64(param_2);
    uVar5 = extraout_ECX_01;
    uVar6 = extraout_EDX_01;
  }
  while( true ) {
    bVar2 = FUN_00413454(param_1,uVar6,uVar5);
    if (bVar2) break;
    cVar3 = FUN_00413704(param_1,extraout_EDX_08,extraout_ECX_08);
    if ((byte)(cVar3 - 2U) < 3) {
      FUN_004140e4(param_1,extraout_EDX_02,extraout_ECX_02);
    }
    piVar4 = (int *)FUN_00410dac((int)param_2);
    FUN_00414194(param_1,extraout_EDX_03,extraout_ECX_03);
    uVar5 = extraout_ECX_04;
    uVar6 = extraout_EDX_04;
    while( true ) {
      bVar2 = FUN_00413454(param_1,uVar6,uVar5);
      if (bVar2) break;
      FUN_00414300((int *)param_1,piVar4);
      uVar5 = extraout_ECX_05;
      uVar6 = extraout_EDX_05;
    }
    FUN_0041419c(param_1,extraout_EDX_06,extraout_ECX_06);
    uVar5 = extraout_ECX_07;
    uVar6 = extraout_EDX_07;
  }
  FUN_0041419c(param_1,extraout_EDX_08,extraout_ECX_08);
  puVar1 = puStack_14;
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_004138e7;
  puStack_18 = (undefined1 *)0x4138df;
  (**(code **)(*param_2 + 0x18))(param_2,*param_2,puVar1);
  return;
}


/* ==== 0041396c FUN_0041396c ==== */

void FUN_0041396c(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  ushort *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  
  puStack_14 = &stack0xfffffffc;
  puStack_18 = &LAB_00413a52;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  puStack_20 = (undefined1 *)0x413991;
  iVar2 = FUN_00415374(*(int *)(param_4 + -0xc),*(char **)(param_4 + -0x14),param_3);
  *(undefined4 *)(param_4 + -0x10) = 0;
  if (*(short *)(*(int *)(param_4 + -0xc) + 0x6a) != 0) {
    puStack_20 = (undefined1 *)(param_4 + -0x10);
    puStack_24 = (undefined1 *)0x4139c3;
    (**(code **)(*(int *)(param_4 + -0xc) + 0x68))
              (*(undefined4 *)(*(int *)(param_4 + -0xc) + 0x6c),*(undefined4 *)(param_4 + -0xc),
               iVar2);
  }
  if (*(int *)(param_4 + -0x10) == 0) {
    puStack_20 = (undefined1 *)0x4139d1;
    uVar3 = (**(code **)(iVar2 + -0xc))();
    *(undefined4 *)(param_4 + -0x10) = uVar3;
    if ((*(byte *)(param_4 + -1) & 4) != 0) {
      puVar1 = (ushort *)(*(int *)(param_4 + -0x10) + 0x20);
      *puVar1 = *puVar1 | 1;
      puVar1 = (ushort *)(*(int *)(param_4 + -0x10) + 0x20);
      *puVar1 = *puVar1 | 0x200;
    }
    puStack_24 = &LAB_00413a26;
    uStack_28 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_28;
    puStack_20 = &stack0xfffffffc;
    (**(code **)(**(int **)(param_4 + -0x10) + 0x2c))
              (*(int **)(param_4 + -0x10),0xffffffff,
               *(undefined4 *)(*(int *)(param_4 + -0xc) + 0x28));
    *in_FS_OFFSET = uStack_28;
  }
  puVar1 = (ushort *)(*(int *)(param_4 + -0x10) + 0x20);
  *puVar1 = *puVar1 | 1;
  *in_FS_OFFSET = uStack_1c;
  return;
}


/* ==== 00413a7c FUN_00413a7c ==== */

void FUN_00413a7c(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  ushort *puVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  
  puStack_14 = &stack0xfffffffc;
  puStack_18 = &LAB_00413af2;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  System__CallDynaInst
            (*(int **)(param_4 + -0x10),*(undefined4 *)(*(int *)(param_4 + -0xc) + 0x2c),param_3);
  (**(code **)(**(int **)(param_4 + -0xc) + 0x1c))
            (*(int **)(param_4 + -0xc),*(undefined4 *)(param_4 + -0x10),param_4 + -0x18);
  if (DAT_004ac61c != (code *)0x0) {
    iVar2 = (*DAT_004ac61c)(*(undefined4 *)(param_4 + -0x18));
    if (iVar2 == *(int *)(param_4 + -0x10)) {
      puVar1 = (ushort *)(*(int *)(param_4 + -0x10) + 0x20);
      *puVar1 = *puVar1 | 0x200;
    }
  }
  *in_FS_OFFSET = uStack_1c;
  return;
}


/* ==== 00413b1c FUN_00413b1c ==== */

void FUN_00413b1c(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 extraout_ECX;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  
  puStack_14 = &stack0xfffffffc;
  puStack_18 = &LAB_00413b97;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  iVar1 = FUN_00415374(*(int *)(param_4 + -0xc),*(char **)(param_4 + -0x14),param_3);
  uVar2 = (**(code **)(**(int **)(param_4 + -0xc) + 0x14))
                    (*(int **)(param_4 + -0xc),*(undefined4 *)(param_4 + -0x18),iVar1);
  *(undefined4 *)(param_4 + -0x10) = uVar2;
  iVar1 = System__CallDynaInst(*(int **)(param_4 + -0x10),param_4,extraout_ECX);
  *(int *)(*(int *)(param_4 + -0xc) + 0x2c) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)(*(int *)(param_4 + -0xc) + 0x2c) =
         *(undefined4 *)(*(int *)(param_4 + -0xc) + 0x18);
  }
  *in_FS_OFFSET = uStack_1c;
  return;
}


/* ==== 00413bc0 FUN_00413bc0 ==== */

void FUN_00413bc0(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint extraout_ECX;
  uint extraout_ECX_00;
  undefined1 *extraout_ECX_01;
  undefined1 *puVar4;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined4 uVar5;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_58;
  undefined1 *puStack_54;
  undefined4 uStack_4c;
  undefined1 *puStack_48;
  undefined1 *puStack_44;
  undefined4 uStack_40;
  undefined1 *puStack_3c;
  undefined1 *puStack_38;
  undefined4 local_20;
  int local_1c [2];
  int *local_14;
  int *local_10;
  int *local_c;
  byte local_5;
  
  puStack_38 = &stack0xfffffffc;
  local_1c[1] = 0;
  local_1c[0] = 0;
  puStack_3c = &LAB_00413d85;
  uStack_40 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_40;
  puStack_44 = (undefined1 *)0x413bf3;
  local_10 = param_1;
  local_c = param_2;
  (**(code **)(*param_1 + 0x24))(param_1,&local_5,&local_20);
  puStack_44 = (undefined1 *)0x413bfe;
  FUN_00414de0((int)local_10,local_1c + 1,extraout_ECX);
  puStack_44 = (undefined1 *)0x413c09;
  FUN_00414de0((int)local_10,local_1c,extraout_ECX_00);
  iVar1 = local_10[0xb];
  iVar2 = local_10[7];
  puStack_48 = &LAB_00413d63;
  uStack_4c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_4c;
  local_14 = local_c;
  puVar4 = extraout_ECX_01;
  uVar5 = extraout_EDX;
  puStack_44 = &stack0xfffffffc;
  if (local_c == (int *)0x0) {
    if ((local_5 & 1) == 0) {
      puStack_54 = (undefined1 *)0x413c4a;
      puVar4 = &stack0xfffffffc;
      puStack_44 = &stack0xfffffffc;
      FUN_0041396c(0,extraout_EDX,(int)extraout_ECX_01,(int)&stack0xfffffffc);
      uVar5 = extraout_EDX_01;
    }
    else {
      puStack_54 = (undefined1 *)0x413c41;
      puVar4 = &stack0xfffffffc;
      puStack_44 = &stack0xfffffffc;
      FUN_00413b1c(0,extraout_EDX,(int)extraout_ECX_01,(int)&stack0xfffffffc);
      uVar5 = extraout_EDX_00;
    }
  }
  if (local_14 != (int *)0x0) {
    puStack_54 = &LAB_00413d21;
    uStack_58 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_58;
    *(ushort *)(local_14 + 8) = *(ushort *)(local_14 + 8) | 1;
    if ((local_5 & 1) == 0) {
      FUN_00413a7c(local_14,uVar5,puVar4,(int)&stack0xfffffffc);
    }
    if (local_14 == (int *)0x0) {
      *in_FS_OFFSET = uStack_58;
      FUN_00403794();
      *in_FS_OFFSET = uStack_40;
      puStack_38 = &LAB_00413d8c;
      puStack_3c = (undefined1 *)0x413d84;
      System__LStrArrayClr(local_1c,2);
      return;
    }
    if ((*(byte *)((int)local_14 + 0x21) & 2) != 0) {
      local_10[7] = (int)local_14;
    }
    *(ushort *)(local_14 + 8) = *(ushort *)(local_14 + 8) | 2;
    (**(code **)(*local_14 + 0x14))(local_14,local_10);
    *(ushort *)(local_14 + 8) = *(ushort *)(local_14 + 8) & 0xfffd;
    if ((local_5 & 2) != 0) {
      System__CallDynaInst((int *)local_10[0xb],local_14,local_20);
    }
    if (((local_5 & 1) == 0) && ((*(byte *)((int)local_14 + 0x21) & 2) == 0)) {
      Classes_TList_Add((int *)local_10[0xd],(int)local_14);
    }
    else {
      iVar3 = Classes_TList_IndexOf(local_10[0xd],(int)local_14);
      if (iVar3 < 0) {
        Classes_TList_Add((int *)local_10[0xd],(int)local_14);
      }
    }
    *in_FS_OFFSET = uStack_58;
  }
  *in_FS_OFFSET = uStack_4c;
  local_10[0xb] = iVar1;
  local_10[7] = iVar2;
  return;
}


/* ==== 00413d98 FUN_00413d98 ==== */

void FUN_00413d98(int *param_1,int *param_2,uint param_3)

{
  int iVar1;
  uint extraout_ECX;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  
  if (param_1[0xc] == 0) {
    puStack_10 = (undefined1 *)0x413db7;
    iVar1 = System_TObject_Create((int *)&PTR_TList_virtual_000_0040ea6c,'\x01',param_3);
    param_1[0xc] = iVar1;
    puStack_14 = &LAB_00413df3;
    uStack_18 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_18;
    puStack_10 = &stack0xfffffffc;
    FUN_00413e08(param_1,param_2,extraout_ECX);
    FUN_0041356c(param_1);
    *in_FS_OFFSET = uStack_18;
    puStack_10 = (undefined1 *)0x413e04;
    puStack_14 = (undefined1 *)0x413df2;
    FUN_004136b0((int)param_1);
    return;
  }
  puStack_10 = (undefined1 *)0x413e04;
  FUN_00413e08(param_1,param_2,param_3);
  return;
}


/* ==== 00413e08 FUN_00413e08 ==== */

void FUN_00413e08(int *param_1,int *param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  uint extraout_ECX;
  uint extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  uint extraout_ECX_03;
  uint extraout_ECX_04;
  uint uVar5;
  uint extraout_ECX_05;
  int *extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  int *extraout_EDX_02;
  int *extraout_EDX_03;
  int *piVar6;
  undefined4 extraout_EDX_04;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  
  piVar6 = param_2;
  while( true ) {
    puStack_20 = (undefined1 *)0x413e2a;
    bVar3 = FUN_00413454((int)param_1,piVar6,param_3);
    if (bVar3) break;
    puStack_20 = (undefined1 *)0x413e22;
    FUN_00414300(param_1,param_2);
    param_3 = extraout_ECX;
    piVar6 = extraout_EDX;
  }
  puStack_20 = (undefined1 *)0x413e36;
  FUN_0041419c((int)param_1,extraout_EDX_00,extraout_ECX_00);
  iVar1 = param_1[0xb];
  iVar2 = param_1[10];
  puStack_20 = (undefined1 *)0x413e53;
  iVar4 = System__CallDynaInst(param_2,extraout_EDX_01,extraout_ECX_01);
  param_1[0xb] = iVar4;
  puStack_24 = &LAB_00413eca;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  puStack_20 = &stack0xfffffffc;
  iVar4 = System__CallDynaInst(param_2,param_1,extraout_ECX_02);
  param_1[10] = iVar4;
  uVar5 = extraout_ECX_03;
  piVar6 = extraout_EDX_02;
  if (iVar4 == 0) {
    param_1[10] = param_1[6];
    piVar6 = param_1;
  }
  while( true ) {
    bVar3 = FUN_00413454((int)param_1,piVar6,uVar5);
    if (bVar3) break;
    FUN_00413bc0(param_1,(int *)0x0);
    uVar5 = extraout_ECX_04;
    piVar6 = extraout_EDX_03;
  }
  FUN_0041419c((int)param_1,extraout_EDX_04,extraout_ECX_05);
  *in_FS_OFFSET = uStack_28;
  param_1[0xb] = iVar1;
  param_1[10] = iVar2;
  return;
}


/* ==== 00413ed8 FUN_00413ed8 ==== */

void FUN_00413ed8(int param_1,undefined4 param_2,uint param_3)

{
  uint uVar1;
  uint extraout_ECX;
  undefined4 extraout_EDX;
  undefined4 local_14 [4];
  
  uVar1 = FUN_00414ec4(param_1,param_2,param_3);
  if ((char)uVar1 == '\x05') {
    FUN_00413720(param_1,local_14,10);
  }
  else {
    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + -1;
    FUN_004140e4(param_1,extraout_EDX,extraout_ECX);
  }
  return;
}


/* ==== 00413f18 FUN_00413f18 ==== */

void FUN_00413f18(int param_1,undefined4 param_2,uint param_3)

{
  uint uVar1;
  uint extraout_ECX;
  undefined4 extraout_EDX;
  undefined4 local_c [2];
  
  uVar1 = FUN_00414ec4(param_1,param_2,param_3);
  if ((char)uVar1 == '\x0f') {
    FUN_00413720(param_1,local_c,4);
  }
  else {
    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + -1;
    FUN_004140e4(param_1,extraout_EDX,extraout_ECX);
  }
  return;
}


/* ==== 00413f58 FUN_00413f58 ==== */

void FUN_00413f58(int param_1,undefined4 param_2,uint param_3)

{
  uint uVar1;
  uint extraout_ECX;
  undefined4 extraout_EDX;
  undefined4 local_10 [3];
  
  uVar1 = FUN_00414ec4(param_1,param_2,param_3);
  if ((char)uVar1 == '\x10') {
    FUN_00413720(param_1,local_10,8);
  }
  else {
    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + -1;
    FUN_004140e4(param_1,extraout_EDX,extraout_ECX);
  }
  return;
}


/* ==== 00413fa4 FUN_00413fa4 ==== */

void FUN_00413fa4(int param_1,undefined4 param_2,uint param_3)

{
  uint uVar1;
  uint extraout_ECX;
  undefined4 extraout_EDX;
  undefined4 local_10 [3];
  
  uVar1 = FUN_00414ec4(param_1,param_2,param_3);
  if ((char)uVar1 == '\x11') {
    FUN_00413720(param_1,local_10,8);
  }
  else {
    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + -1;
    FUN_004140e4(param_1,extraout_EDX,extraout_ECX);
  }
  return;
}


/* ==== 00413fe4 FUN_00413fe4 ==== */

void FUN_00413fe4(int param_1,int *param_2,uint param_3)

{
  uint uVar1;
  undefined4 *puVar2;
  uint local_c;
  
  local_c = param_3;
  uVar1 = FUN_00414ec4(param_1,param_2,param_3);
  switch(uVar1 & 0x7f) {
  case 0:
    System__LStrAsg(param_2,(undefined4 *)&DAT_004140dc);
    break;
  default:
    FUN_004132b4();
    break;
  case 7:
    FUN_00413720(param_1,&local_c,1);
    System__LStrFromPCharLen(param_2,(undefined4 *)0x0,local_c & 0xff);
    puVar2 = (undefined4 *)FUN_004040ac(param_2);
    FUN_00413720(param_1,puVar2,local_c & 0xff);
    break;
  case 8:
    System__LStrAsg(param_2,(undefined4 *)"False");
    break;
  case 9:
    System__LStrAsg(param_2,(undefined4 *)&DAT_004140c0);
    break;
  case 0xd:
    System__LStrAsg(param_2,(undefined4 *)&DAT_004140d0);
  }
  return;
}


/* ==== 004140e4 FUN_004140e4 ==== */

int FUN_004140e4(int param_1,undefined4 param_2,uint param_3)

{
  char cVar1;
  uint uVar2;
  int local_c;
  char local_8 [2];
  short local_6;
  
  uVar2 = FUN_00414ec4(param_1,param_2,param_3);
  cVar1 = (char)uVar2;
  if (cVar1 == '\x02') {
    FUN_00413720(param_1,(undefined4 *)local_8,1);
    local_c = (int)local_8[0];
  }
  else if (cVar1 == '\x03') {
    FUN_00413720(param_1,(undefined4 *)&local_6,2);
    local_c = (int)local_6;
  }
  else if (cVar1 == '\x04') {
    FUN_00413720(param_1,&local_c,4);
  }
  else {
    FUN_004132b4();
  }
  return local_c;
}


/* ==== 00414150 FUN_00414150 ==== */

int FUN_00414150(int param_1,undefined4 param_2,uint param_3)

{
  char cVar1;
  uint extraout_ECX;
  undefined4 extraout_EDX;
  int local_c [2];
  
  cVar1 = FUN_00413704(param_1,param_2,param_3);
  if (cVar1 == '\x13') {
    FUN_00414ec4(param_1,extraout_EDX,extraout_ECX);
    FUN_00413720(param_1,local_c,8);
  }
  else {
    local_c[0] = FUN_004140e4(param_1,extraout_EDX,extraout_ECX);
  }
  return local_c[0];
}


/* ==== 00414194 FUN_00414194 ==== */

void FUN_00414194(int param_1,undefined4 param_2,uint param_3)

{
  FUN_00413320(param_1,CONCAT31((int3)((uint)param_2 >> 8),1),param_3);
  return;
}


/* ==== 0041419c FUN_0041419c ==== */

void FUN_0041419c(int param_1,undefined4 param_2,uint param_3)

{
  FUN_00413320(param_1,0,param_3);
  return;
}


/* ==== 004141a4 TReader.virtual_024 ==== */

void TReader_virtual_024(int param_1,byte *param_2,int *param_3)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  uint extraout_ECX;
  uint extraout_ECX_00;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  
  *param_2 = 0;
  bVar1 = FUN_00413704(param_1,param_2,(uint)param_3);
  if ((bVar1 & 0xf0) == 0xf0) {
    uVar2 = FUN_00414ec4(param_1,extraout_EDX,extraout_ECX);
    *param_2 = (byte)uVar2 & 0xf;
    if ((*param_2 & 2) != 0) {
      iVar3 = FUN_004140e4(param_1,extraout_EDX_00,extraout_ECX_00);
      *param_3 = iVar3;
    }
  }
  return;
}


/* ==== 004142e4 FUN_004142e4 ==== */

void FUN_004142e4(undefined4 param_1,undefined4 param_2,uint param_3,int param_4)

{
  FUN_00415024(*(int *)(param_4 + -0xc),param_2,param_3);
  FUN_0041329c((undefined4 *)PTR_PTR_004ab974);
  return;
}


/* ==== 00414300 FUN_00414300 ==== */

void FUN_00414300(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  uint extraout_ECX;
  uint extraout_ECX_00;
  uint extraout_ECX_01;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  int i_val;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_48;
  undefined1 *puStack_44;
  undefined1 *puStack_40;
  undefined4 local_3c;
  undefined1 *puStack_38;
  undefined1 *puStack_34;
  undefined4 local_30;
  undefined1 *puStack_2c;
  undefined1 *puStack_28;
  int *local_18;
  int *local_14;
  int local_c;
  int *local_8;
  
  puStack_28 = &stack0xfffffffc;
  puStack_34 = &stack0xfffffffc;
  local_c = 0;
  puStack_2c = &LAB_004144c4;
  local_30 = *in_FS_OFFSET;
  *in_FS_OFFSET = &local_30;
  puStack_38 = &LAB_00414479;
  local_3c = *in_FS_OFFSET;
  *in_FS_OFFSET = &local_3c;
  puStack_40 = (undefined1 *)0x41433b;
  local_8 = param_2;
  FUN_00414de0((int)param_1,&local_c,0);
  puStack_44 = &LAB_00414452;
  uStack_48 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_48;
  i_val = 1;
  puStack_40 = &stack0xfffffffc;
  iVar1 = System__LStrLen(local_c);
  local_14 = local_8;
  *(undefined1 *)(param_1 + 0x1d) = 1;
  iVar2 = i_val;
  while( true ) {
    for (; (i_val <= iVar1 && (*(char *)(local_c + -1 + i_val) != '.')); i_val = i_val + 1) {
    }
    System__LStrCopy(local_c,iVar2,i_val - iVar2,param_1 + 0x1c);
    if (iVar1 < i_val) break;
    iVar2 = FUN_004031bc(*local_14);
    puVar3 = (undefined4 *)FUN_0040dec0(iVar2,(undefined1 *)param_1[0x1c]);
    if (puVar3 == (undefined4 *)0x0) {
      FUN_00413714((int)param_1,extraout_EDX,extraout_ECX);
    }
    local_18 = (int *)0x0;
    if (**(char **)*puVar3 == '\a') {
      local_18 = (int *)FUN_0040df80(local_14,puVar3);
    }
    uVar4 = System__IsClass(local_18,(int)&PTR_TPersistent_virtual_000_0040eb7c);
    if ((char)uVar4 == '\0') {
      FUN_004142e4(uVar4,extraout_EDX_00,extraout_ECX_00,(int)&stack0xfffffffc);
    }
    local_14 = local_18;
    i_val = i_val + 1;
    iVar2 = i_val;
  }
  iVar2 = FUN_004031bc(*local_14);
  puVar3 = (undefined4 *)FUN_0040dec0(iVar2,(undefined1 *)param_1[0x1c]);
  if (puVar3 == (undefined4 *)0x0) {
    *(undefined1 *)(param_1 + 0x1d) = 0;
    (**(code **)(*local_14 + 4))(local_14,param_1);
    *(undefined1 *)(param_1 + 0x1d) = 1;
    if (param_1[0x1c] != 0) {
      FUN_00413714((int)param_1,extraout_EDX_01,extraout_ECX_01);
    }
  }
  else {
    FUN_00414754(param_1,local_14,puVar3);
  }
  *in_FS_OFFSET = uStack_48;
  *in_FS_OFFSET = local_3c;
  *in_FS_OFFSET = local_30;
  puStack_28 = &LAB_004144cb;
  puStack_2c = (undefined1 *)0x4144c3;
  System__LStrClr(&local_c);
  return;
}


/* ==== 004144d4 FUN_004144d4 ==== */

void FUN_004144d4(int *param_1,undefined4 *param_2,undefined4 param_3)

{
  char cVar1;
  code *pcVar2;
  int local_c;
  int *local_8;
  
  local_8 = param_1;
  pcVar2 = (code *)FUN_0040fce8(*(int *)*param_2);
  if ((pcVar2 != (code *)0x0) && (cVar1 = (*pcVar2)(param_3,&local_c), cVar1 != '\0')) {
    FUN_0040dff4(local_8,param_2,local_c);
    return;
  }
  FUN_004132b4();
  return;
}


/* ==== 0041451c FUN_0041451c ==== */

void FUN_0041451c(int param_1,int param_2,undefined4 *param_3,int param_4)

{
  int *piVar1;
  
  piVar1 = FUN_00412dc8((int *)&DAT_00412da0,'\x01',param_1,param_3,(undefined4 *)0x0,param_2,
                        *(int *)(*(int *)(param_4 + -4) + 0x18));
  Classes_TList_Add(*(int **)(*(int *)(param_4 + -4) + 0x30),(int)piVar1);
  return;
}


/* ==== 0041455c FUN_0041455c ==== */

void FUN_0041455c(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  uint extraout_ECX;
  undefined4 extraout_EDX;
  undefined4 *in_FS_OFFSET;
  float10 in_ST0;
  undefined4 uStack_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  OLECHAR *str_in;
  undefined4 *local_18;
  VARIANTARG variantarg;
  
  puStack_24 = &stack0xfffffffc;
  variantarg.n1.n2.n3 = (_union_2685)0x0;
  variantarg.n1.decVal.Hi32 = 0;
  variantarg.n1._0_4_ = 0;
  local_18 = (undefined4 *)0x0;
  str_in = (OLECHAR *)0x0;
  puStack_28 = &LAB_00414747;
  uStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_2c;
  bVar1 = FUN_00413704(*(int *)(param_4 + -4),param_2,0);
  switch(bVar1) {
  case 0:
  case 0xd:
    uVar2 = FUN_00414ec4(*(int *)(param_4 + -4),extraout_EDX,extraout_ECX);
    if ((char)uVar2 == '\r') {
      FUN_004049ec(&variantarg);
    }
    else {
      FUN_00404a30(&variantarg,(VARIANTARG *)PTR_VARIANTARG_004ab628);
    }
    break;
  default:
    piVar4 = SysUtils_Exception_CreateRes
                       ((int *)&DAT_0040e6dc,'\x01',(undefined4 *)PTR_PTR_004ab99c);
    System__RaiseExcept(piVar4);
    break;
  case 2:
    iVar3 = FUN_004140e4(*(int *)(param_4 + -4),extraout_EDX,extraout_ECX);
    variantarg.n1._8_1_ = (char)iVar3;
    break;
  case 3:
    iVar3 = FUN_004140e4(*(int *)(param_4 + -4),extraout_EDX,extraout_ECX);
    variantarg.n1._8_2_ = (short)iVar3;
    break;
  case 4:
    iVar3 = FUN_004140e4(*(int *)(param_4 + -4),extraout_EDX,extraout_ECX);
    variantarg.n1._8_4_ = iVar3;
    break;
  case 5:
    FUN_00413ed8(*(int *)(param_4 + -4),extraout_EDX,extraout_ECX);
    variantarg.n1.n2.n3 = (_union_2685)(double)in_ST0;
    break;
  case 6:
  case 0xc:
    FUN_00414e1c(*(int *)(param_4 + -4),(int *)&local_18,extraout_ECX);
    FUN_00404edc(&variantarg,local_18);
    break;
  case 8:
  case 9:
    uVar2 = FUN_00414ec4(*(int *)(param_4 + -4),extraout_EDX,extraout_ECX);
    variantarg.n1._8_2_ = -(ushort)((char)uVar2 == '\t');
    break;
  case 0xf:
    FUN_00413f18(*(int *)(param_4 + -4),extraout_EDX,extraout_ECX);
    variantarg.n1._8_4_ = (float)in_ST0;
    break;
  case 0x10:
    FUN_00413f58(*(int *)(param_4 + -4),extraout_EDX,extraout_ECX);
    variantarg.n1.n2.n3 = (_union_2685)(longlong)ROUND(in_ST0);
    break;
  case 0x11:
    FUN_00413fa4(*(int *)(param_4 + -4),extraout_EDX,extraout_ECX);
    variantarg.n1.n2.n3 = (_union_2685)(double)in_ST0;
    break;
  case 0x12:
    FUN_00414e7c(*(int *)(param_4 + -4),(int *)&str_in,extraout_ECX);
    FUN_00404f1c(&variantarg,str_in);
  }
  variantarg.n1.n2.vt = *(undefined2 *)(&DAT_004aa328 + (uint)bVar1 * 4);
  FUN_0040e2b0(*(int **)(param_4 + -8),*(int *)(param_4 + -0xc),&variantarg);
  *in_FS_OFFSET = uStack_2c;
  puStack_24 = &LAB_0041474e;
  puStack_28 = (undefined1 *)0x414736;
  FUN_004042b4(&str_in);
  puStack_28 = (undefined1 *)0x41473e;
  System__LStrClr((int *)&local_18);
  puStack_28 = (undefined1 *)0x414746;
  FUN_00405038(&variantarg);
  return;
}


/* ==== 00414754 FUN_00414754 ==== */

void FUN_00414754(int *param_1,int *param_2,undefined4 *param_3)

{
  byte *pbVar1;
  undefined1 *puVar2;
  byte bVar3;
  char cVar4;
  int *piVar5;
  int iVar6;
  undefined4 *extraout_ECX;
  uint extraout_ECX_00;
  uint extraout_ECX_01;
  uint extraout_ECX_02;
  undefined4 extraout_ECX_03;
  int *extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined4 extraout_EDX_02;
  undefined4 extraout_EDX_03;
  undefined4 *in_FS_OFFSET;
  undefined1 *puVar7;
  undefined4 uStack_3c;
  undefined1 *puStack_38;
  undefined1 *puStack_34;
  int local_2c;
  undefined4 *local_28;
  LPCSTR multi_byte_str;
  byte *local_20;
  int local_1c;
  int local_18;
  int local_14;
  undefined4 *local_10;
  int *local_c;
  int *local_8;
  
  puStack_34 = &stack0xfffffffc;
  puVar7 = &stack0xfffffffc;
  local_2c = 0;
  local_28 = (undefined4 *)0x0;
  multi_byte_str = (LPCSTR)0x0;
  local_20 = (byte *)0x0;
  local_1c = 0;
  puStack_38 = &LAB_004149e0;
  uStack_3c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_3c;
  puVar2 = &stack0xfffffffc;
  local_10 = param_3;
  local_c = param_2;
  local_8 = param_1;
  if (param_3[2] == 0) {
    FUN_0041329c((undefined4 *)PTR_PTR_004ab8f8);
    param_3 = extraout_ECX;
    param_2 = extraout_EDX;
    puVar2 = puStack_34;
  }
  puStack_34 = puVar2;
  pbVar1 = *(byte **)*local_10;
  switch((uint)*pbVar1) {
  case 1:
    cVar4 = FUN_00413704((int)local_8,param_2,(uint)param_3);
    if (cVar4 == '\a') {
      FUN_00413fe4((int)local_8,&local_1c,extraout_ECX_00);
      FUN_004144d4(local_c,local_10,local_1c);
    }
    else {
      iVar6 = FUN_004140e4((int)local_8,extraout_EDX_00,extraout_ECX_00);
      FUN_0040dff4(local_c,local_10,iVar6);
    }
    break;
  case 2:
    bVar3 = FUN_004137bc((int)local_8,param_2,(uint)param_3);
    FUN_0040dff4(local_c,local_10,(uint)bVar3);
    break;
  case 3:
    FUN_00413fe4((int)local_8,(int *)&local_20,(uint)param_3);
    iVar6 = FUN_004132cc((char *)pbVar1,local_20);
    FUN_0040dff4(local_c,local_10,iVar6);
    break;
  case 4:
    FUN_00413ed8((int)local_8,param_2,(uint)param_3);
    FUN_0040e204(local_c,local_10);
    break;
  case 5:
  case 10:
  case 0xb:
    FUN_00414e1c((int)local_8,(int *)&multi_byte_str,(uint)param_3);
    FUN_0040e1d8(local_c,local_10,multi_byte_str);
    break;
  case 6:
    iVar6 = FUN_00414d00((int)local_8,(int)pbVar1);
    FUN_0040dff4(local_c,local_10,iVar6);
    break;
  case 7:
    cVar4 = FUN_00413704((int)local_8,param_2,(uint)param_3);
    if (cVar4 == '\r') {
      FUN_00414ec4((int)local_8,extraout_EDX_01,extraout_ECX_01);
      FUN_0040dff4(local_c,local_10,0);
    }
    else if (cVar4 == '\x0e') {
      FUN_00414ec4((int)local_8,extraout_EDX_01,extraout_ECX_01);
      piVar5 = (int *)FUN_0040df80(local_c,local_10);
      FUN_00413840((int)local_8,piVar5);
    }
    else {
      FUN_00413fe4((int)local_8,(int *)&local_28,extraout_ECX_01);
      FUN_0041451c((int)local_c,(int)local_10,local_28,(int)puVar7);
    }
    break;
  case 8:
    cVar4 = FUN_00413704((int)local_8,param_2,(uint)param_3);
    if (cVar4 == '\r') {
      FUN_00414ec4((int)local_8,extraout_EDX_02,extraout_ECX_02);
      FUN_0040e2f0(local_c,(int)local_10,(undefined4 *)&DAT_004aa320);
    }
    else {
      FUN_00413fe4((int)local_8,&local_2c,extraout_ECX_02);
      local_18 = (**(code **)(*local_8 + 0x18))(local_8,local_8[6],local_2c);
      local_14 = local_8[6];
      if (local_18 != 0) {
        FUN_0040e2f0(local_c,(int)local_10,&local_18);
      }
    }
    break;
  case 0xc:
    FUN_0041455c((uint)*pbVar1,param_2,param_3,(int)&stack0xfffffffc);
    break;
  case 0x10:
    iVar6 = FUN_00414150((int)local_8,param_2,(uint)param_3);
    FUN_0040e328(local_c,(int)local_10,extraout_ECX_03,iVar6,extraout_EDX_03);
  }
  *in_FS_OFFSET = uStack_3c;
  puStack_34 = &LAB_004149e7;
  puStack_38 = (undefined1 *)0x4149df;
  System__LStrArrayClr(&local_2c,5);
  return;
}


/* ==== 004149ec FUN_004149ec ==== */

void FUN_004149ec(undefined4 *param_1,int *param_2)

{
  int iVar1;
  int i_val;
  undefined4 *local_14;
  undefined1 local_10;
  int local_c;
  undefined1 local_8;
  
  i_val = 0;
  System__LStrClr(param_2);
  if (DAT_004ac61c != (code *)0x0) {
    System__LStrAsg(param_2,param_1);
    while( true ) {
      iVar1 = (*DAT_004ac61c)(*param_2);
      if (iVar1 == 0) break;
      i_val = i_val + 1;
      local_10 = 0xb;
      local_8 = 0;
      local_14 = param_1;
      local_c = i_val;
      SysUtils_Format((byte *)"%s_%d",&local_14,1,param_2);
    }
  }
  return;
}


/* ==== 00414a5c FUN_00414a5c ==== */

void FUN_00414a5c(int *param_1,int *param_2)

{
  LPVOID pvVar1;
  int *piVar2;
  int i_val;
  uint extraout_ECX;
  uint extraout_ECX_00;
  uint extraout_ECX_01;
  undefined4 extraout_ECX_02;
  int unaff_EDI;
  int *in_FS_OFFSET;
  int iStack_4c;
  undefined1 *puStack_48;
  undefined1 *puStack_44;
  int iStack_40;
  undefined1 *puStack_3c;
  undefined1 *puStack_38;
  int iStack_34;
  undefined4 *local_30;
  undefined1 *local_2c;
  int local_28;
  undefined1 *local_24;
  undefined1 *local_20;
  int *local_10;
  int j;
  
  local_20 = &stack0xfffffffc;
  i_val = 5;
  do {
    i_val = i_val + -1;
  } while (i_val != 0);
  local_24 = &LAB_00414cee;
  local_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&local_28;
  local_2c = (undefined1 *)0x414a8b;
  FUN_00414dbc((int)param_1,param_2,0);
  local_2c = (undefined1 *)0x414a9a;
  FUN_0040c8f8(DAT_004ac618);
  local_30 = (undefined4 *)&LAB_00414ccc;
  iStack_34 = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStack_34;
  puStack_3c = &LAB_00414c8d;
  iStack_40 = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStack_40;
  puStack_44 = (undefined1 *)0x414ac4;
  puStack_38 = &stack0xfffffffc;
  local_2c = &stack0xfffffffc;
  (**(code **)(*param_1 + 0x24))(param_1,&stack0xffffffeb,&stack0xffffffec);
  if (param_2 == (int *)0x0) {
    puStack_44 = (undefined1 *)0x414ad5;
    FUN_00414de0((int)param_1,(int *)&stack0xffffffe4,extraout_ECX);
    puStack_44 = (undefined1 *)0x414add;
    i_val = FUN_0040f948(unaff_EDI);
    puStack_44 = (undefined1 *)0x414ae4;
    local_10 = (int *)(**(code **)(i_val + 0x2c))(i_val,1,0);
    puStack_44 = (undefined1 *)0x414af2;
    FUN_00414de0((int)param_1,(int *)&local_20,extraout_ECX_00);
    puStack_44 = (undefined1 *)0x414afd;
    (**(code **)(*local_10 + 0x18))(local_10,local_20);
  }
  else {
    puStack_44 = (undefined1 *)0x414b10;
    FUN_00414de0((int)param_1,(int *)&local_24,extraout_ECX);
    local_10 = param_2;
    if ((*(byte *)(param_2 + 8) & 0x10) == 0) {
      *(ushort *)(param_2 + 8) = *(ushort *)(param_2 + 8) | 1;
      *(ushort *)(param_2 + 8) = *(ushort *)(param_2 + 8) | 2;
      puStack_44 = (undefined1 *)0x414b41;
      FUN_00414de0((int)param_1,(int *)&local_30,extraout_ECX_01);
      puStack_44 = (undefined1 *)0x414b4c;
      FUN_004149ec(local_30,(int *)&local_2c);
      puStack_44 = (undefined1 *)0x414b57;
      (**(code **)(*param_2 + 0x18))(param_2,local_2c);
    }
    else {
      puStack_44 = (undefined1 *)0x414b24;
      FUN_00414de0((int)param_1,&local_28,extraout_ECX_01);
    }
  }
  param_1[6] = (int)local_10;
  param_1[7] = (int)local_10;
  puStack_44 = (undefined1 *)0x414b6e;
  pvVar1 = FUN_0040655c();
  if (*(int *)((int)pvVar1 + 8) == 0) {
    puStack_44 = (undefined1 *)0x414b96;
    i_val = System_TObject_Create((int *)&PTR_TList_virtual_000_0040ea6c,'\x01',extraout_ECX_02);
    param_1[0xd] = i_val;
  }
  else {
    puStack_44 = (undefined1 *)0x414b7c;
    pvVar1 = FUN_0040655c();
    param_1[0xd] = *(int *)((int)pvVar1 + 8);
  }
  puStack_48 = &LAB_00414c77;
  iStack_4c = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStack_4c;
  puStack_44 = &stack0xfffffffc;
  i_val = Classes_TList_IndexOf(param_1[0xd],param_1[6]);
  if (i_val < 0) {
    Classes_TList_Add((int *)param_1[0xd],param_1[6]);
  }
  param_1[10] = param_1[6];
  *(ushort *)(param_1[6] + 0x20) = *(ushort *)(param_1[6] + 0x20) | 1;
  *(ushort *)(param_1[6] + 0x20) = *(ushort *)(param_1[6] + 0x20) | 2;
  (**(code **)(*(int *)param_1[6] + 0x14))((int *)param_1[6],param_1);
  *(ushort *)(param_1[6] + 0x20) = *(ushort *)(param_1[6] + 0x20) & 0xfffd;
  pvVar1 = FUN_0040655c();
  if ((*(int *)((int)pvVar1 + 8) == 0) && (i_val = *(int *)(param_1[0xd] + 8), -1 < i_val + -1)) {
    j = 0;
    do {
      piVar2 = (int *)Classes_TList_Get((undefined4 *)param_1[0xd],j);
      (**(code **)(*piVar2 + 0xc))();
      j = j + 1;
      i_val = i_val + -1;
    } while (i_val != 0);
  }
  *in_FS_OFFSET = iStack_4c;
  puStack_44 = &LAB_00414c7e;
  puStack_48 = (undefined1 *)0x414c5a;
  pvVar1 = FUN_0040655c();
  if (*(int *)((int)pvVar1 + 8) == 0) {
    puStack_48 = (undefined1 *)0x414c6e;
    System_TObject_Free((int *)param_1[0xd]);
  }
  param_1[0xd] = 0;
  return;
}


/* ==== 00414d00 FUN_00414d00 ==== */

void FUN_00414d00(int param_1,int param_2)

{
  char *pcVar1;
  uint uVar2;
  int iVar3;
  uint extraout_ECX;
  uint extraout_ECX_00;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_30;
  undefined1 *puStack_2c;
  undefined1 *puStack_28;
  undefined4 local_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  byte *local_c;
  int local_8;
  
  puStack_1c = &stack0xfffffffc;
  puStack_28 = &stack0xfffffffc;
  local_c = (byte *)0x0;
  puStack_20 = &LAB_00414daa;
  local_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &local_24;
  puStack_2c = &LAB_00414d7d;
  uStack_30 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_30;
  local_8 = param_1;
  uVar2 = FUN_00414ec4(param_1,param_2,0);
  if ((char)uVar2 != '\v') {
    FUN_004132b4();
  }
  iVar3 = FUN_0040de54(param_2);
  pcVar1 = (char *)**(undefined4 **)(iVar3 + 1);
  uVar2 = extraout_ECX;
  while (FUN_00414de0(local_8,(int *)&local_c,uVar2), local_c != (byte *)0x0) {
    FUN_004132cc(pcVar1,local_c);
    uVar2 = extraout_ECX_00;
  }
  *in_FS_OFFSET = uStack_30;
  *in_FS_OFFSET = local_24;
  puStack_1c = &LAB_00414db1;
  puStack_20 = (undefined1 *)0x414da9;
  System__LStrClr((int *)&local_c);
  return;
}


/* ==== 00414dbc FUN_00414dbc ==== */

void FUN_00414dbc(int param_1,undefined4 param_2,int param_3)

{
  int local_4;
  
  local_4 = param_3;
  FUN_00413720(param_1,&local_4,4);
  if (local_4 != DAT_004aa31c) {
    FUN_0041329c((undefined4 *)PTR_PTR_004ab7d0);
  }
  return;
}


/* ==== 00414de0 FUN_00414de0 ==== */

void FUN_00414de0(int param_1,int *param_2,uint param_3)

{
  undefined4 *puVar1;
  uint local_c;
  
  local_c = param_3;
  FUN_00413720(param_1,&local_c,1);
  System__LStrFromPCharLen(param_2,(undefined4 *)0x0,local_c & 0xff);
  puVar1 = (undefined4 *)FUN_004040ac(param_2);
  FUN_00413720(param_1,puVar1,local_c & 0xff);
  return;
}


/* ==== 00414e1c FUN_00414e1c ==== */

void FUN_00414e1c(int param_1,int *param_2,uint param_3)

{
  uint uVar1;
  uint local_c;
  
  local_c = 0;
  uVar1 = FUN_00414ec4(param_1,param_2,param_3);
  if ((char)uVar1 == '\x06') {
    FUN_00413720(param_1,&local_c,1);
  }
  else if ((char)uVar1 == '\f') {
    FUN_00413720(param_1,&local_c,4);
  }
  else {
    FUN_004132b4();
  }
  System__LStrFromPCharLen(param_2,(undefined4 *)0x0,local_c);
  FUN_00413720(param_1,(undefined4 *)*param_2,local_c);
  return;
}


/* ==== 00414e7c FUN_00414e7c ==== */

void FUN_00414e7c(int param_1,int *param_2,uint param_3)

{
  uint uVar1;
  UINT ui_val;
  
  ui_val = 0;
  uVar1 = FUN_00414ec4(param_1,param_2,param_3);
  if ((char)uVar1 != '\x12') {
    FUN_004132b4();
  }
  FUN_00413720(param_1,&ui_val,4);
  FUN_0040443c(param_2,ui_val);
  FUN_00413720(param_1,(undefined4 *)*param_2,ui_val * 2);
  return;
}


/* ==== 00414ec4 FUN_00414ec4 ==== */

uint FUN_00414ec4(int param_1,undefined4 param_2,uint param_3)

{
  undefined4 uVar1;
  uint local_4;
  
  local_4 = param_3;
  uVar1 = FUN_00413720(param_1,&local_4,1);
  return CONCAT31((int3)((uint)uVar1 >> 8),(undefined1)local_4);
}


/* ==== 00414ed8 FUN_00414ed8 ==== */

void FUN_00414ed8(int param_1,undefined4 param_2,uint param_3)

{
  uint extraout_ECX;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  int local_8;
  
  puStack_10 = &stack0xfffffffc;
  local_8 = 0;
  puStack_14 = &LAB_00414f14;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  do {
    FUN_00414de0(param_1,&local_8,param_3);
    param_3 = extraout_ECX;
  } while (local_8 != 0);
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_00414f1b;
  puStack_14 = (undefined1 *)0x414f13;
  System__LStrClr(&local_8);
  return;
}


/* ==== 00414f20 FUN_00414f20 ==== */

void FUN_00414f20(undefined4 param_1,undefined4 param_2,uint param_3,int param_4)

{
  bool bVar1;
  uint extraout_ECX;
  uint extraout_ECX_00;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  int *piVar2;
  
  piVar2 = (int *)(param_4 + -4);
  while( true ) {
    bVar1 = FUN_00413454(*piVar2,param_2,param_3);
    if (bVar1) break;
    FUN_00415024(*piVar2,extraout_EDX_00,extraout_ECX_00);
    param_3 = extraout_ECX;
    param_2 = extraout_EDX;
  }
  FUN_0041419c(*piVar2,extraout_EDX_00,extraout_ECX_00);
  return;
}


/* ==== 00414f48 FUN_00414f48 ==== */

void FUN_00414f48(uint param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined4 local_104 [64];
  
  while (0 < (int)param_1) {
    if ((int)param_1 < 0x101) {
      FUN_00413720(*(int *)(param_4 + -4),local_104,param_1);
      param_1 = 0;
    }
    else {
      FUN_00413720(*(int *)(param_4 + -4),local_104,0x100);
      param_1 = param_1 - 0x100;
    }
  }
  return;
}


/* ==== 00414f9c FUN_00414f9c ==== */

void FUN_00414f9c(undefined4 param_1,undefined4 param_2,uint param_3,int param_4)

{
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  uint local_8;
  
  local_8 = param_3;
  FUN_00413720(*(int *)(param_4 + -4),&local_8,4);
  FUN_00414f48(local_8,extraout_EDX,extraout_ECX,param_4);
  return;
}


/* ==== 00414fc4 FUN_00414fc4 ==== */

void FUN_00414fc4(undefined4 param_1,undefined4 param_2,uint param_3,uint param_4)

{
  char cVar1;
  bool bVar2;
  uint extraout_ECX;
  uint extraout_ECX_00;
  uint uVar3;
  uint extraout_ECX_01;
  uint uVar4;
  uint extraout_ECX_02;
  uint extraout_ECX_03;
  uint extraout_ECX_04;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined4 extraout_EDX_02;
  undefined4 uVar5;
  undefined4 extraout_EDX_03;
  undefined4 extraout_EDX_04;
  undefined4 extraout_EDX_05;
  int *piVar6;
  
  piVar6 = (int *)(param_4 - 4);
  while( true ) {
    bVar2 = FUN_00413454(*piVar6,param_2,param_3);
    if (bVar2) break;
    cVar1 = FUN_00413704(*piVar6,extraout_EDX_05,extraout_ECX_04);
    uVar3 = extraout_ECX;
    uVar5 = extraout_EDX;
    if ((byte)(cVar1 - 2U) < 3) {
      FUN_00415024(*piVar6,extraout_EDX,extraout_ECX);
      uVar3 = extraout_ECX_00;
      uVar5 = extraout_EDX_00;
    }
    uVar4 = param_4;
    FUN_00414f48(1,uVar5,uVar3,param_4);
    uVar5 = extraout_EDX_01;
    while( true ) {
      bVar2 = FUN_00413454(*piVar6,uVar5,uVar4);
      if (bVar2) break;
      FUN_0041518c(*piVar6,extraout_EDX_03,extraout_ECX_02);
      uVar4 = extraout_ECX_01;
      uVar5 = extraout_EDX_02;
    }
    FUN_0041419c(*piVar6,extraout_EDX_03,extraout_ECX_02);
    param_3 = extraout_ECX_03;
    param_2 = extraout_EDX_04;
  }
  FUN_0041419c(*piVar6,extraout_EDX_05,extraout_ECX_04);
  return;
}


/* ==== 00415024 FUN_00415024 ==== */

void FUN_00415024(int param_1,undefined4 param_2,uint param_3)

{
  uint uVar1;
  uint extraout_ECX;
  undefined4 extraout_EDX;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  int local_c;
  int local_8;
  
  puStack_10 = &stack0xfffffffc;
  local_c = 0;
  puStack_14 = &LAB_00415181;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  local_8 = param_1;
  uVar1 = FUN_00414ec4(param_1,0,param_3);
  uVar1 = uVar1 & 0x7f;
  switch(uVar1) {
  case 1:
    FUN_00414f20(uVar1,extraout_EDX,extraout_ECX,(int)&stack0xfffffffc);
    break;
  case 2:
    FUN_00414f48(1,extraout_EDX,extraout_ECX,(int)&stack0xfffffffc);
    break;
  case 3:
    FUN_00414f48(2,extraout_EDX,extraout_ECX,(int)&stack0xfffffffc);
    break;
  case 4:
    FUN_00414f48(4,extraout_EDX,extraout_ECX,(int)&stack0xfffffffc);
    break;
  case 5:
    FUN_00414f48(10,extraout_EDX,extraout_ECX,(int)&stack0xfffffffc);
    break;
  case 6:
  case 7:
    FUN_00414de0(local_8,&local_c,extraout_ECX);
    break;
  case 10:
    FUN_00414f9c(uVar1,extraout_EDX,extraout_ECX,(int)&stack0xfffffffc);
    break;
  case 0xb:
    FUN_00414ed8(local_8,extraout_EDX,extraout_ECX);
    break;
  case 0xc:
    FUN_00414f9c(uVar1,extraout_EDX,extraout_ECX,(int)&stack0xfffffffc);
    break;
  case 0xe:
    FUN_00414fc4(uVar1,extraout_EDX,extraout_ECX,(uint)&stack0xfffffffc);
    break;
  case 0xf:
    FUN_00414f48(4,extraout_EDX,extraout_ECX,(int)&stack0xfffffffc);
    break;
  case 0x10:
    FUN_00414f48(8,extraout_EDX,extraout_ECX,(int)&stack0xfffffffc);
    break;
  case 0x11:
    FUN_00414f48(8,extraout_EDX,extraout_ECX,(int)&stack0xfffffffc);
    break;
  case 0x12:
    FUN_00414f9c(uVar1,extraout_EDX,extraout_ECX,(int)&stack0xfffffffc);
    break;
  case 0x13:
    FUN_00414f48(8,extraout_EDX,extraout_ECX,(int)&stack0xfffffffc);
  }
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_00415188;
  puStack_14 = (undefined1 *)0x415180;
  System__LStrClr(&local_c);
  return;
}


/* ==== 0041518c FUN_0041518c ==== */

void FUN_0041518c(int param_1,undefined4 param_2,uint param_3)

{
  uint extraout_ECX;
  undefined4 extraout_EDX;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  int local_8;
  
  puStack_10 = &stack0xfffffffc;
  local_8 = 0;
  puStack_14 = &LAB_004151c9;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  FUN_00414de0(param_1,&local_8,param_3);
  FUN_00415024(param_1,extraout_EDX,extraout_ECX);
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_004151d0;
  puStack_14 = (undefined1 *)0x4151c8;
  System__LStrClr(&local_8);
  return;
}


/* ==== 0041527c TReader.virtual_014 ==== */

void TReader_virtual_014(int param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar2;
  char *local_14;
  undefined1 local_10;
  char *local_c;
  int local_8;
  
  local_c = (char *)0x0;
  uVar2 = *in_FS_OFFSET;
  *in_FS_OFFSET = &stack0xffffffd4;
  System__LStrLAsg((int *)&local_c,param_2);
  local_8 = 0;
  if (*(int *)(param_1 + 0x1c) != 0) {
    local_8 = FUN_00415a80(*(int *)(param_1 + 0x1c),local_c);
  }
  if (local_8 == 0) {
    if (*(short *)(param_1 + 0x52) != 0) {
      (**(code **)(param_1 + 0x50))
                (*(undefined4 *)(param_1 + 0x54),param_1,local_c,&local_8,param_3);
    }
    if (local_8 == 0) {
      local_14 = local_c;
      local_10 = 0xb;
      uVar2 = 0;
      uVar1 = FUN_0040b6d0((int)&DAT_0040e6dc,'\x01',(undefined4 *)PTR_PTR_004ab740,0,&local_14);
      System__RaiseExcept(uVar1);
    }
  }
  *in_FS_OFFSET = uVar2;
  System__LStrClr((int *)&local_c);
  return;
}


/* ==== 00415334 TReader.virtual_020 ==== */

void TReader_virtual_020(int param_1,undefined4 param_2)

{
  if (*(short *)(param_1 + 0x4a) != 0) {
    (**(code **)(param_1 + 0x48))(*(undefined4 *)(param_1 + 0x4c),param_1,param_2);
  }
  return;
}


/* ==== 0041534c TReader.virtual_01c ==== */

void TReader_virtual_01c(int param_1,int *param_2,undefined4 *param_3)

{
  if (*(short *)(param_1 + 0x42) != 0) {
    (**(code **)(param_1 + 0x40))(*(undefined4 *)(param_1 + 0x44),param_1,param_2,param_3);
  }
  (**(code **)(*param_2 + 0x18))(param_2,*param_3);
  return;
}


/* ==== 00415374 FUN_00415374 ==== */

int FUN_00415374(int param_1,char *param_2,int param_3)

{
  undefined4 uVar1;
  int local_c;
  
  local_c = param_3;
  local_c = FUN_0040f968(*(undefined4 **)(param_1 + 0x18),param_2);
  if (((local_c == 0) && (*(int *)(param_1 + 0x1c) != 0)) &&
     (*(int *)(param_1 + 0x1c) != *(int *)(param_1 + 0x18))) {
    local_c = FUN_0040f968(*(undefined4 **)(param_1 + 0x1c),param_2);
  }
  if (*(short *)(param_1 + 0x62) != 0) {
    (**(code **)(param_1 + 0x60))(*(undefined4 *)(param_1 + 100),param_1,param_2,&local_c);
  }
  if ((local_c != 0) &&
     (uVar1 = thunk_FUN_004031ac(local_c,(int)&PTR_TPersistent_virtual_000_0040f548),
     (char)uVar1 != '\0')) {
    return local_c;
  }
  FUN_0040f82c(param_2);
  return local_c;
}


/* ==== 004153e4 FUN_004153e4 ==== */

void FUN_004153e4(int param_1,undefined4 *param_2,uint param_3)

{
  int iVar1;
  uint i_val;
  uint j;
  undefined4 *puVar2;
  
  while (param_3 != 0) {
    i_val = *(uint *)(param_1 + 0xc) - *(uint *)(param_1 + 0x10);
    if (*(uint *)(param_1 + 0xc) < *(uint *)(param_1 + 0x10) || i_val == 0) {
      FUN_00415430(param_1);
      i_val = *(uint *)(param_1 + 0xc);
    }
    if (param_3 <= i_val) {
      i_val = param_3;
    }
    param_3 = param_3 - i_val;
    iVar1 = *(int *)(param_1 + 0x10);
    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + i_val;
    puVar2 = (undefined4 *)(*(int *)(param_1 + 8) + iVar1);
    for (j = i_val >> 2; j != 0; j = j - 1) {
      *puVar2 = *param_2;
      param_2 = param_2 + 1;
      puVar2 = puVar2 + 1;
    }
    for (i_val = i_val & 3; i_val != 0; i_val = i_val - 1) {
      *(undefined1 *)puVar2 = *(undefined1 *)param_2;
      param_2 = (undefined4 *)((int)param_2 + 1);
      puVar2 = (undefined4 *)((int)puVar2 + 1);
    }
  }
  return;
}


/* ==== 00415430 FUN_00415430 ==== */

void FUN_00415430(int param_1)

{
  FUN_004126f0(*(int **)(param_1 + 4),*(undefined4 *)(param_1 + 8),*(int *)(param_1 + 0x10));
  *(undefined4 *)(param_1 + 0x10) = 0;
  return;
}


/* ==== 00415448 FUN_00415448 ==== */

void FUN_00415448(int param_1,char param_2,undefined4 param_3)

{
  if (param_2 != '\0') {
    FUN_0041553c(param_1,9,param_3);
    return;
  }
  FUN_0041553c(param_1,8,param_3);
  return;
}


/* ==== 0041545c FUN_0041545c ==== */

void FUN_0041545c(int param_1,int param_2,undefined4 param_3)

{
  int local_8;
  
  local_8 = param_2;
  if ((-0x81 < param_2) && (param_2 < 0x80)) {
    FUN_0041553c(param_1,2,param_3);
    FUN_004153e4(param_1,&local_8,1);
    return;
  }
  if ((param_2 < -0x8000) || (0x7fff < param_2)) {
    FUN_0041553c(param_1,4,param_3);
    FUN_004153e4(param_1,&local_8,4);
  }
  else {
    FUN_0041553c(param_1,3,param_3);
    FUN_004153e4(param_1,&local_8,2);
  }
  return;
}


/* ==== 004154d0 FUN_004154d0 ==== */

void FUN_004154d0(int param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_0041553c(param_1,1,param_3);
  return;
}


/* ==== 004154d8 FUN_004154d8 ==== */

void FUN_004154d8(int param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_0041553c(param_1,0,param_3);
  return;
}


/* ==== 004154e0 FUN_004154e0 ==== */

void FUN_004154e0(int param_1,undefined4 *param_2,uint param_3)

{
  undefined4 extraout_ECX;
  uint local_c;
  
  local_c = param_3;
  local_c = System__LStrLen((int)param_2);
  if ((int)local_c < 0x100) {
    FUN_0041553c(param_1,6,extraout_ECX);
    FUN_004153e4(param_1,&local_c,1);
  }
  else {
    FUN_0041553c(param_1,0xc,extraout_ECX);
    FUN_004153e4(param_1,&local_c,4);
  }
  FUN_004153e4(param_1,param_2,local_c);
  return;
}


/* ==== 0041553c FUN_0041553c ==== */

void FUN_0041553c(int param_1,undefined1 param_2,undefined4 param_3)

{
  undefined1 local_4;
  undefined3 uStack_3;
  
  _local_4 = CONCAT31((int3)((uint)param_3 >> 8),param_2);
  FUN_004153e4(param_1,(undefined4 *)&local_4,1);
  return;
}


/* ==== 00415550 FUN_00415550 ==== */

void FUN_00415550(void)

{
  if (DAT_004ac64c != (HWND)0x0) {
    DestroyWindow(DAT_004ac64c);
    DAT_004ac64c = (HWND)0x0;
  }
  return;
}


/* ==== 0041556c TComponent.virtual_02c ==== */

int * TComponent_virtual_02c(int *param_1,char param_2,int *param_3)

{
  int *extraout_ECX;
  char extraout_DL;
  char cVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_ffffffe4;
  undefined4 in_stack_ffffffe8;
  
  cVar1 = '\0';
  if (param_2 != '\0') {
    param_1 = (int *)System__ClassCreate((int)param_1,param_2,param_3,in_stack_ffffffe4,
                                         in_stack_ffffffe8);
    param_3 = extraout_ECX;
    cVar1 = extraout_DL;
  }
  *(undefined1 *)((int)param_1 + 0x22) = 1;
  if (param_3 != (int *)0x0) {
    FUN_00415734(param_3,param_1,param_3);
  }
  if (cVar1 != '\0') {
    System__AfterConstruction(param_1);
    *in_FS_OFFSET = in_stack_ffffffe4;
  }
  return param_1;
}


/* ==== 004155b8 TComponent.Destroy ==== */

void TComponent_Destroy(int *param_1,char param_2)

{
  int *piVar1;
  int *piVar2;
  byte extraout_DL;
  int i_val;
  
  piVar1 = System__BeforeDestruction(param_1,param_2);
  FUN_0041581c((int)piVar1);
  if (piVar1[5] != 0) {
    i_val = *(int *)(piVar1[5] + 8) + -1;
    if (-1 < i_val) {
      do {
        piVar2 = (int *)Classes_TList_Get((undefined4 *)piVar1[5],i_val);
        (**(code **)(*piVar2 + 0x10))(piVar2,piVar1,1);
        if (piVar1[5] == 0) break;
        i_val = i_val + -1;
      } while (i_val != -1);
    }
    System_TObject_Free((int *)piVar1[5]);
    piVar1[5] = 0;
  }
  FUN_004157c4(piVar1);
  if ((int *)piVar1[1] != (int *)0x0) {
    FUN_0041578c((int *)piVar1[1],(int)piVar1);
  }
  TPersistent_Destroy(piVar1,extraout_DL & 0xfc);
  if ('\0' < (char)extraout_DL) {
    System__ClassDestroy(piVar1);
  }
  return;
}


/* ==== 00415640 TComponent.BeforeDestruction ==== */

void TComponent_BeforeDestruction(int param_1)

{
  if ((*(byte *)(param_1 + 0x20) & 8) == 0) {
    FUN_0041581c(param_1);
  }
  return;
}


/* ==== 0041564c FUN_0041564c ==== */

void FUN_0041564c(int param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 extraout_ECX;
  
  if ((*(int *)(param_1 + 4) == 0) || (*(int *)(param_1 + 4) != *(int *)(param_2 + 4))) {
    if (*(int *)(param_1 + 0x14) == 0) {
      uVar1 = System_TObject_Create((int *)&PTR_TList_virtual_000_0040ea6c,'\x01',param_3);
      *(undefined4 *)(param_1 + 0x14) = uVar1;
    }
    iVar2 = Classes_TList_IndexOf(*(int *)(param_1 + 0x14),param_2);
    if (iVar2 < 0) {
      Classes_TList_Add(*(int **)(param_1 + 0x14),param_2);
      FUN_0041564c(param_2,param_1,extraout_ECX);
    }
  }
  *(ushort *)(param_1 + 0x20) = *(ushort *)(param_1 + 0x20) | 0x100;
  return;
}


/* ==== 004156e0 FUN_004156e0 ==== */

void FUN_004156e0(int param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x10) == 0) {
    uVar1 = System_TObject_Create((int *)&PTR_TList_virtual_000_0040ea6c,'\x01',param_3);
    *(undefined4 *)(param_1 + 0x10) = uVar1;
  }
  Classes_TList_Add(*(int **)(param_1 + 0x10),param_2);
  *(int *)(param_2 + 4) = param_1;
  return;
}


/* ==== 0041570c FUN_0041570c ==== */

void FUN_0041570c(int param_1,int param_2)

{
  *(undefined4 *)(param_2 + 4) = 0;
  FUN_00410448(*(int **)(param_1 + 0x10),param_2);
  if ((*(int **)(param_1 + 0x10))[2] == 0) {
    System_TObject_Free(*(int **)(param_1 + 0x10));
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  return;
}


/* ==== 00415734 FUN_00415734 ==== */

void FUN_00415734(int *param_1,int *param_2,undefined4 param_3)

{
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  
  System__CallDynaInst(param_2,param_1,param_3);
  (**(code **)(*param_1 + 0x20))(param_1,param_2,0,param_2[2]);
  FUN_004156e0((int)param_1,(int)param_2,extraout_ECX);
  FUN_00415c50((int)param_2,'\x01');
  if ((*(byte *)(param_1 + 8) & 0x10) != 0) {
    FUN_00415c00((int)param_2,CONCAT31((int3)((uint)extraout_EDX >> 8),1),'\x01');
  }
  (**(code **)(*param_1 + 0x10))(param_1,param_2,0);
  return;
}


/* ==== 0041578c FUN_0041578c ==== */

void FUN_0041578c(int *param_1,int param_2)

{
  (**(code **)(*param_1 + 0x20))(param_1,param_2,*(undefined4 *)(param_2 + 8),0);
  (**(code **)(*param_1 + 0x10))(param_1,param_2,1);
  FUN_00415c50(param_2,'\0');
  FUN_0041570c((int)param_1,param_2);
  return;
}


/* ==== 004157c4 FUN_004157c4 ==== */

void FUN_004157c4(int *param_1)

{
  int *piVar1;
  
  while ((undefined4 *)param_1[4] != (undefined4 *)0x0) {
    piVar1 = (int *)FUN_00410398((undefined4 *)param_1[4]);
    if (((*(byte *)((int)piVar1 + 0x21) & 1) == 0) && ((*(ushort *)(param_1 + 8) & 0x210) != 0x210))
    {
      FUN_0041570c((int)param_1,(int)piVar1);
    }
    else {
      FUN_0041578c(param_1,(int)piVar1);
    }
    (**(code **)(*piVar1 + -4))(piVar1,1);
  }
  return;
}


/* ==== 0041581c FUN_0041581c ==== */

void FUN_0041581c(int param_1)

{
  int iVar1;
  int i_val;
  int j;
  
  if ((*(byte *)(param_1 + 0x20) & 8) == 0) {
    *(ushort *)(param_1 + 0x20) = *(ushort *)(param_1 + 0x20) | 8;
    if ((*(int *)(param_1 + 0x10) != 0) &&
       (i_val = *(int *)(*(int *)(param_1 + 0x10) + 8), -1 < i_val + -1)) {
      j = 0;
      do {
        iVar1 = Classes_TList_Get(*(undefined4 **)(param_1 + 0x10),j);
        FUN_0041581c(iVar1);
        j = j + 1;
        i_val = i_val + -1;
      } while (i_val != 0);
    }
  }
  return;
}


/* ==== 00415858 FUN_00415858 ==== */

void FUN_00415858(int param_1,int param_2)

{
  if (*(int **)(param_1 + 0x14) != (int *)0x0) {
    FUN_00410448(*(int **)(param_1 + 0x14),param_2);
    if ((*(int **)(param_1 + 0x14))[2] == 0) {
      System_TObject_Free(*(int **)(param_1 + 0x14));
      *(undefined4 *)(param_1 + 0x14) = 0;
    }
  }
  return;
}


/* ==== 0041587c FUN_0041587c ==== */

void FUN_0041587c(int param_1,int param_2)

{
  FUN_00415858(param_1,param_2);
  FUN_00415858(param_2,param_1);
  return;
}


/* ==== 00415898 TComponent.virtual_010 ==== */

void TComponent_virtual_010(int param_1,int param_2,char param_3)

{
  int *piVar1;
  int i_val;
  int j;
  
  if ((param_3 == '\x01') && (param_2 != 0)) {
    FUN_0041587c(param_1,param_2);
  }
  if ((*(int *)(param_1 + 0x10) != 0) &&
     (i_val = *(int *)(*(int *)(param_1 + 0x10) + 8), -1 < i_val + -1)) {
    j = 0;
    do {
      piVar1 = (int *)Classes_TList_Get(*(undefined4 **)(param_1 + 0x10),j);
      (**(code **)(*piVar1 + 0x10))(piVar1,param_2,param_3);
      j = j + 1;
      i_val = i_val + -1;
    } while (i_val != 0);
  }
  return;
}


/* ==== 004158f4 TComponent.virtual_004 ==== */

void TComponent_virtual_004(int param_1,int *param_2)

{
  undefined4 local_8;
  
  local_8 = 0;
  if (param_2[8] != 0) {
    local_8 = *(undefined4 *)(param_2[8] + 0x18);
  }
  (**(code **)(*param_2 + 4))
            (param_2,&DAT_00415968,*(short *)(param_1 + 0x18) != (short)local_8,&LAB_004156c8,
             param_1,&LAB_004156a0,param_1);
  (**(code **)(*param_2 + 4))
            (param_2,&DAT_00415978,local_8._2_2_ != *(short *)(param_1 + 0x1a),&LAB_004156d4,param_1
             ,&LAB_004156b4,param_1);
  return;
}


/* ==== 0041597c TComponent.dynamic_fff2 ==== */

undefined4 TComponent_dynamic_fff2(void)

{
  return 0;
}


/* ==== 00415980 TComponent.dynamic_fffd ==== */

void TComponent_dynamic_fffd(void)

{
  return;
}


/* ==== 00415988 TComponent.dynamic_fffc ==== */

undefined4 TComponent_dynamic_fffc(void)

{
  return 0;
}


/* ==== 0041598c TComponent.dynamic_fffb ==== */

void TComponent_dynamic_fffb(void)

{
  return;
}


/* ==== 00415990 TComponent.dynamic_fffe ==== */

void TComponent_dynamic_fffe(int param_1,int *param_2)

{
  System__LStrAsg(param_2,*(undefined4 **)(param_1 + 8));
  return;
}


/* ==== 004159a4 TComponent.dynamic_ffff ==== */

undefined4 TComponent_dynamic_ffff(int param_1)

{
  return *(undefined4 *)(param_1 + 4);
}


/* ==== 004159a8 TComponent.dynamic_fffa ==== */

void TComponent_dynamic_fffa(void)

{
  return;
}


/* ==== 004159ac TComponent.dynamic_fff3 ==== */

undefined4 TComponent_dynamic_fff3(void)

{
  return 0;
}


/* ==== 004159b0 TComponent.dynamic_fff9 ==== */

void TComponent_dynamic_fff9(void)

{
  return;
}


/* ==== 004159b4 TComponent.dynamic_fff8 ==== */

void TComponent_dynamic_fff8(int param_1)

{
  *(ushort *)(param_1 + 0x20) = *(ushort *)(param_1 + 0x20) | 0x40;
  return;
}


/* ==== 004159c0 TComponent.dynamic_fff7 ==== */

void TComponent_dynamic_fff7(int param_1)

{
  *(ushort *)(param_1 + 0x20) = *(ushort *)(param_1 + 0x20) & 0xffbf;
  return;
}


/* ==== 004159cc TComponent.virtual_00c ==== */

void TComponent_virtual_00c(int param_1)

{
  *(ushort *)(param_1 + 0x20) = *(ushort *)(param_1 + 0x20) & 0xfffe;
  return;
}


/* ==== 004159d8 TComponent.virtual_014 ==== */

void TComponent_virtual_014(int *param_1,int *param_2,uint param_3)

{
  FUN_00413d98(param_2,param_1,param_3);
  return;
}


/* ==== 004159e0 TComponent.virtual_024 ==== */

void TComponent_virtual_024(undefined4 param_1,int *param_2)

{
  (**(code **)(*param_2 + 0x10))(param_2,param_1);
  return;
}


/* ==== 004159e8 TComponent.virtual_020 ==== */

void TComponent_virtual_020(int param_1,int param_2,char *param_3,char *param_4)

{
  undefined4 uVar1;
  int iVar2;
  char *local_10;
  undefined1 local_c;
  char *local_8;
  
  local_8 = param_3;
  if (param_2 != 0) {
    uVar1 = FUN_0040830c(param_3,param_4);
    if (((char)uVar1 == '\0') && (param_1 == *(int *)(param_2 + 4))) {
      iVar2 = FUN_00415a80(param_1,param_4);
      if (iVar2 != 0) {
        local_10 = param_4;
        local_c = 0xb;
        uVar1 = FUN_0040b6d0((int)&DAT_0040e954,'\x01',(undefined4 *)PTR_PTR_004ab870,0,&local_10);
        System__RaiseExcept(uVar1);
      }
    }
  }
  if (((*(byte *)(param_1 + 0x20) & 0x10) != 0) && (*(int *)(param_1 + 4) != 0)) {
    (**(code **)(**(int **)(param_1 + 4) + 0x20))(*(int **)(param_1 + 4),param_2,local_8,param_4);
  }
  return;
}


/* ==== 00415a68 TComponent.dynamic_fff6 ==== */

void TComponent_dynamic_fff6(undefined4 param_1,int *param_2,undefined4 param_3)

{
  System__CallDynaInst(param_2,param_1,param_3);
  return;
}


/* ==== 00415a7c TComponent.dynamic_fff5 ==== */

void TComponent_dynamic_fff5(void)

{
  return;
}


/* ==== 00415a80 FUN_00415a80 ==== */

int FUN_00415a80(int param_1,char *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int i_val;
  int j;
  
  if (((param_2 != (char *)0x0) && (*(int *)(param_1 + 0x10) != 0)) &&
     (i_val = *(int *)(*(int *)(param_1 + 0x10) + 8), -1 < i_val + -1)) {
    j = 0;
    do {
      iVar1 = Classes_TList_Get(*(undefined4 **)(param_1 + 0x10),j);
      uVar2 = FUN_0040830c(*(char **)(iVar1 + 8),param_2);
      if ((char)uVar2 != '\0') {
        return iVar1;
      }
      j = j + 1;
      i_val = i_val + -1;
    } while (i_val != 0);
  }
  return 0;
}


/* ==== 00415ad0 TComponent.virtual_018 ==== */

void TComponent_virtual_018(int *param_1,uint *param_2)

{
  int *piVar1;
  undefined4 uVar2;
  bool bVar3;
  uint *local_14;
  undefined1 local_10;
  
  bVar3 = &stack0x00000000 == (undefined1 *)0x14;
  System__LStrCmp((uint *)param_1[2],param_2);
  if (!bVar3) {
    if (param_2 != (uint *)0x0) {
      uVar2 = FUN_00408548((char *)param_2);
      if ((char)uVar2 == '\0') {
        local_10 = 0xb;
        local_14 = param_2;
        uVar2 = FUN_0040b6d0((int)&DAT_0040e954,'\x01',(undefined4 *)PTR_PTR_004ab808,0,&local_14);
        System__RaiseExcept(uVar2);
      }
    }
    piVar1 = (int *)param_1[1];
    if (piVar1 == (int *)0x0) {
      (**(code **)(*param_1 + 0x20))(param_1,0,param_1[2],param_2);
    }
    else {
      (**(code **)(*piVar1 + 0x20))(piVar1,param_1,param_1[2],param_2);
    }
    FUN_00415c50((int)param_1,'\0');
    FUN_00415b5c((int)param_1,param_2);
    FUN_00415c50((int)param_1,'\x01');
  }
  return;
}


/* ==== 00415b5c FUN_00415b5c ==== */

void FUN_00415b5c(int param_1,undefined4 *param_2)

{
  System__LStrAsg((int *)(param_1 + 8),param_2);
  return;
}


/* ==== 00415b70 FUN_00415b70 ==== */

void FUN_00415b70(int param_1,int param_2)

{
  if (*(int *)(param_1 + 0x10) == 0) {
    FUN_004101ec(&PTR_TList_virtual_000_0040ea6c,(undefined4 *)PTR_PTR_004ab930,param_2);
  }
  Classes_TList_Get(*(undefined4 **)(param_1 + 0x10),param_2);
  return;
}


/* ==== 00415b9c FUN_00415b9c ==== */

undefined4 FUN_00415b9c(int param_1)

{
  if (*(int *)(param_1 + 0x10) != 0) {
    return *(undefined4 *)(*(int *)(param_1 + 0x10) + 8);
  }
  return 0;
}


/* ==== 00415bac FUN_00415bac ==== */

void FUN_00415bac(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 4) != 0) {
    iVar3 = Classes_TList_IndexOf(*(int *)(*(int *)(param_1 + 4) + 0x10),param_1);
    if (-1 < iVar3) {
      piVar1 = *(int **)(*(int *)(param_1 + 4) + 0x10);
      iVar2 = piVar1[2];
      if (param_2 < 0) {
        param_2 = 0;
      }
      if (iVar2 <= param_2) {
        param_2 = iVar2 + -1;
      }
      if (iVar3 != param_2) {
        Classes_TList_Delete(piVar1,iVar3);
        FUN_0041032c(*(int **)(*(int *)(param_1 + 4) + 0x10),param_2,param_1);
      }
    }
  }
  return;
}


/* ==== 00415c00 FUN_00415c00 ==== */

void FUN_00415c00(int param_1,undefined4 param_2,char param_3)

{
  int i_val;
  int iVar1;
  int j;
  
  if ((char)param_2 == '\0') {
    *(ushort *)(param_1 + 0x20) = *(ushort *)(param_1 + 0x20) & 0xffef;
  }
  else {
    *(ushort *)(param_1 + 0x20) = *(ushort *)(param_1 + 0x20) | 0x10;
  }
  if (param_3 != '\0') {
    i_val = FUN_00415b9c(param_1);
    if (-1 < i_val + -1) {
      j = 0;
      do {
        iVar1 = FUN_00415b70(param_1,j);
        FUN_00415c00(iVar1,param_2,'\x01');
        j = j + 1;
        i_val = i_val + -1;
      } while (i_val != 0);
    }
  }
  return;
}


/* ==== 00415c50 FUN_00415c50 ==== */

void FUN_00415c50(int param_1,char param_2)

{
  int *piVar1;
  char acStack_10c [256];
  
  piVar1 = *(int **)(param_1 + 4);
  if (piVar1 != (int *)0x0) {
    FUN_00403eb8(acStack_10c,*(undefined4 **)(param_1 + 8),0xff);
    piVar1 = (int *)FUN_0040324c(piVar1,acStack_10c);
    if (piVar1 != (int *)0x0) {
      if (param_2 == '\0') {
        *piVar1 = 0;
      }
      else {
        *piVar1 = param_1;
      }
    }
  }
  return;
}


/* ==== 00415c98 TComponent.dynamic_fff4 ==== */

undefined4 TComponent_dynamic_fff4(undefined4 param_1,int *param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = (**(code **)(*param_2 + 0x38))(param_2,param_1);
  if (cVar1 != '\0') {
    uVar2 = (**(code **)(*param_2 + 0x40))(param_2,param_1);
    return CONCAT31((int3)((uint)uVar2 >> 8),1);
  }
  return 0;
}


/* ==== 00415cc0 TComponent.dynamic_fff1 ==== */

undefined4 TComponent_dynamic_fff1(undefined4 param_1,int *param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = (**(code **)(*param_2 + 0x38))(param_2,param_1);
  if (cVar1 != '\0') {
    uVar2 = (**(code **)(*param_2 + 0x3c))(param_2,param_1);
    return CONCAT31((int3)((uint)uVar2 >> 8),1);
  }
  return 0;
}


/* ==== 00415ce8 TComponent.SafeCallException ==== */

void TComponent_SafeCallException(int param_1)

{
  if (*(int *)(param_1 + 0x1c) != 0) {
    (**(code **)(**(int **)(param_1 + 0x1c) + 0x1c))();
    return;
  }
  TObject_SafeCallException();
  return;
}


/* ==== 00415d00 TComponent.virtual_01c ==== */

void TComponent_virtual_01c(void)

{
  return;
}


/* ==== 00415d08 TComponent.virtual_028 ==== */

undefined4 TComponent_virtual_028(void)

{
  char cVar1;
  undefined4 uVar2;
  int *in_stack_00000004;
  int *in_stack_00000008;
  int *in_stack_0000000c;
  
  if (in_stack_00000004[7] == 0) {
    cVar1 = FUN_00403030(in_stack_00000004,in_stack_00000008,in_stack_0000000c);
    if (cVar1 == '\0') {
      uVar2 = 0x80004002;
    }
    else {
      uVar2 = 0;
    }
  }
  else {
    uVar2 = (*(code *)**(undefined4 **)in_stack_00000004[7])();
  }
  return uVar2;
}


/* ==== 00415d48 TBasicActionLink.virtual_014 ==== */

int * TBasicActionLink_virtual_014(int *param_1,char param_2,undefined4 param_3)

{
  undefined4 extraout_ECX;
  char extraout_DL;
  char cVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_ffffffe4;
  undefined4 in_stack_ffffffe8;
  
  cVar1 = '\0';
  if (param_2 != '\0') {
    param_1 = (int *)System__ClassCreate((int)param_1,param_2,param_3,in_stack_ffffffe4,
                                         in_stack_ffffffe8);
    param_3 = extraout_ECX;
    cVar1 = extraout_DL;
  }
  System_TObject_Create(param_1,'\0',param_3);
  (**(code **)*param_1)(param_1,param_3);
  if (cVar1 != '\0') {
    System__AfterConstruction(param_1);
    *in_FS_OFFSET = in_stack_ffffffe4;
  }
  return param_1;
}


/* ==== 00415d8c TBasicActionLink.virtual_000 ==== */

void TBasicActionLink_virtual_000(void)

{
  return;
}


/* ==== 00415d90 TBasicActionLink.Destroy ==== */

void TBasicActionLink_Destroy(int *param_1,char param_2)

{
  int *piVar1;
  byte extraout_DL;
  
  piVar1 = System__BeforeDestruction(param_1,param_2);
  if (piVar1[4] != 0) {
    FUN_00415f78(piVar1[4],(int)piVar1);
  }
  TObject_Destroy(piVar1,extraout_DL & 0xfc);
  if ('\0' < (char)extraout_DL) {
    System__ClassDestroy(piVar1);
  }
  return;
}


/* ==== 00415dc4 TBasicActionLink.virtual_004 ==== */

void TBasicActionLink_virtual_004(int param_1)

{
  if (*(short *)(param_1 + 10) != 0) {
    (**(code **)(param_1 + 8))(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x10));
  }
  return;
}


/* ==== 00415ddc TBasicActionLink.virtual_018 ==== */

void TBasicActionLink_virtual_018(int param_1,undefined4 param_2,undefined4 param_3)

{
  System__CallDynaInst(*(int **)(param_1 + 0x10),param_2,param_3);
  return;
}


/* ==== 00415dec TBasicActionLink.virtual_00c ==== */

void TBasicActionLink_virtual_00c(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x10);
  if (param_2 != iVar1) {
    if (iVar1 != 0) {
      FUN_00415f78(iVar1,param_1);
    }
    *(int *)(param_1 + 0x10) = param_2;
    if (param_2 != 0) {
      FUN_00415f6c(param_2,param_1);
    }
  }
  return;
}


/* ==== 00415e18 TBasicActionLink.virtual_008 ==== */

undefined1 TBasicActionLink_virtual_008(void)

{
  return 1;
}


/* ==== 00415e1c TBasicActionLink.virtual_010 ==== */

void TBasicActionLink_virtual_010(void)

{
  return;
}


/* ==== 00415e24 TBasicActionLink.virtual_01c ==== */

void TBasicActionLink_virtual_01c(int param_1)

{
  (**(code **)(**(int **)(param_1 + 0x10) + 0x44))();
  return;
}


/* ==== 00415e30 TBasicAction.virtual_02c ==== */

int * TBasicAction_virtual_02c(int *param_1,char param_2,int *param_3)

{
  int iVar1;
  int *extraout_ECX;
  undefined4 extraout_ECX_00;
  char extraout_DL;
  char cVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_ffffffe8;
  undefined4 in_stack_ffffffec;
  
  cVar2 = '\0';
  if (param_2 != '\0') {
    param_1 = (int *)System__ClassCreate((int)param_1,param_2,param_3,in_stack_ffffffe8,
                                         in_stack_ffffffec);
    param_3 = extraout_ECX;
    cVar2 = extraout_DL;
  }
  TComponent_virtual_02c(param_1,'\0',param_3);
  iVar1 = System_TObject_Create((int *)&PTR_TList_virtual_000_0040ea6c,'\x01',extraout_ECX_00);
  param_1[0x10] = iVar1;
  if (cVar2 != '\0') {
    System__AfterConstruction(param_1);
    *in_FS_OFFSET = in_stack_ffffffe8;
  }
  return param_1;
}


/* ==== 00415e74 TBasicAction.Destroy ==== */

void TBasicAction_Destroy(int *param_1,char param_2)

{
  int *piVar1;
  int iVar2;
  byte extraout_DL;
  
  piVar1 = System__BeforeDestruction(param_1,param_2);
  TComponent_Destroy(piVar1,extraout_DL & 0xfc);
  while (0 < (int)((undefined4 *)piVar1[0x10])[2]) {
    iVar2 = FUN_00410398((undefined4 *)piVar1[0x10]);
    FUN_00415f78((int)piVar1,iVar2);
  }
  System_TObject_Free((int *)piVar1[0x10]);
  if ('\0' < (char)extraout_DL) {
    System__ClassDestroy(piVar1);
  }
  return;
}


/* ==== 00415ec0 TBasicAction.virtual_038 ==== */

undefined4 TBasicAction_virtual_038(void)

{
  return 0;
}


/* ==== 00415ec4 TBasicAction.virtual_040 ==== */

void TBasicAction_virtual_040(void)

{
  return;
}


/* ==== 00415ec8 TBasicAction.virtual_03c ==== */

void TBasicAction_virtual_03c(void)

{
  return;
}


/* ==== 00415ecc TBasicAction.dynamic_fff0 ==== */

undefined4 TBasicAction_dynamic_fff0(int param_1)

{
  undefined4 uVar1;
  
  if (*(short *)(param_1 + 0x32) != 0) {
    uVar1 = (**(code **)(param_1 + 0x30))(*(undefined4 *)(param_1 + 0x34),param_1);
    return CONCAT31((int3)((uint)uVar1 >> 8),1);
  }
  return 0;
}


/* ==== 00415ee8 TBasicAction.virtual_044 ==== */

undefined4 TBasicAction_virtual_044(int param_1)

{
  undefined4 uVar1;
  
  if (*(short *)(param_1 + 0x3a) != 0) {
    uVar1 = (**(code **)(param_1 + 0x38))(*(undefined4 *)(param_1 + 0x3c),param_1);
    return CONCAT31((int3)((uint)uVar1 >> 8),1);
  }
  return 0;
}


/* ==== 00415f04 TBasicAction.virtual_034 ==== */

void TBasicAction_virtual_034
               (int *param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5)

{
  int *piVar1;
  int i_val;
  int j;
  
  if (param_4 != param_1[0xc]) {
    i_val = *(int *)(param_1[0x10] + 8);
    if (-1 < i_val + -1) {
      j = 0;
      do {
        piVar1 = (int *)Classes_TList_Get((undefined4 *)param_1[0x10],j);
        (**(code **)(*piVar1 + 0x10))();
        j = j + 1;
        i_val = i_val + -1;
      } while (i_val != 0);
    }
    param_1[0xc] = param_4;
    param_1[0xd] = param_5;
    (**(code **)(*param_1 + 0x30))();
  }
  return;
}


/* ==== 00415f58 TBasicAction.virtual_030 ==== */

void TBasicAction_virtual_030(int param_1)

{
  if (*(short *)(param_1 + 0x2a) != 0) {
    (**(code **)(param_1 + 0x28))(*(undefined4 *)(param_1 + 0x2c),param_1);
  }
  return;
}


/* ==== 00415f6c FUN_00415f6c ==== */

void FUN_00415f6c(int param_1,int param_2)

{
  *(int *)(param_2 + 0x10) = param_1;
  Classes_TList_Add(*(int **)(param_1 + 0x40),param_2);
  return;
}


/* ==== 00415f78 FUN_00415f78 ==== */

void FUN_00415f78(int param_1,int param_2)

{
  int iVar1;
  int j;
  int i_val;
  
  i_val = *(int *)(*(int *)(param_1 + 0x40) + 8);
  if (-1 < i_val + -1) {
    j = 0;
    do {
      iVar1 = Classes_TList_Get(*(undefined4 **)(param_1 + 0x40),j);
      if (param_2 == iVar1) {
        *(undefined4 *)(param_2 + 0x10) = 0;
        Classes_TList_Delete(*(int **)(param_1 + 0x40),j);
        return;
      }
      j = j + 1;
      i_val = i_val + -1;
    } while (i_val != 0);
  }
  return;
}


/* ==== 00415fb8 FUN_00415fb8 ==== */

int * FUN_00415fb8(int *param_1,char param_2,int param_3,undefined1 param_4)

{
  int extraout_ECX;
  char extraout_DL;
  char cVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_ffffffe0;
  undefined4 in_stack_ffffffe4;
  
  cVar1 = '\0';
  if (param_2 != '\0') {
    param_1 = (int *)System__ClassCreate((int)param_1,param_2,param_3,in_stack_ffffffe0,
                                         in_stack_ffffffe4);
    param_3 = extraout_ECX;
    cVar1 = extraout_DL;
  }
  System_TObject_Create(param_1,'\0',param_3);
  param_1[3] = param_3;
  *(undefined1 *)(param_1 + 4) = param_4;
  if (cVar1 != '\0') {
    System__AfterConstruction(param_1);
    *in_FS_OFFSET = in_stack_ffffffe0;
  }
  return param_1;
}


/* ==== 00416000 TStreamAdapter.Destroy ==== */

void TStreamAdapter_Destroy(int *param_1,char param_2)

{
  int *piVar1;
  byte extraout_DL;
  
  piVar1 = System__BeforeDestruction(param_1,param_2);
  if ((char)piVar1[4] == '\x01') {
    System_TObject_Free((int *)piVar1[3]);
    piVar1[3] = 0;
  }
  TObject_Destroy(piVar1,extraout_DL & 0xfc);
  if ('\0' < (char)extraout_DL) {
    System__ClassDestroy(piVar1);
  }
  return;
}


/* ==== 00416038 TStreamAdapter.virtual_000 ==== */

undefined4 TStreamAdapter_virtual_000(void)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  int in_stack_00000004;
  int in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 *in_stack_00000010;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  
  puStack_14 = &stack0xfffffffc;
  puStack_18 = &LAB_00416087;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  if (in_stack_00000008 == 0) {
    uVar1 = 0x80030009;
    *in_FS_OFFSET = uStack_1c;
  }
  else {
    uVar1 = (**(code **)(**(int **)(in_stack_00000004 + 0xc) + 4))
                      (*(int **)(in_stack_00000004 + 0xc),in_stack_00000008,in_stack_0000000c);
    if (in_stack_00000010 != (undefined4 *)0x0) {
      *in_stack_00000010 = uVar1;
    }
    uVar1 = 0;
    *in_FS_OFFSET = uStack_1c;
  }
  return uVar1;
}


/* ==== 004160a0 TStreamAdapter.virtual_004 ==== */

undefined4 TStreamAdapter_virtual_004(void)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  int in_stack_00000004;
  int in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 *in_stack_00000010;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  
  puStack_14 = &stack0xfffffffc;
  puStack_18 = &LAB_004160ef;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  if (in_stack_00000008 == 0) {
    uVar1 = 0x80030009;
    *in_FS_OFFSET = uStack_1c;
  }
  else {
    uVar1 = (**(code **)(**(int **)(in_stack_00000004 + 0xc) + 8))
                      (*(int **)(in_stack_00000004 + 0xc),in_stack_00000008,in_stack_0000000c);
    if (in_stack_00000010 != (undefined4 *)0x0) {
      *in_stack_00000010 = uVar1;
    }
    uVar1 = 0;
    *in_FS_OFFSET = uStack_1c;
  }
  return uVar1;
}


/* ==== 00416108 TStreamAdapter.virtual_008 ==== */

undefined4 TStreamAdapter_virtual_008(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *in_FS_OFFSET;
  int in_stack_00000004;
  undefined4 in_stack_00000008;
  int in_stack_00000010;
  int *in_stack_00000014;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  
  puStack_14 = &stack0xfffffffc;
  puStack_18 = &LAB_00416167;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  if ((in_stack_00000010 < 0) || (2 < in_stack_00000010)) {
    uVar2 = 0x80030001;
    *in_FS_OFFSET = uStack_1c;
  }
  else {
    iVar1 = (**(code **)(**(int **)(in_stack_00000004 + 0xc) + 0xc))
                      (*(int **)(in_stack_00000004 + 0xc),in_stack_00000008);
    if (in_stack_00000014 != (int *)0x0) {
      *in_stack_00000014 = iVar1;
      in_stack_00000014[1] = iVar1 >> 0x1f;
    }
    uVar2 = 0;
    *in_FS_OFFSET = uStack_1c;
  }
  return uVar2;
}


/* ==== 00416180 TStreamAdapter.virtual_00c ==== */

undefined4 TStreamAdapter_virtual_00c(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *in_FS_OFFSET;
  int in_stack_00000004;
  int in_stack_00000008;
  int in_stack_0000000c;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  
  puStack_14 = &stack0xfffffffc;
  puStack_18 = &LAB_004161c9;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  (**(code **)**(undefined4 **)(in_stack_00000004 + 0xc))
            (*(undefined4 **)(in_stack_00000004 + 0xc),in_stack_00000008);
  iVar1 = FUN_00412680(*(int **)(in_stack_00000004 + 0xc));
  if (iVar1 >> 0x1f == in_stack_0000000c && iVar1 == in_stack_00000008) {
    uVar2 = 0;
  }
  else {
    uVar2 = 0x80004005;
  }
  *in_FS_OFFSET = uStack_1c;
  return uVar2;
}


/* ==== 004161e4 TStreamAdapter.virtual_010 ==== */

void TStreamAdapter_virtual_010(void)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *in_FS_OFFSET;
  bool bVar5;
  int in_stack_00000004;
  int *in_stack_00000008;
  uint in_stack_0000000c;
  int in_stack_00000010;
  uint *in_stack_00000014;
  undefined4 *in_stack_00000018;
  undefined4 uStack_5c;
  undefined1 *puStack_58;
  undefined1 *puStack_54;
  undefined4 uStack_50;
  undefined1 *puStack_4c;
  undefined1 *puStack_48;
  undefined4 uStack_44;
  undefined1 *puStack_40;
  undefined1 *puStack_3c;
  uint local_1c;
  uint local_18;
  uint local_10;
  int local_8;
  
  puStack_3c = (undefined1 *)0x4161f5;
  FUN_004058c0(in_stack_00000008);
  puStack_40 = &LAB_004163b8;
  uStack_44 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_44;
  local_1c = 0;
  local_18 = 0;
  puStack_4c = &LAB_00416391;
  uStack_50 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_50;
  if (in_stack_00000010 == 0) {
    if (in_stack_0000000c < 0x100001) {
LAB_0041624e:
      local_10 = in_stack_0000000c;
      goto LAB_00416254;
    }
  }
  else if (in_stack_00000010 < 1) goto LAB_0041624e;
  local_10 = 0x100000;
LAB_00416254:
  puStack_54 = (undefined1 *)0x41625c;
  puStack_48 = &stack0xfffffffc;
  puStack_3c = &stack0xfffffffc;
  iVar2 = System__GetMem(local_10);
  puStack_58 = &LAB_00416380;
  uStack_5c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_5c;
  puStack_54 = &stack0xfffffffc;
  do {
    if (in_stack_00000010 == 0) {
      if (in_stack_0000000c == 0) {
LAB_00416340:
        *in_FS_OFFSET = uStack_5c;
        puStack_54 = &DAT_00416387;
        puStack_58 = (undefined1 *)0x416355;
        System__FreeMem(iVar2);
        if (in_stack_00000018 != (undefined4 *)0x0) {
          *in_stack_00000018 = 0;
          in_stack_00000018[1] = 0;
        }
        if (in_stack_00000014 != (uint *)0x0) {
          *in_stack_00000014 = local_1c;
          in_stack_00000014[1] = local_18;
        }
        return;
      }
    }
    else if (in_stack_00000010 < 1) goto LAB_00416340;
    uVar1 = in_stack_0000000c;
    if (in_stack_00000010 == 0) {
      if (0x7fffffff < in_stack_0000000c) {
LAB_00416285:
        uVar1 = 0x7fffffff;
      }
    }
    else if (0 < in_stack_00000010) goto LAB_00416285;
    for (; 0 < (int)uVar1; uVar1 = uVar1 - uVar4) {
      uVar4 = uVar1;
      if ((int)local_10 < (int)uVar1) {
        uVar4 = local_10;
      }
      uVar3 = (**(code **)(**(int **)(in_stack_00000004 + 0xc) + 4))
                        (*(int **)(in_stack_00000004 + 0xc),iVar2,uVar4);
      bVar5 = CARRY4(local_1c,uVar3);
      local_1c = local_1c + uVar3;
      local_18 = local_18 + ((int)uVar3 >> 0x1f) + (uint)bVar5;
      local_8 = (**(code **)(*in_stack_00000008 + 0x10))();
      if ((local_8 == 0) && (uVar4 != 0)) {
        local_8 = -0x7fffbffb;
      }
      if (local_8 != 0) {
        FUN_00403794();
        *in_FS_OFFSET = uStack_50;
        *in_FS_OFFSET = uStack_44;
        puStack_3c = &LAB_004163bf;
        puStack_40 = (undefined1 *)0x4163b7;
        System__IntfClear((int *)&stack0x00000008);
        return;
      }
    }
    bVar5 = in_stack_0000000c < uVar1;
    in_stack_0000000c = in_stack_0000000c - uVar1;
    in_stack_00000010 = (in_stack_00000010 - ((int)uVar1 >> 0x1f)) - (uint)bVar5;
  } while( true );
}


/* ==== 004163cc TStreamAdapter.virtual_014 ==== */

undefined4 TStreamAdapter_virtual_014(void)

{
  return 0;
}


/* ==== 004163d8 TStreamAdapter.virtual_018 ==== */

undefined4 TStreamAdapter_virtual_018(void)

{
  return 0x80030102;
}


/* ==== 004163e4 TStreamAdapter.virtual_01c ==== */

undefined4 TStreamAdapter_virtual_01c(void)

{
  return 0x80030001;
}


/* ==== 004163f0 TStreamAdapter.virtual_020 ==== */

undefined4 TStreamAdapter_virtual_020(void)

{
  return 0x80030001;
}


/* ==== 004163fc TStreamAdapter.virtual_024 ==== */

undefined4 TStreamAdapter_virtual_024(void)

{
  int iVar1;
  undefined4 *in_FS_OFFSET;
  int in_stack_00000004;
  int in_stack_00000008;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  
  puStack_14 = &stack0xfffffffc;
  puStack_18 = &LAB_00416461;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  if (in_stack_00000008 != 0) {
    *(undefined4 *)(in_stack_00000008 + 4) = 2;
    iVar1 = FUN_00412680(*(int **)(in_stack_00000004 + 0xc));
    *(int *)(in_stack_00000008 + 8) = iVar1;
    *(int *)(in_stack_00000008 + 0xc) = iVar1 >> 0x1f;
    *(undefined4 *)(in_stack_00000008 + 0x10) = 0;
    *(undefined4 *)(in_stack_00000008 + 0x14) = 0;
    *(undefined4 *)(in_stack_00000008 + 0x18) = 0;
    *(undefined4 *)(in_stack_00000008 + 0x1c) = 0;
    *(undefined4 *)(in_stack_00000008 + 0x20) = 0;
    *(undefined4 *)(in_stack_00000008 + 0x24) = 0;
    *(undefined4 *)(in_stack_00000008 + 0x2c) = 1;
  }
  *in_FS_OFFSET = uStack_1c;
  return 0;
}


/* ==== 0041647c TStreamAdapter.virtual_028 ==== */

undefined4 TStreamAdapter_virtual_028(void)

{
  undefined4 *in_stack_00000008;
  
  if (in_stack_00000008 != (undefined4 *)0x0) {
    *in_stack_00000008 = 0;
  }
  return 0x80004001;
}


/* ==== 00416494 FUN_00416494 ==== */

void FUN_00416494(void)

{
  undefined4 *puVar1;
  int *piVar2;
  int i_val;
  int j;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  
  puStack_14 = (undefined1 *)0x4164a4;
  puVar1 = (undefined4 *)FUN_00410750(DAT_004ac62c);
  puStack_18 = &LAB_004164e9;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  i_val = puVar1[2];
  if (-1 < i_val + -1) {
    j = 0;
    puStack_14 = &stack0xfffffffc;
    do {
      piVar2 = (int *)Classes_TList_Get(puVar1,j);
      System_TObject_Free(piVar2);
      j = j + 1;
      i_val = i_val + -1;
    } while (i_val != 0);
  }
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_004164f0;
  puStack_18 = (undefined1 *)0x4164e8;
  FUN_004107b4(DAT_004ac62c);
  return;
}


/* ==== 0045e1ec TStrings.virtual_00c ==== */

void TStrings_virtual_00c(void)

{
  if (DAT_004ac01c != (code *)0x0) {
    (*DAT_004ac01c)();
  }
  FUN_00403c34(0xd2);
  return;
}


/* ==== 0045e350 FUN_0045e350 ==== */

void FUN_0045e350(int *param_1,undefined4 param_2)

{
  FUN_004126b8(param_1,param_2,4);
  return;
}


/* ==== 0045e360 FUN_0045e360 ==== */

void FUN_0045e360(int *param_1,undefined4 param_2)

{
  FUN_004126b8(param_1,param_2,0x21);
  return;
}


/* ==== 0045e370 FUN_0045e370 ==== */

void FUN_0045e370(int *param_1,undefined4 param_2)

{
  FUN_004126b8(param_1,param_2,1);
  return;
}


/* ==== 0045e380 FUN_0045e380 ==== */

void FUN_0045e380(int *param_1,undefined4 param_2)

{
  undefined4 local_8;
  
  local_8 = param_2;
  FUN_004126f0(param_1,&local_8,4);
  return;
}


/* ==== 0045e398 FUN_0045e398 ==== */

void FUN_0045e398(int *param_1,undefined4 param_2)

{
  FUN_004126f0(param_1,param_2,0x21);
  return;
}


/* ==== 0045e3a8 FUN_0045e3a8 ==== */

void FUN_0045e3a8(int *param_1)

{
  undefined1 local_5;
  
  FUN_004126f0(param_1,&local_5,1);
  return;
}


/* ==== 0045e3c0 TDataObject.virtual_004 ==== */

int * TDataObject_virtual_004(int *param_1,char param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  char extraout_DL;
  char cVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_ffffffe4;
  undefined4 in_stack_ffffffe8;
  
  cVar2 = '\0';
  if (param_2 != '\0') {
    param_1 = (int *)System__ClassCreate((int)param_1,param_2,param_3,in_stack_ffffffe4,
                                         in_stack_ffffffe8);
    param_3 = extraout_ECX;
    cVar2 = extraout_DL;
  }
  System_TObject_Create(param_1,'\0',param_3);
  iVar1 = System_TObject_Create((int *)&PTR_TPersistent_virtual_000_0040eee8,'\x01',extraout_ECX_00)
  ;
  param_1[1] = iVar1;
  if (cVar2 != '\0') {
    System__AfterConstruction(param_1);
    *in_FS_OFFSET = in_stack_ffffffe4;
  }
  return param_1;
}


/* ==== 0045e408 TDataObject.Destroy ==== */

void TDataObject_Destroy(int *param_1,char param_2)

{
  int *piVar1;
  byte extraout_DL;
  
  piVar1 = System__BeforeDestruction(param_1,param_2);
  (**(code **)(*(int *)piVar1[1] + 0x40))();
  SysUtils_FreeAndNil(piVar1 + 1);
  TObject_Destroy(piVar1,extraout_DL & 0xfc);
  if ('\0' < (char)extraout_DL) {
    System__ClassDestroy(piVar1);
  }
  return;
}


/* ==== 0045e444 TDataObject.virtual_00c ==== */

void TDataObject_virtual_00c(int *param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_11c;
  undefined1 *puStack_118;
  undefined1 *puStack_114;
  byte local_108 [256];
  int local_8;
  
  puStack_114 = &stack0xfffffffc;
  local_8 = 0;
  puStack_118 = &LAB_0045e4ca;
  uStack_11c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_11c;
  iVar1 = FUN_00402ee0(param_2);
  iVar2 = FUN_00402ee0(param_1);
  if (iVar1 != iVar2) {
    System_TObject_ClassName(*param_1,local_108);
    System__LStrFromString(&local_8,local_108);
    System__LStrCat(&local_8,(undefined4 *)".Assign: Incompatible classtype");
    System__Assert(local_8);
  }
  *in_FS_OFFSET = uStack_11c;
  puStack_114 = &LAB_0045e4d1;
  puStack_118 = (undefined1 *)0x45e4c9;
  System__LStrClr(&local_8);
  return;
}


/* ==== 0045e524 TDataList.virtual_018 ==== */

int * TDataList_virtual_018(int *param_1,char param_2,int param_3)

{
  int iVar1;
  int extraout_ECX;
  undefined4 extraout_ECX_00;
  char extraout_DL;
  char cVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_ffffffe0;
  undefined4 in_stack_ffffffe4;
  
  cVar2 = '\0';
  if (param_2 != '\0') {
    param_1 = (int *)System__ClassCreate((int)param_1,param_2,param_3,in_stack_ffffffe0,
                                         in_stack_ffffffe4);
    param_3 = extraout_ECX;
    cVar2 = extraout_DL;
  }
  TDataObject_virtual_004(param_1,'\0',param_3);
  iVar1 = System_TObject_Create((int *)&PTR_TList_virtual_000_0040ea6c,'\x01',extraout_ECX_00);
  param_1[3] = iVar1;
  param_1[2] = param_3;
  if (cVar2 != '\0') {
    System__AfterConstruction(param_1);
    *in_FS_OFFSET = in_stack_ffffffe0;
  }
  return param_1;
}


/* ==== 0045e574 TDataList.Destroy ==== */

void TDataList_Destroy(int *param_1,char param_2)

{
  int *piVar1;
  byte extraout_DL;
  
  piVar1 = System__BeforeDestruction(param_1,param_2);
  FUN_0045e860((int)piVar1);
  System_TObject_Free((int *)piVar1[3]);
  piVar1[3] = 0;
  TDataObject_Destroy(piVar1,extraout_DL & 0xfc);
  if ('\0' < (char)extraout_DL) {
    System__ClassDestroy(piVar1);
  }
  return;
}


/* ==== 0045e5b4 TDataList.virtual_00c ==== */

void TDataList_virtual_00c(int *param_1,int *param_2)

{
  int iVar1;
  uint i_val;
  int *piVar2;
  undefined4 uVar3;
  int j;
  
  TDataObject_virtual_00c(param_1,param_2);
  FUN_0045e860((int)param_1);
  iVar1 = System__AsClass(param_2,(int)&PTR_TDataList_virtual_000_0045e240);
  i_val = FUN_0045e8a0(iVar1);
  if (SBORROW4(i_val,1)) {
    System__RunError(i_val);
  }
  if (-1 < (int)(i_val - 1)) {
    j = 0;
    do {
      piVar2 = (int *)(**(code **)(param_1[2] + 4))(param_1[2],1);
      iVar1 = System__AsClass(param_2,(int)&PTR_TDataList_virtual_000_0045e240);
      uVar3 = FUN_0045e640(iVar1,j);
      (**(code **)(*piVar2 + 0xc))(piVar2,uVar3);
      FUN_0045e7e4((int)param_1,piVar2);
      j = j + 1;
      i_val = i_val - 1;
    } while (i_val != 0);
  }
  return;
}


/* ==== 0045e640 FUN_0045e640 ==== */

void FUN_0045e640(int param_1,int param_2)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  int *piVar3;
  undefined4 uStack_12c;
  undefined1 *puStack_128;
  undefined1 *puStack_124;
  byte local_118 [256];
  int local_18;
  undefined1 local_14;
  byte *local_10;
  undefined1 local_c;
  int local_8;
  
  puStack_124 = &stack0xfffffffc;
  local_8 = 0;
  puStack_128 = &LAB_0045e6dd;
  uStack_12c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_12c;
  puVar1 = &stack0xfffffffc;
  if (-1 < param_2) {
    iVar2 = FUN_0045e8a0(param_1);
    puVar1 = puStack_124;
    if (param_2 < iVar2) goto LAB_0045e6bb;
  }
  puStack_124 = puVar1;
  piVar3 = &local_8;
  local_14 = 0;
  local_18 = param_2;
  System_TObject_ClassName(*(int *)(param_1 + 8),local_118);
  local_10 = local_118;
  local_c = 4;
  SysUtils_Format((byte *)"Index [%d] out of range. (%s)",&local_18,1,piVar3);
  System__Assert(local_8);
LAB_0045e6bb:
  Classes_TList_Get(*(undefined4 **)(param_1 + 0xc),param_2);
  *in_FS_OFFSET = uStack_12c;
  puStack_124 = &LAB_0045e6e4;
  puStack_128 = (undefined1 *)0x45e6dc;
  System__LStrClr(&local_8);
  return;
}


/* ==== 0045e738 TDataList.virtual_010 ==== */

void TDataList_virtual_010(int param_1,int *param_2)

{
  int i_val;
  uint uVar1;
  int *piVar2;
  int j;
  
  i_val = FUN_0045e8a0(param_1);
  uVar1 = FUN_0045e380(param_2,i_val);
  if (SBORROW4(i_val,1)) {
    System__RunError(uVar1);
  }
  if (-1 < i_val + -1) {
    j = 0;
    do {
      piVar2 = (int *)FUN_0045e640(param_1,j);
      (**(code **)(*piVar2 + 0x10))(piVar2,param_2);
      j = j + 1;
      i_val = i_val + -1;
    } while (i_val != 0);
  }
  return;
}


/* ==== 0045e788 TDataList.virtual_014 ==== */

void TDataList_virtual_014(int param_1,int *param_2)

{
  uint uVar1;
  int *piVar2;
  int i_val;
  int local_c;
  int *local_8;
  
  local_8 = param_2;
  FUN_0045e860(param_1);
  uVar1 = FUN_0045e350(local_8,&local_c);
  if (SBORROW4(local_c,1)) {
    System__RunError(uVar1);
  }
  i_val = local_c;
  if (-1 < local_c + -1) {
    do {
      piVar2 = (int *)(**(code **)(*(int *)(param_1 + 8) + 4))(*(int *)(param_1 + 8),1);
      (**(code **)(*piVar2 + 0x14))(piVar2,local_8);
      FUN_0045e7e4(param_1,piVar2);
      i_val = i_val + -1;
    } while (i_val != 0);
  }
  return;
}


/* ==== 0045e7e4 FUN_0045e7e4 ==== */

void FUN_0045e7e4(int param_1,int *param_2)

{
  undefined4 uVar1;
  
  uVar1 = System__IsClass(param_2,*(int *)(param_1 + 8));
  if ((char)uVar1 == '\0') {
    System__Assert("Assertion failure");
  }
  Classes_TList_Add(*(int **)(param_1 + 0xc),(int)param_2);
  return;
}


/* ==== 0045e860 FUN_0045e860 ==== */

void FUN_0045e860(int param_1)

{
  int *piVar1;
  int i_val;
  int j;
  
  i_val = *(int *)(*(uint *)(param_1 + 0xc) + 8);
  if (SBORROW4(i_val,1)) {
    System__RunError(*(uint *)(param_1 + 0xc));
  }
  if (-1 < i_val + -1) {
    j = 0;
    do {
      piVar1 = (int *)FUN_0045e640(param_1,j);
      System_TObject_Free(piVar1);
      j = j + 1;
      i_val = i_val + -1;
    } while (i_val != 0);
  }
  (**(code **)(**(int **)(param_1 + 0xc) + 8))();
  return;
}


/* ==== 0045e8a0 FUN_0045e8a0 ==== */

undefined4 FUN_0045e8a0(int param_1)

{
  return *(undefined4 *)(*(int *)(param_1 + 0xc) + 8);
}


/* ==== 0045e8a8 TIntegerList.virtual_004 ==== */

int * TIntegerList_virtual_004(int *param_1,char param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  char extraout_DL;
  char cVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_ffffffe4;
  undefined4 in_stack_ffffffe8;
  
  cVar2 = '\0';
  if (param_2 != '\0') {
    param_1 = (int *)System__ClassCreate((int)param_1,param_2,param_3,in_stack_ffffffe4,
                                         in_stack_ffffffe8);
    param_3 = extraout_ECX;
    cVar2 = extraout_DL;
  }
  TDataObject_virtual_004(param_1,'\0',param_3);
  iVar1 = System_TObject_Create((int *)&PTR_TList_virtual_000_0040ea6c,'\x01',extraout_ECX_00);
  param_1[2] = iVar1;
  if (cVar2 != '\0') {
    System__AfterConstruction(param_1);
    *in_FS_OFFSET = in_stack_ffffffe4;
  }
  return param_1;
}


/* ==== 0045e8f0 TIntegerList.Destroy ==== */

void TIntegerList_Destroy(int *param_1,char param_2)

{
  int *piVar1;
  byte extraout_DL;
  
  piVar1 = System__BeforeDestruction(param_1,param_2);
  System_TObject_Free((int *)piVar1[2]);
  TDataObject_Destroy(piVar1,extraout_DL & 0xfc);
  if ('\0' < (char)extraout_DL) {
    System__ClassDestroy(piVar1);
  }
  return;
}


/* ==== 0045e924 TIntegerList.virtual_00c ==== */

void TIntegerList_virtual_00c(int *param_1,int *param_2)

{
  int i_val;
  uint j;
  int iVar1;
  
  TDataObject_virtual_00c(param_1,param_2);
  FUN_0045eb18((int)param_1);
  i_val = System__AsClass(param_2,(int)&PTR_TIntegerList_virtual_000_0045e2b4);
  j = FUN_0045eb28(i_val);
  if (SBORROW4(j,1)) {
    System__RunError(j);
  }
  if (-1 < (int)(j - 1)) {
    i_val = 0;
    do {
      iVar1 = System__AsClass(param_2,(int)&PTR_TIntegerList_virtual_000_0045e2b4);
      iVar1 = FUN_0045e990(iVar1,i_val);
      FUN_0045eb08((int)param_1,iVar1);
      i_val = i_val + 1;
      j = j - 1;
    } while (j != 0);
  }
  return;
}


/* ==== 0045e990 FUN_0045e990 ==== */

void FUN_0045e990(int param_1,int param_2)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  int local_10;
  undefined1 local_c;
  int local_8;
  
  puStack_1c = &stack0xfffffffc;
  local_8 = 0;
  puStack_20 = &LAB_0045ea0c;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  puVar1 = &stack0xfffffffc;
  if (-1 < param_2) {
    iVar2 = FUN_0045eb28(param_1);
    puVar1 = puStack_1c;
    if (param_2 < iVar2) goto LAB_0045e9ea;
  }
  puStack_1c = puVar1;
  local_c = 0;
  local_10 = param_2;
  SysUtils_Format((byte *)"Index [%d] out of range.",&local_10,0,&local_8);
  System__Assert(local_8);
LAB_0045e9ea:
  Classes_TList_Get(*(undefined4 **)(param_1 + 8),param_2);
  *in_FS_OFFSET = uStack_24;
  puStack_1c = &LAB_0045ea13;
  puStack_20 = (undefined1 *)0x45ea0b;
  System__LStrClr(&local_8);
  return;
}


/* ==== 0045ea64 TIntegerList.virtual_010 ==== */

void TIntegerList_virtual_010(int param_1,int *param_2)

{
  undefined4 uVar1;
  uint i_val;
  int j;
  
  uVar1 = FUN_0045eb28(param_1);
  FUN_0045e380(param_2,uVar1);
  i_val = FUN_0045eb28(param_1);
  if (SBORROW4(i_val,1)) {
    System__RunError(i_val);
  }
  if (-1 < (int)(i_val - 1)) {
    j = 0;
    do {
      uVar1 = FUN_0045e990(param_1,j);
      FUN_0045e380(param_2,uVar1);
      j = j + 1;
      i_val = i_val - 1;
    } while (i_val != 0);
  }
  return;
}


/* ==== 0045eab8 TIntegerList.virtual_014 ==== */

void TIntegerList_virtual_014(int param_1,int *param_2)

{
  uint uVar1;
  int i_val;
  int local_c;
  int local_8;
  
  FUN_0045eb18(param_1);
  uVar1 = FUN_0045e350(param_2,&local_8);
  if (SBORROW4(local_8,1)) {
    System__RunError(uVar1);
  }
  i_val = local_8;
  if (-1 < local_8 + -1) {
    do {
      FUN_0045e350(param_2,&local_c);
      FUN_0045eb08(param_1,local_c);
      i_val = i_val + -1;
    } while (i_val != 0);
  }
  return;
}


/* ==== 0045eb08 FUN_0045eb08 ==== */

void FUN_0045eb08(int param_1,int param_2)

{
  Classes_TList_Add(*(int **)(param_1 + 8),param_2);
  return;
}


/* ==== 0045eb18 FUN_0045eb18 ==== */

void FUN_0045eb18(int param_1)

{
  (**(code **)(**(int **)(param_1 + 8) + 8))();
  return;
}


/* ==== 0045eb28 FUN_0045eb28 ==== */

undefined4 FUN_0045eb28(int param_1)

{
  return *(undefined4 *)(*(int *)(param_1 + 8) + 8);
}


/* ==== 0045eb30 TBooleanList.virtual_004 ==== */

int * TBooleanList_virtual_004(int *param_1,char param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  char extraout_DL;
  char cVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_ffffffe4;
  undefined4 in_stack_ffffffe8;
  
  cVar2 = '\0';
  if (param_2 != '\0') {
    param_1 = (int *)System__ClassCreate((int)param_1,param_2,param_3,in_stack_ffffffe4,
                                         in_stack_ffffffe8);
    param_3 = extraout_ECX;
    cVar2 = extraout_DL;
  }
  TDataObject_virtual_004(param_1,'\0',param_3);
  iVar1 = System_TObject_Create((int *)&PTR_TList_virtual_000_0040ea6c,'\x01',extraout_ECX_00);
  param_1[2] = iVar1;
  if (cVar2 != '\0') {
    System__AfterConstruction(param_1);
    *in_FS_OFFSET = in_stack_ffffffe4;
  }
  return param_1;
}


/* ==== 0045eb78 TBooleanList.Destroy ==== */

void TBooleanList_Destroy(int *param_1,char param_2)

{
  int *piVar1;
  byte extraout_DL;
  
  piVar1 = System__BeforeDestruction(param_1,param_2);
  System_TObject_Free((int *)piVar1[2]);
  TDataObject_Destroy(piVar1,extraout_DL & 0xfc);
  if ('\0' < (char)extraout_DL) {
    System__ClassDestroy(piVar1);
  }
  return;
}


/* ==== 0045ebac TBooleanList.virtual_00c ==== */

void TBooleanList_virtual_00c(int *param_1,int *param_2)

{
  int i_val;
  uint j;
  int iVar1;
  uint uVar2;
  
  TDataObject_virtual_00c(param_1,param_2);
  FUN_0045eda0((int)param_1);
  i_val = System__AsClass(param_2,(int)&LAB_0045e328);
  j = FUN_0045edb0(i_val);
  if (SBORROW4(j,1)) {
    System__RunError(j);
  }
  if (-1 < (int)(j - 1)) {
    i_val = 0;
    do {
      iVar1 = System__AsClass(param_2,(int)&LAB_0045e328);
      uVar2 = FUN_0045ec18(iVar1,i_val);
      FUN_0045ed90((int)param_1,uVar2);
      i_val = i_val + 1;
      j = j - 1;
    } while (j != 0);
  }
  return;
}


/* ==== 0045ec18 FUN_0045ec18 ==== */

void FUN_0045ec18(int param_1,int param_2)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  int local_10;
  undefined1 local_c;
  int local_8;
  
  puStack_1c = &stack0xfffffffc;
  local_8 = 0;
  puStack_20 = &LAB_0045ec94;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  puVar1 = &stack0xfffffffc;
  if (-1 < param_2) {
    iVar2 = FUN_0045edb0(param_1);
    puVar1 = puStack_1c;
    if (param_2 < iVar2) goto LAB_0045ec72;
  }
  puStack_1c = puVar1;
  local_c = 0;
  local_10 = param_2;
  SysUtils_Format((byte *)"Index [%d] out of range.",&local_10,0,&local_8);
  System__Assert(local_8);
LAB_0045ec72:
  Classes_TList_Get(*(undefined4 **)(param_1 + 8),param_2);
  *in_FS_OFFSET = uStack_24;
  puStack_1c = &LAB_0045ec9b;
  puStack_20 = (undefined1 *)0x45ec93;
  System__LStrClr(&local_8);
  return;
}


/* ==== 0045ecec TBooleanList.virtual_010 ==== */

void TBooleanList_virtual_010(int param_1,int *param_2)

{
  undefined4 uVar1;
  uint i_val;
  int j;
  
  uVar1 = FUN_0045edb0(param_1);
  FUN_0045e380(param_2,uVar1);
  i_val = FUN_0045edb0(param_1);
  if (SBORROW4(i_val,1)) {
    System__RunError(i_val);
  }
  if (-1 < (int)(i_val - 1)) {
    j = 0;
    do {
      FUN_0045ec18(param_1,j);
      FUN_0045e3a8(param_2);
      j = j + 1;
      i_val = i_val - 1;
    } while (i_val != 0);
  }
  return;
}


/* ==== 0045ed40 TBooleanList.virtual_014 ==== */

void TBooleanList_virtual_014(int param_1,int *param_2)

{
  uint uVar1;
  undefined4 extraout_EDX;
  int i_val;
  undefined1 local_9;
  int local_8;
  
  FUN_0045eda0(param_1);
  uVar1 = FUN_0045e350(param_2,&local_8);
  if (SBORROW4(local_8,1)) {
    System__RunError(uVar1);
  }
  i_val = local_8;
  if (-1 < local_8 + -1) {
    do {
      FUN_0045e370(param_2,&local_9);
      FUN_0045ed90(param_1,CONCAT31((int3)((uint)extraout_EDX >> 8),local_9));
      i_val = i_val + -1;
    } while (i_val != 0);
  }
  return;
}


/* ==== 0045ed90 FUN_0045ed90 ==== */

void FUN_0045ed90(int param_1,uint param_2)

{
  Classes_TList_Add(*(int **)(param_1 + 8),param_2 & 0x7f);
  return;
}


/* ==== 0045eda0 FUN_0045eda0 ==== */

void FUN_0045eda0(int param_1)

{
  (**(code **)(**(int **)(param_1 + 8) + 8))();
  return;
}


/* ==== 0045edb0 FUN_0045edb0 ==== */

undefined4 FUN_0045edb0(int param_1)

{
  return *(undefined4 *)(*(int *)(param_1 + 8) + 8);
}


/* ==== 0045edb8 TDataObject.virtual_014 ==== */

void TDataObject_virtual_014(void)

{
  return;
}


/* ==== 0045edbc TDataObject.virtual_010 ==== */

void TDataObject_virtual_010(void)

{
  return;
}


/* ==== 0045edc0 TDataObject.virtual_008 ==== */

void TDataObject_virtual_008(int *param_1)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_11c;
  undefined1 *puStack_118;
  undefined1 *puStack_114;
  byte local_10c [256];
  undefined4 *local_c;
  int local_8;
  
  puStack_114 = &stack0xfffffffc;
  local_8 = 0;
  local_c = (undefined4 *)0x0;
  puStack_118 = &LAB_0045ee44;
  uStack_11c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_11c;
  (**(code **)(*(int *)param_1[1] + 0x40))();
  System_TObject_ClassName(*param_1,local_10c);
  System__LStrFromString((int *)&local_c,local_10c);
  System__LStrCat3(&local_8,(undefined4 *)"---Class: ",local_c);
  (**(code **)(*(int *)param_1[1] + 0x34))((int *)param_1[1],local_8);
  (**(code **)*param_1)();
  *in_FS_OFFSET = uStack_11c;
  puStack_114 = &LAB_0045ee4b;
  puStack_118 = (undefined1 *)0x45ee43;
  System__LStrArrayClr((int *)&local_c,2);
  return;
}


/* ==== 0045ee68 FUN_0045ee68 ==== */

void FUN_0045ee68(int param_1,int param_2,int param_3)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_30;
  undefined1 *puStack_2c;
  undefined1 *puStack_28;
  int local_20;
  undefined1 local_1c;
  int local_18;
  undefined1 local_14;
  int local_10;
  int local_c;
  int local_8;
  
  local_10 = 0;
  puStack_28 = (undefined1 *)0x45ee84;
  local_c = param_3;
  local_8 = param_2;
  System__LStrAddRef(param_2);
  puStack_28 = (undefined1 *)0x45ee8c;
  System__LStrAddRef(local_c);
  puStack_2c = &LAB_0045eeea;
  uStack_30 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_30;
  local_20 = local_8;
  local_1c = 0xb;
  local_18 = local_c;
  local_14 = 0xb;
  puStack_28 = &stack0xfffffffc;
  SysUtils_Format((byte *)" %s = %s ",&local_20,1,&local_10);
  (**(code **)(**(int **)(param_1 + 4) + 0x34))(*(int **)(param_1 + 4),local_10);
  *in_FS_OFFSET = uStack_30;
  puStack_28 = &LAB_0045eef1;
  puStack_2c = (undefined1 *)0x45eee9;
  System__LStrArrayClr(&local_10,3);
  return;
}


/* ==== 0045ef0c FUN_0045ef0c ==== */

void FUN_0045ef0c(int param_1,int param_2,undefined4 param_3)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_30;
  undefined1 *puStack_2c;
  undefined1 *puStack_28;
  int local_1c;
  undefined1 local_18;
  undefined4 local_14;
  undefined1 local_10;
  int local_c;
  int local_8;
  
  local_c = 0;
  puStack_28 = (undefined1 *)0x45ef28;
  local_8 = param_2;
  System__LStrAddRef(param_2);
  puStack_2c = &LAB_0045ef83;
  uStack_30 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_30;
  local_1c = local_8;
  local_18 = 0xb;
  local_10 = 0;
  puStack_28 = &stack0xfffffffc;
  local_14 = param_3;
  SysUtils_Format((byte *)" %s = %d ",&local_1c,1,&local_c);
  (**(code **)(**(int **)(param_1 + 4) + 0x34))(*(int **)(param_1 + 4),local_c);
  *in_FS_OFFSET = uStack_30;
  puStack_28 = &LAB_0045ef8a;
  puStack_2c = (undefined1 *)0x45ef82;
  System__LStrArrayClr(&local_c,2);
  return;
}


/* ==== 0045efa4 FUN_0045efa4 ==== */

void FUN_0045efa4(int param_1,undefined4 *param_2,int *param_3)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  int local_c;
  undefined4 *local_8;
  
  local_c = 0;
  puStack_18 = (undefined1 *)0x45efc0;
  local_8 = param_2;
  System__LStrAddRef((int)param_2);
  puStack_1c = &LAB_0045f015;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  puStack_18 = &stack0xfffffffc;
  System__LStrCat3(&local_c,(undefined4 *)"subobject: ",local_8);
  (**(code **)(**(int **)(param_1 + 4) + 0x34))(*(int **)(param_1 + 4),local_c);
  uVar1 = (**(code **)(*param_3 + 8))();
  (**(code **)(**(int **)(param_1 + 4) + 0x3c))(*(int **)(param_1 + 4),uVar1);
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_0045f01c;
  puStack_1c = (undefined1 *)0x45f014;
  System__LStrArrayClr(&local_c,2);
  return;
}


/* ==== 0045f038 FUN_0045f038 ==== */

void FUN_0045f038(int param_1,int param_2,char param_3)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_34;
  undefined1 *puStack_30;
  undefined1 *puStack_2c;
  int local_20;
  undefined1 local_1c;
  int local_18;
  undefined1 local_14;
  int local_10;
  int local_c;
  int local_8;
  
  local_10 = 0;
  local_c = 0;
  puStack_2c = (undefined1 *)0x45f057;
  local_8 = param_2;
  System__LStrAddRef(param_2);
  puStack_30 = &LAB_0045f0d5;
  uStack_34 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_34;
  if (param_3 == '\0') {
    puStack_2c = &stack0xfffffffc;
    System__LStrLAsg(&local_c,0x45f0fc);
  }
  else {
    puStack_2c = &stack0xfffffffc;
    System__LStrLAsg(&local_c,0x45f0ec);
  }
  local_20 = local_8;
  local_1c = 0xb;
  local_18 = local_c;
  local_14 = 0xb;
  SysUtils_Format((byte *)" %s = %s ",&local_20,1,&local_10);
  (**(code **)(**(int **)(param_1 + 4) + 0x34))(*(int **)(param_1 + 4),local_10);
  *in_FS_OFFSET = uStack_34;
  puStack_2c = &LAB_0045f0dc;
  puStack_30 = (undefined1 *)0x45f0d4;
  System__LStrArrayClr(&local_10,3);
  return;
}


/* ==== 0045f118 TDataList.virtual_008 ==== */

void TDataList_virtual_008(int param_1)

{
  int j;
  uint uVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  undefined4 *local_10;
  int local_c;
  int i_val;
  
  puStack_1c = &stack0xfffffffc;
  i_val = 0;
  local_c = 0;
  local_10 = (undefined4 *)0x0;
  puStack_20 = &LAB_0045f1b7;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  (**(code **)(**(int **)(param_1 + 4) + 0x40))();
  j = FUN_0045e8a0(param_1);
  uVar1 = j - 1;
  if (SBORROW4(j,1)) {
    uVar1 = System__RunError(uVar1);
  }
  if (-1 < (int)uVar1) {
    i_val = uVar1 + 1;
    j = 0;
    do {
      SysUtils_IntToStr(j,(int *)&local_10);
      System__LStrCat3(&local_c,(undefined4 *)"-Item ",local_10);
      (**(code **)(**(int **)(param_1 + 4) + 0x34))(*(int **)(param_1 + 4),local_c);
      piVar2 = (int *)FUN_0045e640(param_1,j);
      uVar3 = (**(code **)(*piVar2 + 8))();
      (**(code **)(**(int **)(param_1 + 4) + 0x3c))(*(int **)(param_1 + 4),uVar3);
      j = j + 1;
      i_val = i_val + -1;
    } while (i_val != 0);
  }
  *in_FS_OFFSET = uStack_24;
  puStack_1c = &LAB_0045f1be;
  puStack_20 = (undefined1 *)0x45f1b6;
  System__LStrArrayClr((int *)&local_10,2);
  return;
}


/* ==== 0045f1d8 TDataList.virtual_000 ==== */

void TDataList_virtual_000(void)

{
  TStrings_virtual_00c();
  return;
}


/* ==== 0045f1e4 TIntegerList.virtual_000 ==== */

void TIntegerList_virtual_000(int param_1)

{
  uint i_val;
  undefined4 uVar1;
  int j;
  undefined4 *in_FS_OFFSET;
  undefined *puStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  int local_10 [3];
  
  puStack_20 = &stack0xfffffffc;
  local_10[2] = 0;
  local_10[1] = 0;
  local_10[0] = 0;
  puStack_24 = &LAB_0045f280;
  puStack_28 = (undefined *)*in_FS_OFFSET;
  *in_FS_OFFSET = &puStack_28;
  i_val = FUN_0045eb28(param_1);
  if (SBORROW4(i_val,1)) {
    System__RunError(i_val);
  }
  if (-1 < (int)(i_val - 1)) {
    j = 0;
    do {
      SysUtils_IntToStr(j,local_10 + 1);
      uVar1 = FUN_0045e990(param_1,j);
      SysUtils_IntToStr(uVar1,local_10);
      puStack_28 = &DAT_0045f2a4;
      System__LStrCatN(local_10 + 2,5);
      j = j + 1;
      i_val = i_val - 1;
    } while (i_val != 0);
  }
  FUN_0045ee68(param_1,0,local_10[2]);
  *in_FS_OFFSET = puStack_28;
  puStack_20 = &LAB_0045f287;
  puStack_24 = (undefined1 *)0x45f27f;
  System__LStrArrayClr(local_10,3);
  return;
}


/* ==== 0045f2a8 TBooleanList.virtual_000 ==== */

void TBooleanList_virtual_000(int param_1)

{
  char cVar1;
  uint i_val;
  int j;
  undefined4 *in_FS_OFFSET;
  undefined *puStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  int local_c;
  int local_8;
  
  puStack_1c = &stack0xfffffffc;
  local_8 = 0;
  local_c = 0;
  puStack_20 = &LAB_0045f352;
  puStack_24 = (undefined *)*in_FS_OFFSET;
  *in_FS_OFFSET = &puStack_24;
  i_val = FUN_0045edb0(param_1);
  if (SBORROW4(i_val,1)) {
    System__RunError(i_val);
  }
  if (-1 < (int)(i_val - 1)) {
    j = 0;
    do {
      SysUtils_IntToStr(j,&local_c);
      puStack_24 = &DAT_0045f368;
      System__LStrCatN(&local_8,3);
      cVar1 = FUN_0045ec18(param_1,j);
      if (cVar1 == '\0') {
        System__LStrCat(&local_8,(undefined4 *)"FALSE  ");
      }
      else {
        System__LStrCat(&local_8,(undefined4 *)"TRUE  ");
      }
      j = j + 1;
      i_val = i_val - 1;
    } while (i_val != 0);
  }
  FUN_0045ee68(param_1,0,local_8);
  *in_FS_OFFSET = puStack_24;
  puStack_1c = &LAB_0045f359;
  puStack_20 = (undefined1 *)0x45f351;
  System__LStrArrayClr(&local_c,2);
  return;
}


/* ==== 0045f46c Debug ==== */

int Debug(void)

{
  if (DAT_004ac924 == 0) {
    if (DAT_004ac91c == (undefined4 *)0x0) {
      System__Assert("Debugfilename not init.");
    }
    DAT_004ac924 = FUN_0045f4f8((uint)&LAB_0045f448,'\x01',DAT_004ac91c);
  }
  return DAT_004ac924;
}


/* ==== 0045f4f8 FUN_0045f4f8 ==== */

void FUN_0045f4f8(uint param_1,char param_2,undefined4 *param_3)

{
  DWORD DVar1;
  undefined4 uVar2;
  undefined *puVar3;
  undefined4 *extraout_ECX;
  undefined1 extraout_DL;
  undefined4 *in_FS_OFFSET;
  undefined4 uStackY_210;
  undefined1 *puStackY_20c;
  undefined1 *puStackY_208;
  undefined4 uStackY_204;
  undefined1 *puStackY_200;
  undefined1 *puStackY_1fc;
  undefined4 in_stack_fffffe08;
  undefined4 in_stack_fffffe0c;
  undefined4 local_1dc [115];
  undefined4 *local_10;
  undefined1 local_9;
  uint local_8;
  
  local_9 = 0;
  if (param_2 != '\0') {
    puStackY_1fc = (undefined1 *)0x45f510;
    param_1 = System__ClassCreate(param_1,param_2,param_3,in_stack_fffffe08,in_stack_fffffe0c);
    param_3 = extraout_ECX;
    local_9 = extraout_DL;
  }
  puStackY_1fc = (undefined1 *)0x45f521;
  local_10 = param_3;
  local_8 = param_1;
  System__LStrAddRef((int)param_3);
  puStackY_200 = &LAB_0045f601;
  uStackY_204 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStackY_204;
  puStackY_208 = (undefined1 *)0x45f53d;
  puStackY_1fc = &stack0xfffffffc;
  System__LStrAsg((int *)(local_8 + 4),local_10);
  *(undefined1 *)(local_8 + 0xc) = 1;
  puStackY_208 = (undefined1 *)0x45f549;
  DVar1 = GetTickCount();
  if ((int)DVar1 < 0) {
    puStackY_208 = (undefined1 *)0x45f552;
    DVar1 = System__RunError(DVar1);
  }
  *(DWORD *)(local_8 + 0x14) = DVar1;
  puStackY_208 = (undefined1 *)0x45f563;
  uVar2 = SysUtils_FileExists(*(undefined **)(local_8 + 4));
  if ((char)uVar2 == '\0') {
    puStackY_20c = &LAB_0045f5d9;
    uStackY_210 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStackY_210;
    puStackY_208 = &stack0xfffffffc;
    FUN_00405b82(local_1dc,*(char **)(local_8 + 4));
    FUN_00405ca2((undefined *)local_1dc);
    FUN_0040284c();
    puVar3 = (undefined *)
             FUN_00404274((undefined *)local_1dc,"----------------- new run --------------");
    FUN_00405d7b(puVar3);
    FUN_0040284c();
    FUN_00405c24((undefined *)local_1dc);
    FUN_0040284c();
    *in_FS_OFFSET = uStackY_210;
  }
  else {
    puStackY_208 = (undefined1 *)0x45f574;
    TDebug_Message(local_8,0x45f634);
  }
  *in_FS_OFFSET = uStackY_204;
  puStackY_1fc = &LAB_0045f608;
  puStackY_200 = (undefined1 *)0x45f600;
  System__LStrClr((int *)&local_10);
  return;
}


/* ==== 0045f660 FUN_0045f660 ==== */

void FUN_0045f660(int param_1)

{
  *(undefined1 *)(param_1 + 0xc) = 0;
  return;
}


/* ==== 0045f668 FUN_0045f668 ==== */

void FUN_0045f668(uint param_1,undefined1 param_2,int param_3)

{
  DWORD DVar1;
  undefined *puVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStackY_220;
  undefined1 *puStackY_21c;
  undefined4 uStack_214;
  undefined1 *puStack_210;
  undefined1 *puStack_20c;
  int local_1fc;
  undefined1 local_1f8;
  undefined1 local_1f4;
  undefined1 local_1f0;
  undefined4 local_1ec;
  undefined1 local_1e8;
  int local_1e4;
  undefined1 local_1e0;
  undefined4 local_1dc [115];
  undefined1 *local_10;
  int local_c;
  uint local_8;
  
  local_10 = (undefined1 *)0x0;
  puStack_20c = (undefined1 *)0x45f689;
  local_c = param_3;
  local_8 = param_1;
  System__LStrAddRef(param_3);
  puStack_210 = &LAB_0045f7b6;
  uStack_214 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_214;
  puStack_20c = &stack0xfffffffc;
  if (local_8 == 0) {
    puStack_20c = &stack0xfffffffc;
    System__Assert(" Self = nil: WriteString (aStr : string)");
  }
  if (*(char *)(local_8 + 0xc) != '\0') {
    DVar1 = GetTickCount();
    local_1fc = DVar1 - *(int *)(local_8 + 0x14);
    if (SBORROW4(DVar1,*(int *)(local_8 + 0x14))) {
      System__RunError(local_8);
    }
    local_1f8 = 0;
    local_1f0 = 2;
    local_1ec = *(undefined4 *)(local_8 + 0x10);
    local_1e8 = 0;
    local_1e4 = local_c;
    local_1e0 = 0xb;
    puStackY_21c = (undefined1 *)0x45f728;
    local_1f4 = param_2;
    SysUtils_Format((byte *)"%8d %s %2d %s",&local_1fc,3,(int *)&local_10);
    puStackY_21c = &LAB_0045f789;
    uStackY_220 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStackY_220;
    FUN_00405b82(local_1dc,*(char **)(local_8 + 4));
    FUN_00405ca9((undefined *)local_1dc);
    FUN_0040284c();
    puVar2 = (undefined *)FUN_00404274((undefined *)local_1dc,local_10);
    FUN_00405d7b(puVar2);
    FUN_0040284c();
    FUN_00405c24((undefined *)local_1dc);
    FUN_0040284c();
    *in_FS_OFFSET = uStackY_220;
  }
  *in_FS_OFFSET = uStack_214;
  puStack_20c = &LAB_0045f7bd;
  puStack_210 = (undefined1 *)0x45f7b5;
  System__LStrArrayClr((int *)&local_10,2);
  return;
}


/* ==== 0045f834 FUN_0045f834 ==== */

void FUN_0045f834(int param_1,int param_2)

{
  byte *pbVar1;
  uint uVar2;
  undefined1 *unaff_EBX;
  undefined1 *unaff_ESI;
  int j;
  undefined1 *unaff_EDI;
  undefined4 *in_FS_OFFSET;
  undefined1 *local_2c;
  undefined1 *local_28;
  undefined1 *local_24;
  undefined1 *local_14;
  uint i_val;
  int local_c;
  int local_8;
  
  local_24 = &stack0xfffffffc;
  local_14 = (undefined1 *)0x4;
  do {
    local_14 = local_14 + -1;
  } while (local_14 != (undefined1 *)0x0);
  LOCK();
  UNLOCK();
  local_28 = &LAB_0045fa22;
  local_2c = (undefined1 *)*in_FS_OFFSET;
  *in_FS_OFFSET = &local_2c;
  local_c = param_2;
  local_8 = param_1;
  System__LStrClr((int *)0x0);
  if (-1 < local_c) {
    j = local_c + 1;
    i_val = 0;
    do {
      if (((int)i_val < 0) || (uVar2 = i_val, local_c < (int)i_val)) {
        uVar2 = System__RunError(i_val);
      }
      pbVar1 = (byte *)(local_8 + uVar2 * 8);
      switch(pbVar1[4]) {
      case 0:
        SysUtils_IntToStr(*(undefined4 *)pbVar1,(int *)&local_14);
        local_2c = local_14;
        System__LStrCatN((int *)0x0,3);
        break;
      case 1:
        System__LStrFromChar((int *)&stack0xffffffe8,(uint)(byte)(&DAT_004aacb8)[*pbVar1]);
        local_2c = unaff_EBX;
        System__LStrCatN((int *)0x0,3);
        break;
      case 2:
        System__LStrFromChar((int *)&stack0xffffffe4,CONCAT31((int3)((uint)local_8 >> 8),*pbVar1));
        local_2c = unaff_ESI;
        System__LStrCatN((int *)0x0,3);
        break;
      case 3:
        FUN_00409330((int *)&stack0xffffffe0);
        local_2c = unaff_EDI;
        System__LStrCatN((int *)0x0,3);
        break;
      case 4:
        System__LStrFromString((int *)&local_24,*(byte **)pbVar1);
        local_2c = local_24;
        System__LStrCatN((int *)0x0,3);
        break;
      case 6:
        FUN_00403e14((int *)&local_28,*(char **)pbVar1);
        local_2c = local_28;
        System__LStrCatN((int *)0x0,3);
        break;
      case 0xb:
        local_2c = *(undefined1 **)pbVar1;
        System__LStrCatN((int *)0x0,3);
        break;
      case 0xd:
        FUN_00404da4((int *)&local_2c,*(VARIANTARG **)pbVar1);
        System__LStrCatN((int *)0x0,3);
      }
      i_val = i_val + 1;
      j = j + -1;
    } while (j != 0);
  }
  *in_FS_OFFSET = local_2c;
  local_24 = &LAB_0045fa29;
  local_28 = (undefined1 *)0x45fa21;
  System__LStrArrayClr((int *)&local_2c,7);
  return;
}


/* ==== 0045fa3c FUN_0045fa3c ==== */

void FUN_0045fa3c(uint param_1,int param_2,byte param_3,int param_4)

{
  int *piVar1;
  uint uVar2;
  int i_val;
  undefined4 *in_FS_OFFSET;
  undefined *puStack_3c;
  undefined4 uStack_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  int local_14 [2];
  byte local_9;
  int local_8;
  
  local_14[0] = 0;
  local_14[1] = 0;
  for (i_val = param_4 * 2 + 1; -1 < i_val; i_val = i_val + -1) {
  }
  puStack_24 = (undefined1 *)0x45fa74;
  local_9 = param_3;
  local_8 = param_2;
  System__LStrAddRef(param_2);
  puStack_28 = &LAB_0045fb16;
  uStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_2c;
  puStack_24 = &stack0xfffffffc;
  if (param_1 == 0) {
    puStack_24 = &stack0xfffffffc;
    System__Assert(" Self = nil: TDebug.InProc");
  }
  if (*(char *)(param_1 + 0xc) != '\0') {
    FUN_0045f834((int)&stack0xffffffe0,param_4);
    if ((local_9 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    puStack_3c = &DAT_0045fb8c;
    System__LStrCatN(local_14,4);
    uVar2 = FUN_0045f668(param_1,0x49,local_14[0]);
    if ((local_9 & 2) == 0) {
      piVar1 = (int *)(param_1 + 0x10);
      i_val = *piVar1;
      *piVar1 = *piVar1 + 1;
      if (SCARRY4(i_val,1)) {
        System__RunError(uVar2);
      }
    }
  }
  *in_FS_OFFSET = puStack_3c;
  System__LStrArrayClr(local_14,2);
  System__LStrClr(&local_8);
  return;
}


/* ==== 0045fb90 TDebug.InProc ==== */

void TDebug_InProc(uint param_1,undefined4 *param_2,byte param_3)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  undefined4 *local_8;
  
  puStack_14 = (undefined1 *)0x45fba7;
  local_8 = param_2;
  System__LStrAddRef((int)param_2);
  puStack_18 = &LAB_0045fc1c;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  puStack_14 = &stack0xfffffffc;
  if (param_1 == 0) {
    puStack_14 = &stack0xfffffffc;
    System__Assert(" Self = nil: TDebug.InProc");
  }
  if (*(char *)(param_1 + 0xc) != '\0') {
    if ((param_3 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    FUN_0045f668(param_1,0x49,(int)local_8);
    if ((param_3 & 2) == 0) {
      uVar3 = System__LStrAsg((int *)(param_1 + 8),local_8);
      piVar1 = (int *)(param_1 + 0x10);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + 1;
      if (SCARRY4(iVar2,1)) {
        System__RunError(uVar3);
      }
    }
  }
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_0045fc23;
  puStack_18 = (undefined1 *)0x45fc1b;
  System__LStrClr((int *)&local_8);
  return;
}


/* ==== 0045fc70 TDebug.ExitProc ==== */

void TDebug_ExitProc(uint param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = param_1;
  if (param_1 == 0) {
    uVar3 = System__Assert(" Self = nil: ExitProc");
  }
  if (*(char *)(param_1 + 0xc) != '\0') {
    piVar1 = (int *)(param_1 + 0x10);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    if (SBORROW4(iVar2,1)) {
      System__RunError(uVar3);
    }
    System__LStrClr((int *)(param_1 + 8));
  }
  return;
}


/* ==== 0045fcf0 TDebug.ClearFile ==== */

void TDebug_ClearFile(int param_1)

{
  undefined4 uVar1;
  undefined4 local_1d0 [115];
  
  if (param_1 == 0) {
    System__Assert(" Self = nil: ClearFile");
  }
  uVar1 = SysUtils_FileExists(*(undefined **)(param_1 + 4));
  if ((char)uVar1 != '\0') {
    FUN_00405b82(local_1d0,*(char **)(param_1 + 4));
    FUN_00405ca2((undefined *)local_1d0);
    FUN_0040284c();
    FUN_00405c24((undefined *)local_1d0);
    FUN_0040284c();
  }
  return;
}


/* ==== 0045fd98 FUN_0045fd98 ==== */

void FUN_0045fd98(uint param_1,int param_2,int *param_3)

{
  uint i_val;
  int j;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  int local_14;
  int *local_10;
  int local_c;
  uint local_8;
  
  local_14 = 0;
  puStack_24 = (undefined1 *)0x45fdb7;
  local_10 = param_3;
  local_c = param_2;
  local_8 = param_1;
  System__LStrAddRef(param_2);
  puStack_28 = &LAB_0045fe29;
  uStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_2c;
  puStack_24 = &stack0xfffffffc;
  FUN_0045f668(local_8,0x44,local_c);
  i_val = (**(code **)(*local_10 + 0x14))();
  if (SBORROW4(i_val,1)) {
    System__RunError(i_val);
  }
  if (-1 < (int)(i_val - 1)) {
    j = 0;
    do {
      (**(code **)(*local_10 + 0xc))(local_10,j,&local_14);
      FUN_0045f668(local_8,0x44,local_14);
      j = j + 1;
      i_val = i_val - 1;
    } while (i_val != 0);
  }
  *in_FS_OFFSET = uStack_2c;
  puStack_24 = &LAB_0045fe30;
  puStack_28 = (undefined1 *)0x45fe20;
  System__LStrClr(&local_14);
  puStack_28 = (undefined1 *)0x45fe28;
  System__LStrClr(&local_c);
  return;
}


/* ==== 0045fe38 FUN_0045fe38 ==== */

void FUN_0045fe38(uint param_1,int param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  int local_8;
  
  puStack_10 = (undefined1 *)0x45fe4a;
  local_8 = param_2;
  System__LStrAddRef(param_2);
  puStack_14 = &LAB_0045fe7a;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  puStack_10 = &stack0xfffffffc;
  FUN_0045f668(param_1,0x45,local_8);
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_0045fe81;
  puStack_14 = (undefined1 *)0x45fe79;
  System__LStrClr(&local_8);
  return;
}


/* ==== 0045fe88 TDebug.Message ==== */

void TDebug_Message(uint param_1,int param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  int local_8;
  
  puStack_10 = (undefined1 *)0x45fe9a;
  local_8 = param_2;
  System__LStrAddRef(param_2);
  puStack_14 = &LAB_0045feca;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  puStack_10 = &stack0xfffffffc;
  FUN_0045f668(param_1,0x4d,local_8);
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_0045fed1;
  puStack_14 = (undefined1 *)0x45fec9;
  System__LStrClr(&local_8);
  return;
}


/* ==== 0045fed8 FUN_0045fed8 ==== */

void FUN_0045fed8(uint param_1)

{
  undefined1 *extraout_ECX;
  undefined4 extraout_EDX;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  undefined4 *local_c;
  int local_8;
  
  puStack_14 = &stack0xfffffffc;
  local_8 = 0;
  local_c = (undefined4 *)0x0;
  puStack_18 = &LAB_0045ff3b;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  FUN_00409850();
  FUN_0040a47c((int *)&local_c,extraout_EDX,extraout_ECX);
  System__LStrCat3(&local_8,(undefined4 *)"Current date/time : ",local_c);
  FUN_0045f668(param_1,0x4d,local_8);
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_0045ff42;
  puStack_18 = (undefined1 *)0x45ff3a;
  System__LStrArrayClr((int *)&local_c,2);
  return;
}


/* ==== 00460124 FUN_00460124 ==== */

void FUN_00460124(int *param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  undefined4 uVar2;
  uint debug;
  int *piVar3;
  undefined4 *in_FS_OFFSET;
  int iVar4;
  undefined4 uStack_60;
  undefined1 *puStack_5c;
  undefined1 *puStack_58;
  int local_48;
  undefined1 local_44;
  undefined4 local_40;
  undefined1 local_3c;
  undefined4 local_38;
  undefined1 local_34;
  int local_30;
  undefined4 *local_2c;
  int local_28;
  undefined1 local_24;
  int local_20;
  undefined4 *local_1c;
  int local_18;
  undefined1 local_14;
  undefined4 local_10;
  undefined1 local_c;
  int local_8;
  
  puStack_58 = &stack0xfffffffc;
  local_30 = 0;
  local_2c = (undefined4 *)0x0;
  local_20 = 0;
  local_1c = (undefined4 *)0x0;
  local_8 = 0;
  puStack_5c = &LAB_004602bb;
  uStack_60 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_60;
  cVar1 = FUN_00457d74(param_1,param_2,param_3);
  if (cVar1 == '\0') {
    uVar2 = SysUtils_FileExists((undefined *)param_1[1]);
    if ((char)uVar2 == '\0') {
      local_28 = param_1[1];
      local_24 = 0xb;
      SysUtils_Format((byte *)"\"%s\", does not exist",&local_28,0,&local_20);
      iVar4 = local_20;
      debug = Debug();
      FUN_0045fe38(debug,iVar4);
      local_28 = param_1[1];
      local_24 = 0xb;
      SysUtils_Format((byte *)"\"%s\", does not exist",&local_28,0,(int *)&local_2c);
      piVar3 = SysUtils_Exception_Create((int *)&DAT_00407624,'\x01',local_2c);
      System__RaiseExcept(piVar3);
    }
    else {
      local_18 = param_1[1];
      local_14 = 0xb;
      local_c = 0xb;
      local_10 = param_2;
      SysUtils_Format((byte *)"\"%s\", Section [%s] does not exist!!!",&local_18,1,&local_8);
      iVar4 = local_8;
      debug = Debug();
      FUN_0045fe38(debug,iVar4);
      local_18 = param_1[1];
      local_14 = 0xb;
      local_c = 0xb;
      local_10 = param_2;
      SysUtils_Format((byte *)"\"%s\", Section [%s] does not exist",&local_18,1,(int *)&local_1c);
      piVar3 = SysUtils_Exception_Create((int *)&DAT_00407624,'\x01',local_1c);
      System__RaiseExcept(piVar3);
    }
  }
  cVar1 = FUN_004583c4(param_1,param_2,param_3);
  if (cVar1 == '\0') {
    local_48 = param_1[1];
    local_44 = 0xb;
    local_3c = 0xb;
    local_34 = 0xb;
    local_40 = param_2;
    local_38 = param_3;
    SysUtils_Format((byte *)"\"%s\", [%s], Identifier \"%s\" does not exist",&local_48,2,&local_30);
    iVar4 = local_30;
    debug = Debug();
    FUN_0045fe38(debug,iVar4);
  }
  *in_FS_OFFSET = uStack_60;
  puStack_58 = &LAB_004602c2;
  puStack_5c = (undefined1 *)0x4602a5;
  System__LStrArrayClr(&local_30,2);
  puStack_5c = (undefined1 *)0x4602b2;
  System__LStrArrayClr(&local_20,2);
  puStack_5c = (undefined1 *)0x4602ba;
  System__LStrClr(&local_8);
  return;
}


/* ==== 0046037c TSafeIniFile.virtual_008 ==== */

void TSafeIniFile_virtual_008(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_00460124(param_1,param_2,param_3);
  TCustomIniFile_virtual_008(param_1,param_2,param_3,param_4);
  return;
}


/* ==== 004603ac TSafeIniFile.virtual_000 ==== */

void TSafeIniFile_virtual_000
               (int *param_1,undefined *param_2,undefined *param_3,int *param_4,undefined *param_5)

{
  FUN_00460124(param_1,param_2,param_3);
  TIniFile_virtual_000((int)param_1,param_2,param_3,param_4,param_5);
  return;
}


/* ==== 004603e0 FUN_004603e0 ==== */

void FUN_004603e0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,int *param_4,
                 int *param_5)

{
  int iVar1;
  uint uVar2;
  uint extraout_ECX;
  uint extraout_ECX_00;
  int iVar3;
  int extraout_EDX;
  undefined4 *in_FS_OFFSET;
  int *piVar4;
  char **ppcVar5;
  int *piVar6;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  int local_14;
  char *local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  puStack_20 = &stack0xfffffffc;
  local_14 = 0;
  local_10 = (char *)0x0;
  puStack_24 = &LAB_004604c0;
  puStack_28 = (undefined1 *)*in_FS_OFFSET;
  *in_FS_OFFSET = &puStack_28;
  piVar6 = param_4;
  local_c = param_3;
  local_8 = param_2;
  (**(code **)*param_1)(param_1,param_2,param_3,param_4,0);
  System__LStrLAsg((int *)&local_10,*param_4);
  (**(code **)(*param_5 + 0x40))();
  iVar1 = FUN_004041c8(",",local_10);
  while (iVar1 != 0) {
    piVar4 = &local_14;
    uVar2 = iVar1 - 1;
    if (SBORROW4(iVar1,1)) {
      System__RunError((uint)piVar4);
      uVar2 = extraout_ECX;
    }
    System__LStrCopy((int)local_10,0,uVar2,piVar4);
    (**(code **)(*param_5 + 0x34))(param_5,local_14);
    ppcVar5 = &local_10;
    uVar2 = System__LStrLen((int)local_10);
    iVar3 = iVar1 + 1;
    if (SCARRY4(iVar1,1)) {
      System__RunError(uVar2);
      uVar2 = extraout_ECX_00;
      iVar3 = extraout_EDX;
    }
    System__LStrCopy((int)local_10,iVar3,uVar2,(int *)ppcVar5);
    iVar1 = FUN_004041c8(",",local_10);
  }
  (**(code **)(*param_5 + 0x34))(param_5,local_10);
  *in_FS_OFFSET = piVar6;
  puStack_28 = &LAB_004604c7;
  System__LStrArrayClr(&local_14,2);
  return;
}


/* ==== 004604dc FUN_004604dc ==== */

void FUN_004604dc(int *param_1,undefined4 *param_2)

{
  int *piVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  
  puStack_14 = (undefined1 *)0x4604f0;
  System__LStrAddRef((int)param_2);
  puStack_18 = &LAB_0046055b;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  puStack_20 = (undefined1 *)0x46050d;
  puStack_14 = &stack0xfffffffc;
  piVar1 = FUN_00457d38((int *)&PTR_TSafeIniFile_virtual_000_0046004c,'\x01',param_2);
  puStack_24 = &LAB_0046053e;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  puStack_20 = &stack0xfffffffc;
  (**(code **)(*param_1 + 0x18))(param_1,piVar1);
  *in_FS_OFFSET = uStack_28;
  puStack_20 = &LAB_00460545;
  puStack_24 = (undefined1 *)0x46053d;
  System_TObject_Free(piVar1);
  return;
}


/* ==== 00460568 FUN_00460568 ==== */

void FUN_00460568(int *param_1,undefined4 *param_2)

{
  int *piVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  
  puStack_14 = (undefined1 *)0x46057c;
  System__LStrAddRef((int)param_2);
  puStack_18 = &LAB_004605e7;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  puStack_20 = (undefined1 *)0x460599;
  puStack_14 = &stack0xfffffffc;
  piVar1 = FUN_00457d38((int *)&PTR_TSafeIniFile_virtual_000_0046004c,'\x01',param_2);
  puStack_24 = &LAB_004605ca;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  puStack_20 = &stack0xfffffffc;
  (**(code **)(*param_1 + 0x1c))(param_1,piVar1);
  *in_FS_OFFSET = uStack_28;
  puStack_20 = &LAB_004605d1;
  puStack_24 = (undefined1 *)0x4605c9;
  System_TObject_Free(piVar1);
  return;
}


/* ==== 004605f4 FUN_004605f4 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004605f4(void)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  uVar1 = *in_FS_OFFSET;
  *in_FS_OFFSET = auStack_10;
  _DAT_004ac928 = _DAT_004ac928 + 1;
  *in_FS_OFFSET = uVar1;
  return;
}


/* ==== 004606cc TGameCharacter.virtual_000 ==== */

void TGameCharacter_virtual_000(void)

{
  return;
}


/* ==== 004606d0 FUN_004606d0 ==== */

void FUN_004606d0(int *param_1,int *param_2,int param_3)

{
  uint debug;
  int iVar1;
  undefined4 *in_FS_OFFSET;
  char *pcVar2;
  undefined4 uStack_144;
  undefined1 *puStack_140;
  undefined1 *puStack_13c;
  undefined4 *local_12c;
  undefined4 *local_128;
  undefined4 *local_124;
  undefined4 *local_120;
  undefined4 *local_11c;
  byte local_118 [256];
  int local_18;
  int local_14;
  int local_10;
  undefined1 local_c;
  int local_8;
  
  puStack_13c = &stack0xfffffffc;
  local_12c = (undefined4 *)0x0;
  local_128 = (undefined4 *)0x0;
  local_124 = (undefined4 *)0x0;
  local_120 = (undefined4 *)0x0;
  local_11c = (undefined4 *)0x0;
  local_14 = 0;
  local_18 = 0;
  local_8 = 0;
  puStack_140 = &LAB_004608c7;
  uStack_144 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_144;
  local_c = 0;
  local_10 = param_3;
  System_TObject_ClassName(*param_1,local_118);
  System__LStrFromString(&local_18,local_118);
  pcVar2 = "LoadFromIniFile";
  System__LStrCatN(&local_14,3);
  iVar1 = local_14;
  debug = Debug();
  FUN_0045fa3c(debug,iVar1,2,(int)pcVar2);
  param_1[4] = param_3;
  SysUtils_IntToStr(param_3,(int *)&local_11c);
  System__LStrCat3(&local_8,(undefined4 *)&DAT_00460908,local_11c);
  (**(code **)*param_2)(param_2,local_8,&DAT_00460918,&local_120,0);
  System__LStrAsg(param_1 + 2,local_120);
  iVar1 = (**(code **)(*param_2 + 8))(param_2,local_8,"IndexInGame",0);
  param_1[3] = iVar1;
  (**(code **)*param_2)(param_2,local_8,"winracetext",&local_124,&DAT_0046093c);
  System__LStrAsg(param_1 + 7,local_124);
  (**(code **)*param_2)(param_2,local_8,"LockedText",&local_128,&DAT_0046093c);
  System__LStrAsg(param_1 + 5,local_128);
  (**(code **)*param_2)(param_2,local_8,"Story",&local_12c,&DAT_0046093c);
  System__LStrAsg(param_1 + 6,local_12c);
  iVar1 = (**(code **)(*param_2 + 8))(param_2,local_8,"Speed",0);
  param_1[8] = iVar1;
  iVar1 = (**(code **)(*param_2 + 8))(param_2,local_8,"Brakes",0);
  param_1[10] = iVar1;
  iVar1 = (**(code **)(*param_2 + 8))(param_2,local_8,"Accell",0);
  param_1[9] = iVar1;
  iVar1 = (**(code **)(*param_2 + 8))(param_2,local_8,"Handling");
  param_1[0xb] = iVar1;
  *in_FS_OFFSET = 0;
  System__LStrArrayClr((int *)&local_12c,5);
  System__LStrArrayClr(&local_18,2);
  System__LStrClr(&local_8);
  return;
}


/* ==== 00460a2c DirectDrawEnumerateA ==== */

void DirectDrawEnumerateA(void)

{
                    /* WARNING: Could not recover jumptable at 0x00460a2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DirectDrawEnumerateA();
  return;
}


/* ==== 00460a34 DirectDrawCreate ==== */

void DirectDrawCreate(void)

{
                    /* WARNING: Could not recover jumptable at 0x00460a34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DirectDrawCreate();
  return;
}


/* ==== 00460a3c DirectSoundCreate ==== */

void DirectSoundCreate(void)

{
                    /* WARNING: Could not recover jumptable at 0x00460a3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DirectSoundCreate();
  return;
}


