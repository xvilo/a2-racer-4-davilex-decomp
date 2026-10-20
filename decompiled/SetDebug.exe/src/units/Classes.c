/* SetDebug.exe — units/Classes.pas: 1066 functions, split from decompiled.c by tools/split_sources.py */

/* ==== 004011c4 CloseHandle ==== */

BOOL __stdcall CloseHandle(HANDLE hObject)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004011c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = CloseHandle(hObject);
  return BVar1;
}


/* ==== 004011cc CreateFileA ==== */

HANDLE __stdcall
CreateFileA(LPCSTR lpFileName,DWORD dwDesiredAccess,DWORD dwShareMode,
           LPSECURITY_ATTRIBUTES lpSecurityAttributes,DWORD dwCreationDisposition,
           DWORD dwFlagsAndAttributes,HANDLE hTemplateFile)

{
  HANDLE pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004011cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = CreateFileA(lpFileName,dwDesiredAccess,dwShareMode,lpSecurityAttributes,
                       dwCreationDisposition,dwFlagsAndAttributes,hTemplateFile);
  return pvVar1;
}


/* ==== 004011d4 GetFileType ==== */

DWORD __stdcall GetFileType(HANDLE hFile)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004011d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = GetFileType(hFile);
  return DVar1;
}


/* ==== 004011dc GetFileSize ==== */

DWORD __stdcall GetFileSize(HANDLE hFile,LPDWORD lpFileSizeHigh)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004011dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = GetFileSize(hFile,lpFileSizeHigh);
  return DVar1;
}


/* ==== 004011e4 GetStdHandle ==== */

HANDLE __stdcall GetStdHandle(DWORD nStdHandle)

{
  HANDLE pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004011e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = GetStdHandle(nStdHandle);
  return pvVar1;
}


/* ==== 004011ec RaiseException ==== */

void __stdcall
RaiseException(DWORD dwExceptionCode,DWORD dwExceptionFlags,DWORD nNumberOfArguments,
              ULONG_PTR *lpArguments)

{
                    /* WARNING: Could not recover jumptable at 0x004011ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  RaiseException(dwExceptionCode,dwExceptionFlags,nNumberOfArguments,lpArguments);
  return;
}


/* ==== 004011f4 ReadFile ==== */

BOOL __stdcall
ReadFile(HANDLE hFile,LPVOID lpBuffer,DWORD nNumberOfBytesToRead,LPDWORD lpNumberOfBytesRead,
        LPOVERLAPPED lpOverlapped)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004011f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = ReadFile(hFile,lpBuffer,nNumberOfBytesToRead,lpNumberOfBytesRead,lpOverlapped);
  return BVar1;
}


/* ==== 004011fc RtlUnwind ==== */

void __stdcall
RtlUnwind(PVOID TargetFrame,PVOID TargetIp,PEXCEPTION_RECORD ExceptionRecord,PVOID ReturnValue)

{
                    /* WARNING: Could not recover jumptable at 0x004011fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  RtlUnwind(TargetFrame,TargetIp,ExceptionRecord,ReturnValue);
  return;
}


/* ==== 00401204 SetEndOfFile ==== */

BOOL __stdcall SetEndOfFile(HANDLE hFile)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00401204. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = SetEndOfFile(hFile);
  return BVar1;
}


/* ==== 0040120c SetFilePointer ==== */

DWORD __stdcall
SetFilePointer(HANDLE hFile,LONG lDistanceToMove,PLONG lpDistanceToMoveHigh,DWORD dwMoveMethod)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0040120c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = SetFilePointer(hFile,lDistanceToMove,lpDistanceToMoveHigh,dwMoveMethod);
  return DVar1;
}


/* ==== 00401214 UnhandledExceptionFilter ==== */

LONG __stdcall UnhandledExceptionFilter(_EXCEPTION_POINTERS *ExceptionInfo)

{
  LONG LVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00401214. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LVar1 = UnhandledExceptionFilter(ExceptionInfo);
  return LVar1;
}


/* ==== 0040121c WriteFile ==== */

BOOL __stdcall
WriteFile(HANDLE hFile,LPCVOID lpBuffer,DWORD nNumberOfBytesToWrite,LPDWORD lpNumberOfBytesWritten,
         LPOVERLAPPED lpOverlapped)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0040121c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = WriteFile(hFile,lpBuffer,nNumberOfBytesToWrite,lpNumberOfBytesWritten,lpOverlapped);
  return BVar1;
}


/* ==== 00401224 CharNextA ==== */

LPSTR __stdcall CharNextA(LPCSTR lpsz)

{
  LPSTR pCVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00401224. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pCVar1 = CharNextA(lpsz);
  return pCVar1;
}


/* ==== 0040122c ExitProcess ==== */

void __stdcall ExitProcess(UINT uExitCode)

{
                    /* WARNING: Could not recover jumptable at 0x0040122c. Too many branches */
                    /* WARNING: Subroutine does not return */
                    /* WARNING: Treating indirect jump as call */
  ExitProcess(uExitCode);
  return;
}


/* ==== 00401234 MessageBoxA ==== */

int __stdcall MessageBoxA(HWND hWnd,LPCSTR lpText,LPCSTR lpCaption,UINT uType)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00401234. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = MessageBoxA(hWnd,lpText,lpCaption,uType);
  return iVar1;
}


/* ==== 0040123c FindClose ==== */

BOOL __stdcall FindClose(HANDLE hFindFile)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0040123c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = FindClose(hFindFile);
  return BVar1;
}


/* ==== 00401244 FindFirstFileA ==== */

HANDLE __stdcall FindFirstFileA(LPCSTR lpFileName,LPWIN32_FIND_DATAA lpFindFileData)

{
  HANDLE pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00401244. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = FindFirstFileA(lpFileName,lpFindFileData);
  return pvVar1;
}


/* ==== 0040124c FreeLibrary ==== */

BOOL __stdcall FreeLibrary(HMODULE hLibModule)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0040124c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = FreeLibrary(hLibModule);
  return BVar1;
}


/* ==== 00401254 GetCommandLineA ==== */

LPSTR __stdcall GetCommandLineA(void)

{
  LPSTR pCVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00401254. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pCVar1 = GetCommandLineA();
  return pCVar1;
}


/* ==== 0040125c GetLastError ==== */

DWORD __stdcall GetLastError(void)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0040125c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = GetLastError();
  return DVar1;
}


/* ==== 00401264 GetLocaleInfoA ==== */

int __stdcall GetLocaleInfoA(LCID Locale,LCTYPE LCType,LPSTR lpLCData,int cchData)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00401264. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = GetLocaleInfoA(Locale,LCType,lpLCData,cchData);
  return iVar1;
}


/* ==== 0040126c GetModuleFileNameA ==== */

DWORD __stdcall GetModuleFileNameA(HMODULE hModule,LPSTR lpFilename,DWORD nSize)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0040126c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = GetModuleFileNameA(hModule,lpFilename,nSize);
  return DVar1;
}


/* ==== 00401274 GetModuleHandleA ==== */

HMODULE __stdcall GetModuleHandleA(LPCSTR lpModuleName)

{
  HMODULE pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00401274. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = GetModuleHandleA(lpModuleName);
  return pHVar1;
}


/* ==== 0040127c GetProcAddress ==== */

FARPROC __stdcall GetProcAddress(HMODULE hModule,LPCSTR lpProcName)

{
  FARPROC pFVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0040127c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pFVar1 = GetProcAddress(hModule,lpProcName);
  return pFVar1;
}


/* ==== 00401284 GetStartupInfoA ==== */

void __stdcall GetStartupInfoA(LPSTARTUPINFOA lpStartupInfo)

{
                    /* WARNING: Could not recover jumptable at 0x00401284. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  GetStartupInfoA(lpStartupInfo);
  return;
}


/* ==== 0040128c GetThreadLocale ==== */

LCID __stdcall GetThreadLocale(void)

{
  LCID LVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0040128c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LVar1 = GetThreadLocale();
  return LVar1;
}


/* ==== 00401294 LoadLibraryExA ==== */

HMODULE __stdcall LoadLibraryExA(LPCSTR lpLibFileName,HANDLE hFile,DWORD dwFlags)

{
  HMODULE pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00401294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = LoadLibraryExA(lpLibFileName,hFile,dwFlags);
  return pHVar1;
}


/* ==== 0040129c LoadStringA ==== */

int __stdcall LoadStringA(HINSTANCE hInstance,UINT uID,LPSTR lpBuffer,int cchBufferMax)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0040129c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = LoadStringA(hInstance,uID,lpBuffer,cchBufferMax);
  return iVar1;
}


/* ==== 004012a4 lstrcpyA ==== */

LPSTR __stdcall lstrcpyA(LPSTR lpString1,LPCSTR lpString2)

{
  LPSTR pCVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004012a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pCVar1 = lstrcpyA(lpString1,lpString2);
  return pCVar1;
}


/* ==== 004012ac lstrcpynA ==== */

LPSTR __stdcall lstrcpynA(LPSTR lpString1,LPCSTR lpString2,int iMaxLength)

{
  LPSTR pCVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004012ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pCVar1 = lstrcpynA(lpString1,lpString2,iMaxLength);
  return pCVar1;
}


/* ==== 004012b4 lstrlenA ==== */

int __stdcall lstrlenA(LPCSTR lpString)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004012b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = lstrlenA(lpString);
  return iVar1;
}


/* ==== 004012bc MultiByteToWideChar ==== */

int __stdcall
MultiByteToWideChar(UINT CodePage,DWORD dwFlags,LPCSTR lpMultiByteStr,int cbMultiByte,
                   LPWSTR lpWideCharStr,int cchWideChar)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004012bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = MultiByteToWideChar(CodePage,dwFlags,lpMultiByteStr,cbMultiByte,lpWideCharStr,cchWideChar)
  ;
  return iVar1;
}


/* ==== 004012c4 RegCloseKey ==== */

LSTATUS __stdcall RegCloseKey(HKEY hKey)

{
  LSTATUS LVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004012c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LVar1 = RegCloseKey(hKey);
  return LVar1;
}


/* ==== 004012cc RegOpenKeyExA ==== */

LSTATUS __stdcall
RegOpenKeyExA(HKEY hKey,LPCSTR lpSubKey,DWORD ulOptions,REGSAM samDesired,PHKEY phkResult)

{
  LSTATUS LVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004012cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LVar1 = RegOpenKeyExA(hKey,lpSubKey,ulOptions,samDesired,phkResult);
  return LVar1;
}


/* ==== 004012d4 RegQueryValueExA ==== */

LSTATUS __stdcall
RegQueryValueExA(HKEY hKey,LPCSTR lpValueName,LPDWORD lpReserved,LPDWORD lpType,LPBYTE lpData,
                LPDWORD lpcbData)

{
  LSTATUS LVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004012d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LVar1 = RegQueryValueExA(hKey,lpValueName,lpReserved,lpType,lpData,lpcbData);
  return LVar1;
}


/* ==== 004012dc WideCharToMultiByte ==== */

int __stdcall
WideCharToMultiByte(UINT CodePage,DWORD dwFlags,LPCWSTR lpWideCharStr,int cchWideChar,
                   LPSTR lpMultiByteStr,int cbMultiByte,LPCSTR lpDefaultChar,
                   LPBOOL lpUsedDefaultChar)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004012dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = WideCharToMultiByte(CodePage,dwFlags,lpWideCharStr,cchWideChar,lpMultiByteStr,cbMultiByte,
                              lpDefaultChar,lpUsedDefaultChar);
  return iVar1;
}


/* ==== 004012e4 VirtualQuery ==== */

SIZE_T __stdcall VirtualQuery(LPCVOID lpAddress,PMEMORY_BASIC_INFORMATION lpBuffer,SIZE_T dwLength)

{
  SIZE_T SVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004012e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  SVar1 = VirtualQuery(lpAddress,lpBuffer,dwLength);
  return SVar1;
}


/* ==== 004012ec SysAllocStringLen ==== */

BSTR __stdcall SysAllocStringLen(OLECHAR *strIn,UINT ui)

{
  BSTR pOVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004012ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pOVar1 = SysAllocStringLen(strIn,ui);
  return pOVar1;
}


/* ==== 004012f4 SysReAllocStringLen ==== */

INT __stdcall SysReAllocStringLen(BSTR *pbstr,OLECHAR *psz,uint len)

{
  INT IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004012f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = SysReAllocStringLen(pbstr,psz,len);
  return IVar1;
}


/* ==== 004012fc SysFreeString ==== */

void __stdcall SysFreeString(BSTR bstrString)

{
                    /* WARNING: Could not recover jumptable at 0x004012fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  SysFreeString(bstrString);
  return;
}


/* ==== 00401304 SysStringLen ==== */

UINT __stdcall SysStringLen(BSTR param_1)

{
  UINT UVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00401304. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  UVar1 = SysStringLen(param_1);
  return UVar1;
}


/* ==== 0040130c VariantClear ==== */

HRESULT __stdcall VariantClear(VARIANTARG *pvarg)

{
  HRESULT HVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0040130c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  HVar1 = VariantClear(pvarg);
  return HVar1;
}


/* ==== 00401314 VariantCopyInd ==== */

HRESULT __stdcall VariantCopyInd(VARIANT *pvarDest,VARIANTARG *pvargSrc)

{
  HRESULT HVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00401314. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  HVar1 = VariantCopyInd(pvarDest,pvargSrc);
  return HVar1;
}


/* ==== 0040131c VariantChangeTypeEx ==== */

HRESULT __stdcall
VariantChangeTypeEx(VARIANTARG *pvargDest,VARIANTARG *pvarSrc,LCID lcid,USHORT wFlags,VARTYPE vt)

{
  HRESULT HVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0040131c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  HVar1 = VariantChangeTypeEx(pvargDest,pvarSrc,lcid,wFlags,vt);
  return HVar1;
}


/* ==== 0040132c InterlockedDecrement ==== */

LONG __stdcall InterlockedDecrement(LONG *lpAddend)

{
  LONG LVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0040132c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LVar1 = InterlockedDecrement(lpAddend);
  return LVar1;
}


/* ==== 00401334 FUN_00401334 ==== */

WORD FUN_00401334(void)

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


/* ==== 00401358 LocalAlloc ==== */

HLOCAL __stdcall LocalAlloc(UINT uFlags,SIZE_T uBytes)

{
  HLOCAL pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00401358. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = LocalAlloc(uFlags,uBytes);
  return pvVar1;
}


/* ==== 00401360 LocalFree ==== */

HLOCAL __stdcall LocalFree(HLOCAL hMem)

{
  HLOCAL pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00401360. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = LocalFree(hMem);
  return pvVar1;
}


/* ==== 00401368 VirtualAlloc ==== */

LPVOID __stdcall VirtualAlloc(LPVOID lpAddress,SIZE_T dwSize,DWORD flAllocationType,DWORD flProtect)

{
  LPVOID pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00401368. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = VirtualAlloc(lpAddress,dwSize,flAllocationType,flProtect);
  return pvVar1;
}


/* ==== 00401370 VirtualFree ==== */

BOOL __stdcall VirtualFree(LPVOID lpAddress,SIZE_T dwSize,DWORD dwFreeType)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00401370. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = VirtualFree(lpAddress,dwSize,dwFreeType);
  return BVar1;
}


/* ==== 00401378 InitializeCriticalSection ==== */

void __stdcall InitializeCriticalSection(LPCRITICAL_SECTION lpCriticalSection)

{
                    /* WARNING: Could not recover jumptable at 0x00401378. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  InitializeCriticalSection(lpCriticalSection);
  return;
}


/* ==== 00401380 EnterCriticalSection ==== */

void __stdcall EnterCriticalSection(LPCRITICAL_SECTION lpCriticalSection)

{
                    /* WARNING: Could not recover jumptable at 0x00401380. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  EnterCriticalSection(lpCriticalSection);
  return;
}


/* ==== 00401388 LeaveCriticalSection ==== */

void __stdcall LeaveCriticalSection(LPCRITICAL_SECTION lpCriticalSection)

{
                    /* WARNING: Could not recover jumptable at 0x00401388. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection(lpCriticalSection);
  return;
}


/* ==== 00401390 DeleteCriticalSection ==== */

void __stdcall DeleteCriticalSection(LPCRITICAL_SECTION lpCriticalSection)

{
                    /* WARNING: Could not recover jumptable at 0x00401390. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection(lpCriticalSection);
  return;
}


/* ==== 00401398 FUN_00401398 ==== */

int * FUN_00401398(void)

{
  undefined4 *local_alloc;
  int *piVar1;
  int i_val;
  
  if (DAT_0044744c == (int *)0x0) {
    local_alloc = LocalAlloc(0,0x644);
    if (local_alloc == (undefined4 *)0x0) {
      return (int *)0x0;
    }
    *local_alloc = DAT_00447448;
    i_val = 0;
    DAT_00447448 = local_alloc;
    do {
      piVar1 = local_alloc + i_val * 4 + 1;
      *piVar1 = (int)DAT_0044744c;
      i_val = i_val + 1;
      DAT_0044744c = piVar1;
    } while (i_val != 100);
  }
  piVar1 = DAT_0044744c;
  DAT_0044744c = (int *)*DAT_0044744c;
  return piVar1;
}


/* ==== 004013e8 FUN_004013e8 ==== */

void FUN_004013e8(int param_1)

{
  *(int *)param_1 = param_1;
  *(int *)(param_1 + 4) = param_1;
  return;
}


/* ==== 004013f0 FUN_004013f0 ==== */

undefined4 FUN_004013f0(int *param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = FUN_00401398();
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


/* ==== 00401420 FUN_00401420 ==== */

void FUN_00401420(int *param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)param_1[1];
  iVar2 = *param_1;
  *piVar1 = iVar2;
  *(int **)(iVar2 + 4) = piVar1;
  *param_1 = (int)DAT_0044744c;
  DAT_0044744c = param_1;
  return;
}


/* ==== 00401438 FUN_00401438 ==== */

void FUN_00401438(int *param_1,int *param_2,int *param_3)

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
      FUN_00401420(piVar3);
      *param_3 = piVar3[2];
      param_3[1] = param_3[1] + piVar3[3];
    }
    else if (piVar3[2] == *param_3 + param_3[1]) {
      FUN_00401420(piVar3);
      param_3[1] = param_3[1] + piVar3[3];
    }
    piVar3 = piVar1;
  } while (param_1 != piVar1);
  uVar2 = FUN_004013f0(param_1,param_3);
  if ((char)uVar2 == '\0') {
    *param_3 = 0;
  }
  return;
}


/* ==== 004014ac FUN_004014ac ==== */

undefined4 FUN_004014ac(int *param_1,uint *param_2)

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
      uVar2 = FUN_00401420(piVar3);
    }
  }
  else if (*param_2 + param_2[1] == uVar2 + piVar3[3]) {
    piVar3[3] = piVar3[3] - param_2[1];
  }
  else {
    local_18 = *param_2 + param_2[1];
    local_14 = (uVar2 + piVar3[3]) - local_18;
    piVar3[3] = *param_2 - uVar2;
    uVar2 = FUN_004013f0(piVar3,&local_18);
    if ((char)uVar2 == '\0') {
      return 0;
    }
  }
  return CONCAT31((int3)(uVar2 >> 8),1);
}


/* ==== 0040153c FUN_0040153c ==== */

void FUN_0040153c(int param_1,int *param_2)

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
    uVar1 = FUN_004013f0(&DAT_00447450,param_2);
    if ((char)uVar1 == '\0') {
      VirtualFree((LPVOID)*param_2,0,0x8000);
      *param_2 = 0;
    }
  }
  return;
}


/* ==== 004015a0 FUN_004015a0 ==== */

void FUN_004015a0(LPVOID address,int param_2,int *param_3)

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
    uVar1 = FUN_004013f0(&DAT_00447450,param_3);
    if ((char)uVar1 == '\0') {
      VirtualFree((LPVOID)*param_3,0,0x8000);
      *param_3 = 0;
    }
  }
  return;
}


/* ==== 00401618 FUN_00401618 ==== */

void FUN_00401618(LPVOID param_1,int param_2,undefined4 *param_3)

{
  int *piVar1;
  LPVOID lpAddress;
  BOOL BVar2;
  int *piVar3;
  LPVOID local_1c;
  uint local_18;
  
  local_1c = (LPVOID)0xffffffff;
  local_18 = 0;
  piVar1 = DAT_00447450;
  while (piVar3 = piVar1, (int **)piVar3 != &DAT_00447450) {
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
        DAT_0044742c = 1;
      }
      FUN_00401420(piVar3);
    }
  }
  *param_3 = 0;
  if (local_18 != 0) {
    *param_3 = local_1c;
    param_3[1] = local_18 - (int)local_1c;
  }
  return;
}


/* ==== 004016d0 FUN_004016d0 ==== */

void FUN_004016d0(uint param_1,int param_2,undefined4 *param_3)

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
  puVar4 = DAT_00447450;
  while( true ) {
    if ((undefined4 **)puVar4 == &DAT_00447450) {
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


/* ==== 00401764 FUN_00401764 ==== */

void FUN_00401764(int param_1,int param_2,undefined4 *param_3)

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
  for (puVar5 = DAT_00447450; (undefined4 **)puVar5 != &DAT_00447450; puVar5 = (undefined4 *)*puVar5
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
        DAT_0044742c = 2;
      }
    }
  }
  return;
}


/* ==== 004017e4 FUN_004017e4 ==== */

void FUN_004017e4(int param_1,int *param_2)

{
  int *piVar1;
  uint uVar2;
  int local_18 [2];
  
  uVar2 = param_1 + 0x3fffU & 0xffffc000;
  piVar1 = DAT_00447460;
  do {
    for (; (int **)piVar1 != &DAT_00447460; piVar1 = (int *)*piVar1) {
      if ((int)uVar2 <= piVar1[3]) {
        FUN_004016d0(piVar1[2],uVar2,param_2);
        if (*param_2 == 0) {
          return;
        }
        piVar1[2] = piVar1[2] + param_2[1];
        piVar1[3] = piVar1[3] - param_2[1];
        if (piVar1[3] != 0) {
          return;
        }
        FUN_00401420(piVar1);
        return;
      }
    }
    FUN_0040153c(uVar2,param_2);
    if (*param_2 == 0) {
      return;
    }
    FUN_00401438((int *)&DAT_00447460,param_2,local_18);
    piVar1 = DAT_00447460;
  } while (local_18[0] != 0);
  FUN_00401618((LPVOID)*param_2,param_2[1],local_18);
  *param_2 = 0;
  return;
}


/* ==== 00401874 FUN_00401874 ==== */

void FUN_00401874(LPVOID address,int param_2,int *param_3)

{
  int *piVar1;
  uint uVar2;
  LPVOID local_20;
  int local_1c;
  int local_18 [2];
  
  uVar2 = param_2 + 0x3fffU & 0xffffc000;
  piVar1 = DAT_00447460;
LAB_0040189a:
  do {
    for (; ((int **)piVar1 != &DAT_00447460 && (address != (LPVOID)piVar1[2]));
        piVar1 = (int *)*piVar1) {
    }
    if (address == (LPVOID)piVar1[2]) {
      if ((int)uVar2 <= piVar1[3]) goto LAB_00401947;
      FUN_004015a0((LPVOID)(piVar1[2] + piVar1[3]),uVar2 - piVar1[3],(int *)&local_20);
      if (local_20 != (LPVOID)0x0) {
        FUN_00401438((int *)&DAT_00447460,(int *)&local_20,local_18);
        piVar1 = DAT_00447460;
        if (local_18[0] == 0) {
          FUN_00401618(local_20,local_1c,local_18);
          *param_3 = 0;
          return;
        }
        goto LAB_0040189a;
      }
    }
    FUN_004015a0(address,uVar2,(int *)&local_20);
    if (local_20 == (LPVOID)0x0) {
LAB_00401947:
      if ((address != (LPVOID)piVar1[2]) || (piVar1[3] < (int)uVar2)) {
        *param_3 = 0;
        return;
      }
      FUN_004016d0((uint)piVar1[2],uVar2,param_3);
      if (*param_3 == 0) {
        return;
      }
      piVar1[2] = piVar1[2] + param_3[1];
      piVar1[3] = piVar1[3] - param_3[1];
      if (piVar1[3] != 0) {
        return;
      }
      FUN_00401420(piVar1);
      return;
    }
    FUN_00401438((int *)&DAT_00447460,(int *)&local_20,local_18);
    piVar1 = DAT_00447460;
    if (local_18[0] == 0) {
      FUN_00401618(local_20,local_1c,local_18);
      *param_3 = 0;
      return;
    }
  } while( true );
}


/* ==== 00401998 FUN_00401998 ==== */

void FUN_00401998(int param_1,int param_2,int *param_3)

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
    FUN_00401764(uVar1,uVar2 - uVar1,param_3);
    FUN_00401438(&DAT_00447460,param_3,(int *)&local_1c);
    if (local_1c != (LPVOID)0x0) {
      FUN_00401618(local_1c,local_18,&local_14);
      local_1c = local_14;
      local_18 = local_10;
    }
    if (local_1c != (LPVOID)0x0) {
      FUN_004014ac(&DAT_00447460,(uint *)&local_1c);
    }
  }
  else {
    *param_3 = 0;
  }
  return;
}


/* ==== 00401a24 FUN_00401a24 ==== */

void FUN_00401a24(void)

{
  int i_val;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_10;
  
  uStack_10 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_10;
  InitializeCriticalSection(&_RTL_CRITICAL_SECTION_00447430);
  if (DAT_00447041 != '\0') {
    EnterCriticalSection(&_RTL_CRITICAL_SECTION_00447430);
  }
  FUN_004013e8(0x447450);
  FUN_004013e8(0x447460);
  FUN_004013e8(0x44748c);
  DAT_00447488 = LocalAlloc(0,0xff8);
  if (DAT_00447488 != (HLOCAL)0x0) {
    i_val = 3;
    do {
      *(undefined4 *)((int)DAT_00447488 + i_val * 4 + -0xc) = 0;
      i_val = i_val + 1;
    } while (i_val != 0x401);
    DAT_00447474 = &DAT_00447470;
    DAT_00447470 = &DAT_00447470;
    DAT_0044747c = &DAT_00447470;
    DAT_00447428 = 1;
  }
  *in_FS_OFFSET = uStack_10;
  if (DAT_00447041 != '\0') {
    uStack_10 = 0x401ad9;
    LeaveCriticalSection(&_RTL_CRITICAL_SECTION_00447430);
  }
  return;
}


/* ==== 00401ae8 FUN_00401ae8 ==== */

void FUN_00401ae8(void)

{
  undefined4 *mem;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_14;
  
  if (DAT_00447428 == '\0') {
    return;
  }
  uStack_14 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_14;
  if (DAT_00447041 != '\0') {
    EnterCriticalSection(&_RTL_CRITICAL_SECTION_00447430);
  }
  DAT_00447428 = 0;
  LocalFree(DAT_00447488);
  DAT_00447488 = (HLOCAL)0x0;
  for (mem = DAT_00447450; (undefined4 **)mem != &DAT_00447450; mem = (undefined4 *)*mem) {
    VirtualFree((LPVOID)mem[2],0,0x8000);
  }
  FUN_004013e8(0x447450);
  FUN_004013e8(0x447460);
  FUN_004013e8(0x44748c);
  mem = DAT_00447448;
  while (mem != (undefined4 *)0x0) {
    DAT_00447448 = (undefined4 *)*mem;
    LocalFree(mem);
    mem = DAT_00447448;
  }
  DAT_00447448 = mem;
  *in_FS_OFFSET = uStack_14;
  if (DAT_00447041 != '\0') {
    uStack_14 = 0x401bb3;
    LeaveCriticalSection(&_RTL_CRITICAL_SECTION_00447430);
  }
  uStack_14 = 0x401bbd;
  DeleteCriticalSection(&_RTL_CRITICAL_SECTION_00447430);
  return;
}


/* ==== 00401bc8 FUN_00401bc8 ==== */

void FUN_00401bc8(int *param_1)

{
  int *piVar1;
  int iVar2;
  
  if (param_1 == DAT_0044747c) {
    DAT_0044747c = (int *)param_1[1];
  }
  piVar1 = (int *)param_1[1];
  iVar2 = param_1[2];
  if (iVar2 < 0x1001) {
    if (param_1 != piVar1) {
      if (iVar2 < 0) {
        iVar2 = iVar2 + 3;
      }
      *(int **)(DAT_00447488 + -0xc + (iVar2 >> 2) * 4) = piVar1;
      iVar2 = *param_1;
      *piVar1 = iVar2;
      *(int **)(iVar2 + 4) = piVar1;
      return;
    }
    if (iVar2 < 0) {
      iVar2 = iVar2 + 3;
    }
    *(undefined4 *)(DAT_00447488 + -0xc + (iVar2 >> 2) * 4) = 0;
  }
  else {
    iVar2 = *param_1;
    *piVar1 = iVar2;
    *(int **)(iVar2 + 4) = piVar1;
  }
  return;
}


/* ==== 00401c2c FUN_00401c2c ==== */

undefined4 * FUN_00401c2c(uint param_1)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_0044748c;
  while( true ) {
    if ((undefined4 **)puVar1 == &DAT_0044748c) {
      DAT_0044742c = 3;
      return (undefined4 *)0x0;
    }
    if (((uint)puVar1[2] <= param_1) && (param_1 < (uint)(puVar1[2] + puVar1[3]))) break;
    puVar1 = (undefined4 *)*puVar1;
  }
  return puVar1;
}


/* ==== 00401c5c FUN_00401c5c ==== */

void FUN_00401c5c(uint *param_1,uint param_2)

{
  uint *puVar1;
  
  puVar1 = (uint *)((param_2 - 4) + (int)param_1);
  if (0xf < (int)param_2) {
    *puVar1 = 0x80000007;
    FUN_00401e18(param_1,param_2 - 4);
    return;
  }
  if (3 < (int)param_2) {
    *param_1 = param_2 | 0x80000002;
    *puVar1 = param_2 | 0x80000002;
  }
  return;
}


/* ==== 00401c8c FUN_00401c8c ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00401c8c(int param_1)

{
  _DAT_0044741c = _DAT_0044741c + 1;
  _DAT_00447420 = _DAT_00447420 + ((*(uint *)(param_1 + -4) & 0x7ffffffc) - 4);
  FUN_00402280(param_1);
  return;
}


/* ==== 00401cb0 FUN_00401cb0 ==== */

void FUN_00401cb0(uint *param_1,uint param_2)

{
  if (0xb < (int)param_2) {
    *param_1 = param_2 | 2;
    FUN_00401c8c((int)(param_1 + 1));
    return;
  }
  if (3 < (int)param_2) {
    *param_1 = param_2 | 0x80000002;
  }
  *(uint *)((int)param_1 + param_2) = *(uint *)((int)param_1 + param_2) & 0xfffffffe;
  return;
}


/* ==== 00401cd8 FUN_00401cd8 ==== */

uint FUN_00401cd8(int param_1)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  
  uVar1 = *(uint *)(param_1 + -4);
  if ((uVar1 & 0x80000002) != 0x80000002) {
    DAT_0044742c = 4;
  }
  uVar3 = uVar1 & 0x7ffffffc;
  puVar2 = (uint *)(param_1 - uVar3);
  if (((uVar1 ^ *puVar2) & 0xfffffffe) != 0) {
    DAT_0044742c = 5;
  }
  if ((*puVar2 & 1) != 0) {
    uVar1 = puVar2[-1];
    if (uVar1 != ((int *)((int)puVar2 - uVar1))[2]) {
      DAT_0044742c = 6;
    }
    FUN_00401bc8((int *)((int)puVar2 - uVar1));
    uVar3 = uVar3 + uVar1;
  }
  return uVar3;
}


/* ==== 00401d48 FUN_00401d48 ==== */

uint FUN_00401d48(uint *param_1)

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
    FUN_00401bc8((int *)param_1);
    uVar3 = uVar3 + param_1[2];
    puVar2 = (uint *)((int)param_1 + param_1[2]);
    *puVar2 = *puVar2 & 0xfffffffe;
  }
  return uVar3;
}


/* ==== 00401d80 FUN_00401d80 ==== */

undefined4 FUN_00401d80(uint *param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  uint *puVar4;
  uint local_18;
  int local_14;
  
  piVar2 = FUN_00401c2c((uint)param_1);
  iVar1 = piVar2[2];
  if ((iVar1 + piVar2[3]) - (param_2 + (int)param_1) < 0xd) {
    param_2 = (iVar1 + piVar2[3]) - (int)param_1;
  }
  if ((int)param_1 - iVar1 < 0xc) {
    FUN_00401998(iVar1,(int)param_1 + (param_2 - piVar2[2]),(int *)&local_18);
  }
  else {
    FUN_00401998((int)(param_1 + 1),param_2 + -4,(int *)&local_18);
  }
  if (local_18 == 0) {
    uVar3 = 0;
  }
  else {
    FUN_00401c5c(param_1,local_18 - (int)param_1);
    puVar4 = (uint *)(local_18 + local_14);
    if (puVar4 < (uint *)(piVar2[2] + piVar2[3])) {
      FUN_00401cb0(puVar4,(int)param_1 + (param_2 - (int)puVar4));
    }
    uVar3 = FUN_004014ac(piVar2,&local_18);
    uVar3 = CONCAT31((int3)((uint)uVar3 >> 8),1);
  }
  return uVar3;
}


/* ==== 00401e18 FUN_00401e18 ==== */

void FUN_00401e18(uint *param_1,uint param_2)

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
    puVar1 = *(uint **)(DAT_00447488 + -0xc + ((int)param_2 >> 2) * 4);
    if (puVar1 == (uint *)0x0) {
      *(uint **)(DAT_00447488 + -0xc + ((int)param_2 >> 2) * 4) = param_1;
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
    if ((0x3bff < (int)param_2) && (uVar4 = FUN_00401d80(param_1,param_2), (char)uVar4 != '\0')) {
      return;
    }
    puVar1 = DAT_0044747c;
    uVar2 = *DAT_0044747c;
    puVar3 = param_1;
    param_1[1] = (uint)DAT_0044747c;
    DAT_0044747c = puVar3;
    *param_1 = uVar2;
    *puVar1 = (uint)param_1;
    *(uint **)(uVar2 + 4) = param_1;
  }
  return;
}


/* ==== 00401ea0 FUN_00401ea0 ==== */

void FUN_00401ea0(void)

{
  if (0 < (int)DAT_00447480) {
    if ((int)DAT_00447480 < 0xc) {
      DAT_0044742c = 7;
    }
    else {
      *DAT_00447484 = DAT_00447480 | 2;
      FUN_00401c8c((int)(DAT_00447484 + 1));
      DAT_00447484 = (uint *)0x0;
      DAT_00447480 = 0;
    }
  }
  return;
}


/* ==== 00401eec FUN_00401eec ==== */

undefined4 FUN_00401eec(uint *param_1)

{
  undefined4 uVar1;
  uint uVar2;
  uint local_1c;
  uint local_18;
  uint local_14;
  int local_10;
  
  local_1c = *param_1;
  local_18 = param_1[1];
  FUN_00401ea0();
  FUN_00401438(&DAT_0044748c,(int *)&local_1c,(int *)&local_14);
  if (local_14 == 0) {
    uVar1 = 0;
  }
  else {
    if (local_14 < local_1c) {
      uVar2 = FUN_00401cd8(local_1c);
      local_1c = local_1c - uVar2;
      local_18 = local_18 + uVar2;
    }
    if ((uint *)(local_1c + local_18) < (uint *)(local_14 + local_10)) {
      uVar2 = FUN_00401d48((uint *)(local_1c + local_18));
      local_18 = local_18 + uVar2;
    }
    if ((uint *)(local_14 + local_10) == (uint *)(local_1c + local_18)) {
      FUN_00401c5c((uint *)(local_1c + local_18) + -1,4);
      local_18 = local_18 - 4;
    }
    DAT_00447484 = local_1c;
    DAT_00447480 = local_18;
    uVar1 = CONCAT31((int3)(local_18 >> 8),1);
  }
  return uVar1;
}


/* ==== 00401f78 FUN_00401f78 ==== */

undefined4 FUN_00401f78(int param_1)

{
  undefined4 uVar1;
  uint local_c [2];
  
  FUN_004017e4(param_1 + 4,(int *)local_c);
  if ((local_c[0] != 0) && (uVar1 = FUN_00401eec(local_c), (char)uVar1 != '\0')) {
    return CONCAT31((int3)((uint)uVar1 >> 8),1);
  }
  return 0;
}


/* ==== 00401fa4 FUN_00401fa4 ==== */

undefined4 FUN_00401fa4(LPVOID address,int param_2)

{
  undefined4 uVar1;
  uint local_10 [2];
  
  FUN_00401874(address,param_2 + 4,(int *)local_10);
  if ((local_10[0] != 0) && (uVar1 = FUN_00401eec(local_10), (char)uVar1 != '\0')) {
    return CONCAT31((int3)((uint)uVar1 >> 8),1);
  }
  return 0;
}


/* ==== 00401fd8 FUN_00401fd8 ==== */

int FUN_00401fd8(int param_1)

{
  int iVar1;
  int i_val;
  
  if (param_1 < 0) {
    param_1 = param_1 + 3;
  }
  i_val = param_1 >> 2;
  if (i_val < 0x401) {
    do {
      iVar1 = *(int *)(DAT_00447488 + -0xc + i_val * 4);
      if (iVar1 != 0) {
        return iVar1;
      }
      i_val = i_val + 1;
    } while (i_val != 0x401);
  }
  return 0;
}


/* ==== 00402004 FUN_00402004 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint * FUN_00402004(uint param_1)

{
  uint *puVar1;
  uint *puVar2;
  undefined4 uVar3;
  uint uVar4;
  
  while ((puVar1 = DAT_0044747c, puVar2 = DAT_00447474, (int)DAT_00447474[2] < (int)param_1 &&
         (uVar4 = DAT_0044747c[2], puVar2 = DAT_0044747c, (int)uVar4 < (int)param_1))) {
    DAT_0044747c[2] = param_1;
    puVar2 = puVar1;
    do {
      puVar2 = (uint *)puVar2[1];
    } while ((int)puVar2[2] < (int)param_1);
    DAT_0044747c[2] = uVar4;
    puVar1 = puVar2;
    if ((puVar2 != DAT_0044747c) ||
       (((int)param_1 < 0x1001 &&
        (puVar2 = (uint *)FUN_00401fd8(param_1), puVar1 = DAT_0044747c, puVar2 != (uint *)0x0))))
    break;
    uVar3 = FUN_00401f78(param_1);
    puVar2 = DAT_00447484;
    if ((char)uVar3 == '\0') {
      return (uint *)0x0;
    }
    if ((int)param_1 <= DAT_00447480) {
      DAT_00447480 = DAT_00447480 - param_1;
      if (DAT_00447480 < 0xc) {
        param_1 = param_1 + DAT_00447480;
        DAT_00447480 = 0;
      }
      DAT_00447484 = (uint *)((int)DAT_00447484 + param_1);
      *puVar2 = param_1 | 2;
      _DAT_0044741c = _DAT_0044741c + 1;
      _DAT_00447420 = _DAT_00447420 + (param_1 - 4);
      return puVar2 + 1;
    }
  }
  DAT_0044747c = puVar1;
  FUN_00401bc8((int *)puVar2);
  uVar4 = puVar2[2];
  if ((int)(uVar4 - param_1) < 0xc) {
    if (puVar2 == DAT_0044747c) {
      DAT_0044747c = (uint *)puVar2[1];
    }
    *(uint *)((int)puVar2 + uVar4) = *(uint *)((int)puVar2 + uVar4) & 0xfffffffe;
  }
  else {
    FUN_00401e18((uint *)((int)puVar2 + param_1),uVar4 - param_1);
    uVar4 = param_1;
  }
  *puVar2 = uVar4 | 2;
  _DAT_0044741c = _DAT_0044741c + 1;
  _DAT_00447420 = _DAT_00447420 + (uVar4 - 4);
  return puVar2 + 1;
}


/* ==== 004020f8 FUN_004020f8 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint * FUN_004020f8(int param_1)

{
  uint *puVar1;
  char cVar2;
  uint uVar3;
  uint *puVar4;
  uint uVar5;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  
  if ((DAT_00447428 == '\0') && (cVar2 = FUN_00401a24(), cVar2 == '\0')) {
    return (uint *)0x0;
  }
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  if (DAT_00447041 != '\0') {
    EnterCriticalSection(&_RTL_CRITICAL_SECTION_00447430);
  }
  puVar4 = DAT_00447484;
  uVar5 = param_1 + 7U & 0xfffffffc;
  if ((int)uVar5 < 0xc) {
    uVar5 = 0xc;
  }
  if ((int)uVar5 < 0x1001) {
    uVar3 = uVar5;
    if ((int)uVar5 < 0) {
      uVar3 = uVar5 + 3;
    }
    puVar1 = *(uint **)(DAT_00447488 + -0xc + ((int)uVar3 >> 2) * 4);
    if (puVar1 != (uint *)0x0) {
      *(uint *)((int)puVar1 + uVar5) = *(uint *)((int)puVar1 + uVar5) & 0xfffffffe;
      puVar4 = (uint *)puVar1[1];
      if (puVar1 == puVar4) {
        uVar3 = uVar5;
        if ((int)uVar5 < 0) {
          uVar3 = uVar5 + 3;
        }
        *(undefined4 *)(DAT_00447488 + -0xc + ((int)uVar3 >> 2) * 4) = 0;
      }
      else {
        uVar3 = uVar5;
        if ((int)uVar5 < 0) {
          uVar3 = uVar5 + 3;
        }
        *(uint **)(DAT_00447488 + -0xc + ((int)uVar3 >> 2) * 4) = puVar4;
        uVar3 = *puVar1;
        *(uint **)(uVar3 + 4) = puVar4;
        *puVar4 = uVar3;
      }
      *puVar1 = puVar1[2] | 2;
      _DAT_0044741c = _DAT_0044741c + 1;
      _DAT_00447420 = _DAT_00447420 + (uVar5 - 4);
      FUN_0040350c();
      return puVar1 + 1;
    }
  }
  if ((int)uVar5 <= DAT_00447480) {
    DAT_00447480 = DAT_00447480 - uVar5;
    if (DAT_00447480 < 0xc) {
      uVar5 = uVar5 + DAT_00447480;
      DAT_00447480 = 0;
    }
    DAT_00447484 = (uint *)((int)DAT_00447484 + uVar5);
    *puVar4 = uVar5 | 2;
    _DAT_0044741c = _DAT_0044741c + 1;
    _DAT_00447420 = _DAT_00447420 + (uVar5 - 4);
    FUN_0040350c();
    return puVar4 + 1;
  }
  FUN_00402004(uVar5);
  puVar4 = (uint *)0x0;
  *in_FS_OFFSET = uStack_24;
  if (DAT_00447041 != '\0') {
    uStack_24 = 0x40226b;
    LeaveCriticalSection(&_RTL_CRITICAL_SECTION_00447430);
  }
  return puVar4;
}


/* ==== 00402280 FUN_00402280 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00402280(int param_1)

{
  uint uVar1;
  char cVar2;
  uint *puVar3;
  undefined4 uVar4;
  uint uVar5;
  uint *puVar6;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  
  DAT_0044742c = 0;
  if ((DAT_00447428 == '\0') && (cVar2 = FUN_00401a24(), cVar2 == '\0')) {
    DAT_0044742c = 8;
    return 8;
  }
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  if (DAT_00447041 != '\0') {
    EnterCriticalSection(&_RTL_CRITICAL_SECTION_00447430);
  }
  puVar6 = (uint *)(param_1 + -4);
  uVar5 = *puVar6;
  if ((uVar5 & 2) == 0) {
    DAT_0044742c = 9;
    goto LAB_004023e9;
  }
  _DAT_0044741c = _DAT_0044741c + -1;
  _DAT_00447420 = _DAT_00447420 - ((uVar5 & 0x7ffffffc) - 4);
  if ((uVar5 & 1) != 0) {
    uVar1 = *(uint *)(param_1 + -8);
    if (((int)uVar1 < 0xc) || ((uVar1 & 0x80000003) != 0)) {
      DAT_0044742c = 10;
      goto LAB_004023e9;
    }
    puVar6 = (uint *)((int)puVar6 - uVar1);
    if (uVar1 != puVar6[2]) {
      DAT_0044742c = 10;
      goto LAB_004023e9;
    }
    uVar5 = uVar5 + uVar1;
    FUN_00401bc8((int *)puVar6);
  }
  uVar5 = uVar5 & 0x7ffffffc;
  puVar3 = (uint *)((int)puVar6 + uVar5);
  if (puVar3 == DAT_00447484) {
    DAT_00447484 = (uint *)((int)DAT_00447484 - uVar5);
    DAT_00447480 = DAT_00447480 + uVar5;
    if (0x3c00 < DAT_00447480) {
      FUN_00401ea0();
    }
    FUN_0040350c();
    return 0;
  }
  if ((*puVar3 & 2) == 0) {
    if (((puVar3[1] == 0) || (*puVar3 == 0)) || ((int)puVar3[2] < 0xc)) {
      DAT_0044742c = 0xb;
      goto LAB_004023e9;
    }
    uVar5 = uVar5 + puVar3[2];
    FUN_00401bc8((int *)puVar3);
  }
  else {
    if ((*puVar3 & 0x7ffffffc) < 4) {
      DAT_0044742c = 0xb;
      goto LAB_004023e9;
    }
    *puVar3 = *puVar3 | 1;
  }
  FUN_00401e18(puVar6,uVar5);
LAB_004023e9:
  uVar4 = 0;
  *in_FS_OFFSET = uStack_20;
  if (DAT_00447041 != '\0') {
    uStack_20 = 0x402411;
    LeaveCriticalSection(&_RTL_CRITICAL_SECTION_00447430);
  }
  return uVar4;
}


/* ==== 00402424 FUN_00402424 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00402424(int param_1,int param_2)

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
      if ((byte *)((int)puVar5 + uVar8) == DAT_00447484) {
        if (local_14 <= DAT_00447480) {
          DAT_00447480 = DAT_00447480 - local_14;
          DAT_00447484 = DAT_00447484 + local_14;
          if (DAT_00447480 < 0xc) {
            DAT_00447484 = DAT_00447484 + DAT_00447480;
            uVar6 = uVar6 + DAT_00447480;
            DAT_00447480 = 0;
          }
          _DAT_00447420 = _DAT_00447420 + (uVar6 - uVar8);
          uVar7 = *puVar5;
          *puVar5 = uVar6 | uVar7 & 0x80000003;
          return CONCAT31((int3)((uVar7 & 0x80000003) >> 8),1);
        }
        FUN_00401ea0();
      }
      puVar4 = (uint *)((int)puVar5 + uVar8);
      if ((*puVar4 & 2) == 0) {
        uVar1 = puVar4[2];
        if (local_14 <= (int)uVar1) {
          FUN_00401bc8((int *)puVar4);
          uVar1 = uVar1 - local_14;
          if ((int)uVar1 < 0xc) {
            puVar4 = (uint *)((int)puVar5 + uVar6 + uVar1);
            *puVar4 = *puVar4 & 0xfffffffe;
            uVar7 = uVar6 + uVar1;
          }
          else {
            FUN_00401e18((uint *)((int)puVar5 + uVar6),uVar1);
          }
          goto LAB_004025d3;
        }
        puVar4 = (uint *)((int)puVar4 + uVar1);
        local_14 = local_14 - uVar1;
      }
    } while (((*puVar4 & 0x80000000) != 0) &&
            (uVar3 = FUN_00401fa4((byte *)((*puVar4 & 0x7ffffffc) + (int)puVar4),local_14),
            (char)uVar3 != '\0'));
    uVar3 = 0;
  }
  else {
    local_18 = uVar8 - uVar6;
    if (pbVar2 == DAT_00447484) {
      DAT_00447484 = DAT_00447484 + -local_18;
      DAT_00447480 = DAT_00447480 + local_18;
      if (DAT_00447480 < 0xc) {
        DAT_00447484 = DAT_00447484 + local_18;
        DAT_00447480 = DAT_00447480 - local_18;
        uVar7 = uVar8;
      }
    }
    else {
      if ((*pbVar2 & 2) == 0) {
        local_18 = local_18 + *(int *)(pbVar2 + 8);
        FUN_00401bc8((int *)pbVar2);
      }
      uVar7 = uVar8;
      if (0xb < (int)local_18) {
        *(uint *)((int)puVar5 + uVar6) = local_18 | 2;
        FUN_00401c8c((int)((uint *)((int)puVar5 + uVar6) + 1));
        uVar7 = uVar6;
      }
    }
LAB_004025d3:
    _DAT_00447420 = _DAT_00447420 + (uVar7 - uVar8);
    uVar6 = *puVar5;
    *puVar5 = uVar7 | uVar6 & 0x80000003;
    uVar3 = CONCAT31((int3)((uVar6 & 0x80000003) >> 8),1);
  }
  return uVar3;
}


/* ==== 004025f4 FUN_004025f4 ==== */

undefined4 FUN_004025f4(undefined4 *param_1,uint param_2)

{
  char cVar1;
  undefined4 uVar2;
  uint *puVar3;
  uint uVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  
  if ((DAT_00447428 == '\0') && (cVar1 = FUN_00401a24(), cVar1 == '\0')) {
    return 0;
  }
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  if (DAT_00447041 != '\0') {
    EnterCriticalSection(&_RTL_CRITICAL_SECTION_00447430);
  }
  uVar2 = FUN_00402424((int)param_1,param_2);
  if ((char)uVar2 == '\0') {
    puVar3 = FUN_004020f8(param_2);
    uVar4 = (param_1[-1] & 0x7ffffffc) - 4;
    if ((int)param_2 < (int)uVar4) {
      uVar4 = param_2;
    }
    if (puVar3 != (uint *)0x0) {
      FUN_004027d0(param_1,puVar3,uVar4);
      FUN_00402280((int)param_1);
    }
  }
  uVar2 = 0;
  *in_FS_OFFSET = uStack_20;
  if (DAT_00447041 != '\0') {
    uStack_20 = 0x4026a4;
    LeaveCriticalSection(&_RTL_CRITICAL_SECTION_00447430);
  }
  return uVar2;
}


/* ==== 004026b8 FUN_004026b8 ==== */

void FUN_004026b8(int param_1)

{
  int iVar1;
  
  if (param_1 != 0) {
    iVar1 = (*(code *)PTR_FUN_0044601c)();
    if (iVar1 == 0) {
      FUN_00402744(1);
      return;
    }
  }
  return;
}


/* ==== 004026d0 FUN_004026d0 ==== */

void FUN_004026d0(int param_1)

{
  int iVar1;
  
  if (param_1 != 0) {
    iVar1 = (*(code *)PTR_FUN_00446020)();
    if (iVar1 != 0) {
      FUN_00402744(CONCAT31((int3)((uint)iVar1 >> 8),2));
      return;
    }
  }
  return;
}


/* ==== 004026e8 FUN_004026e8 ==== */

void FUN_004026e8(int *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *param_1;
  if (iVar1 != 0) {
    if (param_2 == 0) {
      *param_1 = 0;
      iVar1 = (*(code *)PTR_FUN_00446020)(iVar1);
      if (iVar1 == 0) {
        return;
      }
      FUN_00402744(CONCAT31((int3)((uint)iVar1 >> 8),2));
      return;
    }
    iVar1 = (*(code *)PTR_FUN_00446024)(iVar1);
    if (iVar1 != 0) {
      *param_1 = iVar1;
      return;
    }
LAB_00402719:
    FUN_00402744(1);
    return;
  }
  if (param_2 != 0) {
    iVar1 = (*(code *)PTR_FUN_0044601c)(param_2);
    if (iVar1 == 0) goto LAB_00402719;
    *param_1 = iVar1;
  }
  return;
}


/* ==== 00402738 FUN_00402738 ==== */

undefined4 FUN_00402738(void)

{
  undefined4 *puVar1;
  
  puVar1 = FUN_00405fa4();
  return *puVar1;
}


/* ==== 00402744 FUN_00402744 ==== */

void FUN_00402744(uint param_1)

{
  uint uVar1;
  undefined4 uVar2;
  LPVOID pvVar3;
  undefined4 in_stack_00000000;
  
  uVar1 = param_1 & 0x7f;
  if (DAT_00447004 != (code *)0x0) {
    uVar1 = (*DAT_00447004)(uVar1,in_stack_00000000);
  }
  uVar2 = CONCAT31((int3)(uVar1 - 1 >> 8),*(undefined1 *)(uVar1 + 0x40276c));
  if ((int)(uVar1 - 1) < 0) {
    pvVar3 = FUN_00405fa4();
    uVar2 = *(undefined4 *)((int)pvVar3 + 4);
  }
  FUN_00403990(uVar2);
  return;
}


/* ==== 00402788 FUN_00402788 ==== */

void FUN_00402788(void)

{
  LPVOID pvVar1;
  
  pvVar1 = FUN_00405fa4();
  if (*(int *)((int)pvVar1 + 4) == 0) {
    return;
  }
  FUN_00402744(0);
  return;
}


/* ==== 004027a8 FUN_004027a8 ==== */

void FUN_004027a8(undefined4 param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = FUN_00405fa4();
  *(undefined4 *)((int)pvVar1 + 4) = param_1;
  return;
}


/* ==== 004027b8 FUN_004027b8 ==== */

undefined4 FUN_004027b8(void)

{
  undefined4 uVar1;
  LPVOID pvVar2;
  
  pvVar2 = FUN_00405fa4();
  uVar1 = *(undefined4 *)((int)pvVar2 + 4);
  *(undefined4 *)((int)pvVar2 + 4) = 0;
  return uVar1;
}


/* ==== 004027d0 FUN_004027d0 ==== */

void FUN_004027d0(undefined4 *param_1,undefined4 *param_2,uint param_3)

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


/* ==== 00402810 FUN_00402810 ==== */

byte * FUN_00402810(byte *param_1,int *param_2)

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
  FUN_00403aa0(param_2,local_1008,i_val);
  return pbVar2;
}


/* ==== 00402888 FUN_00402888 ==== */

void FUN_00402888(int param_1,int *param_2)

{
  DWORD DVar1;
  byte *pbVar2;
  CHAR local_114 [264];
  
  if (param_1 == 0) {
    DVar1 = GetModuleFileNameA((HMODULE)0x0,local_114,0x105);
    FUN_00403aa0(param_2,(undefined4 *)local_114,DVar1);
  }
  else {
    pbVar2 = (byte *)GetCommandLineA();
    while( true ) {
      pbVar2 = FUN_00402810(pbVar2,param_2);
      if ((param_1 == 0) || (*param_2 == 0)) break;
      param_1 = param_1 + -1;
    }
  }
  return;
}


/* ==== 004028e0 FUN_004028e0 ==== */

undefined4 FUN_004028e0(void)

{
  float10 in_ST0;
  undefined4 local_8;
  
  local_8 = (undefined4)(longlong)ROUND(in_ST0);
  return local_8;
}


/* ==== 004028ec TStrings.virtual_00c ==== */

void TStrings_virtual_00c(void)

{
  if (DAT_00447018 != (code *)0x0) {
    (*DAT_00447018)();
  }
  FUN_00403990(0xd2);
  return;
}


/* ==== 00402908 FUN_00402908 ==== */

void FUN_00402908(byte *param_1,byte *param_2,byte param_3)

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


/* ==== 00402938 FUN_00402938 ==== */

int FUN_00402938(byte *param_1,byte *param_2)

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
LAB_0040297b:
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
      goto LAB_0040297b;
    }
    if (*(int *)(pbVar4 + 4) != *(int *)(pbVar5 + 4)) {
      return iVar1;
    }
    pbVar4 = pbVar4 + 8;
    pbVar5 = pbVar5 + 8;
    uVar3 = uVar3 - 2;
  } while( true );
}


/* ==== 004029bc FUN_004029bc ==== */

int * FUN_004029bc(int *param_1,int *param_2,uint param_3)

{
  uint uVar1;
  
  uVar1 = param_3 >> 2;
  do {
    if (uVar1 == 0) {
LAB_004029ec:
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
      goto LAB_004029ec;
    }
    if (param_1[1] != param_2[1]) {
      return param_1;
    }
    param_1 = param_1 + 2;
    param_2 = param_2 + 2;
    uVar1 = uVar1 - 2;
  } while( true );
}


/* ==== 00402a2c FUN_00402a2c ==== */

void FUN_00402a2c(undefined4 *param_1,uint param_2,undefined1 param_3)

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


/* ==== 00402a4c FUN_00402a4c ==== */

void FUN_00402a4c(byte *param_1,int *param_2)

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
LAB_00402ac9:
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
      if (bVar3 == 0x2b) goto LAB_00402ad9;
      if (((bVar3 != 0x24) && (bVar3 != 0x78)) && (bVar3 != 0x58)) {
        if (bVar3 == 0x30) {
          bVar3 = *pbVar6;
          pbVar6 = pbVar5 + 2;
          if ((bVar3 != 0x78) && (bVar3 != 0x58)) goto joined_r0x00402a96;
          goto LAB_00402ade;
        }
        goto LAB_00402a9a;
      }
LAB_00402ade:
      bVar3 = *pbVar6;
      pbVar6 = pbVar6 + 1;
      if (bVar3 == 0) goto LAB_00402ac9;
      do {
        if (0x60 < bVar3) {
          bVar3 = bVar3 - 0x20;
        }
        bVar4 = bVar3 - 0x30;
        if (9 < bVar4) {
          if (5 < (byte)(bVar3 + 0xbf)) goto LAB_00402ad2;
          bVar4 = bVar3 - 0x37;
        }
        if (0xfffffff < uVar2) goto LAB_00402ad2;
        uVar2 = uVar2 * 0x10 + (uint)bVar4;
        bVar3 = *pbVar6;
        pbVar6 = pbVar6 + 1;
      } while (bVar3 != 0);
      goto LAB_00402ac0;
    }
    bVar1 = true;
LAB_00402ad9:
    bVar3 = *pbVar6;
    pbVar6 = pbVar5 + 2;
LAB_00402a9a:
    if (bVar3 != 0) {
      do {
        if ((9 < (byte)(bVar3 - 0x30)) || (0xccccccc < uVar2)) goto LAB_00402ad2;
        uVar2 = uVar2 * 10 + (uint)(byte)(bVar3 - 0x30);
        bVar3 = *pbVar6;
        pbVar6 = pbVar6 + 1;
joined_r0x00402a96:
      } while (bVar3 != 0);
      if (bVar1) {
        if ((-uVar2 == 0 || 0 < (int)uVar2) || ((int)-uVar2 < 0)) goto LAB_00402ac0;
      }
      else if (-1 < (int)uVar2) {
LAB_00402ac0:
        iVar7 = 0;
        goto LAB_00402ac3;
      }
    }
  }
LAB_00402ad2:
  iVar7 = (int)pbVar6 - (int)param_1;
LAB_00402ac3:
  *param_2 = iVar7;
  return;
}


/* ==== 00402b18 FUN_00402b18 ==== */

void FUN_00402b18(char *param_1,char *param_2)

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


/* ==== 00402b30 FUN_00402b30 ==== */

void FUN_00402b30(char *param_1,char *param_2,uint param_3)

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


/* ==== 00402b54 GetKeyboardType ==== */

int __stdcall GetKeyboardType(int nTypeFlag)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00402b54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = GetKeyboardType(nTypeFlag);
  return iVar1;
}


/* ==== 00402b5c FUN_00402b5c ==== */

undefined4 FUN_00402b5c(void)

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


/* ==== 00402b8c FUN_00402b8c ==== */

void FUN_00402b8c(void)

{
  LSTATUS LVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar2;
  DWORD local_10;
  uint local_c;
  HKEY key;
  
  local_c = (uint)DAT_00446000;
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
  DAT_00446000 = DAT_00446000 & 0xffc0 | (ushort)local_c & 0x3f;
  return;
}


/* ==== 00402c50 FUN_00402c50 ==== */

void FUN_00402c50(void)

{
  return;
}


/* ==== 00402c5c FUN_00402c5c ==== */

undefined4 FUN_00402c5c(undefined4 *param_1)

{
  return *param_1;
}


/* ==== 00402c60 FUN_00402c60 ==== */

void FUN_00402c60(int param_1,byte *param_2)

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


/* ==== 00402c74 FUN_00402c74 ==== */

undefined1 FUN_00402c74(int param_1,int param_2)

{
  uint j;
  short i_val;
  
  i_val = 0;
  if (param_2 != 0) {
    j = (uint)**(byte **)(param_1 + -0x2c);
    if (j == *(uint *)(param_2 + -4)) {
      do {
        i_val = (((*(byte **)(param_1 + -0x2c))[j] ^ *(byte *)(param_2 + -1 + j)) & 0xdf) * 0x100;
        if ((char)((ushort)i_val >> 8) != '\0') goto LAB_00402c97;
        j = j - 1;
      } while (j != 0);
      i_val = i_val + 1;
    }
  }
LAB_00402c97:
  return (char)i_val;
}


/* ==== 00402c9c FUN_00402c9c ==== */

undefined4 FUN_00402c9c(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (*(undefined4 **)(param_1 + -0x24) != (undefined4 *)0x0) {
    uVar1 = **(undefined4 **)(param_1 + -0x24);
  }
  return uVar1;
}


/* ==== 00402ca8 TObject.NewInstance ==== */

void TObject_NewInstance(int param_1)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_004026b8(*(int *)(param_1 + -0x28));
  FUN_00402d20(param_1,piVar1);
  return;
}


/* ==== 00402cbc TObject.FreeInstance ==== */

void TObject_FreeInstance(int *param_1)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = param_1;
  do {
    iVar1 = *(int *)(*piVar2 + -0x40);
    piVar2 = *(int **)(*piVar2 + -0x24);
    if (iVar1 != 0) {
      FUN_00404234((int)param_1,iVar1);
    }
  } while (piVar2 != (int *)0x0);
  FUN_004026d0((int)param_1);
  return;
}


/* ==== 00402ce4 FUN_00402ce4 ==== */

void FUN_00402ce4(int *param_1,char param_2,undefined4 param_3)

{
  char extraout_DL;
  char cVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_00000000;
  undefined4 in_stack_fffffff0;
  undefined4 in_stack_fffffff4;
  
  cVar1 = '\0';
  if (param_2 != '\0') {
    param_1 = (int *)FUN_00403014((int)param_1,param_2,param_3,in_stack_fffffff0,in_stack_fffffff4);
    cVar1 = extraout_DL;
  }
  if (cVar1 != '\0') {
    FUN_0040306c(param_1);
    *in_FS_OFFSET = in_stack_00000000;
  }
  return;
}


/* ==== 00402d04 TObject.Destroy ==== */

void TObject_Destroy(int *param_1,char param_2)

{
  int *piVar1;
  char extraout_DL;
  
  piVar1 = FUN_00403074(param_1,param_2);
  if ('\0' < extraout_DL) {
    FUN_00403064(piVar1);
  }
  return;
}


/* ==== 00402d14 FUN_00402d14 ==== */

void FUN_00402d14(int *param_1)

{
  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + -4))(param_1,1);
  }
  return;
}


/* ==== 00402d20 FUN_00402d20 ==== */

/* WARNING: Removing unreachable block (ram,0x00402d55) */
/* WARNING: Removing unreachable block (ram,0x00402d5b) */
/* WARNING: Removing unreachable block (ram,0x00402d62) */
/* WARNING: Removing unreachable block (ram,0x00402d68) */
/* WARNING: Removing unreachable block (ram,0x00402d6e) */

void FUN_00402d20(int param_1,int *param_2)

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


/* ==== 00402d78 FUN_00402d78 ==== */

void FUN_00402d78(int *param_1,undefined *UNRECOVERED_JUMPTABLE,int *param_3)

{
  if ((undefined *)0xfeffffff < UNRECOVERED_JUMPTABLE) {
    FUN_00405308(param_3,*(int **)(((uint)UNRECOVERED_JUMPTABLE & 0xffffff) + (int)param_1));
    return;
  }
  if ((undefined *)0xfdffffff < UNRECOVERED_JUMPTABLE) {
                    /* WARNING: Could not recover jumptable at 0x00402d8f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((int)(short)UNRECOVERED_JUMPTABLE + *param_1))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00402d91. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)UNRECOVERED_JUMPTABLE)();
  return;
}


/* ==== 00402da8 FUN_00402da8 ==== */

void FUN_00402da8(int *param_1,int *param_2,int *param_3)

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
  puStack_20 = &LAB_00402e36;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  local_8 = param_2;
  piVar1 = FUN_00402e48(*param_1,param_2);
  if (piVar1 == (int *)0x0) {
    *param_3 = 0;
  }
  else {
    if (piVar1[5] == 0) {
      FUN_00402d78(param_1,(undefined *)piVar1[6],(int *)&local_c);
      FUN_00405308(param_3,local_c);
    }
    else {
      *param_3 = (int)param_1 + piVar1[5];
    }
    if ((*param_3 != 0) && (piVar1[5] != 0)) {
      (**(code **)(*(int *)*param_3 + 4))();
    }
  }
  *in_FS_OFFSET = uStack_24;
  puStack_1c = &LAB_00402e3d;
  puStack_20 = (undefined1 *)0x402e35;
  FUN_004052f0((int *)&local_c);
  return;
}


/* ==== 00402e48 FUN_00402e48 ==== */

int * FUN_00402e48(int param_1,int *param_2)

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


/* ==== 00402e8c FUN_00402e8c ==== */

undefined4 FUN_00402e8c(int *param_1,int param_2)

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


/* ==== 00402ea4 FUN_00402ea4 ==== */

void FUN_00402ea4(int *param_1,int param_2)

{
  int *piVar1;
  
  piVar1 = param_1;
  if (param_1 != (int *)0x0) {
    while (*piVar1 != param_2) {
      piVar1 = *(int **)(*piVar1 + -0x24);
      if (piVar1 == (int *)0x0) {
        FUN_00402744(CONCAT31((int3)((uint)param_1 >> 8),10));
        return;
      }
    }
  }
  return;
}


/* ==== 00402ec0 FUN_00402ec0 ==== */

void FUN_00402ec0(int param_1)

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


/* ==== 00402ef0 FUN_00402ef0 ==== */

void FUN_00402ef0(int *param_1,undefined4 param_2,undefined4 param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined1 in_ZF;
  
  FUN_00402ec0(*param_1);
  if (!(bool)in_ZF) {
                    /* WARNING: Could not recover jumptable at 0x00402efd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(param_1);
    return;
  }
  TStrings_virtual_00c();
  return;
}


/* ==== 00402f08 FUN_00402f08 ==== */

undefined4 FUN_00402f08(int *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined1 in_ZF;
  
  FUN_00402ec0(*param_1);
  if ((bool)in_ZF) {
    uVar1 = TStrings_virtual_00c();
    return uVar1;
  }
  return param_2;
}


/* ==== 00402f20 thunk_FUN_00402f24 ==== */

undefined4 thunk_FUN_00402f24(int param_1,int param_2)

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


/* ==== 00402f24 FUN_00402f24 ==== */

undefined4 FUN_00402f24(int param_1,int param_2)

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


/* ==== 00402f34 FUN_00402f34 ==== */

undefined4 FUN_00402f34(int param_1)

{
  return *(undefined4 *)(param_1 + -0x3c);
}


/* ==== 00402f38 TObject.SafeCallException ==== */

undefined4 TObject_SafeCallException(void)

{
  return 0x8000ffff;
}


/* ==== 00402f40 TObject.DefaultHandler ==== */

void TObject_DefaultHandler(void)

{
  return;
}


/* ==== 00402f44 TObject.AfterConstruction ==== */

void TObject_AfterConstruction(void)

{
  return;
}


/* ==== 00402f48 TObject.BeforeDestruction ==== */

void TObject_BeforeDestruction(void)

{
  return;
}


/* ==== 00402f4c TObject.Dispatch ==== */

void TObject_Dispatch(int *param_1,ushort *param_2)

{
  ushort uVar1;
  undefined4 unaff_EBX;
  bool bVar2;
  
  uVar1 = *param_2;
  if ((uVar1 != 0) && (bVar2 = uVar1 == 0xc000, uVar1 < 0xc000)) {
    FUN_00402ec0(*param_1);
    if (!bVar2) {
                    /* WARNING: Could not recover jumptable at 0x00402f6a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)CONCAT22((short)((uint)unaff_EBX >> 0x10),uVar1))();
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00402f6f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + -0x10))();
  return;
}


/* ==== 00402f74 FUN_00402f74 ==== */

undefined4 FUN_00402f74(int param_1,byte *param_2)

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


/* ==== 00402fc4 FUN_00402fc4 ==== */

int FUN_00402fc4(int *param_1,char *param_2)

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


/* ==== 00403014 FUN_00403014 ==== */

void FUN_00403014(int param_1,char param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  int *in_FS_OFFSET;
  
  if (-1 < param_2) {
    (**(code **)(param_1 + -0xc))();
  }
  *in_FS_OFFSET = (int)&param_4;
  return;
}


/* ==== 00403064 FUN_00403064 ==== */

void FUN_00403064(int *param_1)

{
  (**(code **)(*param_1 + -8))();
  return;
}


/* ==== 0040306c FUN_0040306c ==== */

int * FUN_0040306c(int *param_1)

{
  (**(code **)(*param_1 + -0x1c))();
  return param_1;
}


/* ==== 00403074 FUN_00403074 ==== */

int * FUN_00403074(int *param_1,char param_2)

{
  if (param_2 < '\x01') {
    return param_1;
  }
  (**(code **)(*param_1 + -0x18))();
  return param_1;
}


/* ==== 004030a0 FUN_004030a0 ==== */

undefined4 FUN_004030a0(undefined4 param_1,ULONG_PTR param_2)

{
  ULONG_PTR UStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  if (DAT_00446008 != '\0') {
    UStack_c = param_2;
    uStack_8 = param_1;
    uStack_4 = param_1;
    RaiseException(0xeedfae4,0,2,&UStack_c);
    param_1 = uStack_4;
  }
  return param_1;
}


/* ==== 004030c0 FUN_004030c0 ==== */

undefined4 FUN_004030c0(void)

{
  undefined4 in_stack_00000004;
  
  RaiseException(0xeedfae0,0,1,(ULONG_PTR *)&stack0x00000000);
  return in_stack_00000004;
}


/* ==== 004030d4 FUN_004030d4 ==== */

void FUN_004030d4(void)

{
  if (1 < DAT_00446008) {
    FUN_004030c0();
    return;
  }
  return;
}


/* ==== 004030e8 FUN_004030e8 ==== */

void FUN_004030e8(void)

{
  if (1 < DAT_00446008) {
    FUN_004030c0();
    return;
  }
  return;
}


/* ==== 004030fc FUN_004030fc ==== */

int FUN_004030fc(int param_1,undefined4 param_2,char *param_3)

{
  if (((param_3 != (char *)0x0) && (param_1 = *(int *)(param_3 + 1), *param_3 != -0x17)) &&
     (*param_3 == -0x15)) {
    param_1 = (int)(char)param_1;
  }
  return param_1;
}


/* ==== 0040311c FUN_0040311c ==== */

int FUN_0040311c(int param_1,undefined4 param_2,char *param_3)

{
  ULONG_PTR UStack_10;
  char *pcStack_c;
  undefined4 uStack_8;
  int iStack_4;
  
  if (1 < DAT_00446008) {
    UStack_10 = 0x40312d;
    pcStack_c = param_3;
    uStack_8 = param_2;
    iStack_4 = param_1;
    FUN_004030fc(param_1,param_2,param_3);
    RaiseException(0xeedfae1,0,1,&UStack_10);
    param_1 = iStack_4;
  }
  return param_1;
}


/* ==== 00403160 FUN_00403160 ==== */

undefined4 FUN_00403160(undefined4 param_1,ULONG_PTR param_2)

{
  ULONG_PTR UStack_8;
  undefined4 uStack_4;
  
  uStack_4 = param_1;
  if (1 < DAT_00446008) {
    UStack_8 = param_2;
    RaiseException(0xeedfae3,0,2,&UStack_8);
  }
  return uStack_4;
}


/* ==== 004032ac FUN_004032ac ==== */

undefined4 FUN_004032ac(void)

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
      FUN_00402c50();
      if (DAT_00447008 == (code *)0x0) {
        return 1;
      }
      iVar3 = (*DAT_00447008)();
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
LAB_00403345:
        if (in_stack_00000004->ExceptionCode == 0xeedfade) {
          if ((DAT_0044600c < 2) || (DAT_00446008 != '\0')) goto LAB_004033bf;
          piStack_24 = (int *)0x4033b7;
          iVar3 = UnhandledExceptionFilter((_EXCEPTION_POINTERS *)&stack0xfffffff4);
        }
        else {
          uVar5 = (*DAT_0044700c)();
          FUN_004030a0(uVar5,in_stack_0000000c);
          if ((DAT_0044600c == 0) || (DAT_00446008 != '\0')) goto LAB_004033bf;
          iVar3 = UnhandledExceptionFilter((_EXCEPTION_POINTERS *)&stack0xfffffff4);
        }
        if (iVar3 == 0) {
          return 1;
        }
LAB_004033bf:
        in_stack_00000004->ExceptionFlags = in_stack_00000004->ExceptionFlags | 2;
        piStack_24 = piVar8;
        RtlUnwind(in_stack_00000008,(PVOID)0x4033df,in_stack_00000004,(PVOID)0x0);
        piVar8 = piStack_24;
        piStack_24 = (int *)0x4033e9;
        puVar6 = FUN_00405fa4();
        piStack_24 = (int *)*puVar6;
        *puVar6 = &piStack_24;
        *(undefined1 **)((int)in_stack_00000008 + 4) = &LAB_0040340b;
        FUN_004030d4();
                    /* WARNING: Could not recover jumptable at 0x00403408. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar5 = (*(code *)piVar8[1])();
        return uVar5;
      }
      while( true ) {
        iVar2 = *piVar4;
        if (iVar2 == iVar9) goto LAB_00403345;
        if (*(int *)(iVar2 + -0x28) == *(int *)(iVar9 + -0x28)) {
          bVar1 = **(byte **)(iVar2 + -0x2c);
          if (bVar1 == **(byte **)(iVar9 + -0x2c)) {
            pbVar7 = *(byte **)(iVar9 + -0x2c) + 1;
            bVar10 = pbVar7 == (byte *)0x0;
            FUN_004029bc((int *)(*(byte **)(iVar2 + -0x2c) + 1),(int *)pbVar7,(uint)bVar1);
            if (bVar10) goto LAB_00403345;
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


/* ==== 00403434 FUN_00403434 ==== */

undefined4 FUN_00403434(void)

{
  int iVar1;
  code *extraout_ECX;
  int in_stack_00000004;
  int in_stack_00000008;
  
  if ((*(uint *)(in_stack_00000004 + 4) & 6) != 0) {
    iVar1 = *(int *)(in_stack_00000008 + 4);
    *(undefined4 *)(in_stack_00000008 + 4) = 0x403464;
    FUN_0040311c(in_stack_00000004,in_stack_00000008,(char *)(iVar1 + 5));
    (*extraout_ECX)();
  }
  return 1;
}


/* ==== 0040346c FUN_0040346c ==== */

void FUN_0040346c(undefined4 param_1)

{
  ULONG_PTR UStack_18;
  undefined4 uStack_14;
  
  uStack_14 = param_1;
  RaiseException(0xeedfade,1,7,&UStack_18);
  return;
}


/* ==== 0040350c FUN_0040350c ==== */

void FUN_0040350c(void)

{
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_00000004;
  int in_stack_00000008;
  
  *in_FS_OFFSET = in_stack_00000004;
  (*(code *)(in_stack_00000008 + 5))();
  return;
}


/* ==== 00403524 FUN_00403524 ==== */

void FUN_00403524(undefined4 param_1)

{
  FUN_00403990(param_1);
  return;
}


/* ==== 0040366c FUN_0040366c ==== */

void FUN_0040366c(void)

{
  int iVar1;
  int unaff_EBP;
  int *in_FS_OFFSET;
  
  DAT_004474a0 = (int *)(unaff_EBP + -0xc);
  iVar1 = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)DAT_004474a0;
  *DAT_004474a0 = iVar1;
  *(undefined1 **)(unaff_EBP + -8) = &LAB_004035d0;
  *(int *)(unaff_EBP + -4) = unaff_EBP;
  return;
}


/* ==== 0040368c FUN_0040368c ==== */

void FUN_0040368c(void)

{
  int *piVar1;
  int *in_FS_OFFSET;
  
  piVar1 = (int *)*in_FS_OFFSET;
  if (DAT_004474a0 == piVar1) {
    *in_FS_OFFSET = *DAT_004474a0;
    return;
  }
  while( true ) {
    if (piVar1 == (int *)0xffffffff) {
      return;
    }
    if ((int *)*piVar1 == DAT_004474a0) break;
    piVar1 = (int *)*piVar1;
  }
  *piVar1 = *DAT_004474a0;
  return;
}


/* ==== 004036b4 FUN_004036b4 ==== */

void FUN_004036b4(void)

{
  int iVar1;
  code *pcVar2;
  int i_val;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  
  i_val = DAT_004474a8;
  puStack_14 = &stack0xfffffffc;
  if (DAT_004474a4 != 0) {
    iVar1 = *(int *)(DAT_004474a4 + 4);
    puStack_18 = &LAB_004036fa;
    uStack_1c = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_1c;
    while (0 < i_val) {
      i_val = i_val + -1;
      pcVar2 = *(code **)(iVar1 + 4 + i_val * 8);
      DAT_004474a8 = i_val;
      if (pcVar2 != (code *)0x0) {
        (*pcVar2)();
      }
    }
    *in_FS_OFFSET = uStack_1c;
  }
  return;
}


/* ==== 00403714 FUN_00403714 ==== */

void FUN_00403714(void)

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
  if (DAT_004474a4 != (int *)0x0) {
    iVar1 = *DAT_004474a4;
    i_val = 0;
    iVar2 = DAT_004474a4[1];
    puStack_18 = &LAB_0040375a;
    uStack_1c = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_1c;
    if (0 < iVar1) {
      do {
        pcVar3 = *(code **)(iVar2 + i_val * 8);
        i_val = i_val + 1;
        DAT_004474a8 = i_val;
        if (pcVar3 != (code *)0x0) {
          (*pcVar3)();
        }
      } while (i_val < iVar1);
    }
    *in_FS_OFFSET = uStack_1c;
  }
  return;
}


/* ==== 00403774 FUN_00403774 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00403774(undefined4 param_1,int param_2)

{
  DAT_004474a8 = 0;
  DAT_0044701c = *(undefined4 *)(param_2 + 4);
  DAT_004474a4 = param_1;
  _DAT_004474ac = param_2;
  FUN_0040366c();
  DAT_00447024 = 0;
  FUN_00403714();
  return;
}


/* ==== 004037a4 FUN_004037a4 ==== */

void FUN_004037a4(int *param_1)

{
  int i_val;
  int *piVar1;
  
  i_val = *param_1;
  piVar1 = param_1 + 1;
  do {
    FUN_00405298(*(undefined4 **)piVar1[1],(int *)*piVar1);
    piVar1 = piVar1 + 2;
    i_val = i_val + -1;
  } while (i_val != 0);
  return;
}


/* ==== 004037c0 FUN_004037c0 ==== */

void FUN_004037c0(int *param_1)

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


/* ==== 004037e0 FUN_004037e0 ==== */

void FUN_004037e0(void)

{
  ulonglong uVar1;
  uint uVar2;
  PVOID pvVar3;
  char *pcVar4;
  
  pcVar4 = s_Runtime_error_at_00000000_00446028 + 0x10;
  uVar2 = DAT_00447030;
  do {
    uVar1 = (ulonglong)uVar2;
    uVar2 = uVar2 / 10;
    *pcVar4 = (char)(uVar1 % 10) + '0';
    pcVar4 = pcVar4 + -1;
  } while (uVar2 != 0);
  pvVar3 = FUN_00404d20(DAT_00447038);
  uVar2 = (int)DAT_00447038 - (int)pvVar3;
  pcVar4 = s_Runtime_error_at_00000000_00446028 + 0x1c;
  do {
    *pcVar4 = (&DAT_00446050)[uVar2 & 0xf];
    pcVar4 = pcVar4 + -1;
    uVar2 = uVar2 >> 4;
  } while (uVar2 != 0);
  return;
}


/* ==== 00403830 FUN_00403830 ==== */

bool FUN_00403830(void)

{
  int iVar1;
  int i_val;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  puVar2 = DAT_0044749c;
  puVar3 = &DAT_0044749c;
  for (i_val = 0xb; iVar1 = DAT_00447030, i_val != 0; i_val = i_val + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  LOCK();
  DAT_00447030 = 0;
  UNLOCK();
  return (bool)('\x01' - (iVar1 != 0));
}


/* ==== 00403864 FUN_00403864 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00403864(void)

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
  pcVar1 = _DAT_00447034;
  if (bRam004474c0 == 0) {
    while (_DAT_00447034 = pcVar1, pcVar1 != (code *)0x0) {
      _DAT_00447034 = (code *)0x0;
      (*pcVar1)();
      pcVar1 = _DAT_00447034;
    }
  }
  if (DAT_00447038 != 0) {
    FUN_004037e0();
    if (DAT_00447040 == '\0') {
      if (DAT_00446010 == '\0') {
        MessageBoxA((HWND)0x0,s_Runtime_error_at_00000000_00446028,s_Error_00446048,0);
      }
    }
    else {
      puVar2 = (undefined *)FUN_00405840(&DAT_00447214,s_Runtime_error_at_00000000_00446028);
      FUN_004057c3(puVar2);
    }
    DAT_00447038 = 0;
  }
  while( true ) {
    if ((bRam004474c0 == 2) && (DAT_00447030 == 0)) {
      DAT_004474a8 = 0;
    }
    FUN_004036b4();
    if (((bRam004474c0 < 2) || (DAT_00447030 != 0)) && (_DAT_004474ac != (undefined4 *)0x0)) {
      FUN_00405228(_DAT_004474ac,extraout_EDX,extraout_ECX);
      if ((HMODULE)_DAT_004474ac[4] != (HMODULE)_DAT_004474ac[1]) {
        FreeLibrary((HMODULE)_DAT_004474ac[4]);
      }
    }
    FUN_0040368c();
    if (bRam004474c0 == 1) {
      (*pcRam004474c4)();
    }
    if (bRam004474c0 != 0) {
      FUN_00403830();
    }
    if (DAT_0044749c == (undefined4 *)0x0) break;
    puVar3 = DAT_0044749c;
    puVar4 = &DAT_0044749c;
    for (i_val = 0xb; i_val != 0; i_val = i_val + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
      puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  ExitProcess(DAT_00447030);
}


/* ==== 00403984 FUN_00403984 ==== */

void FUN_00403984(undefined4 param_1)

{
  DAT_00447030 = param_1;
  FUN_00403864();
  return;
}


/* ==== 00403990 FUN_00403990 ==== */

void FUN_00403990(undefined4 param_1)

{
  undefined4 in_stack_00000000;
  
  DAT_00447038 = in_stack_00000000;
  FUN_00403984(param_1);
  return;
}


/* ==== 0040399c FUN_0040399c ==== */

void FUN_0040399c(undefined4 param_1)

{
  if (DAT_00447014 != (code *)0x0) {
    (*DAT_00447014)();
    return;
  }
  FUN_00402744(CONCAT31((int3)((uint)param_1 >> 8),0x15));
  return;
}


/* ==== 004039b8 FUN_004039b8 ==== */

int * FUN_004039b8(int *param_1)

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
      FUN_004026d0(iVar2 + -8);
    }
  }
  return param_1;
}


/* ==== 004039dc FUN_004039dc ==== */

void FUN_004039dc(int *param_1,int param_2)

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
        FUN_004026d0(iVar2 + -8);
      }
    }
    param_1 = param_1 + 1;
    param_2 = param_2 + -1;
  } while (param_2 != 0);
  return;
}


/* ==== 00403a0c FUN_00403a0c ==== */

void FUN_00403a0c(int *param_1,undefined4 *param_2)

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
      puVar3 = FUN_00403a7c(param_2[-1]);
      FUN_004027d0(param_2,puVar3,param_2[-1]);
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
      FUN_004026d0(iVar2 + -8);
    }
  }
  return;
}


/* ==== 00403a50 FUN_00403a50 ==== */

void FUN_00403a50(int *param_1,int param_2)

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
      FUN_004026d0(iVar2 + -8);
    }
  }
  return;
}


/* ==== 00403a7c FUN_00403a7c ==== */

undefined4 * FUN_00403a7c(int param_1)

{
  undefined4 *puVar1;
  
  if (0 < param_1) {
    puVar1 = (undefined4 *)FUN_004026b8(param_1 + 9);
    puVar1[1] = param_1;
    *puVar1 = 1;
    *(undefined1 *)((int)(puVar1 + 2) + param_1) = 0;
    return puVar1 + 2;
  }
  return (undefined4 *)0x0;
}


/* ==== 00403aa0 FUN_00403aa0 ==== */

void FUN_00403aa0(int *param_1,undefined4 *param_2,uint param_3)

{
  undefined4 *puVar1;
  
  puVar1 = FUN_00403a7c(param_3);
  if (param_2 != (undefined4 *)0x0) {
    FUN_004027d0(param_2,puVar1,param_3);
  }
  FUN_004039b8(param_1);
  *param_1 = (int)puVar1;
  return;
}


/* ==== 00403ad0 FUN_00403ad0 ==== */

void FUN_00403ad0(int *param_1,LPCWSTR wide_char_str,int wide_char)

{
  uint multi_byte;
  CHAR local_810 [2048];
  
  if (wide_char < 1) {
    FUN_004039b8(param_1);
  }
  else {
    if (wide_char < 0x400) {
      multi_byte = WideCharToMultiByte(0,0,wide_char_str,wide_char,local_810,0x800,(LPCSTR)0x0,
                                       (LPBOOL)0x0);
      if (0 < (int)multi_byte) {
        FUN_00403aa0(param_1,(undefined4 *)local_810,multi_byte);
        return;
      }
    }
    multi_byte = WideCharToMultiByte(0,0,wide_char_str,wide_char,(LPSTR)0x0,0,(LPCSTR)0x0,
                                     (LPBOOL)0x0);
    FUN_00403aa0(param_1,(undefined4 *)0x0,multi_byte);
    WideCharToMultiByte(0,0,wide_char_str,wide_char,(LPSTR)*param_1,multi_byte,(LPCSTR)0x0,
                        (LPBOOL)0x0);
  }
  return;
}


/* ==== 00403b60 FUN_00403b60 ==== */

void FUN_00403b60(int *param_1,undefined4 param_2)

{
  undefined4 uStack_4;
  
  uStack_4 = param_2;
  FUN_00403aa0(param_1,&uStack_4,1);
  return;
}


/* ==== 00403b70 FUN_00403b70 ==== */

void FUN_00403b70(int *param_1,char *param_2)

{
  uint uVar1;
  char *pcVar2;
  
  uVar1 = 0;
  pcVar2 = param_2;
  if (param_2 != (char *)0x0) {
    for (; *pcVar2 != '\0'; pcVar2 = pcVar2 + 4) {
      if (pcVar2[1] == '\0') {
LAB_00403b91:
        pcVar2 = pcVar2 + 1;
        break;
      }
      if (pcVar2[2] == '\0') {
LAB_00403b90:
        pcVar2 = pcVar2 + 1;
        goto LAB_00403b91;
      }
      if (pcVar2[3] == '\0') {
        pcVar2 = pcVar2 + 1;
        goto LAB_00403b90;
      }
    }
    uVar1 = (int)pcVar2 - (int)param_2;
  }
  FUN_00403aa0(param_1,(undefined4 *)param_2,uVar1);
  return;
}


/* ==== 00403ba0 FUN_00403ba0 ==== */

void FUN_00403ba0(int *param_1,LPCWSTR wide_char_str)

{
  uint wide_char;
  LPCWSTR pWVar1;
  
  wide_char = 0;
  pWVar1 = wide_char_str;
  if (wide_char_str != (LPCWSTR)0x0) {
    for (; *pWVar1 != L'\0'; pWVar1 = pWVar1 + 4) {
      if (pWVar1[1] == L'\0') {
LAB_00403bc9:
        pWVar1 = pWVar1 + 1;
        break;
      }
      if (pWVar1[2] == L'\0') {
LAB_00403bc6:
        pWVar1 = pWVar1 + 1;
        goto LAB_00403bc9;
      }
      if (pWVar1[3] == L'\0') {
        pWVar1 = pWVar1 + 1;
        goto LAB_00403bc6;
      }
    }
    wide_char = (uint)((int)pWVar1 - (int)wide_char_str) >> 1;
  }
  FUN_00403ad0(param_1,wide_char_str,wide_char);
  return;
}


/* ==== 00403bdc FUN_00403bdc ==== */

void FUN_00403bdc(int *param_1,byte *param_2)

{
  FUN_00403aa0(param_1,(undefined4 *)(param_2 + 1),(uint)*param_2);
  return;
}


/* ==== 00403be8 FUN_00403be8 ==== */

void FUN_00403be8(int *param_1,char *param_2,uint param_3)

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
  FUN_00403aa0(param_1,(undefined4 *)param_2,i_val + param_3);
  return;
}


/* ==== 00403c00 FUN_00403c00 ==== */

void FUN_00403c00(int *param_1,LPCWSTR wide_char_str)

{
  uint wide_char;
  
  wide_char = 0;
  if (wide_char_str != (LPCWSTR)0x0) {
    wide_char = *(uint *)(wide_char_str + -2) >> 1;
  }
  FUN_00403ad0(param_1,wide_char_str,wide_char);
  return;
}


/* ==== 00403c14 FUN_00403c14 ==== */

void FUN_00403c14(undefined1 *param_1,undefined4 *param_2,uint param_3)

{
  uint uVar1;
  
  if ((param_2 != (undefined4 *)0x0) && (uVar1 = param_2[-1], uVar1 != 0)) {
    if ((int)uVar1 <= (int)param_3) {
      param_3 = uVar1;
    }
    *param_1 = (char)param_3;
    FUN_004027d0(param_2,(undefined4 *)(param_1 + 1),param_3);
    return;
  }
  *param_1 = 0;
  return;
}


/* ==== 00403c38 FUN_00403c38 ==== */

undefined4 FUN_00403c38(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = *(undefined4 *)(param_1 + -4);
  }
  return uVar1;
}


/* ==== 00403c40 FUN_00403c40 ==== */

void FUN_00403c40(int *param_1,undefined4 *param_2)

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
      FUN_00403f6c(param_1,param_2[-1] + uVar3);
      param_2 = (undefined4 *)*param_1;
      uVar5 = uVar3;
    }
    else {
      FUN_00403f6c(param_1,param_2[-1] + uVar3);
      uVar5 = param_2[-1];
    }
    FUN_004027d0(param_2,(undefined4 *)(*param_1 + uVar3),uVar5);
    return;
  }
  if (param_2 != (undefined4 *)0x0) {
    if ((uint)param_2[-2] < 0x80000000) {
      LOCK();
      param_2[-2] = param_2[-2] + 1;
      UNLOCK();
    }
    else {
      puVar4 = FUN_00403a7c(param_2[-1]);
      FUN_004027d0(param_2,puVar4,param_2[-1]);
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
      FUN_004026d0(iVar2 + -8);
    }
  }
  return;
}


/* ==== 00403c84 FUN_00403c84 ==== */

void FUN_00403c84(int *param_1,undefined4 *param_2,undefined4 *param_3)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  
  if (param_2 == (undefined4 *)0x0) {
    FUN_00403a0c(param_1,param_3);
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
        puVar3 = FUN_00403a7c(param_2[-1]);
        FUN_004027d0(param_2,puVar3,param_2[-1]);
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
        FUN_004026d0(iVar2 + -8);
      }
    }
    return;
  }
  if (param_2 == (undefined4 *)*param_1) {
    FUN_00403c40(param_1,param_3);
    return;
  }
  if (param_3 != (undefined4 *)*param_1) {
    FUN_00403a0c(param_1,param_2);
    FUN_00403c40(param_1,param_3);
    return;
  }
  puVar3 = FUN_00403a7c(param_2[-1] + param_3[-1]);
  FUN_004027d0(param_2,puVar3,param_2[-1]);
  FUN_004027d0(param_3,(undefined4 *)((int)puVar3 + param_2[-1]),param_3[-1]);
  if (puVar3 != (undefined4 *)0x0) {
    puVar3[-2] = puVar3[-2] + -1;
  }
  FUN_00403a0c(param_1,puVar3);
  return;
}


/* ==== 00403cf8 FUN_00403cf8 ==== */

void FUN_00403cf8(int *param_1,int param_2)

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
  puVar3 = FUN_00403a7c(iVar2);
  puVar4 = puVar3;
  do {
    puVar1 = *(undefined4 **)(&stack0x00000000 + param_2 * 4);
    puVar5 = puVar4;
    if (puVar1 != (undefined4 *)0x0) {
      puVar5 = (undefined4 *)((int)puVar4 + puVar1[-1]);
      FUN_004027d0(puVar1,puVar4,puVar1[-1]);
    }
    param_2 = param_2 + -1;
    puVar4 = puVar5;
  } while (param_2 != 0);
  if (puVar3 != (undefined4 *)0x0) {
    puVar3[-2] = puVar3[-2] + -1;
  }
  FUN_00403a0c(param_1,puVar3);
                    /* WARNING: Could not recover jumptable at 0x00403d42. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(UNRECOVERED_JUMPTABLE);
  return;
}


/* ==== 00403d48 FUN_00403d48 ==== */

uint * FUN_00403d48(uint *param_1,uint *param_2)

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


/* ==== 00403dec FUN_00403dec ==== */

void FUN_00403dec(int param_1)

{
  if ((param_1 != 0) && (-1 < *(int *)(param_1 + -8))) {
    LOCK();
    *(int *)(param_1 + -8) = *(int *)(param_1 + -8) + 1;
    UNLOCK();
  }
  return;
}


/* ==== 00403dfc FUN_00403dfc ==== */

undefined * FUN_00403dfc(undefined *param_1)

{
  if (param_1 != (undefined *)0x0) {
    return param_1;
  }
  return &DAT_00403e01;
}


/* ==== 00403e08 FUN_00403e08 ==== */

int FUN_00403e08(int *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  
  iVar3 = *param_1;
  if ((iVar3 != 0) && (*(int *)(iVar3 + -8) != 1)) {
    puVar2 = FUN_00403a7c(*(int *)(iVar3 + -4));
    puVar1 = (undefined4 *)*param_1;
    *param_1 = (int)puVar2;
    if (0 < (int)puVar1[-2]) {
      LOCK();
      puVar1[-2] = puVar1[-2] + -1;
      UNLOCK();
    }
    FUN_004027d0(puVar1,puVar2,puVar1[-1]);
    iVar3 = *param_1;
  }
  return iVar3;
}


/* ==== 00403e40 FUN_00403e40 ==== */

void FUN_00403e40(int param_1,int param_2,uint param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  
  if ((param_1 != 0) && (iVar1 = *(int *)(param_1 + -4), iVar1 != 0)) {
    iVar2 = param_2 + -1;
    if (param_2 < 1) {
      iVar2 = 0;
    }
    else if (iVar1 <= iVar2) goto LAB_00403e72;
    if (-1 < (int)param_3) {
      if (iVar1 - iVar2 < (int)param_3) {
        param_3 = iVar1 - iVar2;
      }
      FUN_00403aa0(param_4,(undefined4 *)(iVar2 + param_1),param_3);
      return;
    }
  }
LAB_00403e72:
  FUN_004039b8(param_4);
  return;
}


/* ==== 00403e80 FUN_00403e80 ==== */

void FUN_00403e80(int *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  FUN_00403e08(param_1);
  iVar1 = *param_1;
  if (iVar1 != 0) {
    iVar3 = param_2 + -1;
    if (((0 < param_2) && (iVar3 < *(int *)(iVar1 + -4))) && (0 < param_3)) {
      iVar2 = *(int *)(iVar1 + -4) - iVar3;
      if (iVar2 < param_3) {
        param_3 = iVar2;
      }
      FUN_004027d0((undefined4 *)(iVar1 + iVar3 + param_3),(undefined4 *)(iVar1 + iVar3),
                   iVar2 - param_3);
      FUN_00403f6c(param_1,*(int *)(*param_1 + -4) - param_3);
    }
  }
  return;
}


/* ==== 00403ec8 FUN_00403ec8 ==== */

void FUN_00403ec8(undefined4 *param_1,int *param_2,int param_3)

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
    FUN_00403f6c(param_2,iVar3 + uVar2);
    if (puVar1 == param_1) {
      param_1 = (undefined4 *)*param_2;
    }
    iVar3 = *param_2;
    FUN_004027d0((undefined4 *)(iVar3 + iVar4),(undefined4 *)(iVar4 + uVar2 + iVar3),
                 *(int *)(iVar3 + -4) - (iVar4 + uVar2));
    FUN_004027d0(param_1,(undefined4 *)(*param_2 + iVar4),uVar2);
  }
  return;
}


/* ==== 00403f24 FUN_00403f24 ==== */

int FUN_00403f24(char *param_1,char *param_2)

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
LAB_00403f44:
        do {
          if (i_val != 0) {
            i_val = i_val + -1;
            pcVar1 = pcVar4 + 1;
            bVar6 = *param_1 == *pcVar4;
            pcVar4 = pcVar1;
            if (!bVar6) goto LAB_00403f44;
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


/* ==== 00403f6c FUN_00403f6c ==== */

void FUN_00403f6c(int *param_1,uint param_2)

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
      FUN_004026e8(&iStack_10,param_2 + 9);
      *param_1 = iStack_10 + 8;
      *(uint *)(iStack_10 + 4) = param_2;
      *(undefined1 *)(iStack_10 + 8 + param_2) = 0;
      return;
    }
    iStack_10 = 0x403fa9;
    puVar3 = FUN_00403a7c(param_2);
    puVar1 = (undefined4 *)*param_1;
    if (puVar1 != (undefined4 *)0x0) {
      uVar2 = puVar1[-1];
      if ((int)param_2 <= (int)puVar1[-1]) {
        uVar2 = param_2;
      }
      iStack_10 = 0x403fc1;
      FUN_004027d0(puVar1,puVar3,uVar2);
    }
  }
  iStack_10 = 0x403fc8;
  FUN_004039b8(param_1);
  *param_1 = (int)puVar3;
  return;
}


/* ==== 00403fd8 FUN_00403fd8 ==== */

void FUN_00403fd8(undefined4 *param_1,undefined4 param_2)

{
  BSTR bstrString;
  
  bstrString = (BSTR)*param_1;
  *param_1 = param_2;
  if (bstrString != (BSTR)0x0) {
    SysFreeString(bstrString);
  }
  return;
}


/* ==== 00403fe8 FUN_00403fe8 ==== */

undefined4 * FUN_00403fe8(undefined4 *param_1)

{
  BSTR bstrString;
  
  bstrString = (BSTR)*param_1;
  if (bstrString != (BSTR)0x0) {
    *param_1 = 0;
    SysFreeString(bstrString);
  }
  return param_1;
}


/* ==== 00404000 FUN_00404000 ==== */

void FUN_00404000(undefined4 *param_1,int param_2)

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


/* ==== 00404024 FUN_00404024 ==== */

BSTR * FUN_00404024(BSTR *pbstr_val,OLECHAR *psz_val)

{
  BSTR bstrString;
  BSTR *ppOVar1;
  
  if ((psz_val != (OLECHAR *)0x0) && (*(uint *)(psz_val + -2) >> 1 != 0)) {
    ppOVar1 = (BSTR *)SysReAllocStringLen(pbstr_val,psz_val,*(uint *)(psz_val + -2) >> 1);
    if (ppOVar1 != (BSTR *)0x0) {
      return ppOVar1;
    }
    ppOVar1 = (BSTR *)FUN_00402744(1);
    return ppOVar1;
  }
  bstrString = *pbstr_val;
  if (bstrString != (BSTR)0x0) {
    *pbstr_val = (BSTR)0x0;
    SysFreeString(bstrString);
  }
  return pbstr_val;
}


/* ==== 00404048 FUN_00404048 ==== */

void FUN_00404048(BSTR param_1,LPCSTR multi_byte_str,int multi_byte)

{
  UINT UVar1;
  WCHAR local_810 [1024];
  
  if (multi_byte < 1) {
    FUN_00403fe8((undefined4 *)param_1);
  }
  else {
    if (multi_byte < 0x400) {
      UVar1 = MultiByteToWideChar(0,0,multi_byte_str,multi_byte,local_810,0x400);
      if (0 < (int)UVar1) {
        FUN_004040cc(param_1,local_810,UVar1);
        return;
      }
    }
    UVar1 = MultiByteToWideChar(0,0,multi_byte_str,multi_byte,(LPWSTR)0x0,0);
    FUN_004040cc(param_1,(OLECHAR *)0x0,UVar1);
    MultiByteToWideChar(0,0,multi_byte_str,multi_byte,*(LPWSTR *)param_1,UVar1);
  }
  return;
}


/* ==== 004040cc FUN_004040cc ==== */

BSTR FUN_004040cc(BSTR param_1,OLECHAR *str_in,UINT ui_val)

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
  pOVar1 = (BSTR)FUN_00402744(1);
  return pOVar1;
}


/* ==== 004040f0 FUN_004040f0 ==== */

void FUN_004040f0(BSTR param_1,LPCSTR multi_byte_str)

{
  int multi_byte;
  
  multi_byte = 0;
  if (multi_byte_str != (LPCSTR)0x0) {
    multi_byte = *(int *)(multi_byte_str + -4);
  }
  FUN_00404048(param_1,multi_byte_str,multi_byte);
  return;
}


/* ==== 00404100 FUN_00404100 ==== */

uint FUN_00404100(int param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = *(uint *)(param_1 + -4) >> 1;
  }
  return uVar1;
}


/* ==== 0040410c FUN_0040410c ==== */

void FUN_0040410c(UINT ui_val)

{
  BSTR pOVar1;
  
  if (ui_val != 0) {
    pOVar1 = SysAllocStringLen((OLECHAR *)0x0,ui_val);
    if (pOVar1 == (BSTR)0x0) {
      FUN_00402744(1);
      return;
    }
  }
  return;
}


/* ==== 00404124 FUN_00404124 ==== */

void FUN_00404124(int *param_1,UINT ui_val)

{
  uint uVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)0x0;
  if (0 < (int)ui_val) {
    puVar2 = (undefined4 *)FUN_0040410c(ui_val);
    uVar1 = FUN_00404100(*param_1);
    if (0 < (int)uVar1) {
      if ((int)ui_val < (int)uVar1) {
        uVar1 = ui_val;
      }
      FUN_004027d0((undefined4 *)*param_1,puVar2,uVar1 * 2);
    }
  }
  FUN_00403fd8(param_1,puVar2);
  return;
}


/* ==== 00404168 FUN_00404168 ==== */

void FUN_00404168(int param_1,int param_2)

{
  bool bVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  
  puVar2 = (undefined4 *)(param_2 + 10 + (uint)*(byte *)(param_2 + 1));
  iVar3 = *(int *)(param_2 + 6 + (uint)*(byte *)(param_2 + 1));
  do {
    FUN_00404228((undefined4 *)(puVar2[1] + param_1),*(char **)*puVar2);
    puVar2 = puVar2 + 2;
    iVar4 = iVar3 + -1;
    bVar1 = 0 < iVar3;
    iVar3 = iVar4;
  } while (iVar4 != 0 && bVar1);
  return;
}


/* ==== 00404194 FUN_00404194 ==== */

void FUN_00404194(undefined4 *param_1,char *param_2,int param_3)

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
        FUN_00404194(param_1,(char *)**(undefined4 **)(param_2 + uVar3 + 10),
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
        FUN_00404168((int)param_1,(int)param_2);
        iVar5 = param_3 + -1;
        bVar2 = 0 < param_3;
        param_1 = (undefined4 *)((int)param_1 + iVar4);
        param_3 = iVar5;
      } while (iVar5 != 0 && bVar2);
      return;
    }
    if ((cVar1 != '\x0f') && (cVar1 != '\x11')) {
      FUN_00402744(CONCAT31((int3)((uint)param_1 >> 8),2));
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


/* ==== 00404228 FUN_00404228 ==== */

void FUN_00404228(undefined4 *param_1,char *param_2)

{
  FUN_00404194(param_1,param_2,1);
  return;
}


/* ==== 00404234 FUN_00404234 ==== */

int FUN_00404234(int param_1,int param_2)

{
  bool bVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  
  puVar2 = (undefined4 *)(param_2 + 10 + (uint)*(byte *)(param_2 + 1));
  iVar3 = *(int *)(param_2 + 6 + (uint)*(byte *)(param_2 + 1));
  do {
    FUN_00404348((VARIANTARG *)(puVar2[1] + param_1),*(char **)*puVar2);
    puVar2 = puVar2 + 2;
    iVar4 = iVar3 + -1;
    bVar1 = 0 < iVar3;
    iVar3 = iVar4;
  } while (iVar4 != 0 && bVar1);
  return param_1;
}


/* ==== 00404260 FUN_00404260 ==== */

/* WARNING: Type propagation algorithm not settling */

VARIANTARG * FUN_00404260(VARIANTARG *variantarg,char *param_2,int param_3)

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
        FUN_004039b8((int *)variantarg);
      }
      else {
        FUN_004039dc((int *)variantarg,param_3);
      }
    }
    else if (cVar1 == '\v') {
      if (param_3 < 2) {
        FUN_00403fe8((undefined4 *)variantarg);
      }
      else {
        FUN_00404000((undefined4 *)variantarg,param_3);
      }
    }
    else {
      pVVar3 = variantarg;
      if (cVar1 == '\f') {
        do {
          FUN_00404ac8(pVVar3);
          iVar6 = param_3 + -1;
          bVar2 = 0 < param_3;
          pVVar3 = pVVar3 + 1;
          param_3 = iVar6;
        } while (iVar6 != 0 && bVar2);
      }
      else if (cVar1 == '\r') {
        do {
          iVar6 = *(int *)(param_2 + uVar4 + 2);
          FUN_00404260(pVVar3,(char *)**(undefined4 **)(param_2 + uVar4 + 10),
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
          FUN_00404234((int)pVVar3,(int)param_2);
          iVar5 = param_3 + -1;
          bVar2 = 0 < param_3;
          pVVar3 = (VARIANTARG *)((int)&pVVar3->n1 + iVar6);
          param_3 = iVar5;
        } while (iVar5 != 0 && bVar2);
      }
      else if (cVar1 == '\x0f') {
        do {
          FUN_004052f0((int *)pVVar3);
          iVar6 = param_3 + -1;
          bVar2 = 0 < param_3;
          pVVar3 = (VARIANTARG *)((int)&pVVar3->n1 + 4);
          param_3 = iVar6;
        } while (iVar6 != 0 && bVar2);
      }
      else {
        if (cVar1 != '\x11') {
          pVVar3 = (VARIANTARG *)FUN_00402744(CONCAT31((int3)((uint)variantarg >> 8),2));
          return pVVar3;
        }
        do {
          FUN_00404cbc((int *)pVVar3,(int)param_2);
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


/* ==== 00404348 FUN_00404348 ==== */

void FUN_00404348(VARIANTARG *variantarg,char *param_2)

{
  FUN_00404260(variantarg,param_2,1);
  return;
}


/* ==== 00404354 FUN_00404354 ==== */

void FUN_00404354(int param_1,int param_2,int param_3)

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
      FUN_004027d0((undefined4 *)(iVar5 + param_2),(undefined4 *)(iVar5 + param_1),uVar6);
    }
    iVar3 = puVar7[1];
    pcVar4 = *(char **)*puVar7;
    cVar1 = *pcVar4;
    if (cVar1 == '\n') {
      FUN_00403a0c((int *)(iVar3 + param_1),*(undefined4 **)(param_2 + iVar3));
      iVar5 = 4;
    }
    else if (cVar1 == '\v') {
      FUN_00404024((BSTR *)(iVar3 + param_1),*(OLECHAR **)(param_2 + iVar3));
      iVar5 = 4;
    }
    else if (cVar1 == '\f') {
      FUN_00404710((VARIANT *)(iVar3 + param_1),(VARIANTARG *)(param_2 + iVar3));
      iVar5 = 0x10;
    }
    else if (cVar1 == '\r') {
      uVar6 = (uint)(byte)pcVar4[1];
      iVar5 = *(int *)(pcVar4 + uVar6 + 2);
      FUN_00404470((VARIANT *)(iVar3 + param_1),(VARIANTARG *)(param_2 + iVar3),
                   (char *)**(undefined4 **)(pcVar4 + uVar6 + 10),*(int *)(pcVar4 + uVar6 + 6));
    }
    else if (cVar1 == '\x0e') {
      iVar5 = *(int *)(pcVar4 + (byte)pcVar4[1] + 2);
      FUN_00404354(iVar3 + param_1,param_2 + iVar3,(int)pcVar4);
    }
    else if (cVar1 == '\x0f') {
      FUN_00405308((int *)(iVar3 + param_1),*(int **)(param_2 + iVar3));
      iVar5 = 4;
    }
    else {
      if (cVar1 != '\x11') {
        FUN_00402744(CONCAT31((int3)((uint)iVar3 >> 8),2));
        return;
      }
      FUN_00404cf8((int *)(iVar3 + param_1),*(int *)(param_2 + iVar3),(int)pcVar4);
      iVar5 = 4;
    }
    iVar5 = iVar5 + puVar7[1];
    puVar7 = puVar7 + 2;
    i_val = i_val + -1;
  } while (i_val != 0);
  uVar6 = iVar2 - iVar5;
  if (uVar6 != 0 && iVar5 <= iVar2) {
    FUN_004027d0((undefined4 *)(iVar5 + param_2),(undefined4 *)(param_1 + iVar5),uVar6);
  }
  return;
}


/* ==== 00404470 FUN_00404470 ==== */

/* WARNING: Type propagation algorithm not settling */

void FUN_00404470(VARIANT *pbstr_val,VARIANTARG *pvarg_src,char *param_3,int param_4)

{
  int *piVar1;
  char cVar2;
  
  cVar2 = *param_3;
  if (cVar2 == '\n') {
    do {
      FUN_00403a0c((int *)pbstr_val,*(undefined4 **)&pvarg_src->n1);
      pbstr_val = (VARIANT *)((int)&pbstr_val->n1 + 4);
      pvarg_src = (VARIANTARG *)((int)&pvarg_src->n1 + 4);
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  else if (cVar2 == '\v') {
    do {
      FUN_00404024((BSTR *)pbstr_val,*(OLECHAR **)&pvarg_src->n1);
      pbstr_val = (VARIANT *)((int)&pbstr_val->n1 + 4);
      pvarg_src = (VARIANTARG *)((int)&pvarg_src->n1 + 4);
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  else if (cVar2 == '\f') {
    do {
      FUN_00404710(pbstr_val,pvarg_src);
      pbstr_val = pbstr_val + 1;
      pvarg_src = pvarg_src + 1;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  else if (cVar2 == '\r') {
    piVar1 = (int *)(param_3 + (byte)param_3[1] + 2);
    do {
      FUN_00404470(pbstr_val,pvarg_src,(char *)piVar1[2],piVar1[1]);
      pbstr_val = (VARIANT *)((int)&pbstr_val->n1 + *piVar1);
      pvarg_src = (VARIANTARG *)((int)&pvarg_src->n1 + *piVar1);
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  else if (cVar2 == '\x0e') {
    do {
      FUN_00404354((int)pbstr_val,(int)pvarg_src,(int)param_3);
      pbstr_val = (VARIANT *)((int)&pbstr_val->n1 + *(int *)(param_3 + (byte)param_3[1] + 2));
      pvarg_src = (VARIANTARG *)((int)&pvarg_src->n1 + *(int *)(param_3 + (byte)param_3[1] + 2));
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  else if (cVar2 == '\x0f') {
    do {
      FUN_00405308((int *)pbstr_val,*(int **)&pvarg_src->n1);
      pbstr_val = (VARIANT *)((int)&pbstr_val->n1 + 4);
      pvarg_src = (VARIANTARG *)((int)&pvarg_src->n1 + 4);
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  else {
    if (cVar2 != '\x11') {
      FUN_00402744(CONCAT31((int3)((uint)pbstr_val >> 8),2));
      return;
    }
    do {
      FUN_00404cf8((int *)pbstr_val,*(int *)&pvarg_src->n1,(int)param_3);
      pbstr_val = (VARIANT *)((int)&pbstr_val->n1 + 4);
      pvarg_src = (VARIANTARG *)((int)&pvarg_src->n1 + 4);
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return;
}


/* ==== 00404564 FUN_00404564 ==== */

undefined4 * FUN_00404564(int param_1,char *param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_004026b8(param_1);
  if (puVar1 != (undefined4 *)0x0) {
    FUN_00404228(puVar1,param_2);
  }
  return puVar1;
}


/* ==== 00404578 FUN_00404578 ==== */

void FUN_00404578(VARIANTARG *variantarg,char *param_2)

{
  FUN_00404348(variantarg,param_2);
  FUN_004026d0((int)variantarg);
  return;
}


/* ==== 00404588 FUN_00404588 ==== */

void FUN_00404588(LPCWSTR wide_char_str,int wide_char,int *param_3)

{
  uint multi_byte;
  CHAR local_810 [2048];
  
  if (wide_char == 0) {
    FUN_004039b8(param_3);
  }
  else if (wide_char < 0x400) {
    multi_byte = WideCharToMultiByte(0,0,wide_char_str,wide_char,local_810,0x800,(LPCSTR)0x0,
                                     (LPBOOL)0x0);
    FUN_00403aa0(param_3,(undefined4 *)local_810,multi_byte);
  }
  else {
    multi_byte = WideCharToMultiByte(0,0,wide_char_str,wide_char,(LPSTR)0x0,0,(LPCSTR)0x0,
                                     (LPBOOL)0x0);
    FUN_00403aa0(param_3,(undefined4 *)0x0,multi_byte);
    WideCharToMultiByte(0,0,wide_char_str,wide_char,(LPSTR)*param_3,multi_byte,(LPCSTR)0x0,
                        (LPBOOL)0x0);
  }
  return;
}


/* ==== 00404614 FUN_00404614 ==== */

void FUN_00404614(LPCWSTR wide_char_str,int *param_2)

{
  UINT wide_char;
  
  wide_char = SysStringLen(wide_char_str);
  FUN_00404588(wide_char_str,wide_char,param_2);
  return;
}


/* ==== 00404638 FUN_00404638 ==== */

BSTR FUN_00404638(LPCSTR multi_byte_str)

{
  int cbMultiByte;
  int wide_char;
  LPCSTR lpMultiByteStr;
  UINT UVar1;
  BSTR lpWideCharStr;
  WCHAR *lpWideCharStr_00;
  WCHAR local_810 [1024];
  
  lpWideCharStr_00 = local_810;
  cbMultiByte = FUN_00403c38((int)multi_byte_str);
  wide_char = FUN_00403c38((int)multi_byte_str);
  if (wide_char < 0x400) {
    wide_char = 0x400;
    lpMultiByteStr = FUN_00403dfc(multi_byte_str);
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


/* ==== 004046bc thunk_FUN_00402744 ==== */

void thunk_FUN_00402744(uint param_1)

{
  FUN_00402744(CONCAT31((int3)(param_1 >> 8),0xf));
  return;
}


/* ==== 004046cc FUN_004046cc ==== */

void FUN_004046cc(VARIANTARG *pvarg_val)

{
  ushort uVar1;
  
  uVar1 = (pvarg_val->n1).n2.vt;
  if (((uVar1 & 0x4000) != 0) || (uVar1 < 8)) {
    (pvarg_val->n1).n2.vt = 0;
    return;
  }
  if (uVar1 == 0x100) {
    (pvarg_val->n1).n2.vt = 0;
    FUN_004039b8((int *)((int)&pvarg_val->n1 + 8));
    return;
  }
  if (uVar1 == 0x101) {
                    /* WARNING: Could not recover jumptable at 0x004046ee. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*DAT_004473e0)();
    return;
  }
  VariantClear(pvarg_val);
  return;
}


/* ==== 00404710 FUN_00404710 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00404710(VARIANT *param_1,VARIANTARG *pvarg_src)

{
  int iVar1;
  HRESULT HVar2;
  
  if (param_1 != pvarg_src) {
    if (7 < (param_1->n1).n2.vt) {
      if ((param_1->n1).n2.vt == 0x100) {
        FUN_004039b8((int *)((int)&param_1->n1 + 8));
      }
      else if ((param_1->n1).n2.vt == 0x101) {
        (*DAT_004473e0)();
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
      FUN_0040474e((undefined4 *)param_1,(undefined4 *)pvarg_src);
                    /* WARNING: Could not recover jumptable at 0x00404774. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*_DAT_004473e8)(param_1);
      return;
    }
    (param_1->n1).n2.vt = 0;
    HVar2 = VariantCopyInd(param_1,pvarg_src);
    if (HVar2 != 0) {
      FUN_00402744(CONCAT31((int3)((uint)HVar2 >> 8),0x10));
      return;
    }
  }
  return;
}


/* ==== 0040474e FUN_0040474e ==== */

void FUN_0040474e(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  return;
}


/* ==== 004047ac FUN_004047ac ==== */

void FUN_004047ac(VARIANTARG *variantarg,undefined4 *param_2,undefined4 param_3)

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
  puStack_24 = (undefined1 *)0x4047cf;
  FUN_00404ad0(&local_14);
  puStack_28 = &LAB_00404808;
  uStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_2c;
  puStack_24 = &stack0xfffffffc;
  (*DAT_004473e4)(&local_14);
  FUN_00404830(variantarg,&local_14,param_3);
  *in_FS_OFFSET = uStack_2c;
  puStack_24 = &LAB_0040480f;
  puStack_28 = (undefined1 *)0x404807;
  FUN_00404ac8(&local_14);
  return;
}


/* ==== 00404818 FUN_00404818 ==== */

bool FUN_00404818(undefined4 param_1,short *param_2,undefined4 param_3)

{
  short sVar1;
  
  sVar1 = *param_2;
  if (sVar1 == 0x101) {
    FUN_004047ac(param_1,(undefined4 *)param_2,param_3);
  }
  return sVar1 == 0x101;
}


/* ==== 00404830 FUN_00404830 ==== */

void FUN_00404830(VARIANTARG *param_1,VARIANTARG *pvar_src,undefined4 param_3)

{
  VARTYPE VVar1;
  bool bVar2;
  uint variant_change_type_ex;
  _union_2683 union_2683;
  
  VVar1 = (param_1->n1).n2.vt;
  if (VVar1 == 0x100) {
    bVar2 = FUN_00404818(param_1,(short *)pvar_src,param_3);
    if (!bVar2) {
      union_2683._0_4_ = (uint)union_2683.n2.wReserved1 << 0x10;
      variant_change_type_ex =
           VariantChangeTypeEx((VARIANTARG *)&union_2683.n2,pvar_src,0x400,0,(VARTYPE)param_3);
      if (variant_change_type_ex != 0) {
        thunk_FUN_00402744(variant_change_type_ex);
      }
      FUN_004046cc(param_1);
      *(undefined4 *)&param_1->n1 = union_2683._0_4_;
      *(undefined4 *)((int)&param_1->n1 + 8) = union_2683._8_4_;
      *(undefined4 *)((int)&param_1->n1 + 0xc) = union_2683._12_4_;
    }
  }
  else if (VVar1 == 0x101) {
    FUN_004047ac(param_1,(undefined4 *)pvar_src,param_3);
  }
  else {
    bVar2 = FUN_00404818(param_1,(short *)pvar_src,param_3);
    if (!bVar2) {
      variant_change_type_ex = VariantChangeTypeEx(param_1,pvar_src,0x400,0,(VARTYPE)param_3);
      if (variant_change_type_ex != 0) {
        thunk_FUN_00402744(variant_change_type_ex);
      }
    }
  }
  return;
}


/* ==== 004048d4 FUN_004048d4 ==== */

void FUN_004048d4(VARIANTARG *pvarg_val,int param_2)

{
  int local_8;
  
  local_8 = 0;
  FUN_00404614(*(LPCWSTR *)(param_2 + 8),&local_8);
  FUN_004046cc(pvarg_val);
  (pvarg_val->n1).n2.vt = 0x100;
  *(int *)((int)&pvarg_val->n1 + 8) = local_8;
  return;
}


/* ==== 00404904 FUN_00404904 ==== */

void FUN_00404904(VARIANTARG *pvarg_val,int param_2)

{
  BSTR pOVar1;
  
  pOVar1 = FUN_00404638(*(LPCSTR *)(param_2 + 8));
  FUN_004046cc(pvarg_val);
  (pvarg_val->n1).n2.vt = 8;
  *(BSTR *)((int)&pvarg_val->n1 + 8) = pOVar1;
  return;
}


/* ==== 00404924 FUN_00404924 ==== */

void FUN_00404924(VARIANT *pvarg_val,VARIANTARG *param_2,undefined4 param_3)

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
    puStack_20 = (undefined1 *)0x404940;
    FUN_00404710(pvarg_val,param_2);
  }
  else if (VVar1 == 0x100) {
    if (VVar2 != 8) {
      union_2683.n2.vt = 0;
      puStack_20 = (undefined1 *)0x40496c;
      FUN_00404904((VARIANTARG *)&union_2683.n2,(int)param_2);
      puStack_24 = &LAB_0040499d;
      uStack_28 = *in_FS_OFFSET;
      *in_FS_OFFSET = &uStack_28;
      puStack_20 = &stack0xfffffffc;
      FUN_00404830(pvarg_val,(VARIANTARG *)&union_2683.n2,param_3);
      *in_FS_OFFSET = uStack_28;
      puStack_20 = (undefined1 *)0x404a13;
      puStack_24 = (undefined1 *)0x40499c;
      FUN_004046cc((VARIANTARG *)&union_2683.n2);
      return;
    }
    puStack_20 = (undefined1 *)0x404959;
    FUN_00404904(pvarg_val,(int)param_2);
  }
  else if ((VVar2 == 0x100) && (VVar1 != 0x101)) {
    if (VVar1 != 8) {
      union_2683.n2.vt = 0;
      puStack_20 = (undefined1 *)0x4049d3;
      FUN_00404830((VARIANTARG *)&union_2683.n2,param_2,CONCAT22((short)((uint)param_3 >> 0x10),8));
      puStack_24 = &LAB_00404a02;
      uStack_28 = *in_FS_OFFSET;
      *in_FS_OFFSET = &uStack_28;
      puStack_20 = &stack0xfffffffc;
      FUN_004048d4(pvarg_val,(int)&union_2683);
      *in_FS_OFFSET = uStack_28;
      puStack_20 = (undefined1 *)0x404a13;
      puStack_24 = (undefined1 *)0x404a01;
      FUN_004046cc((VARIANTARG *)&union_2683.n2);
      return;
    }
    puStack_20 = (undefined1 *)0x4049bf;
    FUN_004048d4(pvarg_val,(int)param_2);
  }
  else {
    puStack_20 = (undefined1 *)0x404a13;
    FUN_00404830(pvarg_val,param_2,param_3);
  }
  return;
}


/* ==== 00404a18 FUN_00404a18 ==== */

void FUN_00404a18(int *param_1,VARIANTARG *variantarg)

{
  _union_2683 union_2683;
  
  if ((variantarg->n1).n2.vt == 0x100) {
    FUN_00403a0c(param_1,*(undefined4 **)((int)&variantarg->n1 + 8));
    return;
  }
  union_2683.n2.vt = 0;
  FUN_00404924((VARIANT *)&union_2683.n2,variantarg,0x100);
  FUN_004039b8(param_1);
  *param_1 = union_2683._8_4_;
  return;
}


/* ==== 00404a54 FUN_00404a54 ==== */

void FUN_00404a54(VARIANTARG *pvarg_val,undefined4 *param_2)

{
  undefined4 *puVar1;
  
  if (7 < (pvarg_val->n1).n2.vt) {
    FUN_004046cc(pvarg_val);
  }
  puVar1 = param_2;
  if (param_2 != (undefined4 *)0x0) {
    if ((int)param_2[-2] < 0) {
      puVar1 = FUN_00403a7c(param_2[-1]);
      FUN_004027d0(param_2,puVar1,puVar1[-1]);
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


/* ==== 00404a94 FUN_00404a94 ==== */

void FUN_00404a94(VARIANTARG *pvarg_val,OLECHAR *str_in)

{
  BSTR pOVar1;
  
  if (7 < (pvarg_val->n1).n2.vt) {
    FUN_004046cc(pvarg_val);
  }
  pOVar1 = (BSTR)0x0;
  if ((str_in != (OLECHAR *)0x0) && (pOVar1 = (BSTR)0x0, *(uint *)(str_in + -2) >> 1 != 0)) {
    pOVar1 = SysAllocStringLen(str_in,*(uint *)(str_in + -2) >> 1);
    if (pOVar1 == (BSTR)0x0) {
      FUN_00402744(1);
      return;
    }
  }
  (pvarg_val->n1).n2.vt = 8;
  *(BSTR *)((int)&pvarg_val->n1 + 8) = pOVar1;
  return;
}


/* ==== 00404ac8 FUN_00404ac8 ==== */

VARIANTARG * FUN_00404ac8(VARIANTARG *pvarg_val)

{
  FUN_004046cc(pvarg_val);
  return pvarg_val;
}


/* ==== 00404ad0 FUN_00404ad0 ==== */

void FUN_00404ad0(VARIANT *variant)

{
  _union_2683 _Stack_10;
  
  if (7 < (variant->n1).n2.vt) {
    _Stack_10._12_4_ = *(undefined4 *)((int)&variant->n1 + 0xc);
    _Stack_10._8_4_ = *(undefined4 *)((int)&variant->n1 + 8);
    _Stack_10.decVal.Hi32 = (variant->n1).decVal.Hi32;
    _Stack_10._0_4_ = *(undefined4 *)&variant->n1;
    (variant->n1).n2.vt = 0;
    FUN_00404710(variant,(VARIANTARG *)&_Stack_10.n2);
  }
  return;
}


/* ==== 00404af4 FUN_00404af4 ==== */

undefined4 FUN_00404af4(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = *(undefined4 *)(param_1 + -4);
  }
  return uVar1;
}


/* ==== 00404afc FUN_00404afc ==== */

int FUN_00404afc(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00404af4(param_1);
  return iVar1 + -1;
}


/* ==== 00404b04 FUN_00404b04 ==== */

void FUN_00404b04(VARIANT *pbstr_val,VARIANTARG *pvarg_src,char *param_3,int param_4)

{
  FUN_00404470(pbstr_val,pvarg_src,param_3,param_4);
  return;
}


/* ==== 00404b14 thunk_FUN_00404260 ==== */

/* WARNING: Type propagation algorithm not settling */

VARIANTARG * thunk_FUN_00404260(VARIANTARG *variantarg,char *param_2,int param_3)

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
        FUN_004039b8((int *)variantarg);
      }
      else {
        FUN_004039dc((int *)variantarg,param_3);
      }
    }
    else if (cVar1 == '\v') {
      if (param_3 < 2) {
        FUN_00403fe8((undefined4 *)variantarg);
      }
      else {
        FUN_00404000((undefined4 *)variantarg,param_3);
      }
    }
    else {
      pVVar3 = variantarg;
      if (cVar1 == '\f') {
        do {
          FUN_00404ac8(pVVar3);
          iVar6 = param_3 + -1;
          bVar2 = 0 < param_3;
          pVVar3 = pVVar3 + 1;
          param_3 = iVar6;
        } while (iVar6 != 0 && bVar2);
      }
      else if (cVar1 == '\r') {
        do {
          iVar6 = *(int *)(param_2 + uVar4 + 2);
          FUN_00404260(pVVar3,(char *)**(undefined4 **)(param_2 + uVar4 + 10),
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
          FUN_00404234((int)pVVar3,(int)param_2);
          iVar5 = param_3 + -1;
          bVar2 = 0 < param_3;
          pVVar3 = (VARIANTARG *)((int)&pVVar3->n1 + iVar6);
          param_3 = iVar5;
        } while (iVar5 != 0 && bVar2);
      }
      else if (cVar1 == '\x0f') {
        do {
          FUN_004052f0((int *)pVVar3);
          iVar6 = param_3 + -1;
          bVar2 = 0 < param_3;
          pVVar3 = (VARIANTARG *)((int)&pVVar3->n1 + 4);
          param_3 = iVar6;
        } while (iVar6 != 0 && bVar2);
      }
      else {
        if (cVar1 != '\x11') {
          pVVar3 = (VARIANTARG *)FUN_00402744(CONCAT31((int3)((uint)variantarg >> 8),2));
          return pVVar3;
        }
        do {
          FUN_00404cbc((int *)pVVar3,(int)param_2);
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


/* ==== 00404b1c FUN_00404b1c ==== */

void FUN_00404b1c(int *param_1,int param_2)

{
  FUN_00404cbc(param_1,param_2);
  return;
}


/* ==== 00404b24 FUN_00404b24 ==== */

void FUN_00404b24(int *param_1,int param_2,int param_3,int *param_4)

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
      FUN_00402744(CONCAT31((int3)((uint)param_4 >> 8),4));
    }
    FUN_00404b1c(local_8,param_2);
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
      FUN_00402744(CONCAT31((int3)((uint)(local_20 / i_val) >> 8),4));
    }
    local_20 = local_20 + 8;
    if ((piVar2 == (int *)0x0) || (*piVar2 == 1)) {
      local_24 = piVar2;
      if ((i_val < local_14) && (pcVar4 != (char *)0x0)) {
        thunk_FUN_00404260((VARIANTARG *)((int)piVar2 + i_val * local_1c + 8),pcVar4,
                           local_14 - i_val);
      }
      FUN_004026e8((int *)&local_24,local_20);
      piVar2 = local_24;
    }
    else {
      *piVar2 = *piVar2 + -1;
      piVar2 = (int *)FUN_004026b8(local_20);
      local_18 = local_14;
      if (i_val < local_14) {
        local_18 = i_val;
      }
      if (pcVar4 == (char *)0x0) {
        FUN_004027d0((undefined4 *)*local_8,piVar2 + 2,local_18 * local_1c);
      }
      else {
        FUN_00402a2c(piVar2 + 2,local_18 * local_1c,0);
        FUN_00404b04((VARIANT *)(piVar2 + 2),(VARIANTARG *)*local_8,pcVar4,local_18);
      }
    }
    *piVar2 = 1;
    piVar2[1] = i_val;
    piVar2 = piVar2 + 2;
    FUN_00402a2c((int *)(local_1c * local_14 + (int)piVar2),(i_val - local_14) * local_1c,0);
    if (1 < j) {
      j = j + -1;
      if (-1 < i_val + -1) {
        k = 0;
        do {
          FUN_00404b24(piVar2 + k,(int)pcVar4,j,param_4 + 1);
          k = k + 1;
          i_val = i_val + -1;
        } while (i_val != 0);
      }
    }
    *local_8 = (int)piVar2;
  }
  return;
}


/* ==== 00404cb0 FUN_00404cb0 ==== */

void FUN_00404cb0(int *param_1,int param_2,int param_3)

{
  FUN_00404b24(param_1,param_2,param_3,(int *)&stack0x00000004);
  return;
}


/* ==== 00404cbc FUN_00404cbc ==== */

int * FUN_00404cbc(int *param_1,int param_2)

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
        variantarg = FUN_00404260(variantarg,(char *)*puVar2,iVar3);
      }
      FUN_004026d0((int)((int)&variantarg[-1].n1 + 8));
    }
  }
  return param_1;
}


/* ==== 00404cf8 FUN_00404cf8 ==== */

void FUN_00404cf8(int *param_1,int param_2,int param_3)

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
      FUN_00404cbc(param_1,param_3);
    }
  }
  *param_1 = param_2;
  return;
}


/* ==== 00404d20 FUN_00404d20 ==== */

PVOID FUN_00404d20(LPCVOID address)

{
  _MEMORY_BASIC_INFORMATION memory_basic_information;
  
  VirtualQuery(address,&memory_basic_information,0x1c);
  if (memory_basic_information.State != 0x1000) {
    memory_basic_information.AllocationBase = (PVOID)0x0;
  }
  return memory_basic_information.AllocationBase;
}


/* ==== 00404d48 FUN_00404d48 ==== */

void FUN_00404d48(LPCVOID address)

{
  FUN_00404d20(address);
  return;
}


/* ==== 00404d50 FUN_00404d50 ==== */

int FUN_00404d50(int param_1)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_00446014;
  while( true ) {
    if (puVar1 == (undefined4 *)0x0) {
      return param_1;
    }
    if (((param_1 == puVar1[1]) || (param_1 == puVar1[2])) || (param_1 == puVar1[3])) break;
    puVar1 = (undefined4 *)*puVar1;
  }
  return puVar1[4];
}


/* ==== 00404d74 thunk_FUN_00404d7c ==== */

void thunk_FUN_00404d7c(LPCSTR lpsz_val)

{
  for (; (*lpsz_val != '\0' && (*lpsz_val != '\\')); lpsz_val = CharNextA(lpsz_val)) {
  }
  return;
}


/* ==== 00404d7c FUN_00404d7c ==== */

void FUN_00404d7c(LPCSTR lpsz_val)

{
  for (; (*lpsz_val != '\0' && (*lpsz_val != '\\')); lpsz_val = CharNextA(lpsz_val)) {
  }
  return;
}


/* ==== 00404d88 FUN_00404d88 ==== */

char * FUN_00404d88(char *param_1)

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
      string2 = (char *)thunk_FUN_00404d7c(local_8 + 2);
      if (*string2 == '\0') {
        return local_c;
      }
      string2 = (char *)thunk_FUN_00404d7c(string2 + 1);
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
      pCVar2 = (LPCSTR)thunk_FUN_00404d7c(string2 + 1);
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


/* ==== 00404f30 FUN_00404f30 ==== */

HMODULE FUN_00404f30(LPCSTR param_1)

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
  pcVar2 = FUN_00404d88(local_121);
  LVar1 = RegQueryValueExA(key,pcVar2,lpReserved,lpType,lpData,lpcbData);
  if (LVar1 != 0) {
    RegQueryValueExA(key,"",(LPDWORD)0x0,(LPDWORD)0x0,local_16,&local_1c);
  }
  *in_FS_OFFSET = uVar4;
  pHVar3 = (HMODULE)RegCloseKey(key);
  return pHVar3;
}


/* ==== 0040512c FUN_0040512c ==== */

void FUN_0040512c(undefined4 param_1)

{
  FUN_0040513c(param_1);
  return;
}


/* ==== 00405134 FUN_00405134 ==== */

void FUN_00405134(int param_1)

{
  FUN_0040515c(param_1);
  return;
}


/* ==== 0040513c FUN_0040513c ==== */

void FUN_0040513c(undefined4 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_004026b8(8);
  *puVar1 = DAT_00446018;
  puVar1[1] = param_1;
  DAT_00446018 = puVar1;
  return;
}


/* ==== 0040515c FUN_0040515c ==== */

void FUN_0040515c(int param_1)

{
  int *piVar1;
  int *piVar2;
  
  piVar2 = DAT_00446018;
  if ((DAT_00446018 != (int *)0x0) && (DAT_00446018[1] == param_1)) {
    DAT_00446018 = (int *)*DAT_00446018;
    FUN_004026d0((int)piVar2);
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
  FUN_004026d0((int)piVar1);
  return;
}


/* ==== 004051bc FUN_004051bc ==== */

void FUN_004051bc(undefined4 param_1,undefined4 param_2,undefined1 *param_3)

{
  undefined4 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  
  for (puVar1 = DAT_00446018; puVar1 != (undefined4 *)0x0; puVar1 = (undefined4 *)*puVar1) {
    puStack_20 = &LAB_004051f7;
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


/* ==== 00405218 FUN_00405218 ==== */

void FUN_00405218(undefined4 *param_1)

{
  *param_1 = DAT_00446014;
  DAT_00446014 = param_1;
  return;
}


/* ==== 00405228 FUN_00405228 ==== */

void FUN_00405228(undefined4 *param_1,undefined4 param_2,undefined1 *param_3)

{
  undefined4 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_14;
  undefined1 *puStack_10;
  undefined1 *puStack_c;
  undefined4 *local_8;
  
  puStack_c = &stack0xfffffffc;
  puStack_10 = &LAB_0040528c;
  uStack_14 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_14;
  local_8 = param_1;
  FUN_004051bc(param_1[1],0,param_3);
  *in_FS_OFFSET = uStack_14;
  puVar1 = DAT_00446014;
  if (local_8 == DAT_00446014) {
    DAT_00446014 = (undefined4 *)*local_8;
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


/* ==== 00405298 FUN_00405298 ==== */

void FUN_00405298(undefined4 *param_1,int *param_2)

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
      hInstance = (HINSTANCE)FUN_00404d50(*(int *)*param_1);
      string = LoadStringA(hInstance,uID,lpBuffer,cchBufferMax);
      FUN_00403aa0(param_2,(undefined4 *)local_408,string);
    }
    else {
      FUN_00403b70(param_2,(char *)param_1[1]);
    }
  }
  return;
}


/* ==== 004052f0 FUN_004052f0 ==== */

int * FUN_004052f0(int *param_1)

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


/* ==== 00405308 FUN_00405308 ==== */

void FUN_00405308(int *param_1,int *param_2)

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


/* ==== 00405324 FUN_00405324 ==== */

void FUN_00405324(int *param_1)

{
  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 4))();
  }
  return;
}


/* ==== 00405330 TInterfacedObject.AfterConstruction ==== */

void TInterfacedObject_AfterConstruction(int param_1)

{
  InterlockedDecrement((LONG *)(param_1 + 4));
  return;
}


/* ==== 0040533c TInterfacedObject.BeforeDestruction ==== */

void TInterfacedObject_BeforeDestruction(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    FUN_00402744(CONCAT31((int3)((uint)param_1 >> 8),2));
  }
  return;
}


/* ==== 0040534c TInterfacedObject.NewInstance ==== */

void TInterfacedObject_NewInstance(int param_1)

{
  int iVar1;
  
  iVar1 = TObject_NewInstance(param_1);
  *(undefined4 *)(iVar1 + 4) = 1;
  return;
}


/* ==== 00405398 FUN_00405398 ==== */

LONG FUN_00405398(void)

{
  LONG LVar1;
  int *in_stack_00000004;
  
  LVar1 = InterlockedDecrement(in_stack_00000004 + 1);
  if (LVar1 == 0) {
    (**(code **)(*in_stack_00000004 + -4))(in_stack_00000004,1);
  }
  return LVar1;
}


/* ==== 004053c0 GetCurrentThreadId ==== */

DWORD __stdcall GetCurrentThreadId(void)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004053c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = GetCurrentThreadId();
  return DVar1;
}


/* ==== 004055ca FUN_004055ca ==== */

void FUN_004055ca(undefined4 *param_1,char *param_2)

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
  param_1[6] = &LAB_0040543c;
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


/* ==== 00405645 FUN_00405645 ==== */

void FUN_00405645(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 4) == 0xd7b2) {
    iVar1 = (**(code **)(param_1 + 0x20))();
    if (iVar1 != 0) {
LAB_00405665:
      FUN_004027a8(iVar1);
      return;
    }
  }
  else if (*(int *)(param_1 + 4) != 0xd7b1) {
    iVar1 = 0x67;
    goto LAB_00405665;
  }
  return;
}


/* ==== 0040566c FUN_0040566c ==== */

void FUN_0040566c(undefined *param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 4) != 0xd7b1) {
    if (2 < *(int *)(param_1 + 4) - 0xd7b1U) {
      if (param_1 == &DAT_00447048) {
        return;
      }
      iVar1 = 0x67;
      goto LAB_00405691;
    }
    iVar1 = (**(code **)(param_1 + 0x1c))();
    if (iVar1 != 0) goto LAB_00405691;
  }
  iVar1 = (**(code **)(param_1 + 0x24))(param_1);
  if (iVar1 == 0) {
    return;
  }
LAB_00405691:
  FUN_004027a8(iVar1);
  return;
}


/* ==== 004056a8 FUN_004056a8 ==== */

void FUN_004056a8(undefined *param_1,undefined4 param_2)

{
  int iVar1;
  
  if (*(int *)(param_1 + 4) != 0xd7b0) {
    if (3 < *(int *)(param_1 + 4) - 0xd7b0U) {
      FUN_004027a8(0x66);
      return;
    }
    FUN_0040566c(param_1);
  }
  *(undefined4 *)(param_1 + 4) = param_2;
  iVar1 = (**(code **)(param_1 + 0x18))(param_1);
  if (iVar1 != 0) {
    FUN_004027a8(iVar1);
  }
  return;
}


/* ==== 004056ea FUN_004056ea ==== */

void FUN_004056ea(undefined *param_1)

{
  FUN_004056a8(param_1,0xd7b2);
  return;
}


/* ==== 004056f8 FUN_004056f8 ==== */

undefined * FUN_004056f8(undefined *param_1,undefined1 *param_2,int param_3)

{
  int iVar1;
  int i_val;
  undefined1 *puVar2;
  byte bVar3;
  
  bVar3 = 0;
  if ((*(int *)(param_1 + 4) == 0xd7b2) ||
     ((param_1 == &DAT_00447214 && (FUN_004056ea(&DAT_00447214), iRam00447218 == 0xd7b2)))) {
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
    FUN_004027a8(iVar1);
  }
  else {
    param_1 = (undefined *)FUN_004027a8(0x69);
  }
  return param_1;
}


/* ==== 00405763 FUN_00405763 ==== */

undefined * FUN_00405763(undefined *param_1,int param_2)

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
    FUN_004056f8(param_1,&DAT_00446060,0x40);
    pvVar2 = FUN_00405fa4();
    if (*(int *)((int)pvVar2 + 4) != 0) {
      return param_1;
    }
  }
  if (0 < param_2) {
    puVar3 = &DAT_00446060;
    if ((*(int *)(param_1 + 4) == 0xd7b2) ||
       ((param_1 == &DAT_00447214 && (FUN_004056ea(&DAT_00447214), iRam00447218 == 0xd7b2)))) {
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
      FUN_004027a8(iVar1);
    }
    else {
      param_1 = (undefined *)FUN_004027a8(0x69);
    }
    return param_1;
  }
  return param_1;
}


/* ==== 004057c3 FUN_004057c3 ==== */

void FUN_004057c3(undefined *param_1)

{
  undefined *puVar1;
  
  puVar1 = FUN_004056f8(param_1,&DAT_004460a0,2);
  FUN_00405645((int)puVar1);
  return;
}


/* ==== 00405840 FUN_00405840 ==== */

void FUN_00405840(undefined *param_1,char *param_2)

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
  FUN_00405763(param_1,-(~i_val - 1));
  FUN_004056f8(param_1,param_2,~i_val - 1);
  return;
}


/* ==== 00405870 FUN_00405870 ==== */

void FUN_00405870(int param_1)

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


/* ==== 00405b44 FUN_00405b44 ==== */

int FUN_00405b44(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  return param_1 * param_4;
}


/* ==== 00405c34 FUN_00405c34 ==== */

int FUN_00405c34(int param_1,uint param_2,undefined4 param_3,uint param_4,uint param_5)

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


/* ==== 00405d29 FUN_00405d29 ==== */

uint FUN_00405d29(int param_1,uint param_2,undefined4 param_3,uint param_4,uint param_5)

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


/* ==== 00405dcc FUN_00405dcc ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00405dcc(void)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_10;
  undefined1 *puStack_c;
  undefined1 *puStack_8;
  
  puStack_8 = &stack0xfffffffc;
  puStack_c = &LAB_00405e2a;
  uStack_10 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_10;
  _DAT_00447424 = _DAT_00447424 + 1;
  if (_DAT_00447424 == 0) {
    FUN_0040566c(&DAT_00447048);
    FUN_0040566c(&DAT_00447214);
    FUN_00401ae8();
    FUN_00404ac8(&VARIANTARG_0044740c);
    FUN_00404ac8(&VARIANTARG_004473fc);
    FUN_00404ac8(&VARIANTARG_004473ec);
  }
  *in_FS_OFFSET = uStack_10;
  return;
}


/* ==== 00405e34 FUN_00405e34 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00405e34(void)

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
  puStack_c = &LAB_00405f1c;
  uStack_10 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_10;
  bVar3 = _DAT_00447424 == 0;
  _DAT_00447424 = _DAT_00447424 + -1;
  if (bVar3) {
    DAT_00447030 = 0;
    DAT_00447038 = 0;
    _DAT_0044703c = 0;
    DAT_00447042 = 2;
    DAT_00447043 = 2;
    DAT_00447044 = 3;
    VARIANTARG_004473ec.n1.n2.vt = 0;
    VARIANTARG_004473fc.n1.n2.vt = 1;
    VARIANTARG_0044740c.n1.n2.vt = 10;
    VARIANTARG_0044740c.n1._8_4_ = 0x80020004;
    DAT_004473e0 = 0x4046c4;
    DAT_004473e4 = thunk_FUN_00402744;
    _DAT_004473e8 = 0x4046c4;
    uVar2 = FUN_00402b5c();
    if ((char)uVar2 != '\0') {
      FUN_00402b8c();
    }
    FUN_00402c50();
    FUN_004055ca((undefined4 *)&DAT_00447048,"");
    FUN_004055ca((undefined4 *)&DAT_00447214,"");
    _DAT_0044702c = GetCommandLineA();
    WVar1 = FUN_00401334();
    _DAT_00447028 = CONCAT22(extraout_var,WVar1);
    _DAT_00447020 = GetCurrentThreadId();
  }
  *in_FS_OFFSET = uStack_10;
  return;
}


/* ==== 00405f2c GetModuleFileNameA ==== */

DWORD __stdcall GetModuleFileNameA(HMODULE hModule,LPSTR lpFilename,DWORD nSize)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00405f2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = GetModuleFileNameA(hModule,lpFilename,nSize);
  return DVar1;
}


/* ==== 00405f34 GetModuleHandleA ==== */

HMODULE __stdcall GetModuleHandleA(LPCSTR lpModuleName)

{
  HMODULE pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00405f34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = GetModuleHandleA(lpModuleName);
  return pHVar1;
}


/* ==== 00405f3c LocalAlloc ==== */

HLOCAL __stdcall LocalAlloc(UINT uFlags,SIZE_T uBytes)

{
  HLOCAL pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00405f3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = LocalAlloc(uFlags,uBytes);
  return pvVar1;
}


/* ==== 00405f44 TlsGetValue ==== */

LPVOID __stdcall TlsGetValue(DWORD dwTlsIndex)

{
  LPVOID pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00405f44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = TlsGetValue(dwTlsIndex);
  return pvVar1;
}


/* ==== 00405f4c TlsSetValue ==== */

BOOL __stdcall TlsSetValue(DWORD dwTlsIndex,LPVOID lpTlsValue)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00405f4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = TlsSetValue(dwTlsIndex,lpTlsValue);
  return BVar1;
}


/* ==== 00405f54 FUN_00405f54 ==== */

void FUN_00405f54(void)

{
  HLOCAL lpTlsValue;
  
  if ((int)_tls_index < 0) {
    FUN_00403990(0xe2);
  }
  lpTlsValue = LocalAlloc(0x40,0x10);
  if (lpTlsValue == (HLOCAL)0x0) {
    FUN_00403990(0xe2);
  }
  else {
    TlsSetValue(_tls_index,lpTlsValue);
  }
  DAT_004474dc = lpTlsValue;
  return;
}


/* ==== 00405fa4 FUN_00405fa4 ==== */

LPVOID FUN_00405fa4(void)

{
  LPVOID tls_get_value;
  int in_FS_OFFSET;
  
  if (DAT_004474c8 == '\0') {
    return *(LPVOID *)(*(int *)(in_FS_OFFSET + 0x2c) + _tls_index * 4);
  }
  tls_get_value = TlsGetValue(_tls_index);
  if (tls_get_value != (LPVOID)0x0) {
    return tls_get_value;
  }
  FUN_00405f54();
  tls_get_value = TlsGetValue(_tls_index);
  if (tls_get_value != (LPVOID)0x0) {
    return tls_get_value;
  }
  return DAT_004474dc;
}


/* ==== 00405fe8 FUN_00405fe8 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00405fe8(void)

{
  CHAR local_10c [264];
  
  GetModuleFileNameA(DAT_004474d4,local_10c,0x105);
  _DAT_004460b4 = FUN_00404f30(local_10c);
  if (_DAT_004460b4 == (HMODULE)0x0) {
    _DAT_004460b4 = DAT_004460a8;
  }
  FUN_00405218((undefined4 *)&DAT_004460a4);
  return;
}


/* ==== 00406034 FUN_00406034 ==== */

void FUN_00406034(undefined4 param_1)

{
  undefined *puVar1;
  
  DAT_004460a8 = GetModuleHandleA((LPCSTR)0x0);
  puVar1 = &DAT_004460a4;
  DAT_004460ac = 0;
  DAT_004460b0 = 0;
  DAT_004474d4 = DAT_004460a8;
  FUN_00405fe8();
  FUN_00403774(param_1,(int)puVar1);
  return;
}


/* ==== 004060a0 RegCloseKey ==== */

LSTATUS __stdcall RegCloseKey(HKEY hKey)

{
  LSTATUS LVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004060a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LVar1 = RegCloseKey(hKey);
  return LVar1;
}


/* ==== 004060a8 RegOpenKeyExA ==== */

LSTATUS __stdcall
RegOpenKeyExA(HKEY hKey,LPCSTR lpSubKey,DWORD ulOptions,REGSAM samDesired,PHKEY phkResult)

{
  LSTATUS LVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004060a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LVar1 = RegOpenKeyExA(hKey,lpSubKey,ulOptions,samDesired,phkResult);
  return LVar1;
}


/* ==== 004060b0 RegQueryValueExA ==== */

LSTATUS __stdcall
RegQueryValueExA(HKEY hKey,LPCSTR lpValueName,LPDWORD lpReserved,LPDWORD lpType,LPBYTE lpData,
                LPDWORD lpcbData)

{
  LSTATUS LVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004060b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LVar1 = RegQueryValueExA(hKey,lpValueName,lpReserved,lpType,lpData,lpcbData);
  return LVar1;
}


/* ==== 004060b8 CloseHandle ==== */

BOOL __stdcall CloseHandle(HANDLE hObject)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004060b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = CloseHandle(hObject);
  return BVar1;
}


/* ==== 004060c0 CompareStringA ==== */

int __stdcall
CompareStringA(LCID Locale,DWORD dwCmpFlags,PCNZCH lpString1,int cchCount1,PCNZCH lpString2,
              int cchCount2)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004060c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = CompareStringA(Locale,dwCmpFlags,lpString1,cchCount1,lpString2,cchCount2);
  return iVar1;
}


/* ==== 004060c8 CreateEventA ==== */

HANDLE __stdcall
CreateEventA(LPSECURITY_ATTRIBUTES lpEventAttributes,BOOL bManualReset,BOOL bInitialState,
            LPCSTR lpName)

{
  HANDLE pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004060c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = CreateEventA(lpEventAttributes,bManualReset,bInitialState,lpName);
  return pvVar1;
}


/* ==== 004060d0 CreateFileA ==== */

HANDLE __stdcall
CreateFileA(LPCSTR lpFileName,DWORD dwDesiredAccess,DWORD dwShareMode,
           LPSECURITY_ATTRIBUTES lpSecurityAttributes,DWORD dwCreationDisposition,
           DWORD dwFlagsAndAttributes,HANDLE hTemplateFile)

{
  HANDLE pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004060d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = CreateFileA(lpFileName,dwDesiredAccess,dwShareMode,lpSecurityAttributes,
                       dwCreationDisposition,dwFlagsAndAttributes,hTemplateFile);
  return pvVar1;
}


/* ==== 004060d8 CreateThread ==== */

HANDLE __stdcall
CreateThread(LPSECURITY_ATTRIBUTES lpThreadAttributes,SIZE_T dwStackSize,
            LPTHREAD_START_ROUTINE lpStartAddress,LPVOID lpParameter,DWORD dwCreationFlags,
            LPDWORD lpThreadId)

{
  HANDLE pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004060d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = CreateThread(lpThreadAttributes,dwStackSize,lpStartAddress,lpParameter,dwCreationFlags,
                        lpThreadId);
  return pvVar1;
}


/* ==== 004060e0 DeleteCriticalSection ==== */

void __stdcall DeleteCriticalSection(LPCRITICAL_SECTION lpCriticalSection)

{
                    /* WARNING: Could not recover jumptable at 0x004060e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection(lpCriticalSection);
  return;
}


/* ==== 004060e8 EnterCriticalSection ==== */

void __stdcall EnterCriticalSection(LPCRITICAL_SECTION lpCriticalSection)

{
                    /* WARNING: Could not recover jumptable at 0x004060e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  EnterCriticalSection(lpCriticalSection);
  return;
}


/* ==== 004060f0 EnumCalendarInfoA ==== */

BOOL __stdcall
EnumCalendarInfoA(CALINFO_ENUMPROCA lpCalInfoEnumProc,LCID Locale,CALID Calendar,CALTYPE CalType)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004060f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = EnumCalendarInfoA(lpCalInfoEnumProc,Locale,Calendar,CalType);
  return BVar1;
}


/* ==== 004060f8 FileTimeToDosDateTime ==== */

BOOL __stdcall FileTimeToDosDateTime(FILETIME *lpFileTime,LPWORD lpFatDate,LPWORD lpFatTime)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004060f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = FileTimeToDosDateTime(lpFileTime,lpFatDate,lpFatTime);
  return BVar1;
}


/* ==== 00406100 FileTimeToLocalFileTime ==== */

BOOL __stdcall FileTimeToLocalFileTime(FILETIME *lpFileTime,LPFILETIME lpLocalFileTime)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406100. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = FileTimeToLocalFileTime(lpFileTime,lpLocalFileTime);
  return BVar1;
}


/* ==== 00406108 FindClose ==== */

BOOL __stdcall FindClose(HANDLE hFindFile)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406108. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = FindClose(hFindFile);
  return BVar1;
}


/* ==== 00406110 FindFirstFileA ==== */

HANDLE __stdcall FindFirstFileA(LPCSTR lpFileName,LPWIN32_FIND_DATAA lpFindFileData)

{
  HANDLE pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = FindFirstFileA(lpFileName,lpFindFileData);
  return pvVar1;
}


/* ==== 00406118 FindResourceA ==== */

HRSRC __stdcall FindResourceA(HMODULE hModule,LPCSTR lpName,LPCSTR lpType)

{
  HRSRC pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406118. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = FindResourceA(hModule,lpName,lpType);
  return pHVar1;
}


/* ==== 00406120 FormatMessageA ==== */

DWORD __stdcall
FormatMessageA(DWORD dwFlags,LPCVOID lpSource,DWORD dwMessageId,DWORD dwLanguageId,LPSTR lpBuffer,
              DWORD nSize,va_list *Arguments)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406120. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = FormatMessageA(dwFlags,lpSource,dwMessageId,dwLanguageId,lpBuffer,nSize,Arguments);
  return DVar1;
}


/* ==== 00406128 FreeLibrary ==== */

BOOL __stdcall FreeLibrary(HMODULE hLibModule)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406128. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = FreeLibrary(hLibModule);
  return BVar1;
}


/* ==== 00406130 FreeResource ==== */

BOOL __stdcall FreeResource(HGLOBAL hResData)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = FreeResource(hResData);
  return BVar1;
}


/* ==== 00406138 GetCPInfo ==== */

BOOL __stdcall GetCPInfo(UINT CodePage,LPCPINFO lpCPInfo)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406138. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = GetCPInfo(CodePage,lpCPInfo);
  return BVar1;
}


/* ==== 00406140 GetCurrentProcessId ==== */

DWORD __stdcall GetCurrentProcessId(void)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406140. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = GetCurrentProcessId();
  return DVar1;
}


/* ==== 00406148 GetCurrentThreadId ==== */

DWORD __stdcall GetCurrentThreadId(void)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406148. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = GetCurrentThreadId();
  return DVar1;
}


/* ==== 00406150 GetDateFormatA ==== */

int __stdcall
GetDateFormatA(LCID Locale,DWORD dwFlags,SYSTEMTIME *lpDate,LPCSTR lpFormat,LPSTR lpDateStr,
              int cchDate)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406150. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = GetDateFormatA(Locale,dwFlags,lpDate,lpFormat,lpDateStr,cchDate);
  return iVar1;
}


/* ==== 00406158 GetDiskFreeSpaceA ==== */

BOOL __stdcall
GetDiskFreeSpaceA(LPCSTR lpRootPathName,LPDWORD lpSectorsPerCluster,LPDWORD lpBytesPerSector,
                 LPDWORD lpNumberOfFreeClusters,LPDWORD lpTotalNumberOfClusters)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406158. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = GetDiskFreeSpaceA(lpRootPathName,lpSectorsPerCluster,lpBytesPerSector,
                            lpNumberOfFreeClusters,lpTotalNumberOfClusters);
  return BVar1;
}


/* ==== 00406160 GetFileAttributesA ==== */

DWORD __stdcall GetFileAttributesA(LPCSTR lpFileName)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406160. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = GetFileAttributesA(lpFileName);
  return DVar1;
}


/* ==== 00406168 GetLastError ==== */

DWORD __stdcall GetLastError(void)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406168. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = GetLastError();
  return DVar1;
}


/* ==== 00406170 GetLocalTime ==== */

void __stdcall GetLocalTime(LPSYSTEMTIME lpSystemTime)

{
                    /* WARNING: Could not recover jumptable at 0x00406170. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  GetLocalTime(lpSystemTime);
  return;
}


/* ==== 00406178 GetLocaleInfoA ==== */

int __stdcall GetLocaleInfoA(LCID Locale,LCTYPE LCType,LPSTR lpLCData,int cchData)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406178. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = GetLocaleInfoA(Locale,LCType,lpLCData,cchData);
  return iVar1;
}


/* ==== 00406180 GetModuleFileNameA ==== */

DWORD __stdcall GetModuleFileNameA(HMODULE hModule,LPSTR lpFilename,DWORD nSize)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406180. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = GetModuleFileNameA(hModule,lpFilename,nSize);
  return DVar1;
}


/* ==== 00406188 GetModuleHandleA ==== */

HMODULE __stdcall GetModuleHandleA(LPCSTR lpModuleName)

{
  HMODULE pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406188. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = GetModuleHandleA(lpModuleName);
  return pHVar1;
}


/* ==== 00406190 GetPrivateProfileStringA ==== */

DWORD __stdcall
GetPrivateProfileStringA
          (LPCSTR lpAppName,LPCSTR lpKeyName,LPCSTR lpDefault,LPSTR lpReturnedString,DWORD nSize,
          LPCSTR lpFileName)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = GetPrivateProfileStringA(lpAppName,lpKeyName,lpDefault,lpReturnedString,nSize,lpFileName);
  return DVar1;
}


/* ==== 00406198 GetProcAddress ==== */

FARPROC __stdcall GetProcAddress(HMODULE hModule,LPCSTR lpProcName)

{
  FARPROC pFVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406198. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pFVar1 = GetProcAddress(hModule,lpProcName);
  return pFVar1;
}


/* ==== 004061a0 GetSystemInfo ==== */

void __stdcall GetSystemInfo(LPSYSTEM_INFO lpSystemInfo)

{
                    /* WARNING: Could not recover jumptable at 0x004061a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  GetSystemInfo(lpSystemInfo);
  return;
}


/* ==== 004061a8 GetThreadLocale ==== */

LCID __stdcall GetThreadLocale(void)

{
  LCID LVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004061a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LVar1 = GetThreadLocale();
  return LVar1;
}


/* ==== 004061b0 GetTickCount ==== */

DWORD __stdcall GetTickCount(void)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004061b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = GetTickCount();
  return DVar1;
}


/* ==== 004061b8 GetVersion ==== */

DWORD __stdcall GetVersion(void)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004061b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = GetVersion();
  return DVar1;
}


/* ==== 004061c0 GetVersionExA ==== */

BOOL __stdcall GetVersionExA(LPOSVERSIONINFOA lpVersionInformation)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004061c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = GetVersionExA(lpVersionInformation);
  return BVar1;
}


/* ==== 004061c8 GlobalAddAtomA ==== */

ATOM __stdcall GlobalAddAtomA(LPCSTR lpString)

{
  ATOM AVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004061c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  AVar1 = GlobalAddAtomA(lpString);
  return AVar1;
}


/* ==== 004061d0 GlobalAlloc ==== */

HGLOBAL __stdcall GlobalAlloc(UINT uFlags,SIZE_T dwBytes)

{
  HGLOBAL pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004061d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = GlobalAlloc(uFlags,dwBytes);
  return pvVar1;
}


/* ==== 004061d8 GlobalDeleteAtom ==== */

ATOM __stdcall GlobalDeleteAtom(ATOM nAtom)

{
  ATOM AVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004061d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  AVar1 = GlobalDeleteAtom(nAtom);
  return AVar1;
}


/* ==== 004061e0 GlobalFree ==== */

HGLOBAL __stdcall GlobalFree(HGLOBAL hMem)

{
  HGLOBAL pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004061e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = GlobalFree(hMem);
  return pvVar1;
}


/* ==== 004061e8 GlobalLock ==== */

LPVOID __stdcall GlobalLock(HGLOBAL hMem)

{
  LPVOID pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004061e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = GlobalLock(hMem);
  return pvVar1;
}


/* ==== 004061f0 GlobalHandle ==== */

HGLOBAL __stdcall GlobalHandle(LPCVOID pMem)

{
  HGLOBAL pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004061f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = GlobalHandle(pMem);
  return pvVar1;
}


/* ==== 004061f8 GlobalReAlloc ==== */

HGLOBAL __stdcall GlobalReAlloc(HGLOBAL hMem,SIZE_T dwBytes,UINT uFlags)

{
  HGLOBAL pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004061f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = GlobalReAlloc(hMem,dwBytes,uFlags);
  return pvVar1;
}


/* ==== 00406200 GlobalUnlock ==== */

BOOL __stdcall GlobalUnlock(HGLOBAL hMem)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406200. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = GlobalUnlock(hMem);
  return BVar1;
}


/* ==== 00406208 InitializeCriticalSection ==== */

void __stdcall InitializeCriticalSection(LPCRITICAL_SECTION lpCriticalSection)

{
                    /* WARNING: Could not recover jumptable at 0x00406208. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  InitializeCriticalSection(lpCriticalSection);
  return;
}


/* ==== 00406210 LeaveCriticalSection ==== */

void __stdcall LeaveCriticalSection(LPCRITICAL_SECTION lpCriticalSection)

{
                    /* WARNING: Could not recover jumptable at 0x00406210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection(lpCriticalSection);
  return;
}


/* ==== 00406218 LoadLibraryA ==== */

HMODULE __stdcall LoadLibraryA(LPCSTR lpLibFileName)

{
  HMODULE pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406218. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = LoadLibraryA(lpLibFileName);
  return pHVar1;
}


/* ==== 00406220 LoadResource ==== */

HGLOBAL __stdcall LoadResource(HMODULE hModule,HRSRC hResInfo)

{
  HGLOBAL pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406220. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = LoadResource(hModule,hResInfo);
  return pvVar1;
}


/* ==== 00406228 LockResource ==== */

LPVOID __stdcall LockResource(HGLOBAL hResData)

{
  LPVOID pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406228. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = LockResource(hResData);
  return pvVar1;
}


/* ==== 00406230 MulDiv ==== */

int __stdcall MulDiv(int nNumber,int nNumerator,int nDenominator)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = MulDiv(nNumber,nNumerator,nDenominator);
  return iVar1;
}


/* ==== 00406238 ReadFile ==== */

BOOL __stdcall
ReadFile(HANDLE hFile,LPVOID lpBuffer,DWORD nNumberOfBytesToRead,LPDWORD lpNumberOfBytesRead,
        LPOVERLAPPED lpOverlapped)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406238. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = ReadFile(hFile,lpBuffer,nNumberOfBytesToRead,lpNumberOfBytesRead,lpOverlapped);
  return BVar1;
}


/* ==== 00406240 SetEndOfFile ==== */

BOOL __stdcall SetEndOfFile(HANDLE hFile)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406240. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = SetEndOfFile(hFile);
  return BVar1;
}


/* ==== 00406248 SetErrorMode ==== */

UINT __stdcall SetErrorMode(UINT uMode)

{
  UINT UVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406248. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  UVar1 = SetErrorMode(uMode);
  return UVar1;
}


/* ==== 00406250 SetEvent ==== */

BOOL __stdcall SetEvent(HANDLE hEvent)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406250. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = SetEvent(hEvent);
  return BVar1;
}


/* ==== 00406258 SetFileAttributesA ==== */

BOOL __stdcall SetFileAttributesA(LPCSTR lpFileName,DWORD dwFileAttributes)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406258. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = SetFileAttributesA(lpFileName,dwFileAttributes);
  return BVar1;
}


/* ==== 00406260 SetFilePointer ==== */

DWORD __stdcall
SetFilePointer(HANDLE hFile,LONG lDistanceToMove,PLONG lpDistanceToMoveHigh,DWORD dwMoveMethod)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406260. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = SetFilePointer(hFile,lDistanceToMove,lpDistanceToMoveHigh,dwMoveMethod);
  return DVar1;
}


/* ==== 00406268 SetThreadLocale ==== */

BOOL __stdcall SetThreadLocale(LCID Locale)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406268. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = SetThreadLocale(Locale);
  return BVar1;
}


/* ==== 00406270 SizeofResource ==== */

DWORD __stdcall SizeofResource(HMODULE hModule,HRSRC hResInfo)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406270. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = SizeofResource(hModule,hResInfo);
  return DVar1;
}


/* ==== 00406278 Sleep ==== */

void __stdcall Sleep(DWORD dwMilliseconds)

{
                    /* WARNING: Could not recover jumptable at 0x00406278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  Sleep(dwMilliseconds);
  return;
}


/* ==== 00406280 VirtualAlloc ==== */

LPVOID __stdcall VirtualAlloc(LPVOID lpAddress,SIZE_T dwSize,DWORD flAllocationType,DWORD flProtect)

{
  LPVOID pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406280. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = VirtualAlloc(lpAddress,dwSize,flAllocationType,flProtect);
  return pvVar1;
}


/* ==== 00406288 VirtualQuery ==== */

SIZE_T __stdcall VirtualQuery(LPCVOID lpAddress,PMEMORY_BASIC_INFORMATION lpBuffer,SIZE_T dwLength)

{
  SIZE_T SVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406288. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  SVar1 = VirtualQuery(lpAddress,lpBuffer,dwLength);
  return SVar1;
}


/* ==== 00406290 WaitForSingleObject ==== */

DWORD __stdcall WaitForSingleObject(HANDLE hHandle,DWORD dwMilliseconds)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = WaitForSingleObject(hHandle,dwMilliseconds);
  return DVar1;
}


/* ==== 00406298 WriteFile ==== */

BOOL __stdcall
WriteFile(HANDLE hFile,LPCVOID lpBuffer,DWORD nNumberOfBytesToWrite,LPDWORD lpNumberOfBytesWritten,
         LPOVERLAPPED lpOverlapped)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406298. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = WriteFile(hFile,lpBuffer,nNumberOfBytesToWrite,lpNumberOfBytesWritten,lpOverlapped);
  return BVar1;
}


/* ==== 004062a0 WritePrivateProfileStringA ==== */

BOOL __stdcall
WritePrivateProfileStringA(LPCSTR lpAppName,LPCSTR lpKeyName,LPCSTR lpString,LPCSTR lpFileName)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004062a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = WritePrivateProfileStringA(lpAppName,lpKeyName,lpString,lpFileName);
  return BVar1;
}


/* ==== 004062a8 lstrcpyA ==== */

LPSTR __stdcall lstrcpyA(LPSTR lpString1,LPCSTR lpString2)

{
  LPSTR pCVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004062a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pCVar1 = lstrcpyA(lpString1,lpString2);
  return pCVar1;
}


/* ==== 004062b0 BitBlt ==== */

BOOL __stdcall BitBlt(HDC hdc,int x,int y,int cx,int cy,HDC hdcSrc,int x1,int y1,DWORD rop)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004062b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = BitBlt(hdc,x,y,cx,cy,hdcSrc,x1,y1,rop);
  return BVar1;
}


/* ==== 004062b8 CopyEnhMetaFileA ==== */

HENHMETAFILE __stdcall CopyEnhMetaFileA(HENHMETAFILE hEnh,LPCSTR lpFileName)

{
  HENHMETAFILE pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004062b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = CopyEnhMetaFileA(hEnh,lpFileName);
  return pHVar1;
}


/* ==== 004062c0 CreateBitmap ==== */

HBITMAP __stdcall CreateBitmap(int nWidth,int nHeight,UINT nPlanes,UINT nBitCount,void *lpBits)

{
  HBITMAP pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004062c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = CreateBitmap(nWidth,nHeight,nPlanes,nBitCount,lpBits);
  return pHVar1;
}


/* ==== 004062c8 CreateBrushIndirect ==== */

HBRUSH __stdcall CreateBrushIndirect(LOGBRUSH *plbrush)

{
  HBRUSH pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004062c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = CreateBrushIndirect(plbrush);
  return pHVar1;
}


/* ==== 004062d0 CreateCompatibleBitmap ==== */

HBITMAP __stdcall CreateCompatibleBitmap(HDC hdc,int cx,int cy)

{
  HBITMAP pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004062d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = CreateCompatibleBitmap(hdc,cx,cy);
  return pHVar1;
}


/* ==== 004062d8 CreateCompatibleDC ==== */

HDC __stdcall CreateCompatibleDC(HDC hdc)

{
  HDC pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004062d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = CreateCompatibleDC(hdc);
  return pHVar1;
}


/* ==== 004062e0 CreateDIBSection ==== */

HBITMAP __stdcall
CreateDIBSection(HDC hdc,BITMAPINFO *lpbmi,UINT usage,void **ppvBits,HANDLE hSection,DWORD offset)

{
  HBITMAP pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004062e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = CreateDIBSection(hdc,lpbmi,usage,ppvBits,hSection,offset);
  return pHVar1;
}


/* ==== 004062e8 CreateDIBitmap ==== */

HBITMAP __stdcall
CreateDIBitmap(HDC hdc,BITMAPINFOHEADER *pbmih,DWORD flInit,void *pjBits,BITMAPINFO *pbmi,
              UINT iUsage)

{
  HBITMAP pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004062e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = CreateDIBitmap(hdc,pbmih,flInit,pjBits,pbmi,iUsage);
  return pHVar1;
}


/* ==== 004062f0 CreateFontIndirectA ==== */

HFONT __stdcall CreateFontIndirectA(LOGFONTA *lplf)

{
  HFONT pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004062f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = CreateFontIndirectA(lplf);
  return pHVar1;
}


/* ==== 004062f8 CreateHalftonePalette ==== */

HPALETTE __stdcall CreateHalftonePalette(HDC hdc)

{
  HPALETTE pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004062f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = CreateHalftonePalette(hdc);
  return pHVar1;
}


/* ==== 00406300 CreatePalette ==== */

HPALETTE __stdcall CreatePalette(LOGPALETTE *plpal)

{
  HPALETTE pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406300. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = CreatePalette(plpal);
  return pHVar1;
}


/* ==== 00406308 CreatePenIndirect ==== */

HPEN __stdcall CreatePenIndirect(LOGPEN *plpen)

{
  HPEN pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406308. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = CreatePenIndirect(plpen);
  return pHVar1;
}


/* ==== 00406310 CreateSolidBrush ==== */

HBRUSH __stdcall CreateSolidBrush(COLORREF color)

{
  HBRUSH pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = CreateSolidBrush(color);
  return pHVar1;
}


/* ==== 00406318 DeleteDC ==== */

BOOL __stdcall DeleteDC(HDC hdc)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406318. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = DeleteDC(hdc);
  return BVar1;
}


/* ==== 00406320 DeleteEnhMetaFile ==== */

BOOL __stdcall DeleteEnhMetaFile(HENHMETAFILE hmf)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406320. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = DeleteEnhMetaFile(hmf);
  return BVar1;
}


/* ==== 00406328 DeleteObject ==== */

BOOL __stdcall DeleteObject(HGDIOBJ ho)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406328. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = DeleteObject(ho);
  return BVar1;
}


/* ==== 00406330 ExcludeClipRect ==== */

int __stdcall ExcludeClipRect(HDC hdc,int left,int top,int right,int bottom)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406330. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = ExcludeClipRect(hdc,left,top,right,bottom);
  return iVar1;
}


/* ==== 00406338 GetBitmapBits ==== */

LONG __stdcall GetBitmapBits(HBITMAP hbit,LONG cb,LPVOID lpvBits)

{
  LONG LVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406338. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LVar1 = GetBitmapBits(hbit,cb,lpvBits);
  return LVar1;
}


/* ==== 00406340 GetBrushOrgEx ==== */

BOOL __stdcall GetBrushOrgEx(HDC hdc,LPPOINT lppt)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406340. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = GetBrushOrgEx(hdc,lppt);
  return BVar1;
}


/* ==== 00406348 GetClipBox ==== */

int __stdcall GetClipBox(HDC hdc,LPRECT lprect)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406348. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = GetClipBox(hdc,lprect);
  return iVar1;
}


/* ==== 00406350 GetCurrentPositionEx ==== */

BOOL __stdcall GetCurrentPositionEx(HDC hdc,LPPOINT lppt)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406350. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = GetCurrentPositionEx(hdc,lppt);
  return BVar1;
}


/* ==== 00406358 GetDCOrgEx ==== */

BOOL __stdcall GetDCOrgEx(HDC hdc,LPPOINT lppt)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406358. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = GetDCOrgEx(hdc,lppt);
  return BVar1;
}


/* ==== 00406360 GetDIBColorTable ==== */

UINT __stdcall GetDIBColorTable(HDC hdc,UINT iStart,UINT cEntries,RGBQUAD *prgbq)

{
  UINT UVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406360. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  UVar1 = GetDIBColorTable(hdc,iStart,cEntries,prgbq);
  return UVar1;
}


/* ==== 00406368 GetDIBits ==== */

int __stdcall
GetDIBits(HDC hdc,HBITMAP hbm,UINT start,UINT cLines,LPVOID lpvBits,LPBITMAPINFO lpbmi,UINT usage)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406368. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = GetDIBits(hdc,hbm,start,cLines,lpvBits,lpbmi,usage);
  return iVar1;
}


/* ==== 00406370 GetDeviceCaps ==== */

int __stdcall GetDeviceCaps(HDC hdc,int index)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406370. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = GetDeviceCaps(hdc,index);
  return iVar1;
}


/* ==== 00406378 GetEnhMetaFileBits ==== */

UINT __stdcall GetEnhMetaFileBits(HENHMETAFILE hEMF,UINT nSize,LPBYTE lpData)

{
  UINT UVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406378. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  UVar1 = GetEnhMetaFileBits(hEMF,nSize,lpData);
  return UVar1;
}


/* ==== 00406380 GetEnhMetaFileHeader ==== */

UINT __stdcall GetEnhMetaFileHeader(HENHMETAFILE hemf,UINT nSize,LPENHMETAHEADER lpEnhMetaHeader)

{
  UINT UVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406380. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  UVar1 = GetEnhMetaFileHeader(hemf,nSize,lpEnhMetaHeader);
  return UVar1;
}


/* ==== 00406388 GetEnhMetaFilePaletteEntries ==== */

UINT __stdcall
GetEnhMetaFilePaletteEntries(HENHMETAFILE hemf,UINT nNumEntries,LPPALETTEENTRY lpPaletteEntries)

{
  UINT UVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406388. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  UVar1 = GetEnhMetaFilePaletteEntries(hemf,nNumEntries,lpPaletteEntries);
  return UVar1;
}


/* ==== 00406390 GetObjectA ==== */

int __stdcall GetObjectA(HANDLE h,int c,LPVOID pv)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406390. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = GetObjectA(h,c,pv);
  return iVar1;
}


/* ==== 00406398 GetPaletteEntries ==== */

UINT __stdcall GetPaletteEntries(HPALETTE hpal,UINT iStart,UINT cEntries,LPPALETTEENTRY pPalEntries)

{
  UINT UVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406398. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  UVar1 = GetPaletteEntries(hpal,iStart,cEntries,pPalEntries);
  return UVar1;
}


/* ==== 004063a0 GetPixel ==== */

COLORREF __stdcall GetPixel(HDC hdc,int x,int y)

{
  COLORREF CVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004063a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CVar1 = GetPixel(hdc,x,y);
  return CVar1;
}


/* ==== 004063a8 GetStockObject ==== */

HGDIOBJ __stdcall GetStockObject(int i)

{
  HGDIOBJ pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004063a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = GetStockObject(i);
  return pvVar1;
}


/* ==== 004063b0 GetSystemPaletteEntries ==== */

UINT __stdcall GetSystemPaletteEntries(HDC hdc,UINT iStart,UINT cEntries,LPPALETTEENTRY pPalEntries)

{
  UINT UVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004063b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  UVar1 = GetSystemPaletteEntries(hdc,iStart,cEntries,pPalEntries);
  return UVar1;
}


/* ==== 004063b8 GetTextExtentPoint32A ==== */

BOOL __stdcall GetTextExtentPoint32A(HDC hdc,LPCSTR lpString,int c,LPSIZE psizl)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004063b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = GetTextExtentPoint32A(hdc,lpString,c,psizl);
  return BVar1;
}


/* ==== 004063c0 GetTextExtentPointA ==== */

BOOL __stdcall GetTextExtentPointA(HDC hdc,LPCSTR lpString,int c,LPSIZE lpsz)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004063c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = GetTextExtentPointA(hdc,lpString,c,lpsz);
  return BVar1;
}


/* ==== 004063c8 GetTextMetricsA ==== */

BOOL __stdcall GetTextMetricsA(HDC hdc,LPTEXTMETRICA lptm)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004063c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = GetTextMetricsA(hdc,lptm);
  return BVar1;
}


/* ==== 004063d0 GetWinMetaFileBits ==== */

UINT __stdcall
GetWinMetaFileBits(HENHMETAFILE hemf,UINT cbData16,LPBYTE pData16,INT iMapMode,HDC hdcRef)

{
  UINT UVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004063d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  UVar1 = GetWinMetaFileBits(hemf,cbData16,pData16,iMapMode,hdcRef);
  return UVar1;
}


/* ==== 004063d8 GetWindowOrgEx ==== */

BOOL __stdcall GetWindowOrgEx(HDC hdc,LPPOINT lppoint)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004063d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = GetWindowOrgEx(hdc,lppoint);
  return BVar1;
}


/* ==== 004063e0 IntersectClipRect ==== */

int __stdcall IntersectClipRect(HDC hdc,int left,int top,int right,int bottom)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004063e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = IntersectClipRect(hdc,left,top,right,bottom);
  return iVar1;
}


/* ==== 004063e8 LineTo ==== */

BOOL __stdcall LineTo(HDC hdc,int x,int y)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004063e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = LineTo(hdc,x,y);
  return BVar1;
}


/* ==== 004063f0 MaskBlt ==== */

BOOL __stdcall
MaskBlt(HDC hdcDest,int xDest,int yDest,int width,int height,HDC hdcSrc,int xSrc,int ySrc,
       HBITMAP hbmMask,int xMask,int yMask,DWORD rop)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004063f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = MaskBlt(hdcDest,xDest,yDest,width,height,hdcSrc,xSrc,ySrc,hbmMask,xMask,yMask,rop);
  return BVar1;
}


/* ==== 004063f8 MoveToEx ==== */

BOOL __stdcall MoveToEx(HDC hdc,int x,int y,LPPOINT lppt)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004063f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = MoveToEx(hdc,x,y,lppt);
  return BVar1;
}


/* ==== 00406400 PatBlt ==== */

BOOL __stdcall PatBlt(HDC hdc,int x,int y,int w,int h,DWORD rop)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406400. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = PatBlt(hdc,x,y,w,h,rop);
  return BVar1;
}


/* ==== 00406408 PlayEnhMetaFile ==== */

BOOL __stdcall PlayEnhMetaFile(HDC hdc,HENHMETAFILE hmf,RECT *lprect)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406408. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = PlayEnhMetaFile(hdc,hmf,lprect);
  return BVar1;
}


/* ==== 00406410 RealizePalette ==== */

UINT __stdcall RealizePalette(HDC hdc)

{
  UINT UVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  UVar1 = RealizePalette(hdc);
  return UVar1;
}


/* ==== 00406418 RectVisible ==== */

BOOL __stdcall RectVisible(HDC hdc,RECT *lprect)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = RectVisible(hdc,lprect);
  return BVar1;
}


/* ==== 00406420 Rectangle ==== */

BOOL __stdcall Rectangle(HDC hdc,int left,int top,int right,int bottom)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406420. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = Rectangle(hdc,left,top,right,bottom);
  return BVar1;
}


/* ==== 00406428 RestoreDC ==== */

BOOL __stdcall RestoreDC(HDC hdc,int nSavedDC)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406428. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = RestoreDC(hdc,nSavedDC);
  return BVar1;
}


/* ==== 00406430 SaveDC ==== */

int __stdcall SaveDC(HDC hdc)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = SaveDC(hdc);
  return iVar1;
}


/* ==== 00406438 SelectObject ==== */

HGDIOBJ __stdcall SelectObject(HDC hdc,HGDIOBJ h)

{
  HGDIOBJ pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406438. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = SelectObject(hdc,h);
  return pvVar1;
}


/* ==== 00406440 SelectPalette ==== */

HPALETTE __stdcall SelectPalette(HDC hdc,HPALETTE hPal,BOOL bForceBkgd)

{
  HPALETTE pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406440. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = SelectPalette(hdc,hPal,bForceBkgd);
  return pHVar1;
}


/* ==== 00406448 SetBkColor ==== */

COLORREF __stdcall SetBkColor(HDC hdc,COLORREF color)

{
  COLORREF CVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406448. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CVar1 = SetBkColor(hdc,color);
  return CVar1;
}


/* ==== 00406450 SetBkMode ==== */

int __stdcall SetBkMode(HDC hdc,int mode)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = SetBkMode(hdc,mode);
  return iVar1;
}


/* ==== 00406458 SetBrushOrgEx ==== */

BOOL __stdcall SetBrushOrgEx(HDC hdc,int x,int y,LPPOINT lppt)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406458. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = SetBrushOrgEx(hdc,x,y,lppt);
  return BVar1;
}


/* ==== 00406460 SetDIBColorTable ==== */

UINT __stdcall SetDIBColorTable(HDC hdc,UINT iStart,UINT cEntries,RGBQUAD *prgbq)

{
  UINT UVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406460. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  UVar1 = SetDIBColorTable(hdc,iStart,cEntries,prgbq);
  return UVar1;
}


/* ==== 00406468 SetEnhMetaFileBits ==== */

HENHMETAFILE __stdcall SetEnhMetaFileBits(UINT nSize,BYTE *pb)

{
  HENHMETAFILE pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406468. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = SetEnhMetaFileBits(nSize,pb);
  return pHVar1;
}


/* ==== 00406470 SetPixel ==== */

COLORREF __stdcall SetPixel(HDC hdc,int x,int y,COLORREF color)

{
  COLORREF CVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CVar1 = SetPixel(hdc,x,y,color);
  return CVar1;
}


/* ==== 00406478 SetROP2 ==== */

int __stdcall SetROP2(HDC hdc,int rop2)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = SetROP2(hdc,rop2);
  return iVar1;
}


/* ==== 00406480 SetStretchBltMode ==== */

int __stdcall SetStretchBltMode(HDC hdc,int mode)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406480. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = SetStretchBltMode(hdc,mode);
  return iVar1;
}


/* ==== 00406488 SetTextColor ==== */

COLORREF __stdcall SetTextColor(HDC hdc,COLORREF color)

{
  COLORREF CVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CVar1 = SetTextColor(hdc,color);
  return CVar1;
}


/* ==== 00406490 SetViewportOrgEx ==== */

BOOL __stdcall SetViewportOrgEx(HDC hdc,int x,int y,LPPOINT lppt)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = SetViewportOrgEx(hdc,x,y,lppt);
  return BVar1;
}


/* ==== 00406498 SetWinMetaFileBits ==== */

HENHMETAFILE __stdcall
SetWinMetaFileBits(UINT nSize,BYTE *lpMeta16Data,HDC hdcRef,METAFILEPICT *lpMFP)

{
  HENHMETAFILE pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406498. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = SetWinMetaFileBits(nSize,lpMeta16Data,hdcRef,lpMFP);
  return pHVar1;
}


/* ==== 004064a0 SetWindowOrgEx ==== */

BOOL __stdcall SetWindowOrgEx(HDC hdc,int x,int y,LPPOINT lppt)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004064a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = SetWindowOrgEx(hdc,x,y,lppt);
  return BVar1;
}


/* ==== 004064a8 StretchBlt ==== */

BOOL __stdcall
StretchBlt(HDC hdcDest,int xDest,int yDest,int wDest,int hDest,HDC hdcSrc,int xSrc,int ySrc,int wSrc
          ,int hSrc,DWORD rop)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004064a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = StretchBlt(hdcDest,xDest,yDest,wDest,hDest,hdcSrc,xSrc,ySrc,wSrc,hSrc,rop);
  return BVar1;
}


/* ==== 004064b0 UnrealizeObject ==== */

BOOL __stdcall UnrealizeObject(HGDIOBJ h)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004064b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = UnrealizeObject(h);
  return BVar1;
}


/* ==== 004064b8 ActivateKeyboardLayout ==== */

HKL __stdcall ActivateKeyboardLayout(HKL hkl,UINT Flags)

{
  HKL pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004064b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = ActivateKeyboardLayout(hkl,Flags);
  return pHVar1;
}


/* ==== 004064c0 AdjustWindowRectEx ==== */

BOOL __stdcall AdjustWindowRectEx(LPRECT lpRect,DWORD dwStyle,BOOL bMenu,DWORD dwExStyle)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004064c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = AdjustWindowRectEx(lpRect,dwStyle,bMenu,dwExStyle);
  return BVar1;
}


/* ==== 004064c8 CharLowerA ==== */

LPSTR __stdcall CharLowerA(LPSTR lpsz)

{
  LPSTR pCVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004064c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pCVar1 = CharLowerA(lpsz);
  return pCVar1;
}


/* ==== 004064d0 BeginPaint ==== */

HDC __stdcall BeginPaint(HWND hWnd,LPPAINTSTRUCT lpPaint)

{
  HDC pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004064d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = BeginPaint(hWnd,lpPaint);
  return pHVar1;
}


/* ==== 004064d8 CallNextHookEx ==== */

LRESULT __stdcall CallNextHookEx(HHOOK hhk,int nCode,WPARAM wParam,LPARAM lParam)

{
  LRESULT LVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004064d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LVar1 = CallNextHookEx(hhk,nCode,wParam,lParam);
  return LVar1;
}


/* ==== 004064e0 CallWindowProcA ==== */

LRESULT __stdcall
CallWindowProcA(WNDPROC lpPrevWndFunc,HWND hWnd,UINT Msg,WPARAM wParam,LPARAM lParam)

{
  LRESULT LVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004064e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LVar1 = CallWindowProcA(lpPrevWndFunc,hWnd,Msg,wParam,lParam);
  return LVar1;
}


/* ==== 004064e8 CharLowerBuffA ==== */

DWORD __stdcall CharLowerBuffA(LPSTR lpsz,DWORD cchLength)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004064e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = CharLowerBuffA(lpsz,cchLength);
  return DVar1;
}


/* ==== 004064f0 CheckMenuItem ==== */

DWORD __stdcall CheckMenuItem(HMENU hMenu,UINT uIDCheckItem,UINT uCheck)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004064f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = CheckMenuItem(hMenu,uIDCheckItem,uCheck);
  return DVar1;
}


/* ==== 004064f8 ClientToScreen ==== */

BOOL __stdcall ClientToScreen(HWND hWnd,LPPOINT lpPoint)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004064f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = ClientToScreen(hWnd,lpPoint);
  return BVar1;
}


/* ==== 00406500 CreateIcon ==== */

HICON __stdcall
CreateIcon(HINSTANCE hInstance,int nWidth,int nHeight,BYTE cPlanes,BYTE cBitsPixel,BYTE *lpbANDbits,
          BYTE *lpbXORbits)

{
  HICON pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406500. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = CreateIcon(hInstance,nWidth,nHeight,cPlanes,cBitsPixel,lpbANDbits,lpbXORbits);
  return pHVar1;
}


/* ==== 00406508 CreateMenu ==== */

HMENU __stdcall CreateMenu(void)

{
  HMENU pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406508. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = CreateMenu();
  return pHVar1;
}


/* ==== 00406510 CreatePopupMenu ==== */

HMENU __stdcall CreatePopupMenu(void)

{
  HMENU pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406510. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = CreatePopupMenu();
  return pHVar1;
}


/* ==== 00406518 CreateWindowExA ==== */

HWND __stdcall
CreateWindowExA(DWORD dwExStyle,LPCSTR lpClassName,LPCSTR lpWindowName,DWORD dwStyle,int X,int Y,
               int nWidth,int nHeight,HWND hWndParent,HMENU hMenu,HINSTANCE hInstance,LPVOID lpParam
               )

{
  HWND pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406518. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = CreateWindowExA(dwExStyle,lpClassName,lpWindowName,dwStyle,X,Y,nWidth,nHeight,hWndParent,
                           hMenu,hInstance,lpParam);
  return pHVar1;
}


/* ==== 00406520 DefFrameProcA ==== */

LRESULT __stdcall DefFrameProcA(HWND hWnd,HWND hWndMDIClient,UINT uMsg,WPARAM wParam,LPARAM lParam)

{
  LRESULT LVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406520. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LVar1 = DefFrameProcA(hWnd,hWndMDIClient,uMsg,wParam,lParam);
  return LVar1;
}


/* ==== 00406530 DefWindowProcA ==== */

LRESULT __stdcall DefWindowProcA(HWND hWnd,UINT Msg,WPARAM wParam,LPARAM lParam)

{
  LRESULT LVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406530. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LVar1 = DefWindowProcA(hWnd,Msg,wParam,lParam);
  return LVar1;
}


/* ==== 00406538 DeleteMenu ==== */

BOOL __stdcall DeleteMenu(HMENU hMenu,UINT uPosition,UINT uFlags)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406538. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = DeleteMenu(hMenu,uPosition,uFlags);
  return BVar1;
}


/* ==== 00406540 DestroyCursor ==== */

BOOL __stdcall DestroyCursor(HCURSOR hCursor)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406540. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = DestroyCursor(hCursor);
  return BVar1;
}


/* ==== 00406548 DestroyIcon ==== */

BOOL __stdcall DestroyIcon(HICON hIcon)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406548. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = DestroyIcon(hIcon);
  return BVar1;
}


/* ==== 00406550 DestroyMenu ==== */

BOOL __stdcall DestroyMenu(HMENU hMenu)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406550. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = DestroyMenu(hMenu);
  return BVar1;
}


/* ==== 00406558 DestroyWindow ==== */

BOOL __stdcall DestroyWindow(HWND hWnd)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406558. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = DestroyWindow(hWnd);
  return BVar1;
}


/* ==== 00406560 DispatchMessageA ==== */

LRESULT __stdcall DispatchMessageA(MSG *lpMsg)

{
  LRESULT LVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406560. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LVar1 = DispatchMessageA(lpMsg);
  return LVar1;
}


/* ==== 00406568 DrawEdge ==== */

BOOL __stdcall DrawEdge(HDC hdc,LPRECT qrc,UINT edge,UINT grfFlags)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = DrawEdge(hdc,qrc,edge,grfFlags);
  return BVar1;
}


/* ==== 00406570 DrawFrameControl ==== */

BOOL __stdcall DrawFrameControl(HDC param_1,LPRECT param_2,UINT param_3,UINT param_4)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = DrawFrameControl(param_1,param_2,param_3,param_4);
  return BVar1;
}


/* ==== 00406578 DrawIcon ==== */

BOOL __stdcall DrawIcon(HDC hDC,int X,int Y,HICON hIcon)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406578. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = DrawIcon(hDC,X,Y,hIcon);
  return BVar1;
}


/* ==== 00406580 DrawIconEx ==== */

BOOL __stdcall
DrawIconEx(HDC hdc,int xLeft,int yTop,HICON hIcon,int cxWidth,int cyWidth,UINT istepIfAniCur,
          HBRUSH hbrFlickerFreeDraw,UINT diFlags)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = DrawIconEx(hdc,xLeft,yTop,hIcon,cxWidth,cyWidth,istepIfAniCur,hbrFlickerFreeDraw,diFlags);
  return BVar1;
}


/* ==== 00406588 DrawMenuBar ==== */

BOOL __stdcall DrawMenuBar(HWND hWnd)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406588. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = DrawMenuBar(hWnd);
  return BVar1;
}


/* ==== 00406590 DrawTextA ==== */

int __stdcall DrawTextA(HDC hdc,LPCSTR lpchText,int cchText,LPRECT lprc,UINT format)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406590. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = DrawTextA(hdc,lpchText,cchText,lprc,format);
  return iVar1;
}


/* ==== 00406598 EnableMenuItem ==== */

BOOL __stdcall EnableMenuItem(HMENU hMenu,UINT uIDEnableItem,UINT uEnable)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406598. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = EnableMenuItem(hMenu,uIDEnableItem,uEnable);
  return BVar1;
}


/* ==== 004065a8 EnableWindow ==== */

BOOL __stdcall EnableWindow(HWND hWnd,BOOL bEnable)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004065a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = EnableWindow(hWnd,bEnable);
  return BVar1;
}


/* ==== 004065b0 EndPaint ==== */

BOOL __stdcall EndPaint(HWND hWnd,PAINTSTRUCT *lpPaint)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004065b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = EndPaint(hWnd,lpPaint);
  return BVar1;
}


/* ==== 004065b8 EnumThreadWindows ==== */

BOOL __stdcall EnumThreadWindows(DWORD dwThreadId,WNDENUMPROC lpfn,LPARAM lParam)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004065b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = EnumThreadWindows(dwThreadId,lpfn,lParam);
  return BVar1;
}


/* ==== 004065c0 EnumWindows ==== */

BOOL __stdcall EnumWindows(WNDENUMPROC lpEnumFunc,LPARAM lParam)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004065c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = EnumWindows(lpEnumFunc,lParam);
  return BVar1;
}


/* ==== 004065c8 EqualRect ==== */

BOOL __stdcall EqualRect(RECT *lprc1,RECT *lprc2)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004065c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = EqualRect(lprc1,lprc2);
  return BVar1;
}


/* ==== 004065d0 FillRect ==== */

int __stdcall FillRect(HDC hDC,RECT *lprc,HBRUSH hbr)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004065d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = FillRect(hDC,lprc,hbr);
  return iVar1;
}


/* ==== 004065d8 FindWindowA ==== */

HWND __stdcall FindWindowA(LPCSTR lpClassName,LPCSTR lpWindowName)

{
  HWND pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004065d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = FindWindowA(lpClassName,lpWindowName);
  return pHVar1;
}


/* ==== 004065e0 FrameRect ==== */

int __stdcall FrameRect(HDC hDC,RECT *lprc,HBRUSH hbr)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004065e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = FrameRect(hDC,lprc,hbr);
  return iVar1;
}


/* ==== 004065e8 GetActiveWindow ==== */

HWND __stdcall GetActiveWindow(void)

{
  HWND pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004065e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = GetActiveWindow();
  return pHVar1;
}


/* ==== 004065f0 GetCapture ==== */

HWND __stdcall GetCapture(void)

{
  HWND pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004065f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = GetCapture();
  return pHVar1;
}


/* ==== 004065f8 GetClassInfoA ==== */

BOOL __stdcall GetClassInfoA(HINSTANCE hInstance,LPCSTR lpClassName,LPWNDCLASSA lpWndClass)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004065f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = GetClassInfoA(hInstance,lpClassName,lpWndClass);
  return BVar1;
}


/* ==== 00406600 GetClientRect ==== */

BOOL __stdcall GetClientRect(HWND hWnd,LPRECT lpRect)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406600. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = GetClientRect(hWnd,lpRect);
  return BVar1;
}


/* ==== 00406608 GetClipboardData ==== */

HANDLE __stdcall GetClipboardData(UINT uFormat)

{
  HANDLE pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406608. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = GetClipboardData(uFormat);
  return pvVar1;
}


/* ==== 00406610 GetCursor ==== */

HCURSOR __stdcall GetCursor(void)

{
  HCURSOR pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406610. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = GetCursor();
  return pHVar1;
}


/* ==== 00406618 GetCursorPos ==== */

BOOL __stdcall GetCursorPos(LPPOINT lpPoint)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406618. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = GetCursorPos(lpPoint);
  return BVar1;
}


/* ==== 00406620 GetDC ==== */

HDC __stdcall GetDC(HWND hWnd)

{
  HDC pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406620. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = GetDC(hWnd);
  return pHVar1;
}


/* ==== 00406628 GetDCEx ==== */

HDC __stdcall GetDCEx(HWND hWnd,HRGN hrgnClip,DWORD flags)

{
  HDC pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406628. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = GetDCEx(hWnd,hrgnClip,flags);
  return pHVar1;
}


/* ==== 00406630 GetDesktopWindow ==== */

HWND __stdcall GetDesktopWindow(void)

{
  HWND pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = GetDesktopWindow();
  return pHVar1;
}


/* ==== 00406638 GetFocus ==== */

HWND __stdcall GetFocus(void)

{
  HWND pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406638. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = GetFocus();
  return pHVar1;
}


/* ==== 00406640 GetForegroundWindow ==== */

HWND __stdcall GetForegroundWindow(void)

{
  HWND pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406640. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = GetForegroundWindow();
  return pHVar1;
}


/* ==== 00406648 GetIconInfo ==== */

BOOL __stdcall GetIconInfo(HICON hIcon,PICONINFO piconinfo)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406648. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = GetIconInfo(hIcon,piconinfo);
  return BVar1;
}


/* ==== 00406650 GetKeyNameTextA ==== */

int __stdcall GetKeyNameTextA(LONG lParam,LPSTR lpString,int cchSize)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = GetKeyNameTextA(lParam,lpString,cchSize);
  return iVar1;
}


/* ==== 00406658 GetKeyState ==== */

SHORT __stdcall GetKeyState(int nVirtKey)

{
  SHORT SVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406658. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  SVar1 = GetKeyState(nVirtKey);
  return SVar1;
}


/* ==== 00406660 GetKeyboardLayout ==== */

HKL __stdcall GetKeyboardLayout(DWORD idThread)

{
  HKL pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406660. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = GetKeyboardLayout(idThread);
  return pHVar1;
}


/* ==== 00406668 GetKeyboardLayoutList ==== */

int __stdcall GetKeyboardLayoutList(int nBuff,HKL *lpList)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406668. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = GetKeyboardLayoutList(nBuff,lpList);
  return iVar1;
}


/* ==== 00406670 GetKeyboardState ==== */

BOOL __stdcall GetKeyboardState(PBYTE lpKeyState)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = GetKeyboardState(lpKeyState);
  return BVar1;
}


/* ==== 00406678 GetLastActivePopup ==== */

HWND __stdcall GetLastActivePopup(HWND hWnd)

{
  HWND pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406678. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = GetLastActivePopup(hWnd);
  return pHVar1;
}


/* ==== 00406680 GetMenu ==== */

HMENU __stdcall GetMenu(HWND hWnd)

{
  HMENU pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406680. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = GetMenu(hWnd);
  return pHVar1;
}


/* ==== 00406688 GetMenuItemCount ==== */

int __stdcall GetMenuItemCount(HMENU hMenu)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406688. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = GetMenuItemCount(hMenu);
  return iVar1;
}


/* ==== 00406690 GetMenuItemID ==== */

UINT __stdcall GetMenuItemID(HMENU hMenu,int nPos)

{
  UINT UVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  UVar1 = GetMenuItemID(hMenu,nPos);
  return UVar1;
}


/* ==== 00406698 GetMenuItemInfoA ==== */

BOOL __stdcall GetMenuItemInfoA(HMENU hmenu,UINT item,BOOL fByPosition,LPMENUITEMINFOA lpmii)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406698. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = GetMenuItemInfoA(hmenu,item,fByPosition,lpmii);
  return BVar1;
}


/* ==== 004066a0 GetMenuState ==== */

UINT __stdcall GetMenuState(HMENU hMenu,UINT uId,UINT uFlags)

{
  UINT UVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004066a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  UVar1 = GetMenuState(hMenu,uId,uFlags);
  return UVar1;
}


/* ==== 004066a8 GetMenuStringA ==== */

int __stdcall GetMenuStringA(HMENU hMenu,UINT uIDItem,LPSTR lpString,int cchMax,UINT flags)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004066a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = GetMenuStringA(hMenu,uIDItem,lpString,cchMax,flags);
  return iVar1;
}


/* ==== 004066b0 GetWindow ==== */

HWND __stdcall GetWindow(HWND hWnd,UINT uCmd)

{
  HWND pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004066b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = GetWindow(hWnd,uCmd);
  return pHVar1;
}


/* ==== 004066b8 GetParent ==== */

HWND __stdcall GetParent(HWND hWnd)

{
  HWND pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004066b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = GetParent(hWnd);
  return pHVar1;
}


/* ==== 004066c0 GetPropA ==== */

HANDLE __stdcall GetPropA(HWND hWnd,LPCSTR lpString)

{
  HANDLE pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004066c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = GetPropA(hWnd,lpString);
  return pvVar1;
}


/* ==== 004066e0 GetSubMenu ==== */

HMENU __stdcall GetSubMenu(HMENU hMenu,int nPos)

{
  HMENU pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004066e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = GetSubMenu(hMenu,nPos);
  return pHVar1;
}


/* ==== 004066e8 GetSysColor ==== */

DWORD __stdcall GetSysColor(int nIndex)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004066e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = GetSysColor(nIndex);
  return DVar1;
}


/* ==== 004066f0 GetSystemMenu ==== */

HMENU __stdcall GetSystemMenu(HWND hWnd,BOOL bRevert)

{
  HMENU pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004066f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = GetSystemMenu(hWnd,bRevert);
  return pHVar1;
}


/* ==== 004066f8 GetSystemMetrics ==== */

int __stdcall GetSystemMetrics(int nIndex)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004066f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = GetSystemMetrics(nIndex);
  return iVar1;
}


/* ==== 00406700 GetTopWindow ==== */

HWND __stdcall GetTopWindow(HWND hWnd)

{
  HWND pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406700. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = GetTopWindow(hWnd);
  return pHVar1;
}


/* ==== 00406708 GetWindow ==== */

HWND __stdcall GetWindow(HWND hWnd,UINT uCmd)

{
  HWND pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406708. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = GetWindow(hWnd,uCmd);
  return pHVar1;
}


/* ==== 00406710 GetWindowDC ==== */

HDC __stdcall GetWindowDC(HWND hWnd)

{
  HDC pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = GetWindowDC(hWnd);
  return pHVar1;
}


/* ==== 00406718 GetWindowLongA ==== */

LONG __stdcall GetWindowLongA(HWND hWnd,int nIndex)

{
  LONG LVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406718. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LVar1 = GetWindowLongA(hWnd,nIndex);
  return LVar1;
}


/* ==== 00406720 GetWindowPlacement ==== */

BOOL __stdcall GetWindowPlacement(HWND hWnd,WINDOWPLACEMENT *lpwndpl)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406720. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = GetWindowPlacement(hWnd,lpwndpl);
  return BVar1;
}


/* ==== 00406728 GetWindowRect ==== */

BOOL __stdcall GetWindowRect(HWND hWnd,LPRECT lpRect)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406728. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = GetWindowRect(hWnd,lpRect);
  return BVar1;
}


/* ==== 00406730 GetWindowTextA ==== */

int __stdcall GetWindowTextA(HWND hWnd,LPSTR lpString,int nMaxCount)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406730. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = GetWindowTextA(hWnd,lpString,nMaxCount);
  return iVar1;
}


/* ==== 00406738 GetWindowThreadProcessId ==== */

DWORD __stdcall GetWindowThreadProcessId(HWND hWnd,LPDWORD lpdwProcessId)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406738. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = GetWindowThreadProcessId(hWnd,lpdwProcessId);
  return DVar1;
}


/* ==== 00406740 InflateRect ==== */

BOOL __stdcall InflateRect(LPRECT lprc,int dx,int dy)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406740. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = InflateRect(lprc,dx,dy);
  return BVar1;
}


/* ==== 00406748 InsertMenuA ==== */

BOOL __stdcall
InsertMenuA(HMENU hMenu,UINT uPosition,UINT uFlags,UINT_PTR uIDNewItem,LPCSTR lpNewItem)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406748. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = InsertMenuA(hMenu,uPosition,uFlags,uIDNewItem,lpNewItem);
  return BVar1;
}


/* ==== 00406750 InsertMenuItemA ==== */

BOOL __stdcall InsertMenuItemA(HMENU hmenu,UINT item,BOOL fByPosition,LPCMENUITEMINFOA lpmi)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406750. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = InsertMenuItemA(hmenu,item,fByPosition,lpmi);
  return BVar1;
}


/* ==== 00406758 IntersectRect ==== */

BOOL __stdcall IntersectRect(LPRECT lprcDst,RECT *lprcSrc1,RECT *lprcSrc2)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406758. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = IntersectRect(lprcDst,lprcSrc1,lprcSrc2);
  return BVar1;
}


/* ==== 00406760 InvalidateRect ==== */

BOOL __stdcall InvalidateRect(HWND hWnd,RECT *lpRect,BOOL bErase)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406760. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = InvalidateRect(hWnd,lpRect,bErase);
  return BVar1;
}


/* ==== 00406768 IsChild ==== */

BOOL __stdcall IsChild(HWND hWndParent,HWND hWnd)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406768. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = IsChild(hWndParent,hWnd);
  return BVar1;
}


/* ==== 00406770 IsDialogMessageA ==== */

BOOL __stdcall IsDialogMessageA(HWND hDlg,LPMSG lpMsg)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406770. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = IsDialogMessageA(hDlg,lpMsg);
  return BVar1;
}


/* ==== 00406778 IsIconic ==== */

BOOL __stdcall IsIconic(HWND hWnd)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406778. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = IsIconic(hWnd);
  return BVar1;
}


/* ==== 00406780 IsRectEmpty ==== */

BOOL __stdcall IsRectEmpty(RECT *lprc)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406780. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = IsRectEmpty(lprc);
  return BVar1;
}


/* ==== 00406788 IsWindow ==== */

BOOL __stdcall IsWindow(HWND hWnd)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406788. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = IsWindow(hWnd);
  return BVar1;
}


/* ==== 00406790 IsWindowEnabled ==== */

BOOL __stdcall IsWindowEnabled(HWND hWnd)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = IsWindowEnabled(hWnd);
  return BVar1;
}


/* ==== 00406798 IsWindowVisible ==== */

BOOL __stdcall IsWindowVisible(HWND hWnd)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406798. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = IsWindowVisible(hWnd);
  return BVar1;
}


/* ==== 004067a0 IsZoomed ==== */

BOOL __stdcall IsZoomed(HWND hWnd)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004067a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = IsZoomed(hWnd);
  return BVar1;
}


/* ==== 004067a8 KillTimer ==== */

BOOL __stdcall KillTimer(HWND hWnd,UINT_PTR uIDEvent)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004067a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = KillTimer(hWnd,uIDEvent);
  return BVar1;
}


/* ==== 004067b0 LoadBitmapA ==== */

HBITMAP __stdcall LoadBitmapA(HINSTANCE hInstance,LPCSTR lpBitmapName)

{
  HBITMAP pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004067b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = LoadBitmapA(hInstance,lpBitmapName);
  return pHVar1;
}


/* ==== 004067b8 LoadCursorA ==== */

HCURSOR __stdcall LoadCursorA(HINSTANCE hInstance,LPCSTR lpCursorName)

{
  HCURSOR pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004067b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = LoadCursorA(hInstance,lpCursorName);
  return pHVar1;
}


/* ==== 004067c0 LoadIconA ==== */

HICON __stdcall LoadIconA(HINSTANCE hInstance,LPCSTR lpIconName)

{
  HICON pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004067c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = LoadIconA(hInstance,lpIconName);
  return pHVar1;
}


/* ==== 004067c8 LoadKeyboardLayoutA ==== */

HKL __stdcall LoadKeyboardLayoutA(LPCSTR pwszKLID,UINT Flags)

{
  HKL pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004067c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = LoadKeyboardLayoutA(pwszKLID,Flags);
  return pHVar1;
}


/* ==== 004067d0 LoadStringA ==== */

int __stdcall LoadStringA(HINSTANCE hInstance,UINT uID,LPSTR lpBuffer,int cchBufferMax)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004067d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = LoadStringA(hInstance,uID,lpBuffer,cchBufferMax);
  return iVar1;
}


/* ==== 004067d8 MapVirtualKeyA ==== */

UINT __stdcall MapVirtualKeyA(UINT uCode,UINT uMapType)

{
  UINT UVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004067d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  UVar1 = MapVirtualKeyA(uCode,uMapType);
  return UVar1;
}


/* ==== 004067e0 MapWindowPoints ==== */

int __stdcall MapWindowPoints(HWND hWndFrom,HWND hWndTo,LPPOINT lpPoints,UINT cPoints)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004067e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = MapWindowPoints(hWndFrom,hWndTo,lpPoints,cPoints);
  return iVar1;
}


/* ==== 004067e8 MessageBoxA ==== */

int __stdcall MessageBoxA(HWND hWnd,LPCSTR lpText,LPCSTR lpCaption,UINT uType)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004067e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = MessageBoxA(hWnd,lpText,lpCaption,uType);
  return iVar1;
}


/* ==== 004067f0 OemToCharA ==== */

BOOL __stdcall OemToCharA(LPCSTR pSrc,LPSTR pDst)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004067f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = OemToCharA(pSrc,pDst);
  return BVar1;
}


/* ==== 004067f8 OffsetRect ==== */

BOOL __stdcall OffsetRect(LPRECT lprc,int dx,int dy)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004067f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = OffsetRect(lprc,dx,dy);
  return BVar1;
}


/* ==== 00406800 PeekMessageA ==== */

BOOL __stdcall
PeekMessageA(LPMSG lpMsg,HWND hWnd,UINT wMsgFilterMin,UINT wMsgFilterMax,UINT wRemoveMsg)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406800. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = PeekMessageA(lpMsg,hWnd,wMsgFilterMin,wMsgFilterMax,wRemoveMsg);
  return BVar1;
}


/* ==== 00406808 PostMessageA ==== */

BOOL __stdcall PostMessageA(HWND hWnd,UINT Msg,WPARAM wParam,LPARAM lParam)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406808. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = PostMessageA(hWnd,Msg,wParam,lParam);
  return BVar1;
}


/* ==== 00406810 PostQuitMessage ==== */

void __stdcall PostQuitMessage(int nExitCode)

{
                    /* WARNING: Could not recover jumptable at 0x00406810. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  PostQuitMessage(nExitCode);
  return;
}


/* ==== 00406818 PtInRect ==== */

BOOL __stdcall PtInRect(RECT *lprc,POINT pt)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406818. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = PtInRect(lprc,pt);
  return BVar1;
}


/* ==== 00406820 RegisterClassA ==== */

ATOM __stdcall RegisterClassA(WNDCLASSA *lpWndClass)

{
  ATOM AVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406820. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  AVar1 = RegisterClassA(lpWndClass);
  return AVar1;
}


/* ==== 00406828 RegisterClipboardFormatA ==== */

UINT __stdcall RegisterClipboardFormatA(LPCSTR lpszFormat)

{
  UINT UVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406828. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  UVar1 = RegisterClipboardFormatA(lpszFormat);
  return UVar1;
}


/* ==== 00406830 RegisterWindowMessageA ==== */

UINT __stdcall RegisterWindowMessageA(LPCSTR lpString)

{
  UINT UVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406830. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  UVar1 = RegisterWindowMessageA(lpString);
  return UVar1;
}


/* ==== 00406838 ReleaseCapture ==== */

BOOL __stdcall ReleaseCapture(void)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406838. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = ReleaseCapture();
  return BVar1;
}


/* ==== 00406840 ReleaseDC ==== */

int __stdcall ReleaseDC(HWND hWnd,HDC hDC)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406840. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = ReleaseDC(hWnd,hDC);
  return iVar1;
}


/* ==== 00406848 RemoveMenu ==== */

BOOL __stdcall RemoveMenu(HMENU hMenu,UINT uPosition,UINT uFlags)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406848. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = RemoveMenu(hMenu,uPosition,uFlags);
  return BVar1;
}


/* ==== 00406850 RemovePropA ==== */

HANDLE __stdcall RemovePropA(HWND hWnd,LPCSTR lpString)

{
  HANDLE pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = RemovePropA(hWnd,lpString);
  return pvVar1;
}


/* ==== 00406858 ScreenToClient ==== */

BOOL __stdcall ScreenToClient(HWND hWnd,LPPOINT lpPoint)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406858. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = ScreenToClient(hWnd,lpPoint);
  return BVar1;
}


/* ==== 00406860 ScrollWindow ==== */

BOOL __stdcall ScrollWindow(HWND hWnd,int XAmount,int YAmount,RECT *lpRect,RECT *lpClipRect)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406860. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = ScrollWindow(hWnd,XAmount,YAmount,lpRect,lpClipRect);
  return BVar1;
}


/* ==== 00406868 SendMessageA ==== */

LRESULT __stdcall SendMessageA(HWND hWnd,UINT Msg,WPARAM wParam,LPARAM lParam)

{
  LRESULT LVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406868. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LVar1 = SendMessageA(hWnd,Msg,wParam,lParam);
  return LVar1;
}


/* ==== 00406870 SetActiveWindow ==== */

HWND __stdcall SetActiveWindow(HWND hWnd)

{
  HWND pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406870. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = SetActiveWindow(hWnd);
  return pHVar1;
}


/* ==== 00406878 SetCapture ==== */

HWND __stdcall SetCapture(HWND hWnd)

{
  HWND pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406878. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = SetCapture(hWnd);
  return pHVar1;
}


/* ==== 00406880 SetClassLongA ==== */

DWORD __stdcall SetClassLongA(HWND hWnd,int nIndex,LONG dwNewLong)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406880. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = SetClassLongA(hWnd,nIndex,dwNewLong);
  return DVar1;
}


/* ==== 00406888 SetCursor ==== */

HCURSOR __stdcall SetCursor(HCURSOR hCursor)

{
  HCURSOR pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406888. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = SetCursor(hCursor);
  return pHVar1;
}


/* ==== 00406890 SetFocus ==== */

HWND __stdcall SetFocus(HWND hWnd)

{
  HWND pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406890. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = SetFocus(hWnd);
  return pHVar1;
}


/* ==== 00406898 SetForegroundWindow ==== */

BOOL __stdcall SetForegroundWindow(HWND hWnd)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406898. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = SetForegroundWindow(hWnd);
  return BVar1;
}


/* ==== 004068a0 SetMenu ==== */

BOOL __stdcall SetMenu(HWND hWnd,HMENU hMenu)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004068a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = SetMenu(hWnd,hMenu);
  return BVar1;
}


/* ==== 004068a8 SetMenuItemInfoA ==== */

BOOL __stdcall SetMenuItemInfoA(HMENU hmenu,UINT item,BOOL fByPositon,LPCMENUITEMINFOA lpmii)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004068a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = SetMenuItemInfoA(hmenu,item,fByPositon,lpmii);
  return BVar1;
}


/* ==== 004068b0 SetPropA ==== */

BOOL __stdcall SetPropA(HWND hWnd,LPCSTR lpString,HANDLE hData)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004068b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = SetPropA(hWnd,lpString,hData);
  return BVar1;
}


/* ==== 004068b8 SetRect ==== */

BOOL __stdcall SetRect(LPRECT lprc,int xLeft,int yTop,int xRight,int yBottom)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004068b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = SetRect(lprc,xLeft,yTop,xRight,yBottom);
  return BVar1;
}


/* ==== 004068d8 SetTimer ==== */

UINT_PTR __stdcall SetTimer(HWND hWnd,UINT_PTR nIDEvent,UINT uElapse,TIMERPROC lpTimerFunc)

{
  UINT_PTR UVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004068d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  UVar1 = SetTimer(hWnd,nIDEvent,uElapse,lpTimerFunc);
  return UVar1;
}


/* ==== 004068e0 SetWindowLongA ==== */

LONG __stdcall SetWindowLongA(HWND hWnd,int nIndex,LONG dwNewLong)

{
  LONG LVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004068e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LVar1 = SetWindowLongA(hWnd,nIndex,dwNewLong);
  return LVar1;
}


/* ==== 004068e8 SetWindowPlacement ==== */

BOOL __stdcall SetWindowPlacement(HWND hWnd,WINDOWPLACEMENT *lpwndpl)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004068e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = SetWindowPlacement(hWnd,lpwndpl);
  return BVar1;
}


/* ==== 004068f0 SetWindowPos ==== */

BOOL __stdcall SetWindowPos(HWND hWnd,HWND hWndInsertAfter,int X,int Y,int cx,int cy,UINT uFlags)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004068f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = SetWindowPos(hWnd,hWndInsertAfter,X,Y,cx,cy,uFlags);
  return BVar1;
}


/* ==== 004068f8 SetWindowsHookExA ==== */

HHOOK __stdcall SetWindowsHookExA(int idHook,HOOKPROC lpfn,HINSTANCE hmod,DWORD dwThreadId)

{
  HHOOK pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004068f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = SetWindowsHookExA(idHook,lpfn,hmod,dwThreadId);
  return pHVar1;
}


/* ==== 00406900 ShowCursor ==== */

int __stdcall ShowCursor(BOOL bShow)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406900. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = ShowCursor(bShow);
  return iVar1;
}


/* ==== 00406908 ShowOwnedPopups ==== */

BOOL __stdcall ShowOwnedPopups(HWND hWnd,BOOL fShow)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406908. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = ShowOwnedPopups(hWnd,fShow);
  return BVar1;
}


/* ==== 00406918 ShowWindow ==== */

BOOL __stdcall ShowWindow(HWND hWnd,int nCmdShow)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406918. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = ShowWindow(hWnd,nCmdShow);
  return BVar1;
}


/* ==== 00406920 SystemParametersInfoA ==== */

BOOL __stdcall SystemParametersInfoA(UINT uiAction,UINT uiParam,PVOID pvParam,UINT fWinIni)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406920. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = SystemParametersInfoA(uiAction,uiParam,pvParam,fWinIni);
  return BVar1;
}


/* ==== 00406928 TrackPopupMenu ==== */

BOOL __stdcall
TrackPopupMenu(HMENU hMenu,UINT uFlags,int x,int y,int nReserved,HWND hWnd,RECT *prcRect)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406928. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = TrackPopupMenu(hMenu,uFlags,x,y,nReserved,hWnd,prcRect);
  return BVar1;
}


/* ==== 00406930 TranslateMDISysAccel ==== */

BOOL __stdcall TranslateMDISysAccel(HWND hWndClient,LPMSG lpMsg)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = TranslateMDISysAccel(hWndClient,lpMsg);
  return BVar1;
}


/* ==== 00406938 TranslateMessage ==== */

BOOL __stdcall TranslateMessage(MSG *lpMsg)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406938. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = TranslateMessage(lpMsg);
  return BVar1;
}


/* ==== 00406940 UnhookWindowsHookEx ==== */

BOOL __stdcall UnhookWindowsHookEx(HHOOK hhk)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406940. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = UnhookWindowsHookEx(hhk);
  return BVar1;
}


/* ==== 00406948 UnregisterClassA ==== */

BOOL __stdcall UnregisterClassA(LPCSTR lpClassName,HINSTANCE hInstance)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406948. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = UnregisterClassA(lpClassName,hInstance);
  return BVar1;
}


/* ==== 00406950 UpdateWindow ==== */

BOOL __stdcall UpdateWindow(HWND hWnd)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406950. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = UpdateWindow(hWnd);
  return BVar1;
}


/* ==== 00406958 WaitMessage ==== */

BOOL __stdcall WaitMessage(void)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406958. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = WaitMessage();
  return BVar1;
}


/* ==== 00406960 WinHelpA ==== */

BOOL __stdcall WinHelpA(HWND hWndMain,LPCSTR lpszHelp,UINT uCommand,ULONG_PTR dwData)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406960. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = WinHelpA(hWndMain,lpszHelp,uCommand,dwData);
  return BVar1;
}


/* ==== 00406968 WindowFromPoint ==== */

HWND __stdcall WindowFromPoint(POINT Point)

{
  HWND pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406968. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = WindowFromPoint(Point);
  return pHVar1;
}


/* ==== 00406970 FUN_00406970 ==== */

uint FUN_00406970(uint param_1,int param_2)

{
  return param_1 & 0xffff | param_2 << 0x10;
}


/* ==== 0040697c FUN_0040697c ==== */

void FUN_0040697c(void)

{
  GetTickCount();
  return;
}


/* ==== 00406984 FUN_00406984 ==== */

undefined4 FUN_00406984(void)

{
  return 0;
}


/* ==== 00406988 FUN_00406988 ==== */

void FUN_00406988(UINT flags_val,SIZE_T bytes)

{
  HGLOBAL hMem;
  
  hMem = GlobalAlloc(flags_val,bytes);
  GlobalLock(hMem);
  return;
}


/* ==== 00406998 FUN_00406998 ==== */

void FUN_00406998(LPCVOID mem,SIZE_T bytes,UINT flags_val)

{
  HGLOBAL mem_2;
  
  mem_2 = GlobalHandle(mem);
  GlobalUnlock(mem_2);
  mem_2 = GlobalReAlloc(mem_2,bytes,flags_val);
  GlobalLock(mem_2);
  return;
}


/* ==== 004069b4 FUN_004069b4 ==== */

void FUN_004069b4(LPCVOID mem)

{
  HGLOBAL hMem;
  
  hMem = GlobalHandle(mem);
  GlobalUnlock(hMem);
  GlobalFree(hMem);
  return;
}


/* ==== 004069c8 FUN_004069c8 ==== */

uint FUN_004069c8(uint param_1,uint param_2)

{
  return param_1 | (param_2 & 0xff0000) << 8;
}


/* ==== 004069d4 FUN_004069d4 ==== */

void FUN_004069d4(undefined4 param_1,int *param_2)

{
  short local_4;
  short sStack_2;
  
  local_4 = (short)param_1;
  *param_2 = (int)local_4;
  sStack_2 = (short)((uint)param_1 >> 0x10);
  param_2[1] = (int)sStack_2;
  return;
}


/* ==== 004069e8 FUN_004069e8 ==== */

undefined4 FUN_004069e8(undefined2 *param_1)

{
  undefined4 local_4;
  
  local_4 = CONCAT22(param_1[2],*param_1);
  return local_4;
}


/* ==== 00406a00 FUN_00406a00 ==== */

void FUN_00406a00(LPCSTR class_name,LPCSTR window_name,DWORD style,LPVOID param,HINSTANCE instance,
                 HMENU menu,HWND wnd_parent,int height_val,int width_val,int y_val,int x_val)

{
  CreateWindowExA(0,class_name,window_name,style,x_val,y_val,width_val,height_val,wnd_parent,menu,
                  instance,param);
  return;
}


/* ==== 00406a34 FUN_00406a34 ==== */

HWND FUN_00406a34(UINT *param_1,UINT *param_2,UINT *param_3,LRESULT *param_4,LRESULT *param_5)

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


/* ==== 00407984 FUN_00407984 ==== */

void FUN_00407984(uint param_1,uint param_2,undefined2 *param_3,undefined2 *param_4)

{
  *param_3 = (short)(param_1 / (param_2 & 0xffff));
  *param_4 = (short)(param_1 % (param_2 & 0xffff));
  return;
}


/* ==== 004079a0 FUN_004079a0 ==== */

void FUN_004079a0(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  byte *local_8;
  
  puStack_18 = &stack0xfffffffc;
  local_8 = (byte *)0x0;
  puStack_1c = &LAB_004079f2;
  puStack_20 = (undefined1 *)*in_FS_OFFSET;
  *in_FS_OFFSET = &puStack_20;
  FUN_00405298(param_1,(int *)&local_8);
  uVar1 = FUN_0040a974((int)&DAT_00407528,'\x01',local_8,param_3,param_2);
  FUN_0040346c(uVar1);
  *in_FS_OFFSET = param_3;
  puStack_20 = &LAB_004079f9;
  FUN_004039b8((int *)&local_8);
  return;
}


/* ==== 00407a00 FUN_00407a00 ==== */

undefined4 * FUN_00407a00(uint param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_004026b8(param_1);
  FUN_00402a2c(puVar1,param_1,0);
  return puVar1;
}


/* ==== 00407a20 FUN_00407a20 ==== */

void FUN_00407a20(byte *param_1,int *param_2)

{
  byte bVar1;
  uint i_val;
  byte *pbVar2;
  
  i_val = FUN_00403c38((int)param_1);
  FUN_00403f6c(param_2,i_val);
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


/* ==== 00407a5c FUN_00407a5c ==== */

undefined4 FUN_00407a5c(int *param_1,int *param_2,uint param_3)

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


/* ==== 00407a7c FUN_00407a7c ==== */

int FUN_00407a7c(char *param_1,char *param_2)

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
LAB_00407a9b:
  do {
    if (i_val != 0) {
      i_val = i_val - 1;
      pcVar2 = param_2 + 1;
      pcVar1 = param_1 + 1;
      bVar7 = *param_1 == *param_2;
      param_1 = pcVar1;
      param_2 = pcVar2;
      if (bVar7) goto LAB_00407a9b;
    }
    if (bVar7) goto LAB_00407ac9;
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
LAB_00407ac9:
      return uVar3 - uVar4;
    }
  } while( true );
}


/* ==== 00407ad0 FUN_00407ad0 ==== */

undefined4 FUN_00407ad0(char *param_1,char *param_2)

{
  int iVar1;
  
  if (param_1 != param_2) {
    if (param_1 == (char *)0x0) {
      return 0;
    }
    if ((param_2 == (char *)0x0) || (*(int *)(param_1 + -4) != *(int *)(param_2 + -4))) {
      return 0;
    }
    iVar1 = FUN_00407a7c(param_1,param_2);
    param_1 = (char *)0x0;
    if (iVar1 != 0) {
      return 0;
    }
  }
  return CONCAT31((int3)((uint)param_1 >> 8),1);
}


/* ==== 00407af4 FUN_00407af4 ==== */

void FUN_00407af4(undefined *param_1,int *param_2)

{
  uint cchLength;
  undefined4 *puVar1;
  
  cchLength = FUN_00403c38((int)param_1);
  puVar1 = (undefined4 *)FUN_00403dfc(param_1);
  FUN_00403aa0(param_2,puVar1,cchLength);
  if (0 < (int)cchLength) {
    CharLowerBuffA((LPSTR)*param_2,cchLength);
  }
  return;
}


/* ==== 00407b28 FUN_00407b28 ==== */

int FUN_00407b28(undefined *param_1,undefined *param_2)

{
  int count2;
  PCNZCH lpString2;
  int cchCount1;
  PCNZCH lpString1;
  
  count2 = FUN_00403c38((int)param_2);
  lpString2 = FUN_00403dfc(param_2);
  cchCount1 = FUN_00403c38((int)param_1);
  lpString1 = FUN_00403dfc(param_1);
  count2 = CompareStringA(0x400,1,lpString1,cchCount1,lpString2,count2);
  return count2 + -2;
}


/* ==== 00407b60 FUN_00407b60 ==== */

bool FUN_00407b60(undefined *param_1,undefined *param_2)

{
  int count2;
  PCNZCH lpString2;
  int cchCount1;
  PCNZCH lpString1;
  
  count2 = FUN_00403c38((int)param_2);
  lpString2 = FUN_00403dfc(param_2);
  cchCount1 = FUN_00403c38((int)param_1);
  lpString1 = FUN_00403dfc(param_1);
  count2 = CompareStringA(0x400,1,lpString1,cchCount1,lpString2,count2);
  return count2 == 2;
}


/* ==== 00407b9c FUN_00407b9c ==== */

int FUN_00407b9c(PCNZCH string1,PCNZCH string2,int param_3)

{
  int compare_string;
  
  compare_string = CompareStringA(0x400,1,string1,param_3,string2,param_3);
  return compare_string + -2;
}


/* ==== 00407bbc FUN_00407bbc ==== */

void FUN_00407bbc(int param_1,int *param_2)

{
  int i_val;
  int j;
  
  i_val = FUN_00403c38(param_1);
  for (j = 1; (j <= i_val && (*(byte *)(param_1 + -1 + j) < 0x21)); j = j + 1) {
  }
  if (i_val < j) {
    FUN_004039b8(param_2);
  }
  else {
    for (; *(byte *)(param_1 + -1 + i_val) < 0x21; i_val = i_val + -1) {
    }
    FUN_00403e40(param_1,j,(i_val - j) + 1,param_2);
  }
  return;
}


/* ==== 00407c0c FUN_00407c0c ==== */

undefined4 FUN_00407c0c(char *param_1)

{
  char cVar1;
  int i_val;
  undefined4 uVar2;
  int j;
  
  uVar2 = 0;
  i_val = FUN_00403c38((int)param_1);
  if ((i_val != 0) &&
     (((cVar1 = *param_1, (byte)(cVar1 + 0xbfU) < 0x1a || (cVar1 == '_')) ||
      ((byte)(cVar1 + 0x9fU) < 0x1a)))) {
    i_val = FUN_00403c38((int)param_1);
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


/* ==== 00407c70 FUN_00407c70 ==== */

void FUN_00407c70(undefined4 param_1,int *param_2)

{
  undefined4 local_8;
  undefined1 local_4;
  
  local_4 = 0;
  local_8 = param_1;
  FUN_00408750(param_2,&DAT_00407c9c,&local_8,0);
  return;
}


/* ==== 00407ca0 FUN_00407ca0 ==== */

undefined4 FUN_00407ca0(byte *param_1)

{
  undefined4 uVar1;
  int local_14;
  byte *local_10;
  undefined1 local_c;
  
  uVar1 = FUN_00402a4c(param_1,&local_14);
  if (local_14 != 0) {
    local_c = 0xb;
    local_10 = param_1;
    FUN_004079a0((undefined4 *)PTR_PTR_00446b8c,&local_10,0);
  }
  return uVar1;
}


/* ==== 00407cdc FUN_00407cdc ==== */

undefined4 FUN_00407cdc(byte *param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  int local_8;
  
  local_8 = param_3;
  uVar1 = FUN_00402a4c(param_1,&local_8);
  if (local_8 != 0) {
    uVar1 = param_2;
  }
  return uVar1;
}


/* ==== 00407cf4 FUN_00407cf4 ==== */

void FUN_00407cf4(undefined *param_1,uint param_2)

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
  dwShareMode = *(DWORD *)(&DAT_0044613c + ((param_2 & 0xf0) >> 4) * 4);
  dwDesiredAccess = *(DWORD *)(&DAT_00446130 + (param_2 & 3) * 4);
  lpFileName = FUN_00403dfc(param_1);
  CreateFileA(lpFileName,dwDesiredAccess,dwShareMode,lpSecurityAttributes,dwCreationDisposition,
              dwFlagsAndAttributes,hTemplateFile);
  return;
}


/* ==== 00407d34 FUN_00407d34 ==== */

void FUN_00407d34(undefined *param_1)

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
  lpFileName = FUN_00403dfc(param_1);
  CreateFileA(lpFileName,dwDesiredAccess,dwShareMode,lpSecurityAttributes,dwCreationDisposition,
              dwFlagsAndAttributes,hTemplateFile);
  return;
}


/* ==== 00407d58 FUN_00407d58 ==== */

DWORD FUN_00407d58(HANDLE file,LPVOID buffer,DWORD number_of_bytes_to_read)

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


/* ==== 00407d84 FUN_00407d84 ==== */

DWORD FUN_00407d84(HANDLE file,LPCVOID buffer,DWORD number_of_bytes_to_write)

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


/* ==== 00407db0 FUN_00407db0 ==== */

void FUN_00407db0(HANDLE file,LONG distance_to_move,DWORD move_method)

{
  SetFilePointer(file,distance_to_move,(PLONG)0x0,move_method);
  return;
}


/* ==== 00407dbc FUN_00407dbc ==== */

void FUN_00407dbc(HANDLE object)

{
  CloseHandle(object);
  return;
}


/* ==== 00407dc4 FUN_00407dc4 ==== */

undefined4 FUN_00407dc4(undefined *param_1)

{
  LPCSTR lpFileName;
  HANDLE hFindFile;
  BOOL BVar1;
  _WIN32_FIND_DATAA *lpFindFileData;
  _WIN32_FIND_DATAA win32_find_data;
  _FILETIME local_10;
  undefined4 local_8;
  
  lpFindFileData = &win32_find_data;
  lpFileName = FUN_00403dfc(param_1);
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


/* ==== 00407e2c FUN_00407e2c ==== */

undefined4 FUN_00407e2c(undefined *param_1)

{
  int iVar1;
  
  iVar1 = FUN_00407dc4(param_1);
  return CONCAT31((int3)((uint)(iVar1 + 1) >> 8),iVar1 + 1 != 0);
}


/* ==== 00407e3c FUN_00407e3c ==== */

void FUN_00407e3c(undefined *param_1)

{
  LPCSTR lpFileName;
  
  lpFileName = FUN_00403dfc(param_1);
  GetFileAttributesA(lpFileName);
  return;
}


/* ==== 00407e50 FUN_00407e50 ==== */

DWORD FUN_00407e50(undefined *param_1,DWORD file_attributes)

{
  LPCSTR lpFileName;
  BOOL BVar1;
  DWORD DVar2;
  
  DVar2 = 0;
  lpFileName = FUN_00403dfc(param_1);
  BVar1 = SetFileAttributesA(lpFileName,file_attributes);
  if (BVar1 == 0) {
    DVar2 = GetLastError();
  }
  return DVar2;
}


/* ==== 00407e78 FUN_00407e78 ==== */

undefined * FUN_00407e78(undefined *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined *puVar3;
  
  iVar1 = FUN_00403c38((int)param_1);
  if (iVar1 == 0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    puVar3 = param_1 + iVar1 + -1;
    uVar2 = FUN_0040b1fc(param_1,iVar1);
    if ((char)uVar2 == '\x02') {
      puVar3 = puVar3 + -1;
    }
  }
  return puVar3;
}


/* ==== 00407ea8 FUN_00407ea8 ==== */

int FUN_00407ea8(undefined *param_1,undefined *param_2)

{
  int i_val;
  char *pcVar1;
  char *pcVar2;
  undefined4 uVar3;
  
  i_val = FUN_00403c38((int)param_2);
  pcVar1 = FUN_00403dfc(param_1);
  do {
    if (i_val < 1) {
      return i_val;
    }
    if ((param_2[i_val + -1] != '\0') &&
       (pcVar2 = FUN_00408194(pcVar1,param_2[i_val + -1]), pcVar2 != (char *)0x0)) {
      uVar3 = FUN_0040b1fc(param_2,i_val);
      if ((char)uVar3 != '\x02') {
        return i_val;
      }
      i_val = i_val + -1;
    }
    i_val = i_val + -1;
  } while( true );
}


/* ==== 00407ef8 FUN_00407ef8 ==== */

void FUN_00407ef8(undefined *param_1,int *param_2)

{
  uint uVar1;
  
  uVar1 = FUN_00407ea8(&LAB_00407f28,param_1);
  FUN_00403e40((int)param_1,1,uVar1,param_2);
  return;
}


/* ==== 00407f64 FUN_00407f64 ==== */

void FUN_00407f64(undefined *param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = FUN_00407ea8(&DAT_00407fa8,param_1);
  if ((iVar1 < 1) || (param_1[iVar1 + -1] != '.')) {
    FUN_004039b8(param_2);
  }
  else {
    FUN_00403e40((int)param_1,iVar1,0x7fffffff,param_2);
  }
  return;
}


/* ==== 00408020 FUN_00408020 ==== */

int FUN_00408020(char *param_1)

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


/* ==== 00408038 FUN_00408038 ==== */

char * FUN_00408038(char *param_1)

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


/* ==== 0040804c FUN_0040804c ==== */

void FUN_0040804c(undefined4 *param_1,undefined4 *param_2,uint param_3)

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


/* ==== 00408088 FUN_00408088 ==== */

char * FUN_00408088(char *param_1,char *param_2)

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


/* ==== 004080b0 FUN_004080b0 ==== */

char * FUN_004080b0(char *param_1,char *param_2,int param_3)

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


/* ==== 004080e4 FUN_004080e4 ==== */

void FUN_004080e4(char *param_1,undefined *param_2)

{
  int iVar1;
  char *pcVar2;
  
  iVar1 = FUN_00403c38((int)param_2);
  pcVar2 = FUN_00403dfc(param_2);
  FUN_004080b0(param_1,pcVar2,iVar1);
  return;
}


/* ==== 00408108 FUN_00408108 ==== */

void FUN_00408108(char *param_1,undefined *param_2,int param_3)

{
  char *pcVar1;
  
  pcVar1 = FUN_00403dfc(param_2);
  FUN_004080b0(param_1,pcVar1,param_3);
  return;
}


/* ==== 00408128 FUN_00408128 ==== */

int FUN_00408128(char *param_1,char *param_2)

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


/* ==== 0040814c FUN_0040814c ==== */

void FUN_0040814c(char *param_1,char *param_2,int param_3)

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
LAB_00408165:
    do {
      if (i_val != 0) {
        i_val = i_val + -1;
        pcVar1 = param_2 + 1;
        pcVar7 = param_1 + 1;
        bVar8 = *param_1 == *param_2;
        param_1 = pcVar7;
        param_2 = pcVar1;
        if (bVar8) goto LAB_00408165;
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


/* ==== 00408194 FUN_00408194 ==== */

char * FUN_00408194(char *param_1,char param_2)

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


/* ==== 004081b4 FUN_004081b4 ==== */

char * FUN_004081b4(char *param_1,char *param_2)

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


/* ==== 00408208 FUN_00408208 ==== */

int * FUN_00408208(int param_1)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_004026b8(param_1 + 4);
  *piVar1 = param_1 + 4;
  return piVar1 + 1;
}


/* ==== 0040821c FUN_0040821c ==== */

int FUN_0040821c(int param_1)

{
  return *(int *)(param_1 + -4) + -4;
}


/* ==== 00408228 FUN_00408228 ==== */

undefined4 FUN_00408228(char *param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  
  if (param_1 == (char *)0x0) {
    return 0;
  }
  iVar1 = FUN_00408020(param_1);
  piVar2 = FUN_00408208(iVar1 + 1U);
  uVar3 = FUN_0040804c(piVar2,(undefined4 *)param_1,iVar1 + 1U);
  return uVar3;
}


/* ==== 00408254 FUN_00408254 ==== */

void FUN_00408254(int param_1)

{
  if (param_1 != 0) {
    FUN_004026d0(param_1 + -4);
  }
  return;
}


/* ==== 00408264 FUN_00408264 ==== */

/* WARNING: Type propagation algorithm not settling */

void FUN_00408264(int param_1,byte *param_2,uint param_3)

{
  undefined4 uVar1;
  undefined1 auStack_35 [33];
  undefined1 *local_14;
  undefined1 local_10;
  
  if (0x1f < param_3) {
    param_3 = 0x1f;
  }
  uVar1 = FUN_0040b220(param_2,param_3 - 1);
  if ((char)uVar1 == '\x01') {
    param_3 = param_3 - 1;
  }
  FUN_0040804c((undefined4 *)((int)auStack_35 + 1),(undefined4 *)param_2,param_3);
  auStack_35[param_3 + 1] = 0;
  local_10 = 6;
  local_14 = (undefined1 *)((int)auStack_35 + 1);
  FUN_004079a0((undefined4 *)(&PTR_PTR_00446150)[param_1],&local_14,0);
  return;
}


/* ==== 004082bc FUN_004082bc ==== */

void FUN_004082bc(int *param_1,VARIANTARG *variantarg)

{
  FUN_00404a18(param_1,variantarg);
  return;
}


/* ==== 004082d0 FUN_004082d0 ==== */

void FUN_004082d0(int *param_1)

{
  FUN_004039b8(param_1);
  return;
}


/* ==== 004082dc FUN_004082dc ==== */

void FUN_004082dc(byte *param_1,byte *param_2,byte *param_3,undefined4 param_4,undefined4 param_5,
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
LAB_00408300:
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
        if (*pbVar9 != 0x25) goto code_r0x00408326;
      }
      pbVar9 = param_1 + (uint)bVar13 * -2 + 1;
      *param_1 = (byte)uVar3;
      param_2 = param_2 + -1;
      param_1 = pbVar9;
      if (param_2 == (byte *)0x0) break;
    } while( true );
  }
LAB_00408312:
  FUN_004086c4((int)param_1 - (int)local_8);
  return;
code_r0x00408326:
  pbVar9 = param_3 + -2;
  while( true ) {
    cVar2 = (char)uVar3;
    pbVar10 = param_3;
    if (cVar2 == '-') {
      if (param_3 == pbVar6) goto LAB_00408312;
      pbVar10 = param_3 + (uint)bVar13 * -2 + 1;
      uVar3 = CONCAT31((int3)(uVar3 >> 8),*param_3);
    }
    uVar3 = FUN_004083be(uVar3,param_2,pbVar6);
    uVar5 = (undefined3)(uVar3 >> 8);
    pbVar6 = extraout_ECX;
    if ((char)uVar3 != ':') break;
    local_c = pbVar9;
    if (pbVar10 == extraout_ECX) goto LAB_00408312;
    param_3 = pbVar10 + (uint)bVar13 * -2 + 1;
    uVar3 = CONCAT31(uVar5,*pbVar10);
    param_2 = extraout_EDX;
  }
  pbVar8 = extraout_EDX;
  param_3 = pbVar10;
  if ((char)uVar3 == '.') {
    if (pbVar10 == extraout_ECX) goto LAB_00408312;
    param_3 = pbVar10 + (uint)bVar13 * -2 + 1;
    uVar3 = FUN_004083be(CONCAT31(uVar5,*pbVar10),extraout_EDX,extraout_ECX);
    pbVar6 = extraout_ECX_00;
    pbVar8 = extraout_EDX_00;
  }
  pVVar4 = FUN_00408407((byte)uVar3);
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
    uVar3 = FUN_004082d0(&local_10);
  }
  goto LAB_00408300;
}


/* ==== 004083be FUN_004083be ==== */

uint FUN_004083be(uint param_1,undefined4 param_2,byte *param_3)

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
LAB_00408312:
      uVar1 = FUN_004086c4(unaff_EDI - *(int *)(unaff_EBP + -4));
      return uVar1;
    }
    param_1 = CONCAT31((int3)(uVar1 >> 8),*unaff_ESI);
  }
  else {
    while ((0x2f < (byte)param_1 && ((byte)param_1 < 0x3a))) {
      if (unaff_ESI == param_3) goto LAB_00408312;
      param_1 = (uint)*unaff_ESI;
      unaff_ESI = unaff_ESI + 1;
    }
  }
  return param_1;
}


/* ==== 00408407 FUN_00408407 ==== */

VARIANTARG * FUN_00408407(byte param_1)

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
  if (*(uint *)(unaff_EBP + 8) < uVar7) goto LAB_00408474;
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
        uVar5 = FUN_0040854e(-(int)pVVar6);
        *(undefined1 *)((int)&((VARIANTARG *)((int)unaff_ESI + -0x10))->n1 + 0xf) = 0x2d;
        return (VARIANTARG *)CONCAT31((int3)((uint)uVar5 >> 8),0x2d);
      }
    }
    else if (bVar12 != 0x55) {
      if (bVar12 == 0x58) {
        uVar7 = 0x10;
        goto LAB_00408553;
      }
      goto switchD_00408427_caseD_1;
    }
    uVar7 = 10;
    goto LAB_00408553;
  default:
    goto switchD_00408427_caseD_1;
  case 2:
    if (bVar12 == 0x53) {
      return pVVar6;
    }
    goto switchD_00408427_caseD_1;
  case 3:
    uVar3 = 0;
    goto LAB_00408649;
  case 4:
    if (bVar12 != 0x53) goto switchD_00408427_caseD_1;
    p_Var4 = &pVVar6->n1;
    pVVar6 = (VARIANTARG *)CONCAT31(uVar9,*(byte *)p_Var4);
    uVar7 = (uint)*(byte *)p_Var4;
    goto LAB_004085ff;
  case 5:
    if (bVar12 != 0x50) goto switchD_00408427_caseD_1;
    *(undefined4 *)(unaff_EBP + -0x20) = 8;
    uVar7 = 0x10;
LAB_00408553:
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
switchD_00408427_caseD_1:
    do {
      uVar5 = 0;
LAB_00408474:
      i_val = FUN_004086b9(uVar5);
      pVVar6 = (VARIANTARG *)
               FUN_00408264(i_val,*(byte **)(unaff_EBP + -0x14),
                            *(int *)(unaff_EBP + -0x24) - (int)*(byte **)(unaff_EBP + -0x14));
      bVar12 = extraout_CL;
switchD_00408427_caseD_10:
      piVar1 = (int *)(unaff_EBP + -0x30);
      *piVar1 = *(int *)&pVVar6->n1;
      *(ULONG *)(unaff_EBP + -0x2c) = (pVVar6->n1).decVal.Hi32;
      if (bVar12 == 0x44) {
        if ((*(uint *)(unaff_EBP + -0x2c) & 0x80000000) != 0) {
          i_val = *piVar1;
          *piVar1 = -*piVar1;
          *(int *)(unaff_EBP + -0x2c) = *(int *)(unaff_EBP + -0x2c) + (uint)(i_val != 0);
          *(int *)(unaff_EBP + -0x2c) = -*(int *)(unaff_EBP + -0x2c);
          uVar5 = FUN_004084c7();
          *(undefined1 *)((int)&((VARIANTARG *)((int)unaff_ESI + -0x10))->n1 + 0xf) = 0x2d;
          return (VARIANTARG *)CONCAT31((int3)((uint)uVar5 >> 8),0x2d);
        }
code_r0x004084c7:
        uVar5 = 10;
        goto LAB_004084cc;
      }
      if (bVar12 == 0x55) goto code_r0x004084c7;
    } while (bVar12 != 0x58);
    uVar5 = 0x10;
LAB_004084cc:
    pbVar15 = (byte *)(unaff_EBP + -0x51);
    do {
      uVar7 = FUN_00405d29(*piVar1,*(uint *)(unaff_EBP + -0x2c),uVar5,uVar5,0);
      bVar12 = (char)uVar7 + 0x30;
      if (0x39 < bVar12) {
        bVar12 = (char)uVar7 + 0x37;
      }
      pbVar15 = pbVar15 + -1;
      *pbVar15 = bVar12;
      i_val = FUN_00405c34(*piVar1,*(uint *)(unaff_EBP + -0x2c),uVar5,uVar5,0);
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
    unaff_ESI = FUN_00403ba0;
    goto LAB_004085d6;
  case 0xb:
    pVVar8 = pVVar6;
    if (bVar12 != 0x53) goto switchD_00408427_caseD_1;
    break;
  case 0xc:
    uVar3 = 1;
LAB_00408649:
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
        if (bVar12 != 0x4d) goto switchD_00408427_caseD_1;
        sVar14 = (short)CONCAT31(uVar9,4);
      }
      uVar10 = 0x12;
      uVar7 = *(uint *)(unaff_EBP + -0x20);
      if ((0x12 < uVar7) && (uVar7 = 2, bVar12 == 0x4d)) {
        uVar7 = (uint)DAT_004474f4;
      }
    }
    pVVar6 = (VARIANTARG *)
             FUN_0040bffe((undefined1 *)(unaff_EBP + -0x71),pVVar6,(char)((ushort)sVar14 >> 8),uVar7
                          ,uVar10,(byte)sVar14);
    return pVVar6;
  case 0xd:
    if (bVar12 != 0x53) goto switchD_00408427_caseD_1;
    if ((pVVar6->n1).n2.vt < 2) {
      return pVVar6;
    }
    pVVar6 = (VARIANTARG *)FUN_004082bc((int *)(unaff_EBP + -0xc),pVVar6);
    pVVar8 = *(VARIANTARG **)(unaff_EBP + -0xc);
    break;
  case 0xf:
    unaff_ESI = FUN_00403c00;
LAB_004085d6:
    if (bVar12 != 0x53) goto switchD_00408427_caseD_1;
    (*unaff_ESI)(unaff_EBP + -0x10,pVVar6);
    pVVar6 = *(VARIANTARG **)(unaff_EBP + -0x10);
    pVVar8 = pVVar6;
    break;
  case 0x10:
    goto switchD_00408427_caseD_10;
  }
  if (pVVar8 == (VARIANTARG *)0x0) {
    return pVVar6;
  }
  uVar7 = *(uint *)((int)&pVVar8[-1].n1 + 0xc);
LAB_004085ff:
  if (*(uint *)(unaff_EBP + -0x20) < uVar7) {
    return pVVar6;
  }
  return pVVar6;
}


/* ==== 004084c7 FUN_004084c7 ==== */

void FUN_004084c7(void)

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
    uVar1 = FUN_00405d29(*unaff_EBX,unaff_EBX[1],10,10,0);
    bVar3 = (char)uVar1 + 0x30;
    if (0x39 < bVar3) {
      bVar3 = (char)uVar1 + 0x37;
    }
    pbVar4 = pbVar4 + -1;
    *pbVar4 = bVar3;
    i_val = FUN_00405c34(*unaff_EBX,unaff_EBX[1],10,10,0);
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


/* ==== 00408522 caseD_0 ==== */

void switchD_00408427::caseD_0(uint param_1,undefined4 param_2,char param_3)

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
      FUN_0040854e(-param_1);
      *(undefined1 *)(unaff_ESI + -1) = 0x2d;
      return;
    }
  }
  else if (param_3 != 'U') {
    if (param_3 != 'X') {
      do {
        i_val = FUN_004086b9(0);
        piVar2 = (int *)FUN_00408264(i_val,*(byte **)(unaff_EBP + -0x14),
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
            FUN_004084c7();
            *(undefined1 *)(unaff_ESI + -1) = 0x2d;
            return;
          }
code_r0x004084c7:
          uVar4 = 10;
          goto LAB_004084cc;
        }
        if (extraout_CL == 'U') goto code_r0x004084c7;
      } while (extraout_CL != 'X');
      uVar4 = 0x10;
LAB_004084cc:
      pbVar8 = (byte *)(unaff_EBP + -0x51);
      do {
        uVar5 = FUN_00405d29(*piVar1,*(uint *)(unaff_EBP + -0x2c),uVar4,uVar4,0);
        bVar6 = (char)uVar5 + 0x30;
        if (0x39 < bVar6) {
          bVar6 = (char)uVar5 + 0x37;
        }
        pbVar8 = pbVar8 + -1;
        *pbVar8 = bVar6;
        i_val = FUN_00405c34(*piVar1,*(uint *)(unaff_EBP + -0x2c),uVar4,uVar4,0);
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
    goto LAB_00408553;
  }
  uVar5 = 10;
LAB_00408553:
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


/* ==== 0040854e FUN_0040854e ==== */

void FUN_0040854e(uint param_1)

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


/* ==== 004086b9 FUN_004086b9 ==== */

undefined4 FUN_004086b9(undefined4 param_1)

{
  int unaff_EBP;
  
  FUN_004039b8((int *)(unaff_EBP + -0x10));
  return param_1;
}


/* ==== 004086c4 FUN_004086c4 ==== */

void FUN_004086c4(undefined4 param_1)

{
  FUN_004086b9(param_1);
  return;
}


/* ==== 004086d4 FUN_004086d4 ==== */

byte * FUN_004086d4(byte *param_1,byte *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = FUN_00408020((char *)param_2);
  iVar1 = FUN_004082dc(param_1,(byte *)0x7fffffff,param_2,param_4,param_3,iVar1);
  param_1[iVar1] = 0;
  return param_1;
}


/* ==== 00408708 FUN_00408708 ==== */

byte * FUN_00408708(byte *param_1,byte *param_2,byte *param_3,undefined4 param_4,undefined4 param_5)

{
  int iVar1;
  
  iVar1 = FUN_00408020((char *)param_3);
  iVar1 = FUN_004082dc(param_1,param_2,param_3,param_4,param_5,iVar1);
  param_1[iVar1] = 0;
  return param_1;
}


/* ==== 0040873c FUN_0040873c ==== */

void FUN_0040873c(byte *param_1,undefined4 param_2,undefined4 param_3,int *param_4)

{
  FUN_00408750(param_4,param_1,param_2,param_3);
  return;
}


/* ==== 00408750 FUN_00408750 ==== */

/* WARNING: Removing unreachable block (ram,0x0040877a) */

void FUN_00408750(int *param_1,byte *param_2,undefined4 param_3,undefined4 param_4)

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
  iVar1 = FUN_00403c38((int)param_2);
  if (iVar1 < 0xc02) {
    iVar1 = FUN_00403c38((int)local_8);
    uVar2 = FUN_004082dc(local_100e,(byte *)0x1001,local_8,param_4,local_c,iVar1);
    uVar3 = 0x1002;
  }
  else {
    uVar2 = FUN_00403c38((int)local_8);
    uVar3 = uVar2;
  }
  if ((int)uVar2 < (int)(uVar3 - 1)) {
    FUN_00403aa0(param_1,(undefined4 *)local_100e,uVar2);
  }
  else {
    while ((int)(uVar3 - 1) <= (int)uVar2) {
      uVar3 = uVar3 * 2;
      FUN_004039b8(param_1);
      FUN_00403f6c(param_1,uVar3);
      iVar1 = FUN_00403c38((int)local_8);
      uVar2 = FUN_004082dc((byte *)*param_1,(byte *)(uVar3 - 1),local_8,param_4,local_c,iVar1);
    }
    FUN_00403f6c(param_1,uVar2);
  }
  return;
}


/* ==== 00408818 FUN_00408818 ==== */

void FUN_00408818(int *param_1)

{
  uint uVar1;
  undefined4 local_44 [16];
  
  uVar1 = FUN_0040bffe((undefined1 *)local_44,&stack0x00000004,'\0',0,0xf,0);
  FUN_00403aa0(param_1,local_44,uVar1);
  return;
}


/* ==== 00408848 FUN_00408848 ==== */

void FUN_00408848(undefined *param_1)

{
  byte *pbVar1;
  undefined4 uVar2;
  float10 local_18;
  undefined *local_c;
  undefined1 local_8;
  
  pbVar1 = FUN_00403dfc(param_1);
  uVar2 = FUN_0040c7a0(pbVar1,&local_18,'\0');
  if ((char)uVar2 == '\0') {
    local_8 = 0xb;
    local_c = param_1;
    FUN_004079a0((undefined4 *)PTR_PTR_00446adc,&local_c,0);
  }
  return;
}


/* ==== 00408884 FUN_00408884 ==== */

void FUN_00408884(undefined4 *param_1,undefined4 param_2,undefined4 param_3,double param_4)

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
    uVar3 = (undefined4)(uVar1 % (ulonglong)DAT_0044615c);
    iVar2 = -(int)(uVar1 / DAT_0044615c);
  }
  else {
    iVar2 = (int)(uVar1 / DAT_0044615c);
    uVar3 = (undefined4)(uVar1 % (ulonglong)DAT_0044615c);
  }
  *param_1 = uVar3;
  param_1[1] = iVar2 + 0xa955a;
  return;
}


/* ==== 004088c4 FUN_004088c4 ==== */

undefined1 FUN_004088c4(ushort param_1,ushort param_2,ushort param_3,double *param_4,ushort param_5)

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


/* ==== 00408934 FUN_00408934 ==== */

void FUN_00408934(undefined2 *param_1,undefined2 *param_2,undefined2 *param_3,undefined2 *param_4,
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
  FUN_00408884(local_10,param_2,param_3,(double)CONCAT44(param_6,param_5));
  FUN_00407984(local_10[0],CONCAT22(extraout_var,60000),&local_6,puVar1);
  FUN_00407984((uint)local_6,CONCAT22(extraout_var_00,0x3c),param_1,param_2);
  FUN_00407984((uint)local_8,CONCAT22(extraout_var_01,1000),param_3,param_4);
  return;
}


/* ==== 00408990 FUN_00408990 ==== */

undefined4 FUN_00408990(uint param_1)

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


/* ==== 004089cc FUN_004089cc ==== */

undefined1 FUN_004089cc(uint param_1,ushort param_2,ushort param_3,double *param_4)

{
  uint uVar1;
  int i_val;
  int j;
  int iVar2;
  undefined1 local_7;
  
  local_7 = 0;
  uVar1 = FUN_00408990(param_1);
  iVar2 = (uVar1 & 0x7f) * 0x18;
  if (((((ushort)param_1 != 0) && ((ushort)param_1 < 10000)) && (param_2 != 0)) &&
     (((param_2 < 0xd && (param_3 != 0)) &&
      (param_3 <= *(ushort *)(iVar2 + 0x4460d6 + (uint)param_2 * 2))))) {
    i_val = param_2 - 1;
    if (0 < i_val) {
      j = 1;
      do {
        param_3 = param_3 + *(short *)(iVar2 + 0x4460d6 + j * 2);
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


/* ==== 00408a94 FUN_00408a94 ==== */

void FUN_00408a94(short *param_1,ushort *param_2,short *param_3,undefined2 *param_4,
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
  FUN_00408884(&local_1c,param_2,param_3,(double)CONCAT44(param_6,param_5));
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
    FUN_00407984(uVar4,CONCAT22((short)((uint)(local_18 % 7) >> 0x10),0x8eac),&local_14,&local_12);
    if (local_14 == 4) {
      local_14 = 3;
      local_12 = local_12 + 0x8eac;
    }
    sVar2 = local_14 * 100;
    FUN_00407984((uint)local_12,CONCAT22(extraout_var,0x5b5),&local_14,&local_12);
    sVar3 = local_14 * 4;
    FUN_00407984((uint)local_12,CONCAT22(extraout_var_00,0x16d),&local_14,&local_12);
    if (local_14 == 4) {
      local_14 = 3;
      local_12 = local_12 + 0x16d;
    }
    sVar5 = sVar5 + sVar2 + sVar3 + local_14;
    uVar4 = FUN_00408990(CONCAT22((short)((uint)param_4 >> 0x10),sVar5));
    i_val = 1;
    for (; uVar1 = *(ushort *)((uVar4 & 0x7f) * 0x18 + 0x4460d6 + (uint)i_val * 2),
        uVar1 <= local_12; local_12 = local_12 - uVar1) {
      i_val = i_val + 1;
    }
    *local_8 = sVar5;
    *local_c = i_val;
    *local_10 = local_12 + 1;
  }
  return;
}


/* ==== 00408bd8 FUN_00408bd8 ==== */

void FUN_00408bd8(short *param_1,ushort *param_2,short *param_3,undefined4 param_4,
                 undefined4 param_5)

{
  undefined4 uStack_8;
  
  uStack_8 = param_3;
  FUN_00408a94(param_1,param_2,param_3,(undefined2 *)((int)&uStack_8 + 2),param_4,param_5);
  return;
}


/* ==== 00408bf8 FUN_00408bf8 ==== */

int FUN_00408bf8(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5)

{
  undefined4 local_c;
  int local_8;
  
  FUN_00408884(&local_c,param_2,param_3,(double)CONCAT44(param_5,param_4));
  return local_8 % 7 + 1;
}


/* ==== 00408c20 FUN_00408c20 ==== */

WORD FUN_00408c20(void)

{
  _SYSTEMTIME systemtime;
  
  GetLocalTime(&systemtime);
  return systemtime.wYear;
}


/* ==== 00408c34 FUN_00408c34 ==== */

void FUN_00408c34(undefined4 *param_1,uint param_2,undefined4 param_3,int param_4)

{
  uint uVar1;
  
  uVar1 = 0x100 - *(int *)(param_4 + -0x104);
  if ((int)param_2 < (int)uVar1) {
    uVar1 = param_2;
  }
  if (uVar1 != 0) {
    FUN_004027d0(param_1,(undefined4 *)(param_4 + -0x100 + *(int *)(param_4 + -0x104)),uVar1);
  }
  *(int *)(param_4 + -0x104) = *(int *)(param_4 + -0x104) + uVar1;
  return;
}


/* ==== 00408c78 FUN_00408c78 ==== */

void FUN_00408c78(undefined4 *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  uint uVar1;
  undefined4 extraout_ECX;
  
  uVar1 = FUN_00403c38((int)param_1);
  FUN_00408c34(param_1,uVar1,extraout_ECX,param_4);
  return;
}


/* ==== 00408c98 FUN_00408c98 ==== */

void FUN_00408c98(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

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
  uVar1 = FUN_004082dc(local_14,(byte *)0x10,&DAT_00446160,1,&local_24,4);
  FUN_00408c34((undefined4 *)local_14,uVar1,extraout_ECX,param_4);
  return;
}


/* ==== 00408ce4 FUN_00408ce4 ==== */

void FUN_00408ce4(void)

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


/* ==== 00408d10 FUN_00408d10 ==== */

void FUN_00408d10(void)

{
  int in_stack_00000004;
  
  if (*(char *)(in_stack_00000004 + -0x13) == '\0') {
    FUN_00408bd8((short *)(in_stack_00000004 + -0xe),(ushort *)(in_stack_00000004 + -0x10),
                 (short *)(in_stack_00000004 + -0x12),
                 *(undefined4 *)(*(int *)(in_stack_00000004 + 8) + 8),
                 *(undefined4 *)(*(int *)(in_stack_00000004 + 8) + 0xc));
    *(undefined1 *)(in_stack_00000004 + -0x13) = 1;
  }
  return;
}


/* ==== 00408d48 FUN_00408d48 ==== */

void FUN_00408d48(void)

{
  int in_stack_00000004;
  
  if (*(char *)(in_stack_00000004 + -0x1d) == '\0') {
    FUN_00408934((undefined2 *)(in_stack_00000004 + -0x16),(undefined2 *)(in_stack_00000004 + -0x18)
                 ,(undefined2 *)(in_stack_00000004 + -0x1a),
                 (undefined2 *)(in_stack_00000004 + -0x1c),
                 *(undefined4 *)(*(int *)(in_stack_00000004 + 8) + 8),
                 *(undefined4 *)(*(int *)(in_stack_00000004 + 8) + 0xc));
    *(undefined1 *)(in_stack_00000004 + -0x1d) = 1;
  }
  return;
}


/* ==== 00408d88 FUN_00408d88 ==== */

void FUN_00408d88(int param_1,int *param_2,undefined4 param_3,int param_4)

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
  puStack_12c = &LAB_00408eda;
  uStack_130 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_130;
  FUN_004039b8(param_2);
  systemtime.wYear = *(WORD *)(param_4 + -0xe);
  systemtime.wMonth = *(WORD *)(param_4 + -0x10);
  systemtime.wDay = *(WORD *)(param_4 + -0x12);
  FUN_00403a50((int *)&local_8,0x408ef0);
  date = 0x100;
  lpDateStr = local_118;
  lpFormat = FUN_00403dfc(local_8);
  lpDate = &systemtime;
  dwFlags = 4;
  Locale = GetThreadLocale();
  date = GetDateFormatA(Locale,dwFlags,lpDate,lpFormat,lpDateStr,date);
  if (date != 0) {
    FUN_00403be8(param_2,local_118,0x100);
    if (param_1 == 1) {
      if (DAT_004475b0 == 4) {
        if (DAT_004475b2 == 1) {
          date = FUN_00403c38(*param_2);
          date = FUN_0040b238(*param_2,date);
          if (date == 4) {
            date = FUN_0040b324(*param_2,3);
            FUN_00403b70(&local_11c,local_118 + date + -1);
            uVar1 = FUN_0040b388(local_11c,2);
            FUN_00403aa0(param_2,(undefined4 *)(local_118 + date + -1),uVar1);
          }
        }
      }
      else if (DAT_004475b0 == 0x11) {
        piVar2 = param_2;
        uVar1 = FUN_0040b388(*param_2,1);
        FUN_00403e40(*param_2,1,uVar1,piVar2);
      }
    }
  }
  *in_FS_OFFSET = uStack_130;
  puStack_128 = &LAB_00408ee1;
  puStack_12c = (undefined1 *)0x408ed1;
  FUN_004039b8(&local_11c);
  puStack_12c = (undefined1 *)0x408ed9;
  FUN_004039b8((int *)&local_8);
  return;
}


/* ==== 00408ef4 FUN_00408ef4 ==== */

void FUN_00408ef4(int param_1,int *param_2,undefined4 param_3,int param_4)

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
  puStack_128 = &LAB_00408fd2;
  uStack_12c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_12c;
  FUN_004039b8(param_2);
  systemtime.wYear = *(WORD *)(param_4 + -0xe);
  systemtime.wMonth = *(WORD *)(param_4 + -0x10);
  systemtime.wDay = *(WORD *)(param_4 + -0x12);
  if (param_1 < 3) {
    FUN_00403a50((int *)&local_8,0x408fe8);
  }
  else {
    FUN_00403a50((int *)&local_8,0x408ff4);
  }
  date = 0x100;
  lpDateStr = local_118;
  lpFormat = FUN_00403dfc(local_8);
  lpDate = &systemtime;
  dwFlags = 4;
  Locale = GetThreadLocale();
  date = GetDateFormatA(Locale,dwFlags,lpDate,lpFormat,lpDateStr,date);
  if (date != 0) {
    FUN_00403be8(param_2,local_118,0x100);
    if ((param_1 == 1) && (*(char *)*param_2 == '0')) {
      piVar1 = param_2;
      date = FUN_00403c38(*param_2);
      FUN_00403e40(*param_2,2,date - 1,piVar1);
    }
  }
  *in_FS_OFFSET = uStack_12c;
  puStack_124 = &LAB_00408fd9;
  puStack_128 = (undefined1 *)0x408fd1;
  FUN_004039b8((int *)&local_8);
  return;
}


/* ==== 00408ffc FUN_00408ffc ==== */

void FUN_00408ffc(byte *param_1,undefined4 param_2,undefined1 *param_3,undefined1 *param_4)

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
  puStack_3c = &LAB_0040973d;
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
      if (((byte)(&DAT_00446108)[(int)(uint)bVar1 >> 3] >> (bVar1 & 7) & 1) == 0) {
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
               ((((byte)(&DAT_00446108)[(int)(uint)bVar2 >> 3] >> (bVar2 & 7) & 1) != 0 &&
                (local_8 = local_8 + 1, *local_8 == 0)))) break;
            local_8 = local_8 + 1;
          }
          puVar5 = param_4;
          FUN_00408c34((undefined4 *)pbVar8,(int)local_8 - (int)pbVar8,param_3,(int)param_4);
          param_3 = puVar5;
          if (*local_8 != 0) {
            local_8 = local_8 + 1;
          }
          break;
        default:
          puVar5 = param_4;
          FUN_00408c34((undefined4 *)&local_9,1,param_3,(int)param_4);
          param_3 = puVar5;
          break;
        case 0x2f:
          puVar5 = param_4;
          FUN_00408c34((undefined4 *)&DAT_004474f5,1,param_3,(int)param_4);
          param_3 = puVar5;
          break;
        case 0x3a:
          puVar5 = param_4;
          FUN_00408c34((undefined4 *)&DAT_00447500,1,param_3,(int)param_4);
          param_3 = puVar5;
          break;
        case 0x41:
          FUN_00408d48();
          pbVar8 = local_8;
          pbVar9 = local_8 + -1;
          iVar4 = FUN_0040814c((char *)pbVar9,"AM/PM",5);
          if (iVar4 == 0) {
            if (0xb < local_1a) {
              pbVar9 = pbVar8 + 2;
            }
            param_3 = param_4;
            FUN_00408c34((undefined4 *)pbVar9,2,extraout_ECX_04,(int)param_4);
            local_8 = local_8 + 4;
            local_22 = '\x01';
          }
          else {
            iVar4 = FUN_0040814c((char *)pbVar9,"A/P",3);
            if (iVar4 == 0) {
              if (0xb < local_1a) {
                pbVar9 = pbVar8 + 1;
              }
              param_3 = param_4;
              FUN_00408c34((undefined4 *)pbVar9,1,extraout_ECX_05,(int)param_4);
              local_8 = local_8 + 2;
              local_22 = '\x01';
            }
            else {
              iVar4 = FUN_0040814c((char *)pbVar9,"AMPM",4);
              if (iVar4 == 0) {
                if (local_1a < 0xc) {
                  param_3 = param_4;
                  FUN_00408c78(DAT_00447504,extraout_EDX_06,extraout_ECX_06,(int)param_4);
                }
                else {
                  param_3 = param_4;
                  FUN_00408c78(DAT_00447508,extraout_EDX_06,extraout_ECX_06,(int)param_4);
                }
                local_8 = local_8 + 3;
                local_22 = '\x01';
              }
              else {
                iVar4 = FUN_0040814c((char *)pbVar9,"AAAA",4);
                if (iVar4 == 0) {
                  puVar5 = &stack0xfffffffc;
                  FUN_00408d10();
                  param_3 = param_4;
                  iVar4 = FUN_00408bf8(param_4,extraout_EDX_07,puVar5,*(undefined4 *)(param_4 + 8),
                                       *(undefined4 *)(param_4 + 0xc));
                  FUN_00408c78(*(undefined4 **)(&DAT_0044758c + iVar4 * 4),extraout_EDX_08,
                               extraout_ECX_07,(int)param_3);
                  local_8 = local_8 + 3;
                }
                else {
                  iVar4 = FUN_0040814c((char *)pbVar9,"AAA",3);
                  if (iVar4 == 0) {
                    puVar5 = &stack0xfffffffc;
                    FUN_00408d10();
                    param_3 = param_4;
                    iVar4 = FUN_00408bf8(param_4,extraout_EDX_09,puVar5,*(undefined4 *)(param_4 + 8)
                                         ,*(undefined4 *)(param_4 + 0xc));
                    FUN_00408c78(*(undefined4 **)(&DAT_00447570 + iVar4 * 4),extraout_EDX_10,
                                 extraout_ECX_09,(int)param_3);
                    local_8 = local_8 + 2;
                  }
                  else {
                    param_3 = param_4;
                    FUN_00408c34((undefined4 *)&local_9,1,extraout_ECX_08,(int)param_4);
                  }
                }
              }
            }
          }
          break;
        case 0x43:
          puVar5 = &stack0xfffffffc;
          FUN_00408ce4();
          FUN_00408ffc(DAT_004474f8,extraout_EDX_11,puVar5,param_4);
          param_3 = &stack0xfffffffc;
          FUN_00408d48();
          if (((local_1a != 0) || (local_1c != 0)) || (local_1e != 0)) {
            puVar5 = param_4;
            FUN_00408c34((undefined4 *)&DAT_0040976c,1,param_3,(int)param_4);
            param_3 = param_4;
            FUN_00408ffc(DAT_00447510,extraout_EDX_12,puVar5,param_4);
          }
          break;
        case 0x44:
          puVar5 = &stack0xfffffffc;
          FUN_00408ce4();
          if (local_10 - 1U < 2) {
            puVar5 = &stack0xfffffffc;
            FUN_00408d10();
            param_3 = param_4;
            FUN_00408c98((uint)local_16,local_10,puVar5,(int)param_4);
          }
          else if (local_10 == 3) {
            param_3 = param_4;
            iVar4 = FUN_00408bf8(param_4,extraout_EDX_02,puVar5,*(undefined4 *)(param_4 + 8),
                                 *(undefined4 *)(param_4 + 0xc));
            FUN_00408c78(*(undefined4 **)(&DAT_00447570 + iVar4 * 4),extraout_EDX_03,extraout_ECX,
                         (int)param_3);
          }
          else if (local_10 == 4) {
            param_3 = param_4;
            iVar4 = FUN_00408bf8(param_4,extraout_EDX_02,puVar5,*(undefined4 *)(param_4 + 8),
                                 *(undefined4 *)(param_4 + 0xc));
            FUN_00408c78(*(undefined4 **)(&DAT_0044758c + iVar4 * 4),extraout_EDX_04,extraout_ECX_00
                         ,(int)param_3);
          }
          else if (local_10 == 5) {
            param_3 = param_4;
            FUN_00408ffc(DAT_004474f8,extraout_EDX_02,puVar5,param_4);
          }
          else {
            param_3 = param_4;
            FUN_00408ffc(DAT_004474fc,extraout_EDX_02,puVar5,param_4);
          }
          break;
        case 0x45:
          FUN_00408ce4();
          puVar10 = &stack0xfffffffc;
          FUN_00408d10();
          puVar5 = &stack0xfffffffc;
          param_3 = param_4;
          FUN_00408ef4(local_10,(int *)&local_2c,puVar10,(int)&stack0xfffffffc);
          FUN_00408c78(local_2c,extraout_EDX_00,puVar5,(int)param_3);
          break;
        case 0x47:
          FUN_00408ce4();
          puVar10 = &stack0xfffffffc;
          FUN_00408d10();
          puVar5 = &stack0xfffffffc;
          param_3 = param_4;
          FUN_00408d88(local_10,(int *)&local_28,puVar10,(int)&stack0xfffffffc);
          FUN_00408c78(local_28,extraout_EDX,puVar5,(int)param_3);
          break;
        case 0x48:
          FUN_00408ce4();
          puVar5 = &stack0xfffffffc;
          FUN_00408d48();
          local_23 = 0;
          pbVar8 = local_8;
          while (bVar1 = *pbVar8, bVar1 != 0) {
            if (((byte)(&DAT_00446108)[(int)(uint)bVar1 >> 3] >> (bVar1 & 7) & 1) == 0) {
              bVar1 = *pbVar8;
              if (bVar1 < 0x49) {
                if (bVar1 == 0x48) break;
                if ((bVar1 == 0x22) || (bVar1 == 0x27)) {
                  local_23 = local_23 ^ 1;
                }
                else if (bVar1 == 0x41) goto LAB_0040934f;
              }
              else if (bVar1 == 0x61) {
LAB_0040934f:
                if (local_23 == 0) {
                  iVar4 = FUN_0040814c((char *)pbVar8,"AM/PM",5);
                  puVar5 = extraout_ECX_01;
                  if (((iVar4 == 0) ||
                      (iVar4 = FUN_0040814c((char *)pbVar8,"A/P",3), puVar5 = extraout_ECX_02,
                      iVar4 == 0)) ||
                     (iVar4 = FUN_0040814c((char *)pbVar8,"AMPM",4), puVar5 = extraout_ECX_03,
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
          FUN_00408c98((uint)uVar3,local_10,puVar5,(int)param_4);
          break;
        case 0x4d:
          FUN_00408ce4();
          puVar5 = &stack0xfffffffc;
          FUN_00408d10();
          if (local_10 - 1U < 2) {
            param_3 = param_4;
            FUN_00408c98((uint)local_14,local_10,puVar5,(int)param_4);
          }
          else if (local_10 - 1U == 2) {
            param_3 = param_4;
            FUN_00408c78((undefined4 *)(&DAT_00447510)[local_14],extraout_EDX_01,puVar5,(int)param_4
                        );
          }
          else {
            param_3 = param_4;
            FUN_00408c78(*(undefined4 **)(&DAT_00447540 + (uint)local_14 * 4),extraout_EDX_01,puVar5
                         ,(int)param_4);
          }
          break;
        case 0x4e:
          FUN_00408ce4();
          puVar5 = &stack0xfffffffc;
          FUN_00408d48();
          if (2 < local_10) {
            local_10 = 2;
          }
          param_3 = param_4;
          FUN_00408c98((uint)local_1c,local_10,puVar5,(int)param_4);
          break;
        case 0x53:
          FUN_00408ce4();
          puVar5 = &stack0xfffffffc;
          FUN_00408d48();
          if (2 < local_10) {
            local_10 = 2;
          }
          param_3 = param_4;
          FUN_00408c98((uint)local_1e,local_10,puVar5,(int)param_4);
          break;
        case 0x54:
          puVar5 = &stack0xfffffffc;
          FUN_00408ce4();
          if (local_10 == 1) {
            param_3 = param_4;
            FUN_00408ffc(DAT_0044750c,extraout_EDX_05,puVar5,param_4);
          }
          else {
            param_3 = param_4;
            FUN_00408ffc(DAT_00447510,extraout_EDX_05,puVar5,param_4);
          }
          break;
        case 0x59:
          FUN_00408ce4();
          puVar5 = &stack0xfffffffc;
          FUN_00408d10();
          if (local_10 < 3) {
            param_3 = param_4;
            FUN_00408c98((uint)local_12 % 100,2,100,(int)param_4);
          }
          else {
            param_3 = param_4;
            FUN_00408c98((uint)local_12,4,puVar5,(int)param_4);
          }
          break;
        case 0x5a:
          FUN_00408ce4();
          puVar5 = &stack0xfffffffc;
          FUN_00408d48();
          if (3 < local_10) {
            local_10 = 3;
          }
          param_3 = param_4;
          FUN_00408c98((uint)local_20,local_10,puVar5,(int)param_4);
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
  puStack_38 = &LAB_00409744;
  puStack_3c = (undefined1 *)0x40973c;
  FUN_004039dc((int *)&local_2c,2);
  return;
}


/* ==== 00409770 FUN_00409770 ==== */

void FUN_00409770(int *param_1,byte *param_2,undefined1 *param_3)

{
  undefined4 local_104 [64];
  
  if (param_2 == (byte *)0x0) {
    FUN_00408ffc(&DAT_004097c8,0,param_3,&stack0xfffffffc);
  }
  else {
    FUN_00408ffc(param_2,param_2,param_3,&stack0xfffffffc);
  }
  FUN_00403aa0(param_1,local_104,0);
  return;
}


/* ==== 004097cc FUN_004097cc ==== */

void FUN_004097cc(int *param_1,undefined4 param_2,undefined1 *param_3)

{
  FUN_00409770(param_1,DAT_004474f8,param_3);
  return;
}


/* ==== 004097e4 FUN_004097e4 ==== */

void FUN_004097e4(int *param_1,undefined4 param_2,undefined1 *param_3)

{
  FUN_00409770(param_1,DAT_00447510,param_3);
  return;
}


/* ==== 004097fc FUN_004097fc ==== */

void FUN_004097fc(int *param_1,undefined4 param_2,undefined1 *param_3)

{
  FUN_00409770(param_1,(byte *)0x0,param_3);
  return;
}


/* ==== 00409810 FUN_00409810 ==== */

void FUN_00409810(int param_1,int *param_2)

{
  int iVar1;
  int i_val;
  
  i_val = *param_2;
  while( true ) {
    iVar1 = FUN_00403c38(param_1);
    if ((iVar1 < i_val) || (*(char *)(param_1 + -1 + i_val) != ' ')) break;
    i_val = i_val + 1;
  }
  *param_2 = i_val;
  return;
}


/* ==== 00409834 FUN_00409834 ==== */

bool FUN_00409834(int param_1,int *param_2,ushort *param_3,char *param_4)

{
  ushort uVar1;
  int iVar2;
  int i_val;
  
  *param_4 = '\0';
  FUN_00409810(param_1,param_2);
  i_val = *param_2;
  uVar1 = 0;
  while( true ) {
    iVar2 = FUN_00403c38(param_1);
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


/* ==== 004098c8 FUN_004098c8 ==== */

void FUN_004098c8(int param_1,int *param_2,undefined *param_3)

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
  puStack_20 = &LAB_00409941;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  local_8 = param_1;
  if (param_3 != (undefined *)0x0) {
    FUN_00409810(param_1,param_2);
    ppuVar3 = &local_c;
    uVar1 = FUN_00403c38((int)param_3);
    FUN_00403e40(local_8,*param_2,uVar1,(int *)ppuVar3);
    iVar2 = FUN_00407b28(param_3,local_c);
    if (iVar2 == 0) {
      iVar2 = FUN_00403c38((int)param_3);
      *param_2 = *param_2 + iVar2;
    }
  }
  *in_FS_OFFSET = uStack_24;
  puStack_1c = &LAB_00409948;
  puStack_20 = (undefined1 *)0x409940;
  FUN_004039b8((int *)&local_c);
  return;
}


/* ==== 00409954 FUN_00409954 ==== */

undefined4 FUN_00409954(int param_1,int *param_2,char param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  FUN_00409810(param_1,param_2);
  iVar1 = FUN_00403c38(param_1);
  if ((*param_2 <= iVar1) && (*(char *)(param_1 + -1 + *param_2) == param_3)) {
    *param_2 = *param_2 + 1;
    uVar2 = 1;
  }
  return uVar2;
}


/* ==== 0040998c FUN_0040998c ==== */

undefined4 FUN_0040998c(int param_1)

{
  byte bVar1;
  int iVar2;
  int i_val;
  
  i_val = 1;
  while( true ) {
    iVar2 = FUN_00403c38(param_1);
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


/* ==== 004099d8 FUN_004099d8 ==== */

int FUN_004099d8(int param_1,int *param_2)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  
  while( true ) {
    iVar3 = FUN_00403c38(param_1);
    if ((iVar3 < *param_2) ||
       (cVar1 = *(char *)(param_1 + -1 + *param_2),
       iVar3 = CONCAT31((int3)((uint)*param_2 >> 8),cVar1 + -0x3a), (byte)(cVar1 - 0x30U) < 10))
    break;
    uVar2 = (uint)*(byte *)(param_1 + -1 + *param_2);
    if (((byte)(&DAT_00446108)[(int)uVar2 >> 3] >> (uVar2 & 7) & 1) != 0) {
      *param_2 = *param_2 + 1;
    }
    *param_2 = *param_2 + 1;
  }
  return iVar3;
}


/* ==== 00409a14 FUN_00409a14 ==== */

undefined4 FUN_00409a14(undefined *param_1)

{
  char *string2;
  byte *pbVar1;
  PCNZCH pCVar2;
  int *piVar3;
  undefined4 *puVar4;
  int i_val;
  
  i_val = 7;
  piVar3 = &DAT_004475b8;
  puVar4 = &DAT_004475d4;
  while( true ) {
    if (*piVar3 == 0) {
      return 0;
    }
    string2 = FUN_00403dfc(param_1);
    pbVar1 = FUN_00403dfc((undefined *)*piVar3);
    pCVar2 = FUN_0040b4ac(pbVar1,string2);
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


/* ==== 00409a68 FUN_00409a68 ==== */

int FUN_00409a68(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  WORD WVar1;
  uint uVar2;
  
  if (DAT_004475b0 == 0x12) {
    if (param_1 < 100) {
      WVar1 = FUN_00408c20();
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


/* ==== 00409ac4 FUN_00409ac4 ==== */

void FUN_00409ac4(int param_1,int *param_2,double *param_3)

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
  puStack_40 = &LAB_00409dd6;
  uStack_44 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_44;
  uVar8 = 0;
  local_16 = 0;
  local_18 = 0;
  local_1c = 0;
  local_d = 0;
  local_c = param_3;
  uVar3 = FUN_0040998c((int)DAT_004474f8);
  local_e = (char)uVar3;
  local_8 = 0;
  if (*DAT_004474f8 == 'g') {
    FUN_004099d8(param_1,param_2);
    FUN_00403e40(param_1,1,*param_2 - 1,&local_24);
    FUN_00407bbc(local_24,(int *)&local_20);
    local_8 = FUN_00409a14(local_20);
  }
  else {
    pCVar4 = FUN_0040b3e8(&DAT_00409df0,DAT_004474f8);
    if (0 < (int)pCVar4) {
      local_8 = DAT_004475d4;
    }
  }
  bVar1 = FUN_00409834(param_1,param_2,&local_10,(char *)&local_19);
  if (((bVar1) && (uVar3 = FUN_00409954(param_1,param_2,DAT_004474f5), (char)uVar3 != '\0')) &&
     (bVar1 = FUN_00409834(param_1,param_2,&local_12,&local_1a), bVar1)) {
    uVar3 = FUN_00409954(param_1,param_2,DAT_004474f5);
    if ((char)uVar3 == '\0') {
      WVar2 = FUN_00408c20();
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
      bVar1 = FUN_00409834(param_1,param_2,&local_14,(char *)&local_1b);
      if (!bVar1) goto LAB_00409dbb;
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
          WVar2 = FUN_00408c20();
          uVar7 = (short)uVar8 + (short)((int)((uint)WVar2 - (uint)DAT_004460d4) / 100) * 100;
          uVar8 = (uint)uVar7;
          if ((DAT_004460d4 != 0) && ((int)(uint)uVar7 < (int)((uint)WVar2 - (uint)DAT_004460d4))) {
            uVar8 = (uint)(ushort)(uVar7 + 100);
          }
        }
      }
      else {
        uVar8 = FUN_00409a68(uVar8,extraout_EDX,extraout_ECX,(int)&stack0xfffffffc);
      }
    }
    FUN_00409954(param_1,param_2,DAT_004474f5);
    FUN_00409810(param_1,param_2);
    if ((DAT_004475b4 != '\0') && (iVar5 = FUN_00403f24("ddd",DAT_004474f8), iVar5 != 0)) {
      if ((byte)(*DAT_0044750c - 0x30U) < 10) {
        FUN_004099d8(param_1,param_2);
      }
      else {
        do {
          while ((iVar5 = FUN_00403c38(param_1), *param_2 <= iVar5 &&
                 (*(char *)(param_1 + -1 + *param_2) != ' '))) {
            *param_2 = *param_2 + 1;
          }
          FUN_00409810(param_1,param_2);
          iVar5 = FUN_00403c38(param_1);
          if (iVar5 < *param_2) break;
          ppuVar9 = &local_28;
          uVar6 = FUN_00403c38((int)DAT_00447504);
          FUN_00403e40(param_1,*param_2,uVar6,(int *)ppuVar9);
          iVar5 = FUN_00407b28(DAT_00447504,local_28);
          if (iVar5 == 0) break;
          ppuVar9 = &local_2c;
          uVar6 = FUN_00403c38((int)DAT_00447508);
          FUN_00403e40(param_1,*param_2,uVar6,(int *)ppuVar9);
          iVar5 = FUN_00407b28(DAT_00447508,local_2c);
        } while (iVar5 != 0);
      }
    }
    local_d = FUN_004089cc(uVar8,local_16,local_18,local_c);
  }
LAB_00409dbb:
  *in_FS_OFFSET = uStack_44;
  puStack_3c = &LAB_00409ddd;
  puStack_40 = (undefined1 *)0x409dd5;
  FUN_004039dc((int *)&local_2c,4);
  return;
}


/* ==== 00409e00 FUN_00409e00 ==== */

undefined1 FUN_00409e00(int param_1,int *param_2,double *param_3)

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
  cVar1 = FUN_004098c8(param_1,param_2,DAT_00447504);
  if ((cVar1 == '\0') && (cVar1 = FUN_004098c8(param_1,param_2,&DAT_00409fe4), cVar1 == '\0')) {
    cVar1 = FUN_004098c8(param_1,param_2,DAT_00447508);
    if ((cVar1 != '\0') || (cVar1 = FUN_004098c8(param_1,param_2,&DAT_00409ff0), cVar1 != '\0')) {
      iVar5 = 0xc;
    }
  }
  else {
    iVar5 = 0;
  }
  if (-1 < iVar5) {
    FUN_00409810(param_1,param_2);
  }
  bVar2 = FUN_00409834(param_1,param_2,&local_1c,local_14);
  if (!bVar2) {
    return 0;
  }
  local_1a = 0;
  uVar4 = FUN_00409954(param_1,param_2,DAT_00447500);
  if (((char)uVar4 != '\0') && (bVar2 = FUN_00409834(param_1,param_2,&local_1a,local_14), !bVar2)) {
    return 0;
  }
  local_18 = 0;
  uVar4 = FUN_00409954(param_1,param_2,DAT_00447500);
  if (((char)uVar4 != '\0') && (bVar2 = FUN_00409834(param_1,param_2,&local_18,local_14), !bVar2)) {
    return 0;
  }
  local_16 = 0;
  uVar4 = FUN_00409954(param_1,param_2,DAT_004474f3);
  if (((char)uVar4 != '\0') && (bVar2 = FUN_00409834(param_1,param_2,&local_16,local_14), !bVar2)) {
    return 0;
  }
  if (iVar5 < 0) {
    cVar1 = FUN_004098c8(param_1,param_2,DAT_00447504);
    if ((cVar1 == '\0') && (cVar1 = FUN_004098c8(param_1,param_2,&DAT_00409fe4), cVar1 == '\0')) {
      cVar1 = FUN_004098c8(param_1,param_2,DAT_00447508);
      if ((cVar1 != '\0') || (cVar1 = FUN_004098c8(param_1,param_2,&DAT_00409ff0), cVar1 != '\0')) {
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
  FUN_00409810(param_1,param_2);
  uVar3 = FUN_004088c4(local_1c,local_1a,local_18,param_3,local_16);
  return uVar3;
}


/* ==== 00409ff4 FUN_00409ff4 ==== */

void FUN_00409ff4(int param_1)

{
  char cVar1;
  int iVar2;
  double local_18;
  int local_10;
  int local_c;
  undefined1 local_8;
  
  local_10 = 1;
  cVar1 = FUN_00409ac4(param_1,&local_10,&local_18);
  if ((cVar1 != '\0') && (iVar2 = FUN_00403c38(param_1), iVar2 < local_10)) {
    return;
  }
  local_8 = 0xb;
  local_c = param_1;
  FUN_004079a0((undefined4 *)PTR_PTR_00446c10,&local_c,0);
  return;
}


/* ==== 0040a044 FUN_0040a044 ==== */

void FUN_0040a044(int param_1)

{
  char cVar1;
  int iVar2;
  double local_18;
  int local_10;
  int local_c;
  undefined1 local_8;
  
  local_10 = 1;
  cVar1 = FUN_00409e00(param_1,&local_10,&local_18);
  if ((cVar1 != '\0') && (iVar2 = FUN_00403c38(param_1), iVar2 < local_10)) {
    return;
  }
  local_8 = 0xb;
  local_c = param_1;
  FUN_004079a0((undefined4 *)PTR_PTR_00446b24,&local_c,0);
  return;
}


/* ==== 0040a094 FUN_0040a094 ==== */

void FUN_0040a094(int param_1)

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
  cVar1 = FUN_00409ac4(param_1,local_24,&local_1c);
  if ((cVar1 == '\0') ||
     ((iVar2 = FUN_00403c38(param_1), local_24[0] <= iVar2 &&
      (cVar1 = FUN_00409e00(param_1,local_24,(double *)&local_14), cVar1 == '\0')))) {
    local_24[0] = 1;
    cVar1 = FUN_00409e00(param_1,local_24,&local_2c);
    if ((cVar1 == '\0') || (iVar2 = FUN_00403c38(param_1), local_24[0] <= iVar2)) {
      local_8 = 0xb;
      local_c = param_1;
      FUN_004079a0((undefined4 *)PTR_PTR_00446a90,&local_c,0);
    }
  }
  return;
}


/* ==== 0040a158 FUN_0040a158 ==== */

void FUN_0040a158(DWORD message_id,int *param_2)

{
  uint i_val;
  CHAR local_104 [256];
  
  i_val = FormatMessageA(0x3000,(LPCVOID)0x0,message_id,0,local_104,0x100,(va_list *)0x0);
  for (; (0 < (int)i_val && (((byte)local_104[i_val - 1] < 0x21 || (local_104[i_val - 1] == 0x2e))))
      ; i_val = i_val - 1) {
  }
  FUN_00403aa0(param_2,(undefined4 *)local_104,i_val);
  return;
}


/* ==== 0040a1a4 FUN_0040a1a4 ==== */

void FUN_0040a1a4(LCID locale,LCTYPE lc_type,undefined4 *param_3,int *param_4)

{
  int locale_info;
  CHAR local_104 [256];
  
  locale_info = GetLocaleInfoA(locale,lc_type,local_104,0x100);
  if (locale_info < 1) {
    FUN_00403a0c(param_4,param_3);
  }
  else {
    FUN_00403aa0(param_4,(undefined4 *)local_104,locale_info - 1);
  }
  return;
}


/* ==== 0040a1f0 FUN_0040a1f0 ==== */

uint FUN_0040a1f0(LCID locale,LCTYPE lc_type,uint param_3)

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


/* ==== 0040a218 FUN_0040a218 ==== */

void FUN_0040a218(LCTYPE lc_type,int param_2,int param_3,int *param_4,undefined4 param_5,int param_6
                 )

{
  FUN_0040a1a4(*(LCID *)(param_6 + -4),lc_type,(undefined4 *)0x0,param_4);
  if (*param_4 == 0) {
    FUN_00405298(*(undefined4 **)(param_3 + param_2 * 4),param_4);
  }
  return;
}


/* ==== 0040a254 FUN_0040a254 ==== */

void FUN_0040a254(void)

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
  puStack_30 = &LAB_0040a367;
  uStack_34 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_34;
  thread_locale = GetThreadLocale();
  i_val = 1;
  piVar1 = (int *)&DAT_00447514;
  piVar2 = (int *)&DAT_00447544;
  do {
    FUN_0040a218(i_val + 0x43,i_val + -1,0x446164,(int *)&local_10,0xb,(int)&stack0xfffffffc);
    FUN_00403a0c(piVar1,local_10);
    FUN_0040a218(i_val + 0x37,i_val + -1,0x446194,(int *)&local_14,0xb,(int)&stack0xfffffffc);
    FUN_00403a0c(piVar2,local_14);
    i_val = i_val + 1;
    piVar2 = piVar2 + 1;
    piVar1 = piVar1 + 1;
  } while (i_val != 0xd);
  i_val = 1;
  piVar1 = (int *)&DAT_00447574;
  piVar2 = (int *)&DAT_00447590;
  do {
    local_c = (i_val + 5) % 7;
    FUN_0040a218(local_c + 0x31,i_val + -1,0x4461c4,(int *)&local_18,6,(int)&stack0xfffffffc);
    FUN_00403a0c(piVar1,local_18);
    FUN_0040a218(local_c + 0x2a,i_val + -1,0x4461e0,(int *)&local_1c,6,(int)&stack0xfffffffc);
    FUN_00403a0c(piVar2,local_1c);
    i_val = i_val + 1;
    piVar2 = piVar2 + 1;
    piVar1 = piVar1 + 1;
  } while (i_val != 8);
  *in_FS_OFFSET = uStack_34;
  puStack_2c = &LAB_0040a36e;
  puStack_30 = (undefined1 *)0x40a366;
  FUN_004039dc((int *)&local_1c,4);
  return;
}


/* ==== 0040a42c FUN_0040a42c ==== */

void FUN_0040a42c(void)

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
  puStack_14 = &LAB_0040a4c3;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  ppbVar3 = &local_8;
  LVar1 = GetThreadLocale();
  FUN_0040a1a4(LVar1,0x100b,(undefined4 *)&DAT_0040a4d8,(int *)ppbVar3);
  Calendar = FUN_00407cdc(local_8,1,extraout_ECX);
  if (Calendar - 3 < 3) {
    CVar4 = 4;
    Calendar_00 = Calendar;
    LVar1 = GetThreadLocale();
    EnumCalendarInfoA((CALINFO_ENUMPROCA)&LAB_0040a378,LVar1,Calendar_00,CVar4);
    i_val = 7;
    puVar2 = &DAT_004475d4;
    do {
      *puVar2 = 0xffffffff;
      puVar2 = puVar2 + 1;
      i_val = i_val + -1;
    } while (i_val != 0);
    CVar4 = 3;
    LVar1 = GetThreadLocale();
    EnumCalendarInfoA((CALINFO_ENUMPROCA)&LAB_0040a3b4,LVar1,Calendar,CVar4);
  }
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_0040a4ca;
  puStack_14 = (undefined1 *)0x40a4c2;
  FUN_004039b8((int *)&local_8);
  return;
}


/* ==== 0040a4dc FUN_0040a4dc ==== */

void FUN_0040a4dc(undefined4 *param_1,int *param_2)

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
  puStack_28 = &LAB_0040a69e;
  uStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_2c;
  i_val = 1;
  FUN_004039b8(param_2);
  ppbVar5 = &local_8;
  locale = GetThreadLocale();
  FUN_0040a1a4(locale,0x1009,(undefined4 *)&DAT_0040a6b4,(int *)ppbVar5);
  iVar3 = FUN_00407cdc(local_8,1,extraout_ECX);
  if (iVar3 - 3U < 3) {
    while (iVar3 = FUN_00403c38((int)param_1), i_val <= iVar3) {
      uVar4 = (uint)*(byte *)((int)param_1 + i_val + -1);
      if (((byte)(&DAT_00446108)[(int)uVar4 >> 3] >> (uVar4 & 7) & 1) == 0) {
        iVar3 = FUN_0040814c((char *)((int)param_1 + i_val + -1),"gg",2);
        if (iVar3 == 0) {
          FUN_00403c40(param_2,(undefined4 *)&DAT_0040a6c4);
          i_val = i_val + 1;
        }
        else {
          iVar3 = FUN_0040814c((char *)((int)param_1 + i_val + -1),"yyyy",4);
          if (iVar3 == 0) {
            FUN_00403c40(param_2,(undefined4 *)&DAT_0040a6d8);
            i_val = i_val + 3;
          }
          else {
            iVar3 = FUN_0040814c((char *)((int)param_1 + i_val + -1),"yy",2);
            if (iVar3 == 0) {
              FUN_00403c40(param_2,(undefined4 *)&DAT_0040a6ec);
              i_val = i_val + 1;
            }
            else {
              cVar1 = *(char *)((int)param_1 + i_val + -1);
              if ((cVar1 == 'Y') || (cVar1 == 'y')) {
                FUN_00403c40(param_2,(undefined4 *)&LAB_0040a6f8);
              }
              else {
                FUN_00403b60((int *)&local_14,
                             CONCAT31((int3)((uint)extraout_EDX_00 >> 8),
                                      *(undefined1 *)((int)param_1 + i_val + -1)));
                FUN_00403c40(param_2,local_14);
              }
            }
          }
        }
        i_val = i_val + 1;
      }
      else {
        FUN_00403e40((int)param_1,i_val,2,(int *)&local_10);
        FUN_00403c40(param_2,local_10);
        i_val = i_val + 2;
      }
    }
  }
  else {
    if ((DAT_004475b0 == 4) || ((ushort)(DAT_004475b0 - 0x11U) < 2)) {
      bVar2 = true;
    }
    else {
      bVar2 = false;
    }
    if (bVar2) {
      for (; iVar3 = FUN_00403c38((int)param_1), i_val <= iVar3; i_val = i_val + 1) {
        cVar1 = *(char *)((int)param_1 + i_val + -1);
        if ((cVar1 != 'G') && (cVar1 != 'g')) {
          FUN_00403b60((int *)&local_c,
                       CONCAT31((int3)((uint)extraout_EDX >> 8),
                                *(undefined1 *)((int)param_1 + i_val + -1)));
          FUN_00403c40(param_2,local_c);
        }
      }
    }
    else {
      FUN_00403a0c(param_2,param_1);
    }
  }
  *in_FS_OFFSET = uStack_2c;
  puStack_24 = &LAB_0040a6a5;
  puStack_28 = (undefined1 *)0x40a69d;
  FUN_004039dc((int *)&local_14,4);
  return;
}


/* ==== 0040a72c FUN_0040a72c ==== */

int FUN_0040a72c(int param_1)

{
  if (param_1 != 0) {
    param_1 = param_1 + -0x1000;
  }
  return param_1;
}


/* ==== 0040a738 FUN_0040a738 ==== */

void FUN_0040a738(int *param_1,LPCVOID address,byte *param_3,byte *param_4)

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
      goto LAB_0040a7ae;
    }
  }
  GetModuleFileNameA(DAT_004474d4,(LPSTR)local_216,0x105);
  local_c = FUN_0040a72c((int)address);
LAB_0040a7ae:
  pcVar2 = FUN_0040b54c(local_216,'\\');
  FUN_004080b0(local_111,pcVar2 + 1,0x104);
  pcVar2 = "";
  puVar4 = &DAT_0040a8b8;
  uVar3 = FUN_00402e8c(param_1,(int)&DAT_00406ed0);
  if ((char)uVar3 != '\0') {
    pcVar2 = FUN_00403dfc((undefined *)param_1[1]);
    buffer_max = FUN_00408020(pcVar2);
    if ((buffer_max != 0) && (pcVar2[buffer_max + -1] != '.')) {
      puVar4 = &DAT_0040a8bc;
    }
  }
  buffer_max = 0x100;
  lpBuffer = local_316;
  uID = *(UINT *)(PTR_PTR_00446d78 + 4);
  hInstance = (HINSTANCE)FUN_00404d50((int)DAT_004474d4);
  LoadStringA(hInstance,uID,(LPSTR)lpBuffer,buffer_max);
  FUN_00402c60(*param_1,local_45c);
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
  FUN_00408708(local_8,param_4,local_316,4,&local_35c);
  FUN_00408020((char *)local_8);
  return;
}


/* ==== 0040a8c0 FUN_0040a8c0 ==== */

void FUN_0040a8c0(int *param_1,LPCVOID address)

{
  undefined *puVar1;
  HINSTANCE hInstance;
  UINT uID;
  CHAR *lpBuffer;
  int cchBufferMax;
  CHAR local_440 [64];
  byte local_400 [1024];
  
  FUN_0040a738(param_1,address,local_400,(byte *)0x400);
  lpBuffer = local_440;
  if (*PTR_DAT_00446ccc == '\0') {
    cchBufferMax = 0x40;
    uID = *(UINT *)(PTR_PTR_00446b00 + 4);
    hInstance = (HINSTANCE)FUN_00404d50(DAT_004474d4);
    LoadStringA(hInstance,uID,lpBuffer,cchBufferMax);
    MessageBoxA((HWND)0x0,(LPCSTR)local_400,local_440,0x2010);
  }
  else {
    puVar1 = (undefined *)FUN_00405840(PTR_DAT_00446b3c,(char *)local_400);
    FUN_004057c3(puVar1);
    FUN_00402788();
  }
  return;
}


/* ==== 0040a938 FUN_0040a938 ==== */

int * FUN_0040a938(int *param_1,char param_2,undefined4 *param_3)

{
  undefined4 *extraout_ECX;
  char extraout_DL;
  char cVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_ffffffe4;
  undefined4 in_stack_ffffffe8;
  
  cVar1 = '\0';
  if (param_2 != '\0') {
    param_1 = (int *)FUN_00403014((int)param_1,param_2,param_3,in_stack_ffffffe4,in_stack_ffffffe8);
    param_3 = extraout_ECX;
    cVar1 = extraout_DL;
  }
  FUN_00403a0c(param_1 + 1,param_3);
  if (cVar1 != '\0') {
    FUN_0040306c(param_1);
    *in_FS_OFFSET = in_stack_ffffffe4;
  }
  return param_1;
}


/* ==== 0040a974 FUN_0040a974 ==== */

void FUN_0040a974(int param_1,char param_2,byte *param_3,undefined4 param_4,undefined4 param_5)

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
    puStack_28 = (undefined1 *)0x40a988;
    param_1 = FUN_00403014(param_1,param_2,param_3,in_stack_ffffffdc,in_stack_ffffffe0);
    param_3 = extraout_ECX;
  }
  puStack_2c = &LAB_0040a9ce;
  uStack_30 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_30;
  puStack_28 = &stack0xfffffffc;
  FUN_0040873c(param_3,param_5,param_4,(int *)&local_8);
  FUN_00403a0c((int *)(param_1 + 4),local_8);
  *in_FS_OFFSET = uStack_30;
  puStack_28 = &LAB_0040a9d5;
  puStack_2c = (undefined1 *)0x40a9cd;
  FUN_004039b8((int *)&local_8);
  return;
}


/* ==== 0040a9f4 FUN_0040a9f4 ==== */

int * FUN_0040a9f4(int *param_1,char param_2,undefined4 *param_3)

{
  undefined4 *extraout_ECX;
  char extraout_DL;
  char cVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_ffffffe4;
  undefined4 in_stack_ffffffe8;
  
  cVar1 = '\0';
  if (param_2 != '\0') {
    param_1 = (int *)FUN_00403014((int)param_1,param_2,param_3,in_stack_ffffffe4,in_stack_ffffffe8);
    param_3 = extraout_ECX;
    cVar1 = extraout_DL;
  }
  FUN_00405298(param_3,param_1 + 1);
  if (cVar1 != '\0') {
    FUN_0040306c(param_1);
    *in_FS_OFFSET = in_stack_ffffffe4;
  }
  return param_1;
}


/* ==== 0040aa30 FUN_0040aa30 ==== */

void FUN_0040aa30(int param_1,char param_2,undefined4 *param_3,undefined4 param_4,undefined4 param_5
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
    puStack_2c = (undefined1 *)0x40aa46;
    param_1 = FUN_00403014(param_1,param_2,param_3,in_stack_ffffffd8,in_stack_ffffffdc);
    param_3 = extraout_ECX;
  }
  puStack_30 = &LAB_0040aa9c;
  uStack_34 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_34;
  ppuVar1 = &local_8;
  puStack_2c = &stack0xfffffffc;
  FUN_00405298(param_3,(int *)&local_c);
  FUN_0040873c(local_c,param_5,param_4,(int *)ppuVar1);
  FUN_00403a0c((int *)(param_1 + 4),local_8);
  *in_FS_OFFSET = uStack_34;
  puStack_2c = &LAB_0040aaa3;
  puStack_30 = (undefined1 *)0x40aa9b;
  FUN_004039dc((int *)&local_c,2);
  return;
}


/* ==== 0040aac4 EHeapException.FreeInstance ==== */

void EHeapException_FreeInstance(int *param_1)

{
  if ((char)param_1[3] != '\0') {
    TObject_FreeInstance(param_1);
  }
  return;
}


/* ==== 0040aaf0 FUN_0040aaf0 ==== */

void FUN_0040aaf0(void)

{
  int iVar1;
  int *piVar2;
  int i_val;
  int local_10;
  undefined1 local_c;
  
  iVar1 = FUN_004027b8();
  for (i_val = 0; (i_val < 7 && (iVar1 != (&DAT_004461fc)[i_val * 2])); i_val = i_val + 1) {
  }
  if (i_val < 7) {
    piVar2 = FUN_0040a938((int *)&DAT_00407044,'\x01',(undefined4 *)(&DAT_00446200)[i_val * 2]);
  }
  else {
    local_c = 0;
    local_10 = iVar1;
    piVar2 = (int *)FUN_0040aa30((int)&DAT_00407044,'\x01',(undefined4 *)PTR_PTR_00446afc,0,
                                 &local_10);
  }
  piVar2[3] = iVar1;
  return;
}


/* ==== 0040abb4 FUN_0040abb4 ==== */

void FUN_0040abb4(int param_1,undefined4 param_2,undefined4 param_3)

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
  puStack_38 = &LAB_0040ac50;
  puStack_3c = (undefined1 *)*in_FS_OFFSET;
  *in_FS_OFFSET = &puStack_3c;
  if (param_1 == 0) {
    FUN_00405298((undefined4 *)PTR_PTR_00446ca4,&local_8);
  }
  else {
    puStack_34 = &stack0xfffffffc;
    FUN_00403a50(&local_8,param_1);
  }
  local_20 = local_8;
  local_1c = 0xb;
  local_14 = 0xb;
  local_c = 0;
  piVar2 = &local_20;
  uVar1 = 2;
  local_18 = param_2;
  local_10 = param_3;
  FUN_00405298((undefined4 *)PTR_PTR_00446d00,(int *)&local_24);
  FUN_0040a974((int)&DAT_0040774c,'\x01',local_24,uVar1,piVar2);
  *in_FS_OFFSET = uVar1;
  puStack_3c = &LAB_0040ac57;
  FUN_004039b8((int *)&local_24);
  FUN_004039b8(&local_8);
  return;
}


/* ==== 0040ac60 FUN_0040ac60 ==== */

void FUN_0040ac60(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  *param_3 = param_2;
  FUN_0040346c(param_1);
  return;
}


/* ==== 0040acb8 FUN_0040acb8 ==== */

undefined4 FUN_0040acb8(int *param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = *param_1;
  if (iVar1 < -0x3fffff6d) {
    if (iVar1 == -0x3fffff6e) {
LAB_0040ad1c:
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
      if (uVar2 < 2) goto LAB_0040ad1c;
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


/* ==== 0040ad4c FUN_0040ad4c ==== */

void FUN_0040ad4c(void)

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
  int local_154;
  undefined4 local_150;
  undefined4 local_14c;
  undefined1 local_148;
  undefined4 local_144;
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
  local_154 = 0;
  local_8 = 0;
  puStack_184 = &LAB_0040af07;
  puStack_188 = (undefined1 *)*in_FS_OFFSET;
  *in_FS_OFFSET = &puStack_188;
  iVar1 = *(int *)(in_stack_00000004 + -4);
  if (*(int *)(iVar1 + 0x14) == 0) {
    puStack_180 = &stack0xfffffffc;
    FUN_00405298((undefined4 *)PTR_PTR_00446da4,&local_8);
  }
  else {
    FUN_00405298((undefined4 *)PTR_PTR_00446c84,&local_8);
  }
  uVar2 = *(undefined4 *)(iVar1 + 0x18);
  VirtualQuery(*(LPCVOID *)(iVar1 + 0xc),&module,0x1c);
  if (module.State == 0x1000) {
    DVar3 = GetModuleFileNameA(module.AllocationBase,local_129,0x105);
    if (DVar3 != 0) {
      local_14c = *(undefined4 *)(iVar1 + 0xc);
      local_148 = 5;
      FUN_00403be8(&local_154,local_129,0x105);
      func_0x00407f2c(local_154,&local_150);
      local_144 = local_150;
      local_140 = 0xb;
      local_13c = local_8;
      local_138 = 0xb;
      local_130 = 5;
      puVar5 = &local_14c;
      uVar4 = 3;
      local_134 = uVar2;
      FUN_00405298((undefined4 *)PTR_PTR_00446cdc,(int *)&local_158);
      FUN_0040a974((int)&DAT_00407584,'\x01',local_158,uVar4,puVar5);
      goto LAB_0040aed6;
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
  FUN_00405298((undefined4 *)PTR_PTR_00446d30,(int *)&local_174);
  FUN_0040a974((int)&DAT_00407584,'\x01',local_174,uVar4,puVar5);
LAB_0040aed6:
  *in_FS_OFFSET = uVar4;
  puStack_188 = &LAB_0040af0e;
  FUN_004039b8((int *)&local_174);
  FUN_004039dc((int *)&local_158,3);
  FUN_004039b8(&local_8);
  return;
}


/* ==== 0040aff4 FUN_0040aff4 ==== */

void FUN_0040aff4(void)

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
  puStack_14 = &LAB_0040b0b5;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  FUN_00405298((undefined4 *)PTR_PTR_00446b04,(int *)&local_8);
  DAT_004475f8 = FUN_0040a938((int *)&DAT_00406fe8,'\x01',local_8);
  FUN_00405298((undefined4 *)PTR_PTR_00446c58,(int *)&local_c);
  DAT_004475fc = FUN_0040a938((int *)&DAT_00407470,'\x01',local_c);
  *(undefined1 **)PTR_DAT_00446a8c = &LAB_0040ab70;
  *(undefined1 **)PTR_DAT_00446b74 = &LAB_0040afe4;
  *(undefined **)PTR_DAT_00446af4 = &DAT_00406ed0;
  *(undefined1 **)PTR_DAT_00446b58 = &LAB_0040ad38;
  *(undefined1 **)PTR_DAT_00446b7c = &LAB_0040af18;
  *(undefined1 **)PTR_DAT_00446c78 = &LAB_0040ac70;
  *(undefined1 **)PTR_DAT_00446a7c = &LAB_0040ac8c;
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_0040b0bc;
  puStack_14 = (undefined1 *)0x40b0b4;
  FUN_004039dc((int *)&local_c,2);
  return;
}


/* ==== 0040b0c0 FUN_0040b0c0 ==== */

void FUN_0040b0c0(void)

{
  *(undefined1 *)(DAT_004475f8 + 3) = 1;
  (**(code **)(*DAT_004475f8 + -8))();
  DAT_004475f8 = (int *)0x0;
  *(undefined1 *)(DAT_004475fc + 3) = 1;
  FUN_00402d14(DAT_004475fc);
  DAT_004475fc = (int *)0x0;
  *(undefined4 *)PTR_DAT_00446a8c = 0;
  *(undefined4 *)PTR_DAT_00446b74 = 0;
  *(undefined4 *)PTR_DAT_00446af4 = 0;
  *(undefined4 *)PTR_DAT_00446b58 = 0;
  *(undefined4 *)PTR_DAT_00446b7c = 0;
  *(undefined4 *)PTR_DAT_00446c78 = 0;
  return;
}


/* ==== 0040b12c FUN_0040b12c ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040b12c(void)

{
  BOOL BVar1;
  _OSVERSIONINFOA osversioninfo;
  
  osversioninfo.dwOSVersionInfoSize = 0x94;
  BVar1 = GetVersionExA(&osversioninfo);
  if (BVar1 != 0) {
    DAT_004460c0 = osversioninfo.dwPlatformId;
    DAT_004460c4 = osversioninfo.dwMajorVersion;
    DAT_004460c8 = osversioninfo.dwMinorVersion;
    _DAT_004460cc = osversioninfo.dwBuildNumber;
    FUN_00403be8((int *)&DAT_004460d0,osversioninfo.szCSDVersion,0x80);
  }
  return;
}


/* ==== 0040b184 FUN_0040b184 ==== */

undefined4 FUN_0040b184(byte *param_1,int param_2)

{
  uint uVar1;
  undefined4 uVar2;
  int i_val;
  
  uVar2 = 0;
  if ((param_1 != (byte *)0x0) && (param_1[param_2] != 0)) {
    i_val = param_2;
    if (param_2 == 0) {
      if (((byte)(&DAT_00446108)[(int)(uint)*param_1 >> 3] >> (*param_1 & 7) & 1) != 0) {
        uVar2 = 1;
      }
    }
    else {
      do {
        i_val = i_val + -1;
        if (i_val < 0) break;
      } while (((byte)(&DAT_00446108)[(int)(uint)param_1[i_val] >> 3] >> (param_1[i_val] & 7) & 1)
               != 0);
      uVar1 = param_2 - i_val & 0x80000001;
      if ((int)uVar1 < 0) {
        uVar1 = (uVar1 - 1 | 0xfffffffe) + 1;
      }
      if (uVar1 == 0) {
        uVar2 = 2;
      }
      else if (((byte)(&DAT_00446108)[(int)(uint)param_1[param_2] >> 3] >> (param_1[param_2] & 7) &
               1) != 0) {
        uVar2 = 1;
      }
    }
  }
  return uVar2;
}


/* ==== 0040b1fc FUN_0040b1fc ==== */

undefined4 FUN_0040b1fc(undefined *param_1,int param_2)

{
  undefined4 uVar1;
  byte *pbVar2;
  
  uVar1 = 0;
  if (DAT_004475b4 != '\0') {
    pbVar2 = FUN_00403dfc(param_1);
    uVar1 = FUN_0040b184(pbVar2,param_2 + -1);
  }
  return uVar1;
}


/* ==== 0040b220 FUN_0040b220 ==== */

undefined4 FUN_0040b220(byte *param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (DAT_004475b4 != '\0') {
    uVar1 = FUN_0040b184(param_1,param_2);
  }
  return uVar1;
}


/* ==== 0040b238 FUN_0040b238 ==== */

void FUN_0040b238(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_00403c38(param_1);
  if (iVar1 < param_2) {
    param_2 = FUN_00403c38(param_1);
  }
  FUN_0040b260(param_1,param_2);
  return;
}


/* ==== 0040b260 FUN_0040b260 ==== */

int FUN_0040b260(int param_1,int param_2)

{
  int j;
  uint uVar1;
  int i_val;
  
  i_val = 0;
  if (0 < param_2) {
    j = FUN_00403c38(param_1);
    if ((param_2 <= j) && (i_val = param_2, DAT_004475b4 != '\0')) {
      j = 1;
      i_val = 0;
      if (0 < param_2) {
        do {
          uVar1 = (uint)*(byte *)(param_1 + -1 + j);
          if (((byte)(&DAT_00446108)[(int)uVar1 >> 3] >> (uVar1 & 7) & 1) != 0) {
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


/* ==== 0040b2b0 FUN_0040b2b0 ==== */

void FUN_0040b2b0(int param_1,int param_2,int *param_3,int *param_4)

{
  int iVar1;
  int j;
  uint uVar2;
  int i_val;
  
  iVar1 = FUN_00403c38(param_1);
  i_val = 1;
  j = 1;
  while ((j < iVar1 && (i_val < param_2))) {
    i_val = i_val + 1;
    uVar2 = (uint)*(byte *)(param_1 + -1 + j);
    if (((byte)(&DAT_00446108)[(int)uVar2 >> 3] >> (uVar2 & 7) & 1) != 0) {
      j = j + 1;
    }
    j = j + 1;
  }
  if (((i_val == param_2) && (j < iVar1)) &&
     (uVar2 = (uint)*(byte *)(param_1 + -1 + j),
     ((byte)(&DAT_00446108)[(int)uVar2 >> 3] >> (uVar2 & 7) & 1) != 0)) {
    j = j + 1;
  }
  *param_3 = i_val;
  *param_4 = j;
  return;
}


/* ==== 0040b324 FUN_0040b324 ==== */

int FUN_0040b324(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int local_10;
  int local_c;
  
  local_10 = 0;
  iVar2 = local_10;
  if ((((0 < param_2) && (iVar1 = FUN_00403c38(param_1), iVar2 = local_10, param_2 <= iVar1)) &&
      (iVar2 = param_2, 1 < param_2)) && (iVar2 = param_2, DAT_004475b4 != '\0')) {
    FUN_0040b2b0(param_1,param_2 + -1,&local_c,&local_10);
    if ((local_c < param_2 + -1) || (iVar2 = FUN_00403c38(param_1), iVar2 <= local_10)) {
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


/* ==== 0040b388 FUN_0040b388 ==== */

int FUN_0040b388(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int local_10;
  int local_c;
  
  local_10 = 0;
  iVar1 = local_10;
  if (0 < param_2) {
    iVar1 = FUN_00403c38(param_1);
    if (iVar1 < param_2) {
      param_2 = FUN_00403c38(param_1);
    }
    iVar1 = param_2;
    if (DAT_004475b4 != '\0') {
      FUN_0040b2b0(param_1,param_2,&local_c,&local_10);
      iVar2 = FUN_00403c38(param_1);
      iVar1 = local_10;
      if (iVar2 < local_10) {
        iVar1 = FUN_00403c38(param_1);
      }
    }
  }
  local_10 = iVar1;
  return local_10;
}


/* ==== 0040b3e8 FUN_0040b3e8 ==== */

PCNZCH FUN_0040b3e8(undefined *param_1,undefined *param_2)

{
  char *string2;
  byte *pbVar1;
  PCNZCH pCVar2;
  PCNZCH pCVar3;
  
  pCVar3 = (PCNZCH)0x0;
  string2 = FUN_00403dfc(param_1);
  pbVar1 = FUN_00403dfc(param_2);
  pCVar2 = FUN_0040b4ac(pbVar1,string2);
  if (pCVar2 != (PCNZCH)0x0) {
    pCVar3 = pCVar2 + (1 - (int)pbVar1);
  }
  return pCVar3;
}


/* ==== 0040b420 FUN_0040b420 ==== */

int FUN_0040b420(undefined *param_1,int *param_2)

{
  char *pcVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  int i_val;
  
  if (DAT_004475b4 == '\0') {
    iVar4 = FUN_00407af4(param_1,param_2);
  }
  else {
    uVar3 = FUN_00403c38((int)param_1);
    iVar4 = FUN_00403f6c(param_2,uVar3);
    i_val = 1;
    if (0 < (int)uVar3) {
      do {
        iVar4 = FUN_00403e08(param_2);
        *(undefined *)(iVar4 + -1 + i_val) = param_1[i_val + -1];
        if (((byte)(&DAT_00446108)[(int)(uint)(byte)param_1[i_val + -1] >> 3] >>
             ((byte)param_1[i_val + -1] & 7) & 1) == 0) {
          cVar2 = *(char *)(*param_2 + -1 + i_val);
          iVar4 = CONCAT31((int3)((uint)*param_2 >> 8),cVar2 + -0x5b);
          if ((byte)(cVar2 + 0xbfU) < 0x1a) {
            iVar4 = FUN_00403e08(param_2);
            pcVar1 = (char *)(iVar4 + -1 + i_val);
            *pcVar1 = *pcVar1 + ' ';
          }
        }
        else {
          iVar4 = FUN_00403e08(param_2);
          *(undefined *)(iVar4 + -1 + i_val + 1) = param_1[i_val];
          i_val = i_val + 1;
        }
        i_val = i_val + 1;
      } while (i_val <= (int)uVar3);
    }
  }
  return iVar4;
}


/* ==== 0040b4ac FUN_0040b4ac ==== */

PCNZCH FUN_0040b4ac(byte *param_1,char *string2)

{
  int iVar1;
  uint cchCount1;
  char *lpString1;
  undefined4 uVar2;
  int compare_string;
  
  if ((((param_1 != (byte *)0x0) && (*param_1 != 0)) && (string2 != (char *)0x0)) &&
     (*string2 != '\0')) {
    iVar1 = FUN_00408020((char *)param_1);
    cchCount1 = FUN_00408020(string2);
    for (lpString1 = FUN_004081b4((char *)param_1,string2);
        (lpString1 != (PCNZCH)0x0 && (cchCount1 <= (uint)(iVar1 - ((int)lpString1 - (int)param_1))))
        ; lpString1 = FUN_004081b4(lpString1 + 1,string2)) {
      uVar2 = FUN_0040b220(param_1,(int)lpString1 - (int)param_1);
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


/* ==== 0040b54c FUN_0040b54c ==== */

char * FUN_0040b54c(byte *param_1,char param_2)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  
  pcVar2 = FUN_0040b574(param_1,param_2);
  pcVar3 = pcVar2;
  if (param_2 != '\0') {
    while (pcVar1 = pcVar3, pcVar1 != (char *)0x0) {
      pcVar3 = FUN_0040b574((byte *)(pcVar1 + 1),param_2);
      pcVar2 = pcVar1;
    }
  }
  return pcVar2;
}


/* ==== 0040b574 FUN_0040b574 ==== */

char * FUN_0040b574(byte *param_1,char param_2)

{
  char *pcVar1;
  undefined4 uVar2;
  
  pcVar1 = FUN_00408194((char *)param_1,param_2);
  while( true ) {
    if (pcVar1 == (char *)0x0) {
      return (char *)0x0;
    }
    uVar2 = FUN_0040b220(param_1,(int)pcVar1 - (int)param_1);
    if ((char)uVar2 == '\0') break;
    if ((char)uVar2 == '\x01') {
      pcVar1 = pcVar1 + 1;
    }
    pcVar1 = FUN_00408194(pcVar1 + 1,param_2);
  }
  return pcVar1;
}


/* ==== 0040b5b4 FUN_0040b5b4 ==== */

void FUN_0040b5b4(void)

{
  LCID LVar1;
  int iVar2;
  char cVar3;
  byte i_val;
  _cpinfo local_24;
  
  DAT_004475ac = 0x409;
  DAT_004475b0 = 9;
  DAT_004475b2 = 1;
  LVar1 = GetThreadLocale();
  if (LVar1 != 0) {
    DAT_004475ac = LVar1;
  }
  if ((ushort)LVar1 != 0) {
    DAT_004475b0 = (ushort)LVar1 & 0x3ff;
    DAT_004475b2 = (undefined2)((LVar1 & 0xffff) >> 10);
  }
  iVar2 = GetSystemMetrics(0x4a);
  DAT_004475b5 = iVar2 != 0;
  iVar2 = GetSystemMetrics(0x2a);
  DAT_004475b4 = iVar2 != 0;
  if ((bool)DAT_004475b4) {
    GetCPInfo(0,&local_24);
    for (iVar2 = 0;
        (iVar2 < 0xc && (local_24.LeadByte[iVar2] != '\0' || local_24.LeadByte[iVar2 + 1] != '\0'));
        iVar2 = iVar2 + 2) {
      i_val = local_24.LeadByte[iVar2];
      if (i_val <= local_24.LeadByte[iVar2 + 1]) {
        cVar3 = (local_24.LeadByte[iVar2 + 1] - i_val) + '\x01';
        do {
          (&DAT_00446108)[(int)(uint)i_val >> 3] =
               (&DAT_00446108)[(int)(uint)i_val >> 3] | '\x01' << (i_val & 7);
          i_val = i_val + 1;
          cVar3 = cVar3 + -1;
        } while (cVar3 != '\0');
      }
    }
  }
  return;
}


/* ==== 0040b66c FUN_0040b66c ==== */

void FUN_0040b66c(void)

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
  local_18 = &LAB_0040b937;
  local_1c = (byte *)*in_FS_OFFSET;
  *in_FS_OFFSET = &local_1c;
  FUN_0040b5b4();
  FUN_0040a254();
  if (DAT_004475b4 != '\0') {
    FUN_0040a42c();
  }
  locale = GetThreadLocale();
  local_24 = (undefined4 *)0x40b6bb;
  FUN_0040a1a4(locale,0x14,(undefined4 *)0x0,(int *)&local_14);
  FUN_00403a0c((int *)&DAT_004474ec,local_14);
  local_24 = (undefined4 *)0x40b6dd;
  FUN_0040a1a4(locale,0x1b,(undefined4 *)&DAT_0040b94c,(int *)&local_18);
  uVar1 = FUN_00407cdc(local_18,0,extraout_ECX);
  DAT_004474f0 = (undefined1)uVar1;
  local_24 = (undefined4 *)0x40b701;
  FUN_0040a1a4(locale,0x1c,(undefined4 *)&DAT_0040b94c,(int *)&local_1c);
  uVar1 = FUN_00407cdc(local_1c,0,extraout_ECX_00);
  DAT_004474f1 = (undefined1)uVar1;
  uVar2 = FUN_0040a1f0(locale,0xf,CONCAT31((int3)((uint)extraout_ECX_01 >> 8),0x2c));
  DAT_004474f2 = (undefined1)uVar2;
  uVar2 = FUN_0040a1f0(locale,0xe,CONCAT31((int3)((uint)extraout_ECX_02 >> 8),0x2e));
  DAT_004474f3 = (undefined1)uVar2;
  pbVar3 = &stack0xffffffe0;
  local_24 = (undefined4 *)0x40b74b;
  FUN_0040a1a4(locale,0x19,(undefined4 *)&DAT_0040b94c,(int *)pbVar3);
  uVar1 = FUN_00407cdc(pbVar3,0,extraout_ECX_03);
  DAT_004474f4 = (undefined1)uVar1;
  uVar2 = FUN_0040a1f0(locale,0x1d,CONCAT31((int3)((uint)extraout_ECX_04 >> 8),0x2f));
  DAT_004474f5 = (undefined1)uVar2;
  local_24 = (undefined4 *)0x40b782;
  FUN_0040a1a4(locale,0x1f,(undefined4 *)"m/d/yy",(int *)&local_28);
  FUN_0040a4dc(local_28,(int *)&local_24);
  FUN_00403a0c(&DAT_004474f8,local_24);
  local_24 = (undefined4 *)0x40b7af;
  FUN_0040a1a4(locale,0x20,(undefined4 *)"mmmm d, yyyy",(int *)&local_30);
  FUN_0040a4dc(local_30,(int *)&local_2c);
  FUN_00403a0c(&DAT_004474fc,local_2c);
  uVar2 = FUN_0040a1f0(locale,0x1e,CONCAT31((int3)((uint)extraout_ECX_05 >> 8),0x3a));
  DAT_00447500 = (undefined1)uVar2;
  local_24 = (undefined4 *)0x40b7ef;
  FUN_0040a1a4(locale,0x28,(undefined4 *)&DAT_0040b980,(int *)&local_34);
  FUN_00403a0c(&DAT_00447504,local_34);
  local_24 = (undefined4 *)0x40b811;
  FUN_0040a1a4(locale,0x29,(undefined4 *)&DAT_0040b98c,(int *)&local_38);
  FUN_00403a0c(&DAT_00447508,(undefined4 *)local_38);
  FUN_004039b8((int *)&local_c);
  FUN_004039b8((int *)&stack0xfffffff0);
  local_24 = (undefined4 *)0x40b843;
  FUN_0040a1a4(locale,0x25,(undefined4 *)&DAT_0040b94c,(int *)&local_3c);
  i_val = FUN_00407cdc(local_3c,0,extraout_ECX_06);
  if (i_val == 0) {
    FUN_00403a50((int *)&local_8,0x40b998);
  }
  else {
    FUN_00403a50((int *)&local_8,0x40b9a4);
  }
  local_24 = (undefined4 *)0x40b882;
  FUN_0040a1a4(locale,0x23,(undefined4 *)&DAT_0040b94c,(int *)&local_40);
  i_val = FUN_00407cdc(local_40,0,extraout_ECX_07);
  if (i_val == 0) {
    local_24 = (undefined4 *)0x40b8a5;
    FUN_0040a1a4(locale,0x1005,(undefined4 *)&DAT_0040b94c,(int *)&local_44);
    i_val = FUN_00407cdc(local_44,0,extraout_ECX_08);
    if (i_val == 0) {
      FUN_00403a50((int *)&stack0xfffffff0,0x40b9b0);
    }
    else {
      FUN_00403a50((int *)&local_c,0x40b9c0);
    }
  }
  local_24 = local_8;
  local_28 = (undefined4 *)&DAT_0040b9d0;
  local_30 = (undefined4 *)0x40b8ec;
  FUN_00403cf8(&DAT_0044750c,4);
  local_30 = local_c;
  local_34 = local_8;
  local_38 = ":mm:ss";
  local_40 = (byte *)0x40b909;
  local_3c = unaff_EBX;
  FUN_00403cf8(&DAT_00447510,4);
  local_40 = (byte *)0x40b917;
  uVar2 = FUN_0040a1f0(locale,0xc,CONCAT31((int3)((uint)extraout_ECX_09 >> 8),0x2c));
  DAT_004475f0 = (undefined1)uVar2;
  *in_FS_OFFSET = local_3c;
  local_34 = (undefined4 *)&LAB_0040b93e;
  local_38 = (char *)0x40b936;
  FUN_004039dc((int *)&local_44,0x10);
  return;
}


/* ==== 0040b9e4 FUN_0040b9e4 ==== */

void FUN_0040b9e4(void)

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
  puStack_24 = &LAB_0040ba6e;
  puStack_28 = (undefined1 *)*in_FS_OFFSET;
  *in_FS_OFFSET = &puStack_28;
  message_id = GetLastError();
  if (message_id == 0) {
    piVar1 = FUN_0040a9f4((int *)&DAT_00407864,'\x01',(undefined4 *)PTR_PTR_00446b4c);
  }
  else {
    local_10 = 0;
    local_14 = message_id;
    FUN_0040a158(message_id,&local_18);
    local_c = local_18;
    local_8 = 0xb;
    in_stack_ffffffd0 = 1;
    piVar1 = (int *)FUN_0040aa30((int)&DAT_00407864,'\x01',(undefined4 *)PTR_PTR_00446aa4,1,
                                 &local_14);
  }
  piVar1[3] = message_id;
  FUN_0040346c(piVar1);
  *in_FS_OFFSET = in_stack_ffffffd0;
  puStack_28 = &LAB_0040ba75;
  FUN_004039b8(&local_18);
  return;
}


/* ==== 0040ba7c FUN_0040ba7c ==== */

int FUN_0040ba7c(int param_1)

{
  if (param_1 == 0) {
    FUN_0040b9e4();
  }
  return param_1;
}


/* ==== 0040ba8c FUN_0040ba8c ==== */

void FUN_0040ba8c(void)

{
  char cVar1;
  undefined4 *puVar2;
  
  cVar1 = '\x01';
  for (puVar2 = DAT_004462e4; (cVar1 != '\0' && (puVar2 != (undefined4 *)0x0));
      puVar2 = (undefined4 *)*puVar2) {
    cVar1 = (*(code *)puVar2[1])();
  }
  return;
}


/* ==== 0040baa8 FUN_0040baa8 ==== */

void FUN_0040baa8(void)

{
  undefined4 *puVar1;
  
  while (puVar1 = DAT_004462e4, DAT_004462e4 != (undefined4 *)0x0) {
    DAT_004462e4 = (undefined4 *)*DAT_004462e4;
    FUN_004026d0((int)puVar1);
  }
  return;
}


/* ==== 0040bac8 FUN_0040bac8 ==== */

void FUN_0040bac8(void)

{
  HMODULE hModule;
  
  hModule = GetModuleHandleA("kernel32.dll");
  if (hModule != (HMODULE)0x0) {
    DAT_0044612c = GetProcAddress(hModule,"GetDiskFreeSpaceExA");
  }
  if (DAT_0044612c == (FARPROC)0x0) {
    DAT_0044612c = (FARPROC)&LAB_00407fac;
  }
  return;
}


/* ==== 0040bb24 FUN_0040bb24 ==== */

int * FUN_0040bb24(int *param_1,char param_2,undefined4 param_3)

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
    param_1 = (int *)FUN_00403014((int)param_1,param_2,param_3,in_stack_ffffffe8,in_stack_ffffffec);
    param_3 = extraout_ECX;
    cVar1 = extraout_DL;
  }
  FUN_00402ce4(param_1,'\0',param_3);
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 1));
  event = CreateEventA((LPSECURITY_ATTRIBUTES)0x0,-1,-1,(LPCSTR)0x0);
  param_1[7] = (int)event;
  FUN_00404cb0(param_1 + 10,(int)&DAT_004078e0,1);
  if (cVar1 != '\0') {
    FUN_0040306c(param_1);
    *in_FS_OFFSET = in_stack_ffffffe8;
  }
  return param_1;
}


/* ==== 0040bb8c TMultiReadExclusiveWriteSynchronizer.Destroy ==== */

void TMultiReadExclusiveWriteSynchronizer_Destroy(int *param_1,char param_2)

{
  int *piVar1;
  byte extraout_DL;
  
  piVar1 = FUN_00403074(param_1,param_2);
  FUN_0040bc08((int)piVar1);
  TObject_Destroy(piVar1,extraout_DL & 0xfc);
  CloseHandle((HANDLE)piVar1[7]);
  DeleteCriticalSection((LPCRITICAL_SECTION)(piVar1 + 1));
  if ('\0' < (char)extraout_DL) {
    FUN_00403064(piVar1);
  }
  return;
}


/* ==== 0040bbcc FUN_0040bbcc ==== */

bool FUN_0040bbcc(int param_1)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  int i_val;
  
  bVar2 = false;
  if (*(int *)(param_1 + 0x2c) != 0) {
    iVar3 = FUN_00404afc(*(int *)(param_1 + 0x28));
    for (i_val = 0;
        (i_val < iVar3 &&
        ((iVar1 = *(int *)(*(int *)(param_1 + 0x28) + i_val * 8), iVar1 == 0 ||
         (iVar1 == *(int *)(param_1 + 0x2c))))); i_val = i_val + 1) {
    }
    bVar2 = iVar3 <= i_val;
  }
  return bVar2;
}


/* ==== 0040bc08 FUN_0040bc08 ==== */

void FUN_0040bc08(int param_1)

{
  bool bVar1;
  DWORD DVar2;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 4));
  if (*(char *)(param_1 + 0x34) == '\0') {
    DVar2 = GetCurrentThreadId();
    *(DWORD *)(param_1 + 0x2c) = DVar2;
    bVar1 = FUN_0040bbcc(param_1);
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


/* ==== 0040bc54 FUN_0040bc54 ==== */

void FUN_0040bc54(int param_1)

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


/* ==== 0040bc78 FUN_0040bc78 ==== */

void FUN_0040bc78(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)*param_1;
  *param_1 = 0;
  FUN_00402d14(piVar1);
  return;
}


/* ==== 0040bc88 FUN_0040bc88 ==== */

void FUN_0040bc88(undefined *param_1,UINT mode_val)

{
  LPCSTR lpLibFileName;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  
  puStack_1c = (undefined1 *)0x40bc97;
  SetErrorMode(mode_val);
  puStack_1c = &LAB_0040bcfa;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  puStack_28 = &LAB_0040bcdc;
  uStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_2c;
  puStack_24 = &stack0xfffffffc;
  lpLibFileName = FUN_00403dfc(param_1);
  LoadLibraryA(lpLibFileName);
  *in_FS_OFFSET = uStack_2c;
  return;
}


/* ==== 0040bffe FUN_0040bffe ==== */

int FUN_0040bffe(undefined1 *param_1,undefined4 param_2,char param_3,undefined4 param_4,int param_5,
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
  FUN_0040c5a1(local_20,param_2,param_3);
  puVar3 = local_8;
  if (local_20[0] - 0x7fff < 2) {
    FUN_0040c0bc();
    puVar2 = &DAT_0040bff8 + extraout_ECX * 3;
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
    (**(code **)(&DAT_0040c09f + uVar1 * 4))();
  }
  return (int)puVar3 - (int)local_8;
}


/* ==== 0040c0bc FUN_0040c0bc ==== */

void FUN_0040c0bc(void)

{
  int unaff_EBP;
  undefined1 *unaff_EDI;
  
  if (*(char *)(unaff_EBP + -0x1a) != '\0') {
    *unaff_EDI = 0x2d;
  }
  return;
}


/* ==== 0040c5a1 FUN_0040c5a1 ==== */

void FUN_0040c5a1(undefined4 param_1,undefined4 param_2,char param_3)

{
  if (param_3 == '\0') {
    FUN_0040c5c8();
  }
  else {
    FUN_0040c6cf();
  }
  return;
}


/* ==== 0040c5c8 FUN_0040c5c8 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040c5c8(void)

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
LAB_0040c5f3:
    uVar6 = 0;
  }
  else {
    if (uVar5 != 0x7fff) {
      fVar10 = *unaff_ESI;
      *(int *)(unaff_EBP + -8) = ((int)((uVar5 - 0x3fff) * 0x4d10) >> 0x10) + 1;
      fVar10 = ABS(fVar10);
      FUN_00405870(0x12 - *(int *)(unaff_EBP + -8));
      fVar10 = ROUND(fVar10);
      *(ushort *)(unaff_EBP + -4) =
           (ushort)(_DAT_0040bfec < fVar10) << 8 | (ushort)(NAN(_DAT_0040bfec) || NAN(fVar10)) << 10
           | (ushort)(_DAT_0040bfec == fVar10) << 0xe;
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
        goto LAB_0040c5f3;
      }
      if (*(uint *)(unaff_EBP + 0xc) <= uVar5) {
        uVar5 = *(uint *)(unaff_EBP + 0xc);
      }
      if (uVar5 < 0x12) {
        if (*(byte *)((int)unaff_EBX + uVar5 + 3) < 0x35) goto LAB_0040c6aa;
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
LAB_0040c6aa:
        do {
          *(undefined1 *)((int)unaff_EBX + uVar5 + 3) = 0;
          if ((int)(uVar5 - 1) < 0) {
            bVar9 = 0;
            goto LAB_0040c6bd;
          }
          i_val = uVar5 + 2;
          uVar5 = uVar5 - 1;
        } while (*(char *)((int)unaff_EBX + i_val) == '0');
      }
      bVar9 = (byte)((ushort)*(undefined2 *)((int)unaff_ESI + 8) >> 8);
LAB_0040c6bd:
      uVar4 = (undefined2)*(undefined4 *)(unaff_EBP + -8);
      goto LAB_0040c6c0;
    }
    if ((((unkuint10)*unaff_ESI & 0x8000000000000000) != 0) &&
       ((*(int *)unaff_ESI != 0 || (*(int *)((int)unaff_ESI + 4) != -0x80000000)))) {
      uVar5 = 0x8000;
      goto LAB_0040c5f3;
    }
  }
  bVar9 = (byte)(uVar6 >> 8);
  uVar4 = (undefined2)uVar5;
  *(undefined1 *)((int)unaff_EBX + 3) = 0;
LAB_0040c6c0:
  *unaff_EBX = uVar4;
  *(byte *)(unaff_EBX + 1) = bVar9 >> 7;
  return;
}


/* ==== 0040c6cf FUN_0040c6cf ==== */

void FUN_0040c6cf(void)

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
      fVar14 = fVar14 / (float10)(int)(&DAT_0040bfd8)[4 - iVar10];
    }
    Var1 = to_bcd(fVar14);
    *(unkbyte10 *)(unaff_EBP + -0x1a) = Var1;
    psVar11 = (short *)((int)unaff_EBX + 3);
    if (i_val != 0) {
      psVar12 = unaff_EBX + 2;
      *(char *)psVar11 = (char)i_val + '0';
      i_val = 9;
      goto LAB_0040c763;
    }
    i_val = 9;
    do {
      bVar8 = *(byte *)(unaff_EBP + -0x1b + i_val);
      bVar5 = bVar8 >> 4;
      psVar12 = psVar11;
      if (bVar5 != 0) goto LAB_0040c76c;
      if ((bVar8 & 0xf) != 0) goto LAB_0040c773;
      i_val = i_val + -1;
    } while (i_val != 0);
  }
  sVar6 = 0;
  bVar8 = 0;
  *(undefined1 *)((int)unaff_EBX + 3) = 0;
LAB_0040c799:
  *unaff_EBX = sVar6;
  *(byte *)(unaff_EBX + 1) = bVar8;
  return;
LAB_0040c773:
  while( true ) {
    psVar12 = (short *)((int)psVar11 + 1);
    *(byte *)psVar11 = (bVar8 & 0xf) + 0x30;
    i_val = i_val + -1;
    if (i_val == 0) break;
LAB_0040c763:
    bVar8 = *(byte *)(unaff_EBP + -0x1b + i_val);
    bVar5 = bVar8 >> 4;
LAB_0040c76c:
    psVar11 = (short *)((int)psVar12 + 1);
    *(byte *)psVar12 = bVar5 + 0x30;
  }
  sVar6 = (short)psVar12 - ((short)unaff_EBX + 3 + (short)iVar10);
  do {
    *(char *)psVar12 = '\0';
    psVar12 = (short *)((int)psVar12 + -1);
  } while (*(char *)psVar12 == '0');
  bVar8 = (byte)(unaff_ESI[1] >> 0x1f);
  goto LAB_0040c799;
}


/* ==== 0040c7a0 FUN_0040c7a0 ==== */

undefined4 FUN_0040c7a0(byte *param_1,float10 *param_2,char param_3)

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
  FUN_0040c84b();
  bVar1 = *param_1;
  if ((bVar1 == 0x2b) || (bVar1 == 0x2d)) {
    param_1 = param_1 + 1;
  }
  FUN_0040c856();
  pbVar3 = extraout_ECX;
  if (*param_1 == DAT_004474f3) {
    param_1 = param_1 + 1;
    FUN_0040c856();
    pbVar3 = extraout_ECX_00;
  }
  if (pbVar3 != param_1) {
    if ((*param_1 & 0xdf) == 0x45) {
      param_1 = param_1 + 1;
      FUN_0040c872();
    }
    FUN_0040c84b();
    if (*param_1 == 0) {
      iVar2 = extraout_EDX;
      if (param_3 == '\x01') {
        iVar2 = extraout_EDX + 4;
      }
      FUN_00405870(iVar2);
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


/* ==== 0040c84b FUN_0040c84b ==== */

void FUN_0040c84b(void)

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


/* ==== 0040c856 FUN_0040c856 ==== */

void FUN_0040c856(void)

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


/* ==== 0040c872 FUN_0040c872 ==== */

void FUN_0040c872(void)

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


/* ==== 0040c9e4 FUN_0040c9e4 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040c9e4(void)

{
  undefined4 *in_FS_OFFSET;
  bool bVar1;
  undefined4 uStack_10;
  undefined1 *puStack_c;
  undefined1 *puStack_8;
  
  puStack_8 = &stack0xfffffffc;
  puStack_c = &LAB_0040ca4c;
  uStack_10 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_10;
  bVar1 = _DAT_004475f4 == 0;
  _DAT_004475f4 = _DAT_004475f4 + -1;
  if (bVar1) {
    FUN_004037a4((int *)&DAT_0040bd0c);
    FUN_004037c0((int *)&DAT_0040bdf8);
    if (DAT_004474c9 != '\0') {
      FUN_00403a0c((int *)&PTR_DAT_00446128,(undefined4 *)&DAT_0040ca60);
    }
    FUN_0040aff4();
    FUN_0040b66c();
    FUN_0040b12c();
    FUN_0040bac8();
  }
  *in_FS_OFFSET = uStack_10;
  return;
}


/* ==== 0040ca64 IsEqualGUID ==== */

void IsEqualGUID(void)

{
                    /* WARNING: Could not recover jumptable at 0x0040ca64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IsEqualGUID();
  return;
}


/* ==== 0040ce08 FUN_0040ce08 ==== */

int FUN_0040ce08(int param_1)

{
  return param_1 + 2 + (uint)*(byte *)(param_1 + 1);
}


/* ==== 0040ce14 FUN_0040ce14 ==== */

int FUN_0040ce14(int param_1,int param_2)

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


/* ==== 0040ce60 FUN_0040ce60 ==== */

void FUN_0040ce60(char *param_1,byte *param_2)

{
  if (*param_1 == '\x01') {
    FUN_00407ca0(param_2);
    return;
  }
  FUN_0040ce14((int)param_1,(int)param_2);
  return;
}


/* ==== 0040ce74 FUN_0040ce74 ==== */

void FUN_0040ce74(int param_1,undefined1 *param_2)

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


/* ==== 0040cee0 FUN_0040cee0 ==== */

uint FUN_0040cee0(int *param_1,undefined4 *param_2)

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


/* ==== 0040cf54 FUN_0040cf54 ==== */

void FUN_0040cf54(int *param_1,undefined4 *param_2,int param_3)

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


/* ==== 0040cfb0 FUN_0040cfb0 ==== */

void FUN_0040cfb0(int *param_1,undefined4 *param_2,byte *param_3)

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


/* ==== 0040d004 FUN_0040d004 ==== */

void FUN_0040d004(int *param_1,undefined4 *param_2,undefined4 *param_3)

{
  byte abStack_10c [256];
  
  FUN_00403c14(abStack_10c,param_3,0xff);
  FUN_0040cfb0(param_1,param_2,abStack_10c);
  return;
}


/* ==== 0040d038 FUN_0040d038 ==== */

void FUN_0040d038(int *param_1,undefined4 *param_2)

{
  FUN_00403a0c(param_1,param_2);
  return;
}


/* ==== 0040d04c FUN_0040d04c ==== */

void FUN_0040d04c(int *param_1,int param_2,undefined4 *param_3)

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
  FUN_0040d038((int *)((int)param_1 + ((uint)pcVar1 & 0xffffff)),param_3);
  return;
}


/* ==== 0040d08c FUN_0040d08c ==== */

void FUN_0040d08c(BSTR *pbstr_val,OLECHAR *psz_val)

{
  FUN_00404024(pbstr_val,psz_val);
  return;
}


/* ==== 0040d0a0 FUN_0040d0a0 ==== */

void FUN_0040d0a0(int *param_1,int param_2,OLECHAR *psz_val)

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
  FUN_0040d08c((BSTR *)((int)param_1 + ((uint)pcVar1 & 0xffffff)),psz_val);
  return;
}


/* ==== 0040d0e0 FUN_0040d0e0 ==== */

void FUN_0040d0e0(int *param_1,int param_2,LPCSTR multi_byte_str)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  OLECHAR *psz_val;
  
  puStack_18 = &stack0xfffffffc;
  psz_val = (OLECHAR *)0x0;
  puStack_1c = &LAB_0040d128;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  FUN_004040f0((BSTR)&psz_val,multi_byte_str);
  FUN_0040d0a0(param_1,param_2,psz_val);
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_0040d12f;
  puStack_1c = (undefined1 *)0x40d127;
  FUN_00403fe8(&psz_val);
  return;
}


/* ==== 0040d138 FUN_0040d138 ==== */

void FUN_0040d138(int *param_1,undefined4 *param_2,LPCSTR multi_byte_str)

{
  char cVar1;
  
  cVar1 = **(char **)*param_2;
  if (cVar1 == '\x05') {
    FUN_0040d004(param_1,param_2,(undefined4 *)multi_byte_str);
    return;
  }
  if (cVar1 == '\n') {
    FUN_0040d04c(param_1,(int)param_2,(undefined4 *)multi_byte_str);
    return;
  }
  if (cVar1 == '\v') {
    FUN_0040d0e0(param_1,(int)param_2,multi_byte_str);
  }
  return;
}


/* ==== 0040d164 FUN_0040d164 ==== */

/* WARNING: Unable to track spacebase fully for stack */

void FUN_0040d164(undefined4 param_1,undefined4 *param_2)

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
    uStack_10 = 0x40d1f5;
    (**(code **)(&DAT_0040d1bd + iVar4))(param_1,param_2,param_2[2] & 0xffffff);
  }
  else {
    pcVar1 = *(code **)(&DAT_0040d1bd + iVar4);
    puVar5 = (undefined1 *)((int)&uStack_10 + -*(int *)(&DAT_0040d1a9 + iVar4));
    *(undefined4 *)((int)&uStack_10 + -*(int *)(&DAT_0040d1a9 + iVar4)) = 0x40d193;
    piVar3 = (int *)(*pcVar1)();
    uVar2 = *(undefined4 *)(extraout_EDX + 0x10);
    if (*(byte *)(extraout_EDX + 0xb) < 0xfe) {
      *(undefined4 *)(puVar5 + -4) = 0x40d1a7;
      (*extraout_ECX)(piVar3,uVar2);
    }
    else {
      pcVar1 = *(code **)((int)(short)extraout_ECX + *piVar3);
      *(undefined4 *)(puVar5 + -4) = 0x40d1a3;
      (*pcVar1)();
    }
  }
  return;
}


/* ==== 0040d1fc FUN_0040d1fc ==== */

void FUN_0040d1fc(VARIANT *variant,VARIANTARG *pvarg_src)

{
  FUN_00404710(variant,pvarg_src);
  return;
}


/* ==== 0040d210 FUN_0040d210 ==== */

void FUN_0040d210(int *param_1,int param_2,VARIANTARG *pvarg_src)

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
  FUN_0040d1fc((VARIANT *)((int)param_1 + ((uint)pcVar1 & 0xffffff)),pvarg_src);
  return;
}


/* ==== 0040d250 FUN_0040d250 ==== */

void FUN_0040d250(int *param_1,int param_2,undefined4 *param_3)

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


/* ==== 0040d288 FUN_0040d288 ==== */

void FUN_0040d288(int *param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

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


/* ==== 0040d2c4 FUN_0040d2c4 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040d2c4(void)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_10;
  undefined1 *puStack_c;
  undefined1 *puStack_8;
  
  puStack_8 = &stack0xfffffffc;
  puStack_c = &LAB_0040d30a;
  uStack_10 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_10;
  _DAT_0044760c = _DAT_0044760c + 1;
  if (_DAT_0044760c == 0) {
    FUN_004039b8((int *)&PTR_DAT_004462f0);
    FUN_00404260((VARIANTARG *)&PTR_s_False_004462e8,&DAT_0040106c,2);
  }
  *in_FS_OFFSET = uStack_10;
  return;
}


/* ==== 0040e594 FUN_0040e594 ==== */

void FUN_0040e594(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  *param_3 = param_1;
  param_3[1] = param_2;
  return;
}


/* ==== 0040e59c FUN_0040e59c ==== */

undefined4 FUN_0040e59c(undefined2 param_1,undefined2 param_2)

{
  undefined4 local_4;
  
  local_4 = CONCAT22(param_2,param_1);
  return local_4;
}


/* ==== 0040e5ac FUN_0040e5ac ==== */

void FUN_0040e5ac(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,
                 undefined4 param_5)

{
  *param_4 = param_1;
  param_4[1] = param_2;
  param_4[2] = param_3;
  param_4[3] = param_5;
  return;
}


/* ==== 0040e5c8 FUN_0040e5c8 ==== */

void FUN_0040e5c8(int param_1,int param_2,int param_3,int *param_4,int param_5)

{
  *param_4 = param_1;
  param_4[1] = param_2;
  param_4[2] = param_3 + param_1;
  param_4[3] = param_2 + param_5;
  return;
}


/* ==== 0040e5e4 FUN_0040e5e4 ==== */

undefined4 FUN_0040e5e4(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (*(int *)(param_1 + -0x38) != 0) {
    uVar1 = *(undefined4 *)(*(int *)(param_1 + -0x38) + 2);
  }
  return uVar1;
}


/* ==== 0040e5f0 FUN_0040e5f0 ==== */

void FUN_0040e5f0(undefined4 param_1)

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
  puStack_1c = &LAB_0040e650;
  puStack_20 = (undefined1 *)*in_FS_OFFSET;
  *in_FS_OFFSET = &puStack_20;
  local_8 = 0xb;
  puVar3 = &local_c;
  uVar2 = 0;
  local_c = param_1;
  FUN_00405298((undefined4 *)PTR_PTR_00446d24,(int *)&local_10);
  uVar1 = FUN_0040a974((int)&DAT_0040d6cc,'\x01',local_10,uVar2,puVar3);
  FUN_0040346c(uVar1);
  *in_FS_OFFSET = uVar2;
  puStack_20 = &LAB_0040e657;
  FUN_004039b8((int *)&local_10);
  return;
}


/* ==== 0040e65c FUN_0040e65c ==== */

int FUN_0040e65c(int param_1)

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
  
  puStack_1c = (undefined1 *)0x40e672;
  puVar2 = (undefined4 *)FUN_0040f38c(DAT_0044761c);
  puStack_20 = &LAB_0040e6f9;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  i_val = puVar2[2];
  puStack_1c = &stack0xfffffffc;
  if (-1 < i_val + -1) {
    j = 0;
    puStack_1c = &stack0xfffffffc;
    do {
      iVar3 = FUN_0040f024(puVar2,j);
      cVar1 = FUN_00402c74(iVar3,param_1);
      if (cVar1 != '\0') {
        FUN_0040350c();
        return iVar3;
      }
      j = j + 1;
      i_val = i_val + -1;
    } while (i_val != 0);
  }
  i_val = (**(code **)(*DAT_00447620 + 0x50))(DAT_00447620,param_1);
  if (-1 < i_val) {
    i_val = (**(code **)(*DAT_00447620 + 0x18))(DAT_00447620,i_val);
    FUN_0040350c();
    return i_val;
  }
  *in_FS_OFFSET = uStack_24;
  puStack_1c = (undefined1 *)0x40e700;
  puStack_20 = (undefined1 *)0x40e6f8;
  i_val = FUN_0040f3f0(DAT_0044761c);
  return i_val;
}


/* ==== 0040e70c FUN_0040e70c ==== */

int FUN_0040e70c(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_0040e65c(param_1);
  if (iVar1 == 0) {
    FUN_0040e5f0(param_1);
  }
  return iVar1;
}


/* ==== 0040e72c FUN_0040e72c ==== */

void FUN_0040e72c(undefined4 *param_1,char *param_2)

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
  puStack_128 = &LAB_0040e7e5;
  uStack_12c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_12c;
  local_8 = param_2;
  for (local_10 = (undefined **)FUN_00402c5c(param_1);
      local_10 != &PTR_TPersistent_virtual_000_0040dabc;
      local_10 = (undefined **)FUN_00402c9c((int)local_10)) {
    psVar1 = (short *)FUN_0040e5e4((int)local_10);
    if ((psVar1 != (short *)0x0) && (j = (int)*psVar1, -1 < j + -1)) {
      i_val = 0;
      do {
        FUN_00402c60(**(int **)(psVar1 + i_val * 2 + 1),local_114);
        FUN_00403bdc((int *)&local_14,local_114);
        uVar2 = FUN_00407ad0(local_14,local_8);
        if ((char)uVar2 != '\0') goto LAB_0040e7cf;
        i_val = i_val + 1;
        j = j + -1;
      } while (j != 0);
    }
  }
  FUN_0040e65c((int)local_8);
LAB_0040e7cf:
  *in_FS_OFFSET = uStack_12c;
  puStack_124 = &LAB_0040e7ec;
  puStack_128 = (undefined1 *)0x40e7e4;
  FUN_004039b8((int *)&local_14);
  return;
}


/* ==== 0040e7f8 FUN_0040e7f8 ==== */

void FUN_0040e7f8(undefined **param_1)

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
  puStack_120 = &LAB_0040e8e6;
  uStack_124 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_124;
  puStack_128 = (undefined1 *)0x40e822;
  piVar1 = (int *)FUN_0040f38c(DAT_0044761c);
  puStack_12c = &LAB_0040e8c9;
  uStack_130 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_130;
  puStack_128 = &stack0xfffffffc;
  while( true ) {
    iVar3 = FUN_0040f080((int)piVar1,(int)param_1);
    if (iVar3 != -1) break;
    FUN_00402c60((int)param_1,local_108);
    FUN_00403bdc(&local_8,local_108);
    iVar3 = FUN_0040e65c(local_8);
    if (iVar3 != 0) {
      local_110 = local_8;
      local_10c = 0xb;
      uVar2 = FUN_0040aa30((int)&DAT_0040d5c4,'\x01',(undefined4 *)PTR_PTR_00446c90,0,&local_110);
      FUN_0040346c(uVar2);
    }
    FUN_0040eec8(piVar1,(int)param_1);
    if (param_1 == &PTR_TPersistent_virtual_000_0040dabc) break;
    param_1 = (undefined **)FUN_00402c9c((int)param_1);
  }
  *in_FS_OFFSET = uStack_130;
  puStack_128 = &LAB_0040e8d0;
  puStack_12c = (undefined1 *)0x40e8c8;
  FUN_0040f3f0(DAT_0044761c);
  return;
}


/* ==== 0040e8f4 FUN_0040e8f4 ==== */

void FUN_0040e8f4(undefined4 param_1,int param_2)

{
  int i_val;
  undefined4 *puVar1;
  
  for (i_val = param_2; -1 < i_val; i_val = i_val + -1) {
  }
  puVar1 = (undefined4 *)&stack0xfffffff4;
  if (-1 < param_2) {
    i_val = param_2 + 1;
    do {
      FUN_0040e7f8((undefined **)*puVar1);
      puVar1 = puVar1 + 1;
      i_val = i_val + -1;
    } while (i_val != 0);
  }
  return;
}


/* ==== 0040e928 FUN_0040e928 ==== */

void FUN_0040e928(PVOID param_1)

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
  
  puStack_30 = (undefined1 *)0x40e93d;
  piVar2 = (int *)FUN_0040f38c(DAT_0044761c);
  puStack_34 = &LAB_0040e9e0;
  uStack_38 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_38;
  i_val = piVar2[2] + -1;
  puStack_30 = &stack0xfffffffc;
  puVar1 = &stack0xfffffffc;
  if (-1 < i_val) {
    do {
      SVar4 = 0x1c;
      p_Var3 = &memory_basic_information;
      address = (LPCVOID)FUN_0040f024(piVar2,i_val);
      VirtualQuery(address,p_Var3,SVar4);
      if ((param_1 == (PVOID)0x0) || (param_1 == memory_basic_information.AllocationBase)) {
        FUN_0040ef14(piVar2,i_val);
      }
      i_val = i_val + -1;
      puVar1 = puStack_30;
    } while (i_val != -1);
  }
  puStack_30 = puVar1;
  i_val = (**(code **)(*DAT_00447620 + 0x14))();
  i_val = i_val + -1;
  if (-1 < i_val) {
    do {
      SVar4 = 0x1c;
      p_Var3 = &memory_basic_information;
      address = (LPCVOID)(**(code **)(*DAT_00447620 + 0x18))(DAT_00447620,i_val);
      VirtualQuery(address,p_Var3,SVar4);
      if ((param_1 == (PVOID)0x0) || (param_1 == memory_basic_information.AllocationBase)) {
        (**(code **)(*DAT_00447620 + 0x44))(DAT_00447620,i_val);
      }
      i_val = i_val + -1;
    } while (i_val != -1);
  }
  *in_FS_OFFSET = uStack_38;
  puStack_30 = &LAB_0040e9e7;
  puStack_34 = (undefined1 *)0x40e9df;
  FUN_0040f3f0(DAT_0044761c);
  return;
}


/* ==== 0040ea48 FUN_0040ea48 ==== */

void FUN_0040ea48(int *param_1,char param_2,int param_3,int param_4,int param_5)

{
  int extraout_ECX;
  char extraout_DL;
  char cVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_ffffffec;
  undefined4 in_stack_fffffff0;
  
  cVar1 = '\0';
  if (param_2 != '\0') {
    param_1 = (int *)FUN_00403014((int)param_1,param_2,param_3,in_stack_ffffffec,in_stack_fffffff0);
    param_3 = extraout_ECX;
    cVar1 = extraout_DL;
  }
  param_1[1] = param_3;
  param_1[2] = param_5;
  param_1[3] = param_4;
  if (cVar1 != '\0') {
    FUN_0040306c(param_1);
    *in_FS_OFFSET = in_stack_ffffffec;
  }
  return;
}


/* ==== 0040ea80 FUN_0040ea80 ==== */

void FUN_0040ea80(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = FUN_0040ea48((int *)&LAB_0040ea3c,'\x01',param_1,param_3,param_2);
  FUN_0040f304(DAT_00447624,iVar1);
  return;
}


/* ==== 0040eaac FUN_0040eaac ==== */

undefined4 FUN_0040eaac(int param_1)

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
  
  puStack_1c = (undefined1 *)0x40eac7;
  puVar1 = (undefined4 *)FUN_0040f38c(DAT_00447624);
  puStack_20 = &LAB_0040eb1c;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  i_val = puVar1[2];
  if (-1 < i_val + -1) {
    j = 0;
    puStack_1c = &stack0xfffffffc;
    do {
      iVar2 = FUN_0040f024(puVar1,j);
      if (*(int *)(iVar2 + 4) == param_1) {
        uVar3 = *(undefined4 *)(iVar2 + 8);
        FUN_0040350c();
        return uVar3;
      }
      j = j + 1;
      i_val = i_val + -1;
    } while (i_val != 0);
  }
  *in_FS_OFFSET = uStack_24;
  puStack_1c = (undefined1 *)0x40eb23;
  puStack_20 = (undefined1 *)0x40eb1b;
  uVar3 = FUN_0040f3f0(DAT_00447624);
  return uVar3;
}


/* ==== 0040eb30 FUN_0040eb30 ==== */

undefined4 FUN_0040eb30(char *param_1,undefined4 *param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int i_val;
  
  if (-1 < param_4) {
    i_val = param_4 + 1;
    puVar2 = (undefined4 *)(param_3 + 4);
    do {
      uVar1 = FUN_00407ad0((char *)*puVar2,param_1);
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


/* ==== 0040eb70 FUN_0040eb70 ==== */

undefined1 FUN_0040eb70(int param_1,int *param_2,int *param_3,int param_4)

{
  int i_val;
  
  if (-1 < param_4) {
    i_val = param_4 + 1;
    do {
      if (param_1 == *param_3) {
        FUN_00403a0c(param_2,(undefined4 *)param_3[1]);
        return 1;
      }
      param_3 = param_3 + 2;
      i_val = i_val + -1;
    } while (i_val != 0);
  }
  return 0;
}


/* ==== 0040ebb4 FUN_0040ebb4 ==== */

void FUN_0040ebb4(undefined *param_1,HMODULE module,undefined4 *param_3)

{
  LPCSTR lpName;
  HRSRC pHVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar4;
  LPCSTR lpType;
  
  if (module == (HMODULE)0x0) {
    module = DAT_004474d4;
  }
  lpType = (LPCSTR)0xa;
  lpName = FUN_00403dfc(param_1);
  pHVar1 = FindResourceA(module,lpName,lpType);
  if (pHVar1 != (HRSRC)0x0) {
    piVar2 = FUN_00410fa8((int *)&PTR_TStream_virtual_000_0040dfc8,'\x01',module,(LPCSTR)0xa,param_1
                         );
    uVar4 = *in_FS_OFFSET;
    *in_FS_OFFSET = &stack0xffffffe0;
    uVar3 = FUN_00410c4c((int)piVar2,(int *)*param_3);
    *param_3 = uVar3;
    *in_FS_OFFSET = uVar4;
    FUN_00402d14(piVar2);
    return;
  }
  return;
}


/* ==== 0040ec38 FUN_0040ec38 ==== */

void FUN_0040ec38(void)

{
  int iVar1;
  LPVOID pvVar2;
  undefined4 uVar3;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  
  pvVar2 = FUN_00405fa4();
  if (*(int *)((int)pvVar2 + 0xc) == 0) {
    uVar3 = FUN_00402ce4((int *)&PTR_TList_virtual_000_0040d9ac,'\x01',extraout_ECX);
    pvVar2 = FUN_00405fa4();
    *(undefined4 *)((int)pvVar2 + 0xc) = uVar3;
  }
  pvVar2 = FUN_00405fa4();
  iVar1 = *(int *)((int)pvVar2 + 8);
  pvVar2 = FUN_00405fa4();
  FUN_0040eec8(*(int **)((int)pvVar2 + 0xc),iVar1);
  uVar3 = FUN_00402ce4((int *)&PTR_TList_virtual_000_0040d9ac,'\x01',extraout_ECX_00);
  pvVar2 = FUN_00405fa4();
  *(undefined4 *)((int)pvVar2 + 8) = uVar3;
  return;
}


/* ==== 0040ec98 FUN_0040ec98 ==== */

void FUN_0040ec98(void)

{
  undefined4 *puVar1;
  LPVOID pvVar2;
  int *piVar3;
  int i_val;
  int j;
  
  pvVar2 = FUN_00405fa4();
  puVar1 = *(undefined4 **)((int)pvVar2 + 8);
  i_val = puVar1[2];
  if (-1 < i_val + -1) {
    j = 0;
    do {
      piVar3 = (int *)FUN_0040f024(puVar1,j);
      (**(code **)(*piVar3 + 0xc))();
      j = j + 1;
      i_val = i_val + -1;
    } while (i_val != 0);
  }
  return;
}


/* ==== 0040ecc8 FUN_0040ecc8 ==== */

void FUN_0040ecc8(void)

{
  int iVar1;
  LPVOID pvVar2;
  undefined4 uVar3;
  
  pvVar2 = FUN_00405fa4();
  FUN_00402d14(*(int **)((int)pvVar2 + 8));
  pvVar2 = FUN_00405fa4();
  uVar3 = FUN_0040f10c(*(undefined4 **)((int)pvVar2 + 0xc));
  pvVar2 = FUN_00405fa4();
  *(undefined4 *)((int)pvVar2 + 8) = uVar3;
  pvVar2 = FUN_00405fa4();
  iVar1 = *(int *)(*(int *)((int)pvVar2 + 0xc) + 8);
  pvVar2 = FUN_00405fa4();
  FUN_0040ef14(*(int **)((int)pvVar2 + 0xc),iVar1 + -1);
  pvVar2 = FUN_00405fa4();
  if (*(int *)(*(int *)((int)pvVar2 + 0xc) + 8) == 0) {
    pvVar2 = FUN_00405fa4();
    FUN_0040bc78((undefined4 *)((int)pvVar2 + 0xc));
  }
  return;
}


/* ==== 0040ed3c FUN_0040ed3c ==== */

void FUN_0040ed3c(undefined **address,undefined4 param_2,undefined4 param_3,int param_4)

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
  puStack_118 = &LAB_0040edd2;
  uStack_11c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_11c;
  if ((address != &PTR_TPersistent_virtual_000_0040e30c) &&
     (address != *(undefined ***)(param_4 + -8))) {
    iVar1 = param_4;
    address_00 = (undefined **)FUN_00402c9c((int)address);
    FUN_0040ed3c(address_00,extraout_EDX,extraout_ECX,iVar1);
    FUN_00402c60((int)address,local_108);
    FUN_00403bdc((int *)&local_8,local_108);
    puVar2 = local_8;
    iVar1 = FUN_00404d48(address);
    module = (HMODULE)FUN_00404d50(iVar1);
    FUN_0040ebb4(puVar2,module,(undefined4 *)(param_4 + -4));
  }
  *in_FS_OFFSET = uStack_11c;
  puStack_114 = &LAB_0040edd9;
  puStack_118 = (undefined1 *)0x40edd1;
  FUN_004039b8((int *)&local_8);
  return;
}


/* ==== 0040ede4 FUN_0040ede4 ==== */

void FUN_0040ede4(undefined4 *param_1,undefined4 param_2)

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
  puStack_14 = (undefined1 *)0x40edfa;
  local_c = param_2;
  local_8 = param_1;
  FUN_0040bc08(DAT_00447610);
  puStack_18 = &LAB_0040ee92;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  local_e = (*(ushort *)(local_8 + 8) & 0x201) == 0;
  puStack_14 = &stack0xfffffffc;
  if ((bool)local_e) {
    puStack_20 = (undefined1 *)0x40ee2f;
    puStack_14 = &stack0xfffffffc;
    FUN_0040ec38();
  }
  puStack_24 = &LAB_0040ee73;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  puStack_20 = &stack0xfffffffc;
  address = (undefined **)FUN_00402c5c(local_8);
  local_d = FUN_0040ed3c(address,extraout_EDX,extraout_ECX,(int)puVar1);
  if (local_e != '\0') {
    FUN_0040ec98();
  }
  *in_FS_OFFSET = uStack_28;
  puStack_20 = &LAB_0040ee7a;
  if (local_e != '\0') {
    puStack_24 = (undefined1 *)0x40ee72;
    FUN_0040ecc8();
  }
  return;
}


/* ==== 0040eea8 TList.Destroy ==== */

void TList_Destroy(int *param_1,char param_2)

{
  int *piVar1;
  char extraout_DL;
  
  piVar1 = FUN_00403074(param_1,param_2);
  (**(code **)(*piVar1 + 8))();
  if ('\0' < extraout_DL) {
    FUN_00403064(piVar1);
  }
  return;
}


/* ==== 0040eec8 FUN_0040eec8 ==== */

int FUN_0040eec8(int *param_1,int param_2)

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


/* ==== 0040eefc TList.virtual_008 ==== */

void TList_virtual_008(int *param_1)

{
  FUN_0040f1c0(param_1,0);
  FUN_0040f184(param_1,0);
  return;
}


/* ==== 0040ef14 FUN_0040ef14 ==== */

void FUN_0040ef14(int *param_1,int param_2)

{
  int iVar1;
  
  if ((param_2 < 0) || (param_1[2] <= param_2)) {
    FUN_0040efb0(*param_1,(undefined4 *)PTR_PTR_00446cd8,param_2);
  }
  iVar1 = FUN_0040f024(param_1,param_2);
  param_1[2] = param_1[2] + -1;
  if (param_2 < param_1[2]) {
    FUN_004027d0((undefined4 *)(param_1[1] + 4 + param_2 * 4),
                 (undefined4 *)(param_1[1] + param_2 * 4),(param_1[2] - param_2) * 4);
  }
  if (iVar1 != 0) {
    (**(code **)(*param_1 + 4))(param_1,iVar1,2);
  }
  return;
}


/* ==== 0040ef74 FUN_0040ef74 ==== */

undefined4 FUN_0040ef74(void)

{
  int unaff_EBP;
  
  return *(undefined4 *)(unaff_EBP + 4);
}


/* ==== 0040ef78 TList.virtual_00c ==== */

void TList_virtual_00c(undefined4 param_1,byte *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 local_10;
  undefined1 local_c;
  
  FUN_0040ef74();
  local_c = 0;
  local_10 = param_3;
  uVar1 = FUN_0040a974((int)&DAT_0040d784,'\x01',param_2,0,&local_10);
  FUN_0040346c(uVar1);
  return;
}


/* ==== 0040efb0 FUN_0040efb0 ==== */

void FUN_0040efb0(undefined4 param_1,undefined4 *param_2,undefined4 param_3)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  byte *local_8;
  
  puStack_14 = &stack0xfffffffc;
  local_8 = (byte *)0x0;
  puStack_18 = &LAB_0040eff8;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  FUN_00405298(param_2,(int *)&local_8);
  TList_virtual_00c(&PTR_TList_virtual_000_0040d9ac,local_8,param_3);
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_0040efff;
  puStack_18 = (undefined1 *)0x40eff7;
  FUN_004039b8((int *)&local_8);
  return;
}


/* ==== 0040f004 FUN_0040f004 ==== */

undefined4 * FUN_0040f004(undefined4 *param_1)

{
  if (param_1[2] == param_1[3]) {
    (**(code **)*param_1)();
  }
  return param_1;
}


/* ==== 0040f01c FUN_0040f01c ==== */

void FUN_0040f01c(undefined4 *param_1)

{
  FUN_0040f024(param_1,0);
  return;
}


/* ==== 0040f024 FUN_0040f024 ==== */

undefined4 FUN_0040f024(undefined4 *param_1,int param_2)

{
  if ((param_2 < 0) || ((int)param_1[2] <= param_2)) {
    FUN_0040efb0(*param_1,(undefined4 *)PTR_PTR_00446cd8,param_2);
  }
  return *(undefined4 *)(param_1[1] + param_2 * 4);
}


/* ==== 0040f04c TList.virtual_000 ==== */

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
  FUN_0040f184(param_1,iVar2 + iVar1);
  return;
}


/* ==== 0040f080 FUN_0040f080 ==== */

int FUN_0040f080(int param_1,int param_2)

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


/* ==== 0040f0a0 FUN_0040f0a0 ==== */

void FUN_0040f0a0(int *param_1,int param_2,int param_3)

{
  if ((param_2 < 0) || (param_1[2] < param_2)) {
    FUN_0040efb0(*param_1,(undefined4 *)PTR_PTR_00446cd8,param_2);
  }
  if (param_1[2] == param_1[3]) {
    (**(code **)*param_1)();
  }
  if (param_2 < param_1[2]) {
    FUN_004027d0((undefined4 *)(param_1[1] + param_2 * 4),
                 (undefined4 *)(param_1[1] + 4 + param_2 * 4),(param_1[2] - param_2) * 4);
  }
  *(int *)(param_1[1] + param_2 * 4) = param_3;
  param_1[2] = param_1[2] + 1;
  if (param_3 != 0) {
    (**(code **)(*param_1 + 4))(param_1,param_3,0);
  }
  return;
}


/* ==== 0040f10c FUN_0040f10c ==== */

void FUN_0040f10c(undefined4 *param_1)

{
  FUN_0040f024(param_1,param_1[2] + -1);
  return;
}


/* ==== 0040f118 FUN_0040f118 ==== */

void FUN_0040f118(int *param_1,int param_2,int param_3)

{
  int iVar1;
  
  if ((param_2 < 0) || (param_1[2] <= param_2)) {
    FUN_0040efb0(*param_1,(undefined4 *)PTR_PTR_00446cd8,param_2);
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


/* ==== 0040f164 FUN_0040f164 ==== */

int FUN_0040f164(int *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_0040f080((int)param_1,param_2);
  if (-1 < iVar1) {
    FUN_0040ef14(param_1,iVar1);
  }
  return iVar1;
}


/* ==== 0040f184 FUN_0040f184 ==== */

void FUN_0040f184(undefined4 *param_1,int param_2)

{
  if ((param_2 < (int)param_1[2]) || (0x7ffffff < param_2)) {
    FUN_0040efb0(*param_1,(undefined4 *)PTR_PTR_00446c40,param_2);
  }
  if (param_2 != param_1[3]) {
    FUN_004026e8(param_1 + 1,param_2 << 2);
    param_1[3] = param_2;
  }
  return;
}


/* ==== 0040f1c0 FUN_0040f1c0 ==== */

void FUN_0040f1c0(int *param_1,int param_2)

{
  int i_val;
  int j;
  
  if ((param_2 < 0) || (0x7ffffff < param_2)) {
    FUN_0040efb0(*param_1,(undefined4 *)PTR_PTR_00446bd0,param_2);
  }
  if (param_1[3] < param_2) {
    FUN_0040f184(param_1,param_2);
  }
  i_val = param_1[2];
  if (i_val < param_2) {
    FUN_00402a2c((undefined4 *)(param_1[1] + i_val * 4),(param_2 - i_val) * 4,0);
  }
  else {
    i_val = i_val + -1;
    if (param_2 - i_val == 0 || param_2 < i_val) {
      j = (param_2 - i_val) + -1;
      do {
        FUN_0040ef14(param_1,i_val);
        i_val = i_val + -1;
        j = j + 1;
      } while (j != 0);
    }
  }
  param_1[2] = param_2;
  return;
}


/* ==== 0040f230 TList.virtual_004 ==== */

void TList_virtual_004(void)

{
  return;
}


/* ==== 0040f234 FUN_0040f234 ==== */

int * FUN_0040f234(int *param_1,char param_2,undefined4 param_3)

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
    param_1 = (int *)FUN_00403014((int)param_1,param_2,param_3,in_stack_ffffffe8,in_stack_ffffffec);
    param_3 = extraout_ECX;
    cVar2 = extraout_DL;
  }
  FUN_00402ce4(param_1,'\0',param_3);
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 2));
  iVar1 = FUN_00402ce4((int *)&PTR_TList_virtual_000_0040d9ac,'\x01',extraout_ECX_00);
  param_1[1] = iVar1;
  *(undefined1 *)(param_1 + 8) = 0;
  if (cVar2 != '\0') {
    FUN_0040306c(param_1);
    *in_FS_OFFSET = in_stack_ffffffe8;
  }
  return param_1;
}


/* ==== 0040f288 TThreadList.Destroy ==== */

void TThreadList_Destroy(int *param_1,char param_2)

{
  int *piVar1;
  byte extraout_DL;
  undefined4 *in_FS_OFFSET;
  undefined4 uStackY_18;
  
  piVar1 = FUN_00403074(param_1,param_2);
  FUN_0040f38c((int)piVar1);
  uStackY_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStackY_18;
  FUN_00402d14((int *)piVar1[1]);
  TObject_Destroy(piVar1,extraout_DL & 0xfc);
  *in_FS_OFFSET = uStackY_18;
  FUN_0040f3f0((int)piVar1);
  uStackY_18 = 0x40f2e9;
  DeleteCriticalSection((LPCRITICAL_SECTION)(piVar1 + 2));
  return;
}


/* ==== 0040f304 FUN_0040f304 ==== */

void FUN_0040f304(int param_1,int param_2)

{
  int iVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  
  puStack_10 = (undefined1 *)0x40f316;
  FUN_0040f38c(param_1);
  puStack_14 = &LAB_0040f380;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  puStack_10 = &stack0xfffffffc;
  if (*(char *)(param_1 + 0x20) != '\x01') {
    puStack_10 = &stack0xfffffffc;
    iVar1 = FUN_0040f080(*(int *)(param_1 + 4),param_2);
    if (iVar1 != -1) {
      if (*(char *)(param_1 + 0x20) == '\x02') {
        FUN_0040efb0(**(undefined4 **)(param_1 + 4),(undefined4 *)PTR_LAB_00446bc0,param_2);
      }
      goto LAB_0040f36a;
    }
  }
  FUN_0040eec8(*(int **)(param_1 + 4),param_2);
LAB_0040f36a:
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_0040f387;
  puStack_14 = (undefined1 *)0x40f37f;
  FUN_0040f3f0(param_1);
  return;
}


/* ==== 0040f38c FUN_0040f38c ==== */

undefined4 FUN_0040f38c(int param_1)

{
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  return *(undefined4 *)(param_1 + 4);
}


/* ==== 0040f3a0 FUN_0040f3a0 ==== */

void FUN_0040f3a0(int param_1,int param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  
  puStack_10 = (undefined1 *)0x40f3b2;
  FUN_0040f38c(param_1);
  puStack_14 = &LAB_0040f3e3;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  puStack_10 = &stack0xfffffffc;
  FUN_0040f164(*(int **)(param_1 + 4),param_2);
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_0040f3ea;
  puStack_14 = (undefined1 *)0x40f3e2;
  FUN_0040f3f0(param_1);
  return;
}


/* ==== 0040f3f0 FUN_0040f3f0 ==== */

void FUN_0040f3f0(int param_1)

{
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  return;
}


/* ==== 0040f3fc TBits.Destroy ==== */

void TBits_Destroy(int *param_1,char param_2)

{
  int *piVar1;
  byte extraout_DL;
  
  piVar1 = FUN_00403074(param_1,param_2);
  FUN_0040f450((int)piVar1,0);
  TObject_Destroy(piVar1,extraout_DL & 0xfc);
  if ('\0' < (char)extraout_DL) {
    FUN_00403064(piVar1);
  }
  return;
}


/* ==== 0040f42c FUN_0040f42c ==== */

void FUN_0040f42c(void)

{
  int *piVar1;
  
  piVar1 = FUN_0040a9f4((int *)&DAT_0040d7dc,'\x01',(undefined4 *)PTR_PTR_00446d0c);
  FUN_0040346c(piVar1);
  return;
}


/* ==== 0040f444 FUN_0040f444 ==== */

int FUN_0040f444(int param_1,int param_2)

{
  if (param_2 < param_1) {
    param_1 = param_2;
  }
  return param_1;
}


/* ==== 0040f450 FUN_0040f450 ==== */

void FUN_0040f450(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 local_14;
  
  if (param_2 != *(int *)(param_1 + 4)) {
    if (param_2 < 0) {
      FUN_0040f42c();
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
        local_14 = (undefined4 *)FUN_004026b8(uVar3);
        FUN_00402a2c(local_14,uVar3,0);
      }
      if (uVar2 != 0) {
        if (local_14 != (undefined4 *)0x0) {
          uVar3 = FUN_0040f444(uVar2,uVar3);
          FUN_004027d0(*(undefined4 **)(param_1 + 8),local_14,uVar3);
        }
        FUN_004026d0(*(int *)(param_1 + 8));
      }
      *(undefined4 **)(param_1 + 8) = local_14;
    }
    *(int *)(param_1 + 4) = param_2;
  }
  return;
}


/* ==== 0040f4f4 FUN_0040f4f4 ==== */

void FUN_0040f4f4(int param_1,uint param_2,char param_3)

{
  byte *pbVar1;
  int *piVar2;
  
  if (*(uint *)(param_1 + 4) <= param_2) {
    if ((int)param_2 < 0) {
      piVar2 = FUN_0040a9f4((int *)&DAT_0040d7dc,'\x01',(undefined4 *)PTR_PTR_00446d0c);
      FUN_0040346c(piVar2);
      return;
    }
    FUN_0040f450(param_1,param_2 + 1);
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


/* ==== 0040f520 FUN_0040f520 ==== */

int FUN_0040f520(int param_1)

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


/* ==== 0040f598 TPersistent.Destroy ==== */

void TPersistent_Destroy(int *param_1,char param_2)

{
  int *piVar1;
  byte extraout_DL;
  
  piVar1 = FUN_00403074(param_1,param_2);
  FUN_00411664((int)piVar1);
  TObject_Destroy(piVar1,extraout_DL & 0xfc);
  if ('\0' < (char)extraout_DL) {
    FUN_00403064(piVar1);
  }
  return;
}


/* ==== 0040f5c4 TPersistent.virtual_008 ==== */

void TPersistent_virtual_008(int *param_1,undefined4 *param_2)

{
  if (param_2 != (undefined4 *)0x0) {
    (**(code **)*param_2)(param_2,param_1);
    return;
  }
  FUN_0040f5d8(param_1,(int *)0x0);
  return;
}


/* ==== 0040f5d8 FUN_0040f5d8 ==== */

void FUN_0040f5d8(int *param_1,int *param_2)

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
  puStack_128 = &LAB_0040f68e;
  puStack_12c = (undefined1 *)*in_FS_OFFSET;
  *in_FS_OFFSET = &puStack_12c;
  if (param_2 == (int *)0x0) {
    FUN_00403a50(&local_8,0x40f6a4);
  }
  else {
    puStack_124 = &stack0xfffffffc;
    FUN_00402c60(*param_2,local_108);
    FUN_00403bdc(&local_8,local_108);
  }
  local_118 = local_8;
  local_114 = 0xb;
  FUN_00402c60(*param_1,local_108);
  local_110 = local_108;
  local_10c = 4;
  uVar2 = 1;
  uVar1 = FUN_0040aa30((int)&DAT_00407528,'\x01',(undefined4 *)PTR_PTR_00446be8,1,&local_118);
  FUN_0040346c(uVar1);
  *in_FS_OFFSET = uVar2;
  puStack_12c = &LAB_0040f695;
  FUN_004039b8(&local_8);
  return;
}


/* ==== 0040f6a8 TPersistent.virtual_000 ==== */

void TPersistent_virtual_000(int *param_1,int *param_2)

{
  FUN_0040f5d8(param_2,param_1);
  return;
}


/* ==== 0040f6b0 TPersistent.virtual_004 ==== */

void TPersistent_virtual_004(void)

{
  return;
}


/* ==== 0040f6b4 TPersistent.dynamic_fffe ==== */

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
  puStack_11c = &LAB_0040f749;
  iStack_120 = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStack_120;
  FUN_00402c60(*param_1,local_108);
  FUN_00403bdc(param_2,local_108);
  iVar1 = FUN_00402ef0(param_1,extraout_EDX,extraout_ECX);
  if (iVar1 != 0) {
    piVar2 = (int *)FUN_00402ef0(param_1,extraout_EDX_00,extraout_ECX_00);
    FUN_00402ef0(piVar2,&local_8,extraout_ECX_01);
    if (local_8 != 0) {
      iStack_12c = *param_2;
      FUN_00403cf8(param_2,3);
    }
  }
  *in_FS_OFFSET = iStack_12c;
  FUN_004039b8(&local_8);
  return;
}


/* ==== 0040f764 TPersistent.dynamic_ffff ==== */

undefined4 TPersistent_dynamic_ffff(void)

{
  return 0;
}


/* ==== 0040f768 FUN_0040f768 ==== */

void FUN_0040f768(int param_1)

{
  (**(code **)(*(int *)(param_1 + 4) + 0x18))(*(int *)(param_1 + 4),1,param_1);
  return;
}


/* ==== 0040f774 FUN_0040f774 ==== */

void FUN_0040f774(int *param_1)

{
  undefined1 *puVar1;
  int *piVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  
  if (0 < *(int *)(param_1[2] + 8)) {
    puStack_10 = (undefined1 *)0x40f790;
    (**(code **)(*param_1 + 0x14))();
    puStack_14 = &LAB_0040f7ce;
    uStack_18 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_18;
    puStack_10 = &stack0xfffffffc;
    while (puVar1 = puStack_10, 0 < (int)((undefined4 *)param_1[2])[2]) {
      piVar2 = (int *)FUN_0040f10c((undefined4 *)param_1[2]);
      FUN_00402d14(piVar2);
    }
    *in_FS_OFFSET = uStack_18;
    puStack_10 = (undefined1 *)0x40f7d5;
    puStack_14 = (undefined1 *)0x40f7cd;
    (**(code **)(*param_1 + 0x18))(param_1,*param_1,puVar1);
    return;
  }
  return;
}


/* ==== 0040f7dc TStrings.Destroy ==== */

void TStrings_Destroy(int *param_1,char param_2)

{
  int *piVar1;
  byte extraout_DL;
  
  piVar1 = FUN_00403074(param_1,param_2);
  FUN_004102ac((int)piVar1,(int *)0x0);
  TPersistent_Destroy(piVar1,extraout_DL & 0xfc);
  if ('\0' < (char)extraout_DL) {
    FUN_00403064(piVar1);
  }
  return;
}


/* ==== 0040f80c TStrings.virtual_034 ==== */

undefined4 TStrings_virtual_034(int *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(*param_1 + 0x14))();
  (**(code **)(*param_1 + 0x54))(param_1,uVar1,param_2);
  return uVar1;
}


/* ==== 0040f830 TStrings.virtual_038 ==== */

undefined4 TStrings_virtual_038(int *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(*param_1 + 0x34))();
  (**(code **)(*param_1 + 0x24))(param_1,uVar1,param_3);
  return uVar1;
}


/* ==== 0040f854 TStrings.virtual_03c ==== */

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
  puStack_24 = &LAB_0040f8fb;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  puStack_2c = (undefined1 *)0x40f87e;
  local_c = param_2;
  local_8 = param_1;
  FUN_0040f97c(param_1);
  puStack_30 = &LAB_0040f8de;
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
  puStack_2c = &LAB_0040f8e5;
  puStack_30 = (undefined1 *)0x40f8dd;
  FUN_0040fa38(local_8);
  return;
}


/* ==== 0040f90c TStrings.virtual_008 ==== */

void TStrings_virtual_008(int *param_1,int *param_2)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  
  puStack_10 = (undefined1 *)0x40f923;
  uVar1 = FUN_00402e8c(param_2,(int)&PTR_TPersistent_virtual_000_0040db8c);
  if ((char)uVar1 != '\0') {
    puStack_10 = (undefined1 *)0x40f92f;
    FUN_0040f97c(param_1);
    puStack_14 = &LAB_0040f965;
    uStack_18 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_18;
    puStack_10 = &stack0xfffffffc;
    (**(code **)(*param_1 + 0x40))();
    (**(code **)(*param_1 + 0x3c))(param_1,param_2);
    *in_FS_OFFSET = uStack_18;
    puStack_10 = (undefined1 *)0x40f976;
    puStack_14 = (undefined1 *)0x40f964;
    FUN_0040fa38(param_1);
    return;
  }
  puStack_10 = (undefined1 *)0x40f976;
  TPersistent_virtual_008(param_1,param_2);
  return;
}


/* ==== 0040f97c FUN_0040f97c ==== */

void FUN_0040f97c(int *param_1)

{
  if (param_1[1] == 0) {
    (**(code **)(*param_1 + 0x30))(param_1,1);
  }
  param_1[1] = param_1[1] + 1;
  return;
}


/* ==== 0040f994 FUN_0040f994 ==== */

byte FUN_0040f994(void)

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
    uVar3 = FUN_00402e8c(piVar1,(int)&PTR_TPersistent_virtual_000_0040db8c);
    if ((char)uVar3 != '\0') {
      bVar2 = FUN_0040fa4c(*(int **)(in_stack_00000004 + -8),piVar1);
      bVar2 = bVar2 ^ 1;
    }
  }
  return bVar2;
}


/* ==== 0040f9ec TStrings.virtual_004 ==== */

void TStrings_virtual_004(undefined4 param_1,int *param_2)

{
  byte bVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  
  puVar3 = &LAB_00410144;
  puVar2 = &LAB_00410498;
  uVar4 = param_1;
  bVar1 = FUN_0040f994();
  (**(code **)(*param_2 + 4))(param_2,"Strings",bVar1,puVar2,param_1,puVar3,uVar4);
  return;
}


/* ==== 0040fa38 FUN_0040fa38 ==== */

void FUN_0040fa38(int *param_1)

{
  param_1[1] = param_1[1] + -1;
  if (param_1[1] == 0) {
    (**(code **)(*param_1 + 0x30))(param_1,0);
  }
  return;
}


/* ==== 0040fa4c FUN_0040fa4c ==== */

void FUN_0040fa4c(int *param_1,int *param_2)

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
  puStack_2c = &LAB_0040fae1;
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
        FUN_00403d48(puVar1,local_18);
        if (!(bool)uVar2) goto LAB_0040fac6;
        j = j + 1;
        i_val = i_val + -1;
        uVar2 = i_val == 0;
      } while (!(bool)uVar2);
    }
    local_d = 1;
  }
LAB_0040fac6:
  *in_FS_OFFSET = uStack_30;
  puStack_28 = &LAB_0040fae8;
  puStack_2c = (undefined1 *)0x40fae0;
  FUN_004039dc((int *)&local_18,2);
  return;
}


/* ==== 0040faf4 FUN_0040faf4 ==== */

undefined4 FUN_0040faf4(void)

{
  int unaff_EBP;
  
  return *(undefined4 *)(unaff_EBP + 4);
}


/* ==== 0040faf8 FUN_0040faf8 ==== */

void FUN_0040faf8(undefined4 param_1,byte *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 local_10;
  undefined1 local_c;
  
  FUN_0040faf4();
  local_c = 0;
  local_10 = param_3;
  uVar1 = FUN_0040a974((int)&DAT_0040d834,'\x01',param_2,0,&local_10);
  FUN_0040346c(uVar1);
  return;
}


/* ==== 0040fb30 FUN_0040fb30 ==== */

void FUN_0040fb30(undefined4 param_1,undefined4 *param_2,undefined4 param_3)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  byte *local_8;
  
  puStack_18 = &stack0xfffffffc;
  local_8 = (byte *)0x0;
  puStack_1c = &LAB_0040fb78;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  FUN_00405298(param_2,(int *)&local_8);
  FUN_0040faf8(param_1,local_8,param_3);
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_0040fb7f;
  puStack_1c = (undefined1 *)0x40fb77;
  FUN_004039b8((int *)&local_8);
  return;
}


/* ==== 0040fb88 TStrings.virtual_048 ==== */

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
  puStack_28 = &LAB_0040fc60;
  uStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_2c;
  puStack_30 = (undefined1 *)0x40fbb6;
  local_8 = param_1;
  FUN_0040f97c(param_1);
  puStack_34 = &LAB_0040fc3e;
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
  puStack_30 = &LAB_0040fc45;
  puStack_34 = (undefined1 *)0x40fc3d;
  FUN_0040fa38(local_8);
  return;
}


/* ==== 0040fc70 TStrings.virtual_010 ==== */

void TStrings_virtual_010(int *param_1)

{
  (**(code **)(*param_1 + 0x14))();
  return;
}


/* ==== 0040fc78 TStrings.virtual_018 ==== */

undefined4 TStrings_virtual_018(void)

{
  return 0;
}


/* ==== 0040fc7c TStrings.virtual_04c ==== */

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
  puStack_14 = &LAB_0040fcc1;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  (**(code **)(*param_1 + 0x1c))(param_1,&local_8);
  pcVar1 = FUN_00403dfc(local_8);
  FUN_00408228(pcVar1);
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_0040fcc8;
  puStack_14 = (undefined1 *)0x40fcc0;
  FUN_004039b8((int *)&local_8);
  return;
}


/* ==== 0040fcd0 TStrings.virtual_01c ==== */

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
  puStack_30 = &LAB_0040fda7;
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
      iVar1 = FUN_00403c38(local_1c);
      uVar2 = uVar2 + iVar1 + 2;
      i_val = i_val + 1;
      j = j + -1;
    } while (j != 0);
  }
  FUN_00403aa0(local_c,(undefined4 *)0x0,uVar2);
  puVar3 = (undefined4 *)*local_c;
  if (-1 < local_14 + -1) {
    i_val = 0;
    j = local_14;
    do {
      (**(code **)(*local_8 + 0xc))(local_8,i_val,&local_18);
      uVar2 = FUN_00403c38((int)local_18);
      if (uVar2 != 0) {
        FUN_004027d0(local_18,puVar3,uVar2);
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
  puStack_2c = &LAB_0040fdae;
  puStack_30 = (undefined1 *)0x40fda6;
  FUN_004039dc(&local_1c,2);
  return;
}


/* ==== 0040fdb8 TStrings.virtual_050 ==== */

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
  puStack_24 = &LAB_0040fe25;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  local_c = param_2;
  local_8 = param_1;
  i_val = (**(code **)(*param_1 + 0x14))();
  if (-1 < i_val + -1) {
    j = 0;
    do {
      (**(code **)(*local_8 + 0xc))(local_8,j,&local_10);
      iVar1 = FUN_00407b28(local_10,local_c);
      if (iVar1 == 0) break;
      j = j + 1;
      i_val = i_val + -1;
    } while (i_val != 0);
  }
  *in_FS_OFFSET = uStack_28;
  puStack_20 = &LAB_0040fe2c;
  puStack_24 = (undefined1 *)0x40fe24;
  FUN_004039b8((int *)&local_10);
  return;
}


/* ==== 0040fe38 FUN_0040fe38 ==== */

void FUN_0040fe38(int *param_1,undefined *param_2)

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
  puStack_28 = &LAB_0040fedf;
  uStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_2c;
  local_c = param_2;
  local_8 = param_1;
  i_val = (**(code **)(*param_1 + 0x14))();
  if (-1 < i_val + -1) {
    j = 0;
    do {
      (**(code **)(*local_8 + 0xc))(local_8,j,&local_14);
      pCVar1 = FUN_0040b3e8(&DAT_0040fef8,local_14);
      if (pCVar1 != (PCNZCH)0x0) {
        FUN_00403e40((int)local_14,1,(uint)(pCVar1 + -1),(int *)&local_18);
        iVar2 = FUN_00407b28(local_18,local_c);
        if (iVar2 == 0) goto LAB_0040fec4;
      }
      j = j + 1;
      i_val = i_val + -1;
    } while (i_val != 0);
  }
  j = -1;
LAB_0040fec4:
  *in_FS_OFFSET = uStack_2c;
  puStack_24 = &LAB_0040fee6;
  puStack_28 = (undefined1 *)0x40fede;
  FUN_004039dc((int *)&local_18,2);
  return;
}


/* ==== 0040fefc FUN_0040fefc ==== */

int FUN_0040fefc(int *param_1,int param_2)

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


/* ==== 0040ff30 FUN_0040ff30 ==== */

void FUN_0040ff30(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  (**(code **)(*param_1 + 0x54))(param_1,param_2,param_3);
  (**(code **)(*param_1 + 0x24))(param_1,param_2,param_4);
  return;
}


/* ==== 0040ff60 TStrings.virtual_058 ==== */

void TStrings_virtual_058(int *param_1,undefined *param_2)

{
  int *piVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStackY_18;
  undefined1 *puStackY_14;
  
  puStackY_14 = (undefined1 *)0x40ff77;
  piVar1 = FUN_00410cf8((int *)&PTR_THandleStream_virtual_000_0040de80,'\x01',param_2,0x20);
  puStackY_14 = &LAB_0040ffa8;
  uStackY_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStackY_18;
  (**(code **)(*param_1 + 0x5c))(param_1,piVar1);
  *in_FS_OFFSET = uStackY_18;
  puStackY_14 = (undefined1 *)0x40ffa7;
  FUN_00402d14(piVar1);
  return;
}


/* ==== 0040ffb4 TStrings.virtual_05c ==== */

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
  puStack_1c = &LAB_00410052;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  puStack_24 = (undefined1 *)0x40ffdc;
  local_8 = param_1;
  FUN_0040f97c(param_1);
  puStack_28 = &LAB_00410035;
  uStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_2c;
  puStack_24 = &stack0xfffffffc;
  iVar1 = FUN_00410af0(param_2);
  iVar2 = FUN_00410ad4(param_2);
  FUN_00403aa0(&local_c,(undefined4 *)0x0,iVar1 - iVar2);
  (**(code **)(*param_2 + 4))(param_2,local_c,iVar1 - iVar2);
  (**(code **)(*local_8 + 0x2c))(local_8,local_c);
  *in_FS_OFFSET = uStack_2c;
  puStack_24 = &LAB_0041003c;
  puStack_28 = (undefined1 *)0x410034;
  FUN_0040fa38(local_8);
  return;
}


/* ==== 00410060 TStrings.virtual_060 ==== */

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
  puStack_20 = &LAB_00410101;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  local_8 = param_1;
  if (param_3 != param_2) {
    puStack_28 = (undefined1 *)0x41008f;
    FUN_0040f97c(param_1);
    puStack_2c = &LAB_004100e4;
    uStack_30 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_30;
    puStack_28 = &stack0xfffffffc;
    (**(code **)(*local_8 + 0xc))(local_8,param_2,&local_c);
    uVar1 = (**(code **)(*local_8 + 0x18))(local_8,param_2);
    (**(code **)(*local_8 + 0x44))(local_8,param_2);
    FUN_0040ff30(local_8,param_3,local_c,uVar1);
    *in_FS_OFFSET = uStack_30;
    puStack_28 = (undefined1 *)0x4100eb;
    puStack_2c = (undefined1 *)0x4100e3;
    FUN_0040fa38(local_8);
    return;
  }
  *in_FS_OFFSET = uStack_24;
  puStack_1c = &LAB_00410108;
  puStack_20 = (undefined1 *)0x410100;
  FUN_004039b8(&local_c);
  return;
}


/* ==== 00410110 TStrings.virtual_020 ==== */

void TStrings_virtual_020(int *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(*param_1 + 0x18))(param_1,param_2);
  (**(code **)(*param_1 + 0x44))(param_1,param_2);
  FUN_0040ff30(param_1,param_2,param_3,uVar1);
  return;
}


/* ==== 00410140 TStrings.virtual_024 ==== */

void TStrings_virtual_024(void)

{
  return;
}


/* ==== 004101f4 TStrings.virtual_064 ==== */

void TStrings_virtual_064(int *param_1,undefined *param_2)

{
  int *piVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStackY_18;
  undefined1 *puStackY_14;
  
  puStackY_14 = (undefined1 *)0x41020e;
  piVar1 = FUN_00410cf8((int *)&PTR_THandleStream_virtual_000_0040de80,'\x01',param_2,0xffff);
  puStackY_14 = &LAB_0041023f;
  uStackY_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStackY_18;
  (**(code **)(*param_1 + 0x68))(param_1,piVar1);
  *in_FS_OFFSET = uStackY_18;
  puStackY_14 = (undefined1 *)0x41023e;
  FUN_00402d14(piVar1);
  return;
}


/* ==== 0041024c TStrings.virtual_068 ==== */

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
  puStack_18 = &LAB_00410299;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  (**(code **)(*param_1 + 0x1c))(param_1,&local_8);
  iVar1 = FUN_00403c38(local_8);
  FUN_00410b60(param_2,local_8,iVar1);
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_004102a0;
  puStack_18 = (undefined1 *)0x410298;
  FUN_004039b8(&local_8);
  return;
}


/* ==== 004102a8 TStrings.virtual_028 ==== */

void TStrings_virtual_028(void)

{
  return;
}


/* ==== 004102ac FUN_004102ac ==== */

void FUN_004102ac(int param_1,int *param_2)

{
  if (*(int *)(param_1 + 8) != 0) {
    (**(code **)(**(int **)(param_1 + 8) + 0x10))();
  }
  FUN_00405308((int *)(param_1 + 8),param_2);
  if (*(int *)(param_1 + 8) != 0) {
    (**(code **)(**(int **)(param_1 + 8) + 0xc))(*(int **)(param_1 + 8),param_1);
  }
  return;
}


/* ==== 004102e0 TStrings.virtual_06c ==== */

void TStrings_virtual_06c(int *param_1,char *param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  int local_8;
  
  puStack_14 = &stack0xfffffffc;
  local_8 = 0;
  puStack_18 = &LAB_00410323;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  FUN_00403b70(&local_8,param_2);
  (**(code **)(*param_1 + 0x2c))(param_1,local_8);
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_0041032a;
  puStack_18 = (undefined1 *)0x410322;
  FUN_004039b8(&local_8);
  return;
}


/* ==== 00410330 TStrings.virtual_02c ==== */

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
  puStack_18 = &LAB_004103e4;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  puStack_20 = (undefined1 *)0x410357;
  local_8 = param_1;
  FUN_0040f97c(param_1);
  puStack_24 = &LAB_004103c7;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  puStack_20 = &stack0xfffffffc;
  (**(code **)(*local_8 + 0x40))();
  if (param_2 != (char *)0x0) {
    while (pcVar2 = param_2, *param_2 != '\0') {
      for (; ((cVar1 = *pcVar2, cVar1 != '\0' && (cVar1 != '\n')) && (cVar1 != '\r'));
          pcVar2 = pcVar2 + 1) {
      }
      FUN_00403aa0(&local_c,(undefined4 *)param_2,(int)pcVar2 - (int)param_2);
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
  puStack_20 = &LAB_004103ce;
  puStack_24 = (undefined1 *)0x4103c6;
  FUN_0040fa38(local_8);
  return;
}


/* ==== 004103f0 TStrings.virtual_030 ==== */

void TStrings_virtual_030(void)

{
  return;
}


/* ==== 004103f4 FUN_004103f4 ==== */

void FUN_004103f4(int *param_1,undefined *param_2,int param_3)

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
  puStack_20 = &LAB_0041047e;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  local_8 = param_3;
  iVar1 = FUN_0040fe38(param_1,param_2);
  if (local_8 == 0) {
    if (-1 < iVar1) {
      (**(code **)(*param_1 + 0x44))(param_1,iVar1);
    }
  }
  else {
    if (iVar1 < 0) {
      iVar1 = (**(code **)(*param_1 + 0x34))(param_1,0);
    }
    puVar3 = &DAT_00410494;
    iVar2 = local_8;
    FUN_00403cf8(&local_c,3);
    (**(code **)(*param_1 + 0x20))(param_1,iVar1,local_c,iVar2,puVar3,param_2);
  }
  *in_FS_OFFSET = uStack_24;
  puStack_1c = &LAB_00410485;
  puStack_20 = (undefined1 *)0x41047d;
  FUN_004039b8(&local_c);
  return;
}


/* ==== 0041051c TStringList.Destroy ==== */

void TStringList_Destroy(int *param_1,char param_2)

{
  int *piVar1;
  byte extraout_DL;
  
  piVar1 = FUN_00403074(param_1,param_2);
  piVar1[8] = 0;
  piVar1[9] = 0;
  piVar1[10] = 0;
  piVar1[0xb] = 0;
  TStrings_Destroy(piVar1,extraout_DL & 0xfc);
  if (piVar1[4] != 0) {
    FUN_00404260((VARIANTARG *)piVar1[3],"\x0e\vTStringItem\b",piVar1[4]);
  }
  piVar1[4] = 0;
  (**(code **)(*piVar1 + 0x28))(piVar1,0);
  if ('\0' < (char)extraout_DL) {
    FUN_00403064(piVar1);
  }
  return;
}


/* ==== 00410578 TStringList.virtual_034 ==== */

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
        FUN_0040fb30(param_1,(undefined4 *)PTR_PTR_00446b1c,0);
      }
    }
  }
  FUN_004108a0(param_1,local_10,param_2);
  return local_10;
}


/* ==== 004105d0 TStringList.virtual_070 ==== */

void TStringList_virtual_070(int param_1)

{
  if ((*(int *)(param_1 + 4) == 0) && (*(short *)(param_1 + 0x22) != 0)) {
    (**(code **)(param_1 + 0x20))(*(undefined4 *)(param_1 + 0x24),param_1);
  }
  return;
}


/* ==== 004105ec TStringList.virtual_074 ==== */

void TStringList_virtual_074(int param_1)

{
  if ((*(int *)(param_1 + 4) == 0) && (*(short *)(param_1 + 0x2a) != 0)) {
    (**(code **)(param_1 + 0x28))(*(undefined4 *)(param_1 + 0x2c),param_1);
  }
  return;
}


/* ==== 00410608 TStringList.virtual_040 ==== */

void TStringList_virtual_040(int *param_1)

{
  if (param_1[4] != 0) {
    (**(code **)(*param_1 + 0x74))();
    FUN_00404260((VARIANTARG *)param_1[3],"\x0e\vTStringItem\b",param_1[4]);
    param_1[4] = 0;
    (**(code **)(*param_1 + 0x28))(param_1,0);
    (**(code **)(*param_1 + 0x70))();
  }
  return;
}


/* ==== 00410640 TStringList.virtual_044 ==== */

void TStringList_virtual_044(int *param_1,int param_2)

{
  if ((param_2 < 0) || (param_1[4] <= param_2)) {
    FUN_0040fb30(param_1,(undefined4 *)PTR_PTR_00446cd8,param_2);
  }
  (**(code **)(*param_1 + 0x74))();
  FUN_00404348((VARIANTARG *)(param_1[3] + param_2 * 8),"\x0e\vTStringItem\b");
  param_1[4] = param_1[4] + -1;
  if (param_2 < param_1[4]) {
    FUN_004027d0((undefined4 *)(param_1[3] + 8 + param_2 * 8),
                 (undefined4 *)(param_1[3] + param_2 * 8),(param_1[4] - param_2) * 8);
  }
  (**(code **)(*param_1 + 0x70))();
  return;
}


/* ==== 004106a4 TStringList.virtual_048 ==== */

void TStringList_virtual_048(int *param_1,int param_2,int param_3)

{
  if ((param_2 < 0) || (param_1[4] <= param_2)) {
    FUN_0040fb30(param_1,(undefined4 *)PTR_PTR_00446cd8,param_2);
  }
  if ((param_3 < 0) || (param_1[4] <= param_3)) {
    FUN_0040fb30(param_1,(undefined4 *)PTR_PTR_00446cd8,param_3);
  }
  (**(code **)(*param_1 + 0x74))();
  FUN_004106fc((int)param_1,param_2,param_3);
  (**(code **)(*param_1 + 0x70))();
  return;
}


/* ==== 004106fc FUN_004106fc ==== */

void FUN_004106fc(int param_1,int param_2,int param_3)

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


/* ==== 00410720 TStringList.virtual_078 ==== */

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
      iVar1 = FUN_00407b28(*(undefined **)(*(int *)(param_1 + 0xc) + uVar2 * 8),param_2);
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


/* ==== 00410788 TStringList.virtual_00c ==== */

void TStringList_virtual_00c(int param_1,int param_2,int *param_3)

{
  if ((param_2 < 0) || (*(int *)(param_1 + 0x10) <= param_2)) {
    FUN_0040fb30(param_1,(undefined4 *)PTR_PTR_00446cd8,param_2);
  }
  FUN_00403a0c(param_3,*(undefined4 **)(*(int *)(param_1 + 0xc) + param_2 * 8));
  return;
}


/* ==== 004107bc TStringList.virtual_010 ==== */

undefined4 TStringList_virtual_010(int param_1)

{
  return *(undefined4 *)(param_1 + 0x14);
}


/* ==== 004107c0 TStringList.virtual_014 ==== */

undefined4 TStringList_virtual_014(int param_1)

{
  return *(undefined4 *)(param_1 + 0x10);
}


/* ==== 004107c4 TStringList.virtual_018 ==== */

undefined4 TStringList_virtual_018(int param_1,int param_2)

{
  if ((param_2 < 0) || (*(int *)(param_1 + 0x10) <= param_2)) {
    FUN_0040fb30(param_1,(undefined4 *)PTR_PTR_00446cd8,param_2);
  }
  return *(undefined4 *)(*(int *)(param_1 + 0xc) + 4 + param_2 * 8);
}


/* ==== 004107ec FUN_004107ec ==== */

void FUN_004107ec(int *param_1)

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


/* ==== 00410820 TStringList.virtual_050 ==== */

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


/* ==== 00410858 TStringList.virtual_054 ==== */

void TStringList_virtual_054(int *param_1,int param_2,undefined4 *param_3)

{
  if ((char)param_1[6] != '\0') {
    FUN_0040fb30(param_1,(undefined4 *)PTR_PTR_00446bcc,0);
  }
  if ((param_2 < 0) || (param_1[4] < param_2)) {
    FUN_0040fb30(param_1,(undefined4 *)PTR_PTR_00446cd8,param_2);
  }
  FUN_004108a0(param_1,param_2,param_3);
  return;
}


/* ==== 004108a0 FUN_004108a0 ==== */

void FUN_004108a0(int *param_1,int param_2,undefined4 *param_3)

{
  int *piVar1;
  
  (**(code **)(*param_1 + 0x74))();
  if (param_1[4] == param_1[5]) {
    FUN_004107ec(param_1);
  }
  if (param_2 < param_1[4]) {
    FUN_004027d0((undefined4 *)(param_1[3] + param_2 * 8),
                 (undefined4 *)(param_1[3] + 8 + param_2 * 8),(param_1[4] - param_2) * 8);
  }
  piVar1 = (int *)(param_1[3] + param_2 * 8);
  *piVar1 = 0;
  piVar1[1] = 0;
  FUN_00403a0c(piVar1,param_3);
  param_1[4] = param_1[4] + 1;
  (**(code **)(*param_1 + 0x70))();
  return;
}


/* ==== 00410908 TStringList.virtual_020 ==== */

void TStringList_virtual_020(int *param_1,int param_2,undefined4 *param_3)

{
  if ((char)param_1[6] != '\0') {
    FUN_0040fb30(param_1,(undefined4 *)PTR_PTR_00446bcc,0);
  }
  if ((param_2 < 0) || (param_1[4] <= param_2)) {
    FUN_0040fb30(param_1,(undefined4 *)PTR_PTR_00446cd8,param_2);
  }
  (**(code **)(*param_1 + 0x74))();
  FUN_00403a0c((int *)(param_1[3] + param_2 * 8),param_3);
  (**(code **)(*param_1 + 0x70))();
  return;
}


/* ==== 00410960 TStringList.virtual_024 ==== */

void TStringList_virtual_024(int *param_1,int param_2,undefined4 param_3)

{
  if ((param_2 < 0) || (param_1[4] <= param_2)) {
    FUN_0040fb30(param_1,(undefined4 *)PTR_PTR_00446cd8,param_2);
  }
  (**(code **)(*param_1 + 0x74))();
  *(undefined4 *)(param_1[3] + 4 + param_2 * 8) = param_3;
  (**(code **)(*param_1 + 0x70))();
  return;
}


/* ==== 0041099c FUN_0041099c ==== */

void FUN_0041099c(int param_1,uint param_2,uint param_3,undefined *param_4)

{
  uint uVar1;
  int iVar2;
  uint j;
  uint i_val;
  uint local_14;
  uint local_c;
  
  local_c = param_2;
  do {
    local_14 = local_c + param_3 >> 1;
    j = local_c;
    i_val = param_3;
    do {
      while (iVar2 = (*(code *)param_4)(param_1,j,local_14), iVar2 < 0) {
        j = j + 1;
      }
      while (iVar2 = (*(code *)param_4)(param_1,i_val,local_14), 0 < iVar2) {
        i_val = i_val - 1;
      }
      if ((int)j <= (int)i_val) {
        FUN_004106fc(param_1,j,i_val);
        uVar1 = i_val;
        if ((j != local_14) && (uVar1 = local_14, i_val == local_14)) {
          uVar1 = j;
        }
        local_14 = uVar1;
        j = j + 1;
        i_val = i_val - 1;
      }
    } while ((int)j <= (int)i_val);
    if ((int)local_c < (int)i_val) {
      FUN_0041099c(param_1,local_c,i_val,param_4);
    }
    local_c = j;
  } while ((int)j < (int)param_3);
  return;
}


/* ==== 00410a30 TStringList.virtual_028 ==== */

void TStringList_virtual_028(int param_1,int param_2)

{
  FUN_004026e8((int *)(param_1 + 0xc),param_2 << 3);
  *(int *)(param_1 + 0x14) = param_2;
  return;
}


/* ==== 00410a4c FUN_00410a4c ==== */

void FUN_00410a4c(int *param_1,char param_2)

{
  if (param_2 != (char)param_1[6]) {
    if (param_2 != '\0') {
      (**(code **)(*param_1 + 0x7c))();
    }
    *(char *)(param_1 + 6) = param_2;
  }
  return;
}


/* ==== 00410a68 TStringList.virtual_030 ==== */

void TStringList_virtual_030(int *param_1,char param_2)

{
  if (param_2 != '\0') {
    (**(code **)(*param_1 + 0x74))();
    return;
  }
  (**(code **)(*param_1 + 0x70))();
  return;
}


/* ==== 00410a90 TStringList.virtual_07c ==== */

void TStringList_virtual_07c(int *param_1)

{
  (**(code **)(*param_1 + 0x80))(param_1,&LAB_00410a78);
  return;
}


/* ==== 00410aa0 TStringList.virtual_080 ==== */

void TStringList_virtual_080(int *param_1,undefined *param_2)

{
  if (((char)param_1[6] == '\0') && (1 < param_1[4])) {
    (**(code **)(*param_1 + 0x74))();
    FUN_0041099c((int)param_1,0,param_1[4] - 1,param_2);
    (**(code **)(*param_1 + 0x70))();
  }
  return;
}


/* ==== 00410ad4 FUN_00410ad4 ==== */

void FUN_00410ad4(int *param_1)

{
  (**(code **)(*param_1 + 0xc))(param_1,0,1);
  return;
}


/* ==== 00410ae4 FUN_00410ae4 ==== */

void FUN_00410ae4(int *param_1,undefined4 param_2)

{
  (**(code **)(*param_1 + 0xc))(param_1,param_2,0);
  return;
}


/* ==== 00410af0 FUN_00410af0 ==== */

undefined4 FUN_00410af0(int *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined2 extraout_var;
  
  uVar1 = (**(code **)(*param_1 + 0xc))(param_1,0,1);
  uVar2 = (**(code **)(*param_1 + 0xc))(param_1,0,CONCAT22(extraout_var,2));
  (**(code **)(*param_1 + 0xc))(param_1,uVar1,0);
  return uVar2;
}


/* ==== 00410b24 TStream.virtual_000 ==== */

void TStream_virtual_000(void)

{
  return;
}


/* ==== 00410b28 FUN_00410b28 ==== */

void FUN_00410b28(int *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  
  if (param_3 != 0) {
    iVar1 = (**(code **)(*param_1 + 4))(param_1,param_2,param_3);
    if (param_3 != iVar1) {
      piVar2 = FUN_0040a9f4((int *)&DAT_0040d61c,'\x01',(undefined4 *)PTR_PTR_00446d34);
      FUN_0040346c(piVar2);
    }
  }
  return;
}


/* ==== 00410b60 FUN_00410b60 ==== */

void FUN_00410b60(int *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  
  if (param_3 != 0) {
    iVar1 = (**(code **)(*param_1 + 8))(param_1,param_2,param_3);
    if (param_3 != iVar1) {
      piVar2 = FUN_0040a9f4((int *)&DAT_0040d674,'\x01',(undefined4 *)PTR_PTR_00446c20);
      FUN_0040346c(piVar2);
    }
  }
  return;
}


/* ==== 00410b98 FUN_00410b98 ==== */

void FUN_00410b98(int *param_1,int *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_30;
  undefined1 *puStack_2c;
  undefined1 *puStack_28;
  int local_14;
  
  if (param_3 == 0) {
    puStack_28 = (undefined1 *)0x410bb7;
    FUN_00410ae4(param_2,0);
    puStack_28 = (undefined1 *)0x410bbf;
    param_3 = FUN_00410af0(param_2);
  }
  local_14 = param_3;
  if (0xf000 < param_3) {
    local_14 = 0xf000;
  }
  puStack_28 = (undefined1 *)0x410be0;
  iVar1 = FUN_004026b8(local_14);
  puStack_2c = &LAB_00410c3b;
  uStack_30 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_30;
  puStack_28 = &stack0xfffffffc;
  for (; param_3 != 0; param_3 = param_3 - iVar2) {
    iVar2 = param_3;
    if (local_14 < param_3) {
      iVar2 = local_14;
    }
    FUN_00410b28(param_2,iVar1,iVar2);
    FUN_00410b60(param_1,iVar1,iVar2);
  }
  *in_FS_OFFSET = uStack_30;
  puStack_28 = &LAB_00410c42;
  puStack_2c = (undefined1 *)0x410c3a;
  FUN_004026d0(iVar1);
  return;
}


/* ==== 00410c4c FUN_00410c4c ==== */

void FUN_00410c4c(int param_1,int *param_2)

{
  int *piVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStackY_1c;
  undefined1 *puStackY_18;
  
  puStackY_18 = (undefined1 *)0x410c68;
  piVar1 = FUN_0041112c((int *)&PTR_TFiler_virtual_000_0040e234,'\x01',param_1,0x1000);
  puStackY_18 = &LAB_00410c9c;
  uStackY_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStackY_1c;
  FUN_00412ea8(piVar1,param_2);
  *in_FS_OFFSET = uStackY_1c;
  puStackY_18 = (undefined1 *)0x410c9b;
  FUN_00402d14(piVar1);
  return;
}


/* ==== 00410cac THandleStream.virtual_004 ==== */

DWORD THandleStream_virtual_004(int param_1,LPVOID buffer,DWORD number_of_bytes_to_read)

{
  DWORD DVar1;
  
  DVar1 = FUN_00407d58(*(HANDLE *)(param_1 + 4),buffer,number_of_bytes_to_read);
  if (DVar1 == 0xffffffff) {
    DVar1 = 0;
  }
  return DVar1;
}


/* ==== 00410cbc THandleStream.virtual_008 ==== */

DWORD THandleStream_virtual_008(int param_1,LPCVOID buffer,DWORD number_of_bytes_to_write)

{
  DWORD DVar1;
  
  DVar1 = FUN_00407d84(*(HANDLE *)(param_1 + 4),buffer,number_of_bytes_to_write);
  if (DVar1 == 0xffffffff) {
    DVar1 = 0;
  }
  return DVar1;
}


/* ==== 00410ccc THandleStream.virtual_00c ==== */

void THandleStream_virtual_00c(int param_1,LONG distance_to_move,uint param_3)

{
  FUN_00407db0(*(HANDLE *)(param_1 + 4),distance_to_move,param_3 & 0xffff);
  return;
}


/* ==== 00410cd8 THandleStream.virtual_000 ==== */

void THandleStream_virtual_000(int *param_1,undefined4 param_2)

{
  BOOL BVar1;
  
  (**(code **)(*param_1 + 0xc))(param_1,param_2,0);
  BVar1 = SetEndOfFile((HANDLE)param_1[1]);
  FUN_0040ba7c(BVar1);
  return;
}


/* ==== 00410cf8 FUN_00410cf8 ==== */

int * FUN_00410cf8(int *param_1,char param_2,undefined *param_3,ushort param_4)

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
    param_1 = (int *)FUN_00403014((int)param_1,param_2,param_3,in_stack_ffffffd4,in_stack_ffffffd8);
    param_3 = extraout_ECX;
    local_5 = extraout_DL;
  }
  if (param_4 == 0xffff) {
    iVar1 = FUN_00407d34(param_3);
    param_1[1] = iVar1;
    if (iVar1 < 0) {
      local_c = 0xb;
      local_10 = param_3;
      uVar2 = FUN_0040aa30((int)&DAT_0040d510,'\x01',(undefined4 *)PTR_PTR_00446ce4,0,&local_10);
      FUN_0040346c(uVar2);
    }
  }
  else {
    iVar1 = FUN_00407cf4(param_3,(uint)param_4);
    param_1[1] = iVar1;
    if (param_1[1] < 0) {
      local_c = 0xb;
      local_10 = param_3;
      uVar2 = FUN_0040aa30((int)&DAT_0040d56c,'\x01',(undefined4 *)PTR_PTR_00446cf4,0,&local_10);
      FUN_0040346c(uVar2);
    }
  }
  if (local_5 != '\0') {
    FUN_0040306c(param_1);
    *in_FS_OFFSET = in_stack_ffffffd4;
  }
  return param_1;
}


/* ==== 00410db0 TFileStream.Destroy ==== */

void TFileStream_Destroy(int *param_1,char param_2)

{
  int *piVar1;
  char extraout_DL;
  
  piVar1 = FUN_00403074(param_1,param_2);
  if (-1 < piVar1[1]) {
    FUN_00407dbc((HANDLE)piVar1[1]);
  }
  if ('\0' < extraout_DL) {
    FUN_00403064(piVar1);
  }
  return;
}


/* ==== 00410dd8 FUN_00410dd8 ==== */

void FUN_00410dd8(int param_1,undefined4 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 4) = param_2;
  *(undefined4 *)(param_1 + 8) = param_3;
  return;
}


/* ==== 00410de0 TCustomMemoryStream.virtual_004 ==== */

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
    FUN_004027d0((undefined4 *)(*(int *)(param_1 + 4) + iVar1),param_2,uVar2);
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + uVar2;
  }
  return uVar2;
}


/* ==== 00410e18 TCustomMemoryStream.virtual_00c ==== */

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


/* ==== 00410e3c TMemoryStream.Destroy ==== */

void TMemoryStream_Destroy(int *param_1,char param_2)

{
  int *piVar1;
  byte extraout_DL;
  
  piVar1 = FUN_00403074(param_1,param_2);
  FUN_00410e68(piVar1);
  TObject_Destroy(piVar1,extraout_DL & 0xfc);
  if ('\0' < (char)extraout_DL) {
    FUN_00403064(piVar1);
  }
  return;
}


/* ==== 00410e68 FUN_00410e68 ==== */

void FUN_00410e68(int *param_1)

{
  FUN_00410e80(param_1,0);
  param_1[2] = 0;
  param_1[3] = 0;
  return;
}


/* ==== 00410e80 FUN_00410e80 ==== */

void FUN_00410e80(int *param_1,int param_2)

{
  undefined4 uVar1;
  int local_8;
  
  local_8 = param_2;
  uVar1 = (**(code **)(*param_1 + 0x10))(param_1,&local_8);
  FUN_00410dd8((int)param_1,uVar1,param_1[2]);
  param_1[4] = local_8;
  return;
}


/* ==== 00410ea8 TMemoryStream.virtual_000 ==== */

void TMemoryStream_virtual_000(int *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = param_1[3];
  FUN_00410e80(param_1,param_2);
  param_1[2] = param_2;
  if (param_2 < iVar1) {
    (**(code **)(*param_1 + 0xc))(param_1,0,2);
  }
  return;
}


/* ==== 00410ed4 TMemoryStream.virtual_010 ==== */

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
      FUN_004069b4(mem);
      mem = (LPCVOID)0x0;
    }
    else {
      if (*(SIZE_T *)(param_1 + 0x10) == 0) {
        mem = (LPCVOID)FUN_00406988((uint)*(ushort *)PTR_DAT_00446ce8,*param_2);
      }
      else {
        mem = (LPCVOID)FUN_00406998(mem,*param_2,(uint)*(ushort *)PTR_DAT_00446ce8);
      }
      if (mem == (LPCVOID)0x0) {
        piVar1 = FUN_0040a9f4((int *)&DAT_0040d4b4,'\x01',(undefined4 *)PTR_PTR_00446d54);
        FUN_0040346c(piVar1);
        mem = extraout_ECX;
      }
    }
  }
  return mem;
}


/* ==== 00410f58 TMemoryStream.virtual_008 ==== */

uint TMemoryStream_virtual_008(int *param_1,undefined4 *param_2,uint param_3)

{
  int iVar1;
  
  if (((param_1[3] < 0) || ((int)param_3 < 0)) || (iVar1 = param_1[3] + param_3, iVar1 < 1)) {
    param_3 = 0;
  }
  else {
    if (param_1[2] < iVar1) {
      if (param_1[4] < iVar1) {
        FUN_00410e80(param_1,iVar1);
      }
      param_1[2] = iVar1;
    }
    FUN_004027d0(param_2,(undefined4 *)(param_1[1] + param_1[3]),param_3);
    param_1[3] = iVar1;
  }
  return param_3;
}


/* ==== 00410fa8 FUN_00410fa8 ==== */

int * FUN_00410fa8(int *param_1,char param_2,HMODULE module,LPCSTR type,undefined *param_5)

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
    param_1 = (int *)FUN_00403014((int)param_1,param_2,module,in_stack_ffffffe0,in_stack_ffffffe4);
    module = extraout_ECX;
    cVar1 = extraout_DL;
  }
  FUN_00402ce4(param_1,'\0',module);
  name = FUN_00403dfc(param_5);
  FUN_00411070((int)param_1,module,name,type);
  if (cVar1 != '\0') {
    FUN_0040306c(param_1);
    *in_FS_OFFSET = in_stack_ffffffe0;
  }
  return param_1;
}


/* ==== 00411000 FUN_00411000 ==== */

void FUN_00411000(void)

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
  puStack_18 = &LAB_00411063;
  puStack_1c = (undefined1 *)*in_FS_OFFSET;
  *in_FS_OFFSET = &puStack_1c;
  local_c = *(undefined4 *)(in_stack_00000004 + -4);
  local_8 = 6;
  puVar3 = &local_c;
  uVar2 = 0;
  FUN_00405298((undefined4 *)PTR_PTR_00446bf4,(int *)&local_10);
  uVar1 = FUN_0040a974((int)&DAT_0040d728,'\x01',local_10,uVar2,puVar3);
  FUN_0040346c(uVar1);
  *in_FS_OFFSET = uVar2;
  puStack_1c = &LAB_0041106a;
  FUN_004039b8((int *)&local_10);
  return;
}


/* ==== 00411070 FUN_00411070 ==== */

void FUN_00411070(int param_1,HMODULE module,LPCSTR name,LPCSTR type)

{
  HRSRC pHVar1;
  HGLOBAL resource;
  DWORD DVar2;
  LPVOID lock_resource;
  
  pHVar1 = FindResourceA(module,name,type);
  *(HRSRC *)(param_1 + 0x10) = pHVar1;
  if (pHVar1 == (HRSRC)0x0) {
    FUN_00411000();
  }
  resource = LoadResource(module,*(HRSRC *)(param_1 + 0x10));
  *(HGLOBAL *)(param_1 + 0x14) = resource;
  if (resource == (HGLOBAL)0x0) {
    FUN_00411000();
  }
  DVar2 = SizeofResource(module,*(HRSRC *)(param_1 + 0x10));
  lock_resource = LockResource(*(HGLOBAL *)(param_1 + 0x14));
  FUN_00410dd8(param_1,lock_resource,DVar2);
  return;
}


/* ==== 004110dc TResourceStream.Destroy ==== */

void TResourceStream_Destroy(int *param_1,char param_2)

{
  int *piVar1;
  byte extraout_DL;
  
  piVar1 = FUN_00403074(param_1,param_2);
  FUN_00406984();
  FreeResource((HGLOBAL)piVar1[5]);
  TObject_Destroy(piVar1,extraout_DL & 0xfc);
  if ('\0' < (char)extraout_DL) {
    FUN_00403064(piVar1);
  }
  return;
}


/* ==== 00411114 TResourceStream.virtual_008 ==== */

void TResourceStream_virtual_008(void)

{
  int *piVar1;
  
  piVar1 = FUN_0040a9f4((int *)&DAT_0040d4b4,'\x01',(undefined4 *)PTR_PTR_00446c14);
  FUN_0040346c(piVar1);
  return;
}


/* ==== 0041112c FUN_0041112c ==== */

int * FUN_0041112c(int *param_1,char param_2,int param_3,int param_4)

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
    param_1 = (int *)FUN_00403014((int)param_1,param_2,param_3,in_stack_ffffffe0,in_stack_ffffffe4);
    param_3 = extraout_ECX;
    cVar2 = extraout_DL;
  }
  param_1[1] = param_3;
  iVar1 = FUN_004026b8(param_4);
  param_1[2] = iVar1;
  param_1[3] = param_4;
  if (cVar2 != '\0') {
    FUN_0040306c(param_1);
    *in_FS_OFFSET = in_stack_ffffffe0;
  }
  return param_1;
}


/* ==== 00411174 TFiler.Destroy ==== */

void TFiler_Destroy(int *param_1,char param_2)

{
  int *piVar1;
  char extraout_DL;
  
  piVar1 = FUN_00403074(param_1,param_2);
  if (piVar1[2] != 0) {
    FUN_004026d0(piVar1[2]);
  }
  if ('\0' < extraout_DL) {
    FUN_00403064(piVar1);
  }
  return;
}


/* ==== 0041119c TFiler.virtual_000 ==== */

void TFiler_virtual_000(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x18) = param_2;
  return;
}


/* ==== 00411214 FUN_00411214 ==== */

int * FUN_00411214(int *param_1,char param_2,int param_3,undefined4 *param_4,undefined4 *param_5,
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
    param_1 = (int *)FUN_00403014((int)param_1,param_2,param_3,in_stack_ffffffe4,in_stack_ffffffe8);
    param_3 = extraout_ECX;
    cVar1 = extraout_DL;
  }
  param_1[1] = param_3;
  param_1[2] = param_7;
  param_1[3] = param_6;
  FUN_00403a0c(param_1 + 4,param_5);
  FUN_00403a0c(param_1 + 5,param_4);
  if (cVar1 != '\0') {
    FUN_0040306c(param_1);
    *in_FS_OFFSET = in_stack_ffffffe4;
  }
  return param_1;
}


/* ==== 0041126c FUN_0041126c ==== */

bool FUN_0041126c(int param_1)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  
  pcVar2 = *(char **)(param_1 + 0x14);
  for (pcVar3 = pcVar2; (*pcVar3 != '\0' && (*pcVar3 != '.')); pcVar3 = pcVar3 + 1) {
  }
  cVar1 = *pcVar3;
  if (cVar1 != '\0') {
    FUN_00403aa0((int *)(param_1 + 0x10),(undefined4 *)pcVar2,(int)pcVar3 - (int)pcVar2);
    FUN_00403e80((int *)(param_1 + 0x14),1,((int)pcVar3 - (int)pcVar2) + 1);
  }
  return cVar1 != '\0';
}


/* ==== 004112b4 FUN_004112b4 ==== */

void FUN_004112b4(int param_1,char *param_2)

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
  puStack_20 = &LAB_0041135a;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  local_8 = 0;
  iVar1 = local_8;
  if (param_2 != (char *)0x0) {
    while (pcVar4 = param_2, iVar1 = param_1, *param_2 != '\0') {
      for (; (*pcVar4 != '\0' && (1 < (byte)(*pcVar4 - 0x2dU))); pcVar4 = pcVar4 + 1) {
      }
      FUN_00403aa0((int *)&local_c,(undefined4 *)param_2,(int)pcVar4 - (int)param_2);
      iVar2 = FUN_00413ecc(param_1,local_c);
      if ((iVar2 == 0) && (uVar3 = FUN_00407ad0(local_c,"Owner"), (char)uVar3 != '\0')) {
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
  puStack_1c = &LAB_00411361;
  puStack_20 = (undefined1 *)0x411359;
  FUN_004039b8((int *)&local_c);
  return;
}


/* ==== 0041137c FUN_0041137c ==== */

void FUN_0041137c(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  
  iVar1 = FUN_0040f080(*(int *)(param_4 + -4),param_1);
  if (iVar1 < 0) {
    iVar1 = FUN_0040f080(*(int *)(param_4 + -8),param_1);
    if (-1 < iVar1) {
      FUN_0040eec8(*(int **)(param_4 + -4),param_1);
    }
  }
  return;
}


/* ==== 004113b4 FUN_004113b4 ==== */

void FUN_004113b4(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  
  iVar1 = FUN_0040f080(*(int *)(param_4 + -4),param_1);
  if (iVar1 != -1) {
    FUN_0040ef14(*(int **)(param_4 + -4),iVar1);
  }
  iVar1 = FUN_0040f080(*(int *)(param_4 + -8),param_1);
  if (iVar1 < 0) {
    FUN_0040eec8(*(int **)(param_4 + -8),param_1);
  }
  return;
}


/* ==== 004113fc FUN_004113fc ==== */

void FUN_004113fc(void)

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
  
  if (DAT_00447614 == (code *)0x0) {
    return;
  }
  puStack_20 = (undefined1 *)0x41141c;
  FUN_0040bc08(DAT_00447610);
  puStack_24 = &LAB_004115a7;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  puStack_2c = (undefined1 *)0x411434;
  puStack_20 = &stack0xfffffffc;
  piVar1 = (int *)FUN_0040f38c(DAT_00447628);
  puStack_30 = &LAB_00411588;
  uStack_34 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_34;
  if (piVar1[2] < 1) {
    *in_FS_OFFSET = uStack_34;
    puStack_2c = &LAB_0041158f;
    puStack_30 = (undefined1 *)0x411587;
    FUN_0040f3f0(DAT_00447628);
    return;
  }
  puStack_38 = (undefined1 *)0x41145a;
  puStack_2c = &stack0xfffffffc;
  FUN_00402ce4((int *)&PTR_TList_virtual_000_0040d9ac,'\x01',extraout_ECX);
  puStack_3c = &LAB_00411569;
  uStack_40 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_40;
  puStack_44 = (undefined1 *)0x411477;
  puStack_38 = &stack0xfffffffc;
  piVar2 = (int *)FUN_00402ce4((int *)&PTR_TList_virtual_000_0040d9ac,'\x01',extraout_ECX_00);
  puStack_48 = &LAB_00411517;
  uStack_4c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_4c;
  i_val = 0;
  puStack_44 = &stack0xfffffffc;
  do {
    while( true ) {
      if (piVar1[2] <= i_val) {
        *in_FS_OFFSET = uStack_4c;
        puStack_44 = &LAB_0041151e;
        puStack_48 = (undefined1 *)0x411516;
        FUN_00402d14(piVar2);
        return;
      }
      piVar3 = (int *)FUN_0040f024(piVar1,i_val);
      iVar4 = (*DAT_00447614)(piVar3[4]);
      uVar6 = extraout_ECX_01;
      uVar7 = extraout_EDX;
      if (iVar4 == 0) break;
LAB_004114b8:
      if (iVar4 != 0) {
        iVar4 = FUN_004112b4(iVar4,(char *)piVar3[5]);
        FUN_0040cf54((int *)piVar3[1],(undefined4 *)piVar3[3],iVar4);
        uVar6 = extraout_ECX_03;
        uVar7 = extraout_EDX_01;
      }
      FUN_0041137c(piVar3[1],uVar7,uVar6,(int)&stack0xfffffffc);
      FUN_0040ef14(piVar1,i_val);
      FUN_00402d14(piVar3);
    }
    uVar5 = FUN_0040cee0((int *)piVar3[1],(undefined4 *)piVar3[3]);
    uVar6 = extraout_ECX_02;
    uVar7 = extraout_EDX_00;
    if (uVar5 != 0) goto LAB_004114b8;
    FUN_004113b4(piVar3[1],extraout_EDX_00,extraout_ECX_02,(int)&stack0xfffffffc);
    i_val = i_val + 1;
  } while( true );
}


/* ==== 004115b8 FUN_004115b8 ==== */

void FUN_004115b8(int param_1,char *param_2)

{
  int *piVar1;
  int *piVar2;
  undefined4 uVar3;
  int i_val;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  
  if (DAT_00447628 == 0) {
    return;
  }
  puStack_1c = (undefined1 *)0x4115de;
  piVar1 = (int *)FUN_0040f38c(DAT_00447628);
  puStack_20 = &LAB_00411653;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  i_val = piVar1[2] + -1;
  puStack_1c = &stack0xfffffffc;
  if (-1 < i_val) {
    do {
      piVar2 = (int *)FUN_0040f024(piVar1,i_val);
      if ((param_1 == 0) || (piVar2[2] == param_1)) {
        if (param_2 != (char *)0x0) {
          uVar3 = FUN_00407ad0(param_2,(char *)piVar2[4]);
          if ((char)uVar3 == '\0') goto LAB_00411635;
        }
        FUN_0040ef14(piVar1,i_val);
        FUN_00402d14(piVar2);
      }
LAB_00411635:
      i_val = i_val + -1;
    } while (i_val != -1);
  }
  *in_FS_OFFSET = uStack_24;
  puStack_1c = (undefined1 *)0x41165a;
  puStack_20 = (undefined1 *)0x411652;
  FUN_0040f3f0(DAT_00447628);
  return;
}


/* ==== 00411664 FUN_00411664 ==== */

void FUN_00411664(int param_1)

{
  int *piVar1;
  int *piVar2;
  int i_val;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  
  if (DAT_00447628 != 0) {
    puStack_18 = (undefined1 *)0x411681;
    piVar1 = (int *)FUN_0040f38c(DAT_00447628);
    puStack_1c = &LAB_004116db;
    uStack_20 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_20;
    i_val = piVar1[2] + -1;
    puStack_18 = &stack0xfffffffc;
    if (-1 < i_val) {
      do {
        piVar2 = (int *)FUN_0040f024(piVar1,i_val);
        if (piVar2[1] == param_1) {
          FUN_0040ef14(piVar1,i_val);
          FUN_00402d14(piVar2);
        }
        i_val = i_val + -1;
      } while (i_val != -1);
    }
    *in_FS_OFFSET = uStack_20;
    puStack_18 = (undefined1 *)0x4116e2;
    puStack_1c = (undefined1 *)0x4116da;
    FUN_0040f3f0(DAT_00447628);
    return;
  }
  return;
}


/* ==== 004116e8 FUN_004116e8 ==== */

void FUN_004116e8(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = FUN_0040a9f4((int *)&DAT_0040d61c,'\x01',param_1);
  FUN_0040346c(piVar1);
  return;
}


/* ==== 00411700 FUN_00411700 ==== */

void FUN_00411700(void)

{
  FUN_004116e8((undefined4 *)PTR_PTR_00446c6c);
  return;
}


/* ==== 0041170c FUN_0041170c ==== */

void FUN_0041170c(void)

{
  FUN_004116e8((undefined4 *)PTR_PTR_00446ae4);
  return;
}


/* ==== 00411718 FUN_00411718 ==== */

int FUN_00411718(char *param_1,byte *param_2)

{
  int iVar1;
  
  iVar1 = FUN_0040ce60(param_1,param_2);
  if (iVar1 == -1) {
    FUN_00411700();
  }
  return iVar1;
}


/* ==== 00411730 TReader.Destroy ==== */

void TReader_Destroy(int *param_1,char param_2)

{
  int *piVar1;
  byte extraout_DL;
  
  piVar1 = FUN_00403074(param_1,param_2);
  (**(code **)(*(int *)piVar1[1] + 0xc))((int *)piVar1[1],piVar1[4] - piVar1[5],1);
  TFiler_Destroy(piVar1,extraout_DL & 0xfc);
  if ('\0' < (char)extraout_DL) {
    FUN_00403064(piVar1);
  }
  return;
}


/* ==== 0041176c FUN_0041176c ==== */

void FUN_0041176c(int param_1,undefined4 param_2,uint param_3)

{
  uint uVar1;
  uint extraout_ECX;
  undefined4 extraout_EDX;
  
  uVar1 = FUN_00413310(param_1,param_2,param_3);
  if ((char)param_2 != (char)uVar1) {
    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + -1;
    FUN_00413470(param_1,extraout_EDX,extraout_ECX);
    FUN_00411700();
  }
  return;
}


/* ==== 00411790 TReader.virtual_004 ==== */

void TReader_virtual_004(int param_1,char *param_2)

{
  undefined4 uVar1;
  code *in_stack_0000000c;
  undefined4 in_stack_00000010;
  
  uVar1 = FUN_00407ad0(param_2,*(char **)(param_1 + 0x70));
  if (((char)uVar1 != '\0') && (in_stack_0000000c._2_2_ != 0)) {
    (*in_stack_0000000c)(in_stack_00000010,param_1);
    FUN_004039b8((int *)(param_1 + 0x70));
  }
  return;
}


/* ==== 004117c4 TReader.virtual_008 ==== */

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
  
  puStack_18 = (undefined1 *)0x4117dd;
  local_8 = param_1;
  uVar1 = FUN_00407ad0(param_2,*(char **)(param_1 + 0x70));
  if (((char)uVar1 != '\0') && (in_stack_0000000c._2_2_ != 0)) {
    puStack_18 = (undefined1 *)0x4117f8;
    uVar2 = FUN_00413310(local_8,extraout_EDX,extraout_ECX);
    uVar3 = extraout_ECX_00;
    if ((char)uVar2 != '\n') {
      *(int *)(local_8 + 0x10) = *(int *)(local_8 + 0x10) + -1;
      puStack_18 = (undefined1 *)0x41180a;
      FUN_00413470(local_8,extraout_EDX_00,extraout_ECX_00);
      *(undefined1 *)(local_8 + 0x74) = 1;
      puStack_18 = (undefined1 *)0x411816;
      FUN_00411700();
      uVar3 = extraout_ECX_01;
    }
    puStack_18 = (undefined1 *)0x411822;
    local_c = (int *)FUN_00402ce4((int *)&PTR_TMemoryStream_virtual_000_0040df58,'\x01',uVar3);
    puStack_1c = &LAB_00411884;
    uStack_20 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_20;
    puStack_18 = &stack0xfffffffc;
    FUN_00411b6c(local_8,&local_10,4);
    (**(code **)*local_c)(local_c,local_10);
    FUN_00411b6c(local_8,(undefined4 *)local_c[1],local_10);
    *(undefined1 *)(local_8 + 0x74) = 1;
    (*in_stack_0000000c)(in_stack_00000010,local_c);
    *in_FS_OFFSET = uStack_20;
    puStack_18 = &DAT_0041188b;
    puStack_1c = (undefined1 *)0x411883;
    FUN_00402d14(local_c);
    return;
  }
  return;
}


/* ==== 004118a0 FUN_004118a0 ==== */

bool FUN_004118a0(int param_1,undefined4 param_2,uint param_3)

{
  uint uVar1;
  
  uVar1 = FUN_00413310(param_1,param_2,param_3);
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + -1;
  return (char)uVar1 == '\0';
}


/* ==== 004118b4 TReader.virtual_010 ==== */

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


/* ==== 004118d4 TReader.virtual_018 ==== */

int TReader_virtual_018(int param_1,int *param_2,undefined4 *param_3)

{
  int local_114;
  char local_110 [4];
  byte local_10c [256];
  
  FUN_00403c14(local_10c,param_3,0xff);
  local_114 = FUN_00402f74(*param_2,local_10c);
  local_110[0] = local_114 == 0;
  if (*(short *)(param_1 + 0x3a) != 0) {
    (**(code **)(param_1 + 0x38))
              (*(undefined4 *)(param_1 + 0x3c),param_1,param_3,local_110,&local_114);
  }
  if (local_110[0] != '\0') {
    FUN_00411700();
  }
  return local_114;
}


/* ==== 0041193c FUN_0041193c ==== */

void FUN_0041193c(int param_1)

{
  int *piVar1;
  int *piVar2;
  int i_val;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  
  puStack_14 = (undefined1 *)0x41194e;
  piVar1 = (int *)FUN_0040f38c(DAT_00447628);
  puStack_18 = &LAB_004119ac;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  i_val = piVar1[2] + -1;
  puStack_14 = &stack0xfffffffc;
  if (-1 < i_val) {
    do {
      piVar2 = (int *)FUN_0040f024(piVar1,i_val);
      if ((piVar2[1] == *(int *)(param_1 + 4)) && (piVar2[3] == *(int *)(param_1 + 0xc))) {
        FUN_00402d14(piVar2);
        FUN_0040ef14(piVar1,i_val);
      }
      i_val = i_val + -1;
    } while (i_val != -1);
  }
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_004119b3;
  puStack_18 = (undefined1 *)0x4119ab;
  FUN_0040f3f0(DAT_00447628);
  return;
}


/* ==== 004119b8 FUN_004119b8 ==== */

void FUN_004119b8(int *param_1)

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
  puStack_24 = &LAB_00411acc;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  i_val = param_1[0xc];
  local_8 = param_1;
  if (i_val == 0) {
    *in_FS_OFFSET = uStack_28;
    puStack_20 = &LAB_00411ad3;
    puStack_24 = (undefined1 *)0x411acb;
    FUN_004039b8((int *)&local_c);
    return;
  }
  puStack_30 = &LAB_00411aaf;
  uStack_34 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_34;
  j = *(int *)(i_val + 8);
  if (-1 < j + -1) {
    i_val = 0;
    puStack_20 = &stack0xfffffffc;
    do {
      iVar2 = FUN_0040f024((undefined4 *)local_8[0xc],i_val);
      FUN_00403a50((int *)&local_c,*(int *)(iVar2 + 0x14));
      (**(code **)(*local_8 + 0x20))(local_8,&local_c);
      iVar3 = FUN_004112b4(*(int *)(iVar2 + 8),local_c);
      iVar4 = FUN_0040f024((undefined4 *)local_8[0xc],i_val);
      FUN_0041193c(iVar4);
      if (iVar3 == 0) {
        bVar1 = FUN_0041126c(iVar2);
        if (!bVar1) goto LAB_00411a82;
        iVar2 = FUN_0040f024((undefined4 *)local_8[0xc],i_val);
        FUN_0040f304(DAT_00447628,iVar2);
        FUN_0040f118((int *)local_8[0xc],i_val,0);
      }
      else {
LAB_00411a82:
        FUN_0040cf54(*(int **)(iVar2 + 4),*(undefined4 **)(iVar2 + 0xc),iVar3);
      }
      i_val = i_val + 1;
      j = j + -1;
    } while (j != 0);
  }
  *in_FS_OFFSET = uStack_34;
  puStack_2c = (undefined1 *)0x411ab6;
  puStack_30 = (undefined1 *)0x411aae;
  FUN_00411afc((int)local_8);
  return;
}


/* ==== 00411adc TReader.virtual_00c ==== */

void TReader_virtual_00c(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00411b38(param_1);
  FUN_00410ae4(*(int **)(param_1 + 4),iVar1);
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  return;
}


/* ==== 00411afc FUN_00411afc ==== */

void FUN_00411afc(int param_1)

{
  int *piVar1;
  int i_val;
  int j;
  
  if (*(int *)(param_1 + 0x30) != 0) {
    i_val = *(int *)(*(int *)(param_1 + 0x30) + 8);
    if (-1 < i_val + -1) {
      j = 0;
      do {
        piVar1 = (int *)FUN_0040f024(*(undefined4 **)(param_1 + 0x30),j);
        FUN_00402d14(piVar1);
        j = j + 1;
        i_val = i_val + -1;
      } while (i_val != 0);
    }
    FUN_00402d14(*(int **)(param_1 + 0x30));
    *(undefined4 *)(param_1 + 0x30) = 0;
  }
  return;
}


/* ==== 00411b38 FUN_00411b38 ==== */

int FUN_00411b38(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00410ad4(*(int **)(param_1 + 4));
  return iVar1 - (*(int *)(param_1 + 0x14) - *(int *)(param_1 + 0x10));
}


/* ==== 00411b50 FUN_00411b50 ==== */

void FUN_00411b50(int param_1,undefined4 param_2,uint param_3)

{
  FUN_00413310(param_1,param_2,param_3);
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + -1;
  return;
}


/* ==== 00411b60 FUN_00411b60 ==== */

void FUN_00411b60(int param_1,undefined4 param_2,uint param_3)

{
  FUN_00413470(param_1,param_2,param_3);
  FUN_0041170c();
  return;
}


/* ==== 00411b6c FUN_00411b6c ==== */

void FUN_00411b6c(int param_1,undefined4 *param_2,uint param_3)

{
  int iVar1;
  uint i_val;
  uint j;
  undefined4 *puVar2;
  
  while (param_3 != 0) {
    i_val = *(uint *)(param_1 + 0x14) - *(uint *)(param_1 + 0x10);
    if (*(uint *)(param_1 + 0x14) < *(uint *)(param_1 + 0x10) || i_val == 0) {
      FUN_00411bb8(param_1);
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


/* ==== 00411bb8 FUN_00411bb8 ==== */

void FUN_00411bb8(int param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = (**(code **)(**(int **)(param_1 + 4) + 4))
                    (*(int **)(param_1 + 4),*(undefined4 *)(param_1 + 8),
                     *(undefined4 *)(param_1 + 0xc));
  *(int *)(param_1 + 0x14) = iVar1;
  if (iVar1 == 0) {
    piVar2 = FUN_0040a9f4((int *)&DAT_0040d61c,'\x01',(undefined4 *)PTR_PTR_00446d34);
    FUN_0040346c(piVar2);
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  return;
}


/* ==== 00411bf4 FUN_00411bf4 ==== */

bool FUN_00411bf4(int param_1,undefined4 param_2,uint param_3)

{
  uint uVar1;
  
  uVar1 = FUN_00413310(param_1,param_2,param_3);
  return (char)uVar1 == '\t';
}


/* ==== 00411c08 FUN_00411c08 ==== */

void FUN_00411c08(int param_1,undefined4 param_2,uint param_3)

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
  puStack_18 = &LAB_00411c7a;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  FUN_0041176c(param_1,6,param_3);
  FUN_00411b6c(param_1,(undefined4 *)&local_5,1);
  if (local_5 != '\x01') {
    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + -1;
    FUN_0041322c(param_1,&local_c,extraout_ECX);
    FUN_00411700();
  }
  FUN_00411b6c(param_1,(undefined4 *)&local_5,1);
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_00411c81;
  puStack_18 = (undefined1 *)0x411c79;
  FUN_004039b8(&local_c);
  return;
}


/* ==== 00411c8c FUN_00411c8c ==== */

void FUN_00411c8c(int param_1,int *param_2)

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
  
  puStack_14 = (undefined1 *)0x411c9f;
  (**(code **)(*param_2 + 0x14))();
  puStack_18 = &LAB_00411d2c;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  puStack_14 = &stack0xfffffffc;
  bVar2 = FUN_004118a0(param_1,extraout_EDX,extraout_ECX);
  uVar5 = extraout_ECX_00;
  uVar6 = extraout_EDX_00;
  if (!bVar2) {
    FUN_0040f774(param_2);
    uVar5 = extraout_ECX_01;
    uVar6 = extraout_EDX_01;
  }
  while( true ) {
    bVar2 = FUN_004118a0(param_1,uVar6,uVar5);
    if (bVar2) break;
    cVar3 = FUN_00411b50(param_1,extraout_EDX_08,extraout_ECX_08);
    if ((byte)(cVar3 - 2U) < 3) {
      FUN_00412530(param_1,extraout_EDX_02,extraout_ECX_02);
    }
    piVar4 = (int *)FUN_0040f768((int)param_2);
    FUN_004125e0(param_1,extraout_EDX_03,extraout_ECX_03);
    uVar5 = extraout_ECX_04;
    uVar6 = extraout_EDX_04;
    while( true ) {
      bVar2 = FUN_004118a0(param_1,uVar6,uVar5);
      if (bVar2) break;
      FUN_0041274c((int *)param_1,piVar4);
      uVar5 = extraout_ECX_05;
      uVar6 = extraout_EDX_05;
    }
    FUN_004125e8(param_1,extraout_EDX_06,extraout_ECX_06);
    uVar5 = extraout_ECX_07;
    uVar6 = extraout_EDX_07;
  }
  FUN_004125e8(param_1,extraout_EDX_08,extraout_ECX_08);
  puVar1 = puStack_14;
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_00411d33;
  puStack_18 = (undefined1 *)0x411d2b;
  (**(code **)(*param_2 + 0x18))(param_2,*param_2,puVar1);
  return;
}


/* ==== 00411db8 FUN_00411db8 ==== */

void FUN_00411db8(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

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
  puStack_18 = &LAB_00411e9e;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  puStack_20 = (undefined1 *)0x411ddd;
  iVar2 = FUN_004137c0(*(int *)(param_4 + -0xc),*(char **)(param_4 + -0x14),param_3);
  *(undefined4 *)(param_4 + -0x10) = 0;
  if (*(short *)(*(int *)(param_4 + -0xc) + 0x6a) != 0) {
    puStack_20 = (undefined1 *)(param_4 + -0x10);
    puStack_24 = (undefined1 *)0x411e0f;
    (**(code **)(*(int *)(param_4 + -0xc) + 0x68))
              (*(undefined4 *)(*(int *)(param_4 + -0xc) + 0x6c),*(undefined4 *)(param_4 + -0xc),
               iVar2);
  }
  if (*(int *)(param_4 + -0x10) == 0) {
    puStack_20 = (undefined1 *)0x411e1d;
    uVar3 = (**(code **)(iVar2 + -0xc))();
    *(undefined4 *)(param_4 + -0x10) = uVar3;
    if ((*(byte *)(param_4 + -1) & 4) != 0) {
      puVar1 = (ushort *)(*(int *)(param_4 + -0x10) + 0x20);
      *puVar1 = *puVar1 | 1;
      puVar1 = (ushort *)(*(int *)(param_4 + -0x10) + 0x20);
      *puVar1 = *puVar1 | 0x200;
    }
    puStack_24 = &LAB_00411e72;
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


/* ==== 00411ec8 FUN_00411ec8 ==== */

void FUN_00411ec8(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  ushort *puVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  
  puStack_14 = &stack0xfffffffc;
  puStack_18 = &LAB_00411f3e;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  FUN_00402ef0(*(int **)(param_4 + -0x10),*(undefined4 *)(*(int *)(param_4 + -0xc) + 0x2c),param_3);
  (**(code **)(**(int **)(param_4 + -0xc) + 0x1c))
            (*(int **)(param_4 + -0xc),*(undefined4 *)(param_4 + -0x10),param_4 + -0x18);
  if (DAT_00447614 != (code *)0x0) {
    iVar2 = (*DAT_00447614)(*(undefined4 *)(param_4 + -0x18));
    if (iVar2 == *(int *)(param_4 + -0x10)) {
      puVar1 = (ushort *)(*(int *)(param_4 + -0x10) + 0x20);
      *puVar1 = *puVar1 | 0x200;
    }
  }
  *in_FS_OFFSET = uStack_1c;
  return;
}


/* ==== 00411f68 FUN_00411f68 ==== */

void FUN_00411f68(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 extraout_ECX;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  
  puStack_14 = &stack0xfffffffc;
  puStack_18 = &LAB_00411fe3;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  iVar1 = FUN_004137c0(*(int *)(param_4 + -0xc),*(char **)(param_4 + -0x14),param_3);
  uVar2 = (**(code **)(**(int **)(param_4 + -0xc) + 0x14))
                    (*(int **)(param_4 + -0xc),*(undefined4 *)(param_4 + -0x18),iVar1);
  *(undefined4 *)(param_4 + -0x10) = uVar2;
  iVar1 = FUN_00402ef0(*(int **)(param_4 + -0x10),param_4,extraout_ECX);
  *(int *)(*(int *)(param_4 + -0xc) + 0x2c) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)(*(int *)(param_4 + -0xc) + 0x2c) =
         *(undefined4 *)(*(int *)(param_4 + -0xc) + 0x18);
  }
  *in_FS_OFFSET = uStack_1c;
  return;
}


/* ==== 0041200c FUN_0041200c ==== */

void FUN_0041200c(int *param_1,int *param_2)

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
  puStack_3c = &LAB_004121d1;
  uStack_40 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_40;
  puStack_44 = (undefined1 *)0x41203f;
  local_10 = param_1;
  local_c = param_2;
  (**(code **)(*param_1 + 0x24))(param_1,&local_5,&local_20);
  puStack_44 = (undefined1 *)0x41204a;
  FUN_0041322c((int)local_10,local_1c + 1,extraout_ECX);
  puStack_44 = (undefined1 *)0x412055;
  FUN_0041322c((int)local_10,local_1c,extraout_ECX_00);
  iVar1 = local_10[0xb];
  iVar2 = local_10[7];
  puStack_48 = &LAB_004121af;
  uStack_4c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_4c;
  local_14 = local_c;
  puVar4 = extraout_ECX_01;
  uVar5 = extraout_EDX;
  puStack_44 = &stack0xfffffffc;
  if (local_c == (int *)0x0) {
    if ((local_5 & 1) == 0) {
      puStack_54 = (undefined1 *)0x412096;
      puVar4 = &stack0xfffffffc;
      puStack_44 = &stack0xfffffffc;
      FUN_00411db8(0,extraout_EDX,(int)extraout_ECX_01,(int)&stack0xfffffffc);
      uVar5 = extraout_EDX_01;
    }
    else {
      puStack_54 = (undefined1 *)0x41208d;
      puVar4 = &stack0xfffffffc;
      puStack_44 = &stack0xfffffffc;
      FUN_00411f68(0,extraout_EDX,(int)extraout_ECX_01,(int)&stack0xfffffffc);
      uVar5 = extraout_EDX_00;
    }
  }
  if (local_14 != (int *)0x0) {
    puStack_54 = &LAB_0041216d;
    uStack_58 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_58;
    *(ushort *)(local_14 + 8) = *(ushort *)(local_14 + 8) | 1;
    if ((local_5 & 1) == 0) {
      FUN_00411ec8(local_14,uVar5,puVar4,(int)&stack0xfffffffc);
    }
    if (local_14 == (int *)0x0) {
      *in_FS_OFFSET = uStack_58;
      FUN_0040350c();
      *in_FS_OFFSET = uStack_40;
      puStack_38 = &LAB_004121d8;
      puStack_3c = (undefined1 *)0x4121d0;
      FUN_004039dc(local_1c,2);
      return;
    }
    if ((*(byte *)((int)local_14 + 0x21) & 2) != 0) {
      local_10[7] = (int)local_14;
    }
    *(ushort *)(local_14 + 8) = *(ushort *)(local_14 + 8) | 2;
    (**(code **)(*local_14 + 0x14))(local_14,local_10);
    *(ushort *)(local_14 + 8) = *(ushort *)(local_14 + 8) & 0xfffd;
    if ((local_5 & 2) != 0) {
      FUN_00402ef0((int *)local_10[0xb],local_14,local_20);
    }
    if (((local_5 & 1) == 0) && ((*(byte *)((int)local_14 + 0x21) & 2) == 0)) {
      FUN_0040eec8((int *)local_10[0xd],(int)local_14);
    }
    else {
      iVar3 = FUN_0040f080(local_10[0xd],(int)local_14);
      if (iVar3 < 0) {
        FUN_0040eec8((int *)local_10[0xd],(int)local_14);
      }
    }
    *in_FS_OFFSET = uStack_58;
  }
  *in_FS_OFFSET = uStack_4c;
  local_10[0xb] = iVar1;
  local_10[7] = iVar2;
  return;
}


/* ==== 004121e4 FUN_004121e4 ==== */

void FUN_004121e4(int *param_1,int *param_2,uint param_3)

{
  int iVar1;
  uint extraout_ECX;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  
  if (param_1[0xc] == 0) {
    puStack_10 = (undefined1 *)0x412203;
    iVar1 = FUN_00402ce4((int *)&PTR_TList_virtual_000_0040d9ac,'\x01',param_3);
    param_1[0xc] = iVar1;
    puStack_14 = &LAB_0041223f;
    uStack_18 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_18;
    puStack_10 = &stack0xfffffffc;
    FUN_00412254(param_1,param_2,extraout_ECX);
    FUN_004119b8(param_1);
    *in_FS_OFFSET = uStack_18;
    puStack_10 = (undefined1 *)0x412250;
    puStack_14 = (undefined1 *)0x41223e;
    FUN_00411afc((int)param_1);
    return;
  }
  puStack_10 = (undefined1 *)0x412250;
  FUN_00412254(param_1,param_2,param_3);
  return;
}


/* ==== 00412254 FUN_00412254 ==== */

void FUN_00412254(int *param_1,int *param_2,uint param_3)

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
    puStack_20 = (undefined1 *)0x412276;
    bVar3 = FUN_004118a0((int)param_1,piVar6,param_3);
    if (bVar3) break;
    puStack_20 = (undefined1 *)0x41226e;
    FUN_0041274c(param_1,param_2);
    param_3 = extraout_ECX;
    piVar6 = extraout_EDX;
  }
  puStack_20 = (undefined1 *)0x412282;
  FUN_004125e8((int)param_1,extraout_EDX_00,extraout_ECX_00);
  iVar1 = param_1[0xb];
  iVar2 = param_1[10];
  puStack_20 = (undefined1 *)0x41229f;
  iVar4 = FUN_00402ef0(param_2,extraout_EDX_01,extraout_ECX_01);
  param_1[0xb] = iVar4;
  puStack_24 = &LAB_00412316;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  puStack_20 = &stack0xfffffffc;
  iVar4 = FUN_00402ef0(param_2,param_1,extraout_ECX_02);
  param_1[10] = iVar4;
  uVar5 = extraout_ECX_03;
  piVar6 = extraout_EDX_02;
  if (iVar4 == 0) {
    param_1[10] = param_1[6];
    piVar6 = param_1;
  }
  while( true ) {
    bVar3 = FUN_004118a0((int)param_1,piVar6,uVar5);
    if (bVar3) break;
    FUN_0041200c(param_1,(int *)0x0);
    uVar5 = extraout_ECX_04;
    piVar6 = extraout_EDX_03;
  }
  FUN_004125e8((int)param_1,extraout_EDX_04,extraout_ECX_05);
  *in_FS_OFFSET = uStack_28;
  param_1[0xb] = iVar1;
  param_1[10] = iVar2;
  return;
}


/* ==== 00412324 FUN_00412324 ==== */

void FUN_00412324(int param_1,undefined4 param_2,uint param_3)

{
  uint uVar1;
  uint extraout_ECX;
  undefined4 extraout_EDX;
  undefined4 local_14 [4];
  
  uVar1 = FUN_00413310(param_1,param_2,param_3);
  if ((char)uVar1 == '\x05') {
    FUN_00411b6c(param_1,local_14,10);
  }
  else {
    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + -1;
    FUN_00412530(param_1,extraout_EDX,extraout_ECX);
  }
  return;
}


/* ==== 00412364 FUN_00412364 ==== */

void FUN_00412364(int param_1,undefined4 param_2,uint param_3)

{
  uint uVar1;
  uint extraout_ECX;
  undefined4 extraout_EDX;
  undefined4 local_c [2];
  
  uVar1 = FUN_00413310(param_1,param_2,param_3);
  if ((char)uVar1 == '\x0f') {
    FUN_00411b6c(param_1,local_c,4);
  }
  else {
    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + -1;
    FUN_00412530(param_1,extraout_EDX,extraout_ECX);
  }
  return;
}


/* ==== 004123a4 FUN_004123a4 ==== */

void FUN_004123a4(int param_1,undefined4 param_2,uint param_3)

{
  uint uVar1;
  uint extraout_ECX;
  undefined4 extraout_EDX;
  undefined4 local_10 [3];
  
  uVar1 = FUN_00413310(param_1,param_2,param_3);
  if ((char)uVar1 == '\x10') {
    FUN_00411b6c(param_1,local_10,8);
  }
  else {
    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + -1;
    FUN_00412530(param_1,extraout_EDX,extraout_ECX);
  }
  return;
}


/* ==== 004123f0 FUN_004123f0 ==== */

void FUN_004123f0(int param_1,undefined4 param_2,uint param_3)

{
  uint uVar1;
  uint extraout_ECX;
  undefined4 extraout_EDX;
  undefined4 local_10 [3];
  
  uVar1 = FUN_00413310(param_1,param_2,param_3);
  if ((char)uVar1 == '\x11') {
    FUN_00411b6c(param_1,local_10,8);
  }
  else {
    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + -1;
    FUN_00412530(param_1,extraout_EDX,extraout_ECX);
  }
  return;
}


/* ==== 00412430 FUN_00412430 ==== */

void FUN_00412430(int param_1,int *param_2,uint param_3)

{
  uint uVar1;
  undefined4 *puVar2;
  uint local_c;
  
  local_c = param_3;
  uVar1 = FUN_00413310(param_1,param_2,param_3);
  switch(uVar1 & 0x7f) {
  case 0:
    FUN_00403a0c(param_2,(undefined4 *)&DAT_00412528);
    break;
  default:
    FUN_00411700();
    break;
  case 7:
    FUN_00411b6c(param_1,&local_c,1);
    FUN_00403aa0(param_2,(undefined4 *)0x0,local_c & 0xff);
    puVar2 = (undefined4 *)FUN_00403e08(param_2);
    FUN_00411b6c(param_1,puVar2,local_c & 0xff);
    break;
  case 8:
    FUN_00403a0c(param_2,(undefined4 *)"False");
    break;
  case 9:
    FUN_00403a0c(param_2,(undefined4 *)&DAT_0041250c);
    break;
  case 0xd:
    FUN_00403a0c(param_2,(undefined4 *)&DAT_0041251c);
  }
  return;
}


/* ==== 00412530 FUN_00412530 ==== */

int FUN_00412530(int param_1,undefined4 param_2,uint param_3)

{
  char cVar1;
  uint uVar2;
  int local_c;
  char local_8 [2];
  short local_6;
  
  uVar2 = FUN_00413310(param_1,param_2,param_3);
  cVar1 = (char)uVar2;
  if (cVar1 == '\x02') {
    FUN_00411b6c(param_1,(undefined4 *)local_8,1);
    local_c = (int)local_8[0];
  }
  else if (cVar1 == '\x03') {
    FUN_00411b6c(param_1,(undefined4 *)&local_6,2);
    local_c = (int)local_6;
  }
  else if (cVar1 == '\x04') {
    FUN_00411b6c(param_1,&local_c,4);
  }
  else {
    FUN_00411700();
  }
  return local_c;
}


/* ==== 0041259c FUN_0041259c ==== */

int FUN_0041259c(int param_1,undefined4 param_2,uint param_3)

{
  char cVar1;
  uint extraout_ECX;
  undefined4 extraout_EDX;
  int local_c [2];
  
  cVar1 = FUN_00411b50(param_1,param_2,param_3);
  if (cVar1 == '\x13') {
    FUN_00413310(param_1,extraout_EDX,extraout_ECX);
    FUN_00411b6c(param_1,local_c,8);
  }
  else {
    local_c[0] = FUN_00412530(param_1,extraout_EDX,extraout_ECX);
  }
  return local_c[0];
}


/* ==== 004125e0 FUN_004125e0 ==== */

void FUN_004125e0(int param_1,undefined4 param_2,uint param_3)

{
  FUN_0041176c(param_1,CONCAT31((int3)((uint)param_2 >> 8),1),param_3);
  return;
}


/* ==== 004125e8 FUN_004125e8 ==== */

void FUN_004125e8(int param_1,undefined4 param_2,uint param_3)

{
  FUN_0041176c(param_1,0,param_3);
  return;
}


/* ==== 004125f0 TReader.virtual_024 ==== */

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
  bVar1 = FUN_00411b50(param_1,param_2,(uint)param_3);
  if ((bVar1 & 0xf0) == 0xf0) {
    uVar2 = FUN_00413310(param_1,extraout_EDX,extraout_ECX);
    *param_2 = (byte)uVar2 & 0xf;
    if ((*param_2 & 2) != 0) {
      iVar3 = FUN_00412530(param_1,extraout_EDX_00,extraout_ECX_00);
      *param_3 = iVar3;
    }
  }
  return;
}


/* ==== 00412730 FUN_00412730 ==== */

void FUN_00412730(undefined4 param_1,undefined4 param_2,uint param_3,int param_4)

{
  FUN_00413470(*(int *)(param_4 + -0xc),param_2,param_3);
  FUN_004116e8((undefined4 *)PTR_PTR_00446d10);
  return;
}


/* ==== 0041274c FUN_0041274c ==== */

void FUN_0041274c(int *param_1,int *param_2)

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
  puStack_2c = &LAB_00412910;
  local_30 = *in_FS_OFFSET;
  *in_FS_OFFSET = &local_30;
  puStack_38 = &LAB_004128c5;
  local_3c = *in_FS_OFFSET;
  *in_FS_OFFSET = &local_3c;
  puStack_40 = (undefined1 *)0x412787;
  local_8 = param_2;
  FUN_0041322c((int)param_1,&local_c,0);
  puStack_44 = &LAB_0041289e;
  uStack_48 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_48;
  i_val = 1;
  puStack_40 = &stack0xfffffffc;
  iVar1 = FUN_00403c38(local_c);
  local_14 = local_8;
  *(undefined1 *)(param_1 + 0x1d) = 1;
  iVar2 = i_val;
  while( true ) {
    for (; (i_val <= iVar1 && (*(char *)(local_c + -1 + i_val) != '.')); i_val = i_val + 1) {
    }
    FUN_00403e40(local_c,iVar2,i_val - iVar2,param_1 + 0x1c);
    if (iVar1 < i_val) break;
    iVar2 = FUN_00402f34(*local_14);
    puVar3 = (undefined4 *)FUN_0040ce74(iVar2,(undefined1 *)param_1[0x1c]);
    if (puVar3 == (undefined4 *)0x0) {
      FUN_00411b60((int)param_1,extraout_EDX,extraout_ECX);
    }
    local_18 = (int *)0x0;
    if (**(char **)*puVar3 == '\a') {
      local_18 = (int *)FUN_0040cee0(local_14,puVar3);
    }
    uVar4 = FUN_00402e8c(local_18,(int)&PTR_TPersistent_virtual_000_0040dabc);
    if ((char)uVar4 == '\0') {
      FUN_00412730(uVar4,extraout_EDX_00,extraout_ECX_00,(int)&stack0xfffffffc);
    }
    local_14 = local_18;
    i_val = i_val + 1;
    iVar2 = i_val;
  }
  iVar2 = FUN_00402f34(*local_14);
  puVar3 = (undefined4 *)FUN_0040ce74(iVar2,(undefined1 *)param_1[0x1c]);
  if (puVar3 == (undefined4 *)0x0) {
    *(undefined1 *)(param_1 + 0x1d) = 0;
    (**(code **)(*local_14 + 4))(local_14,param_1);
    *(undefined1 *)(param_1 + 0x1d) = 1;
    if (param_1[0x1c] != 0) {
      FUN_00411b60((int)param_1,extraout_EDX_01,extraout_ECX_01);
    }
  }
  else {
    FUN_00412ba0(param_1,local_14,puVar3);
  }
  *in_FS_OFFSET = uStack_48;
  *in_FS_OFFSET = local_3c;
  *in_FS_OFFSET = local_30;
  puStack_28 = &LAB_00412917;
  puStack_2c = (undefined1 *)0x41290f;
  FUN_004039b8(&local_c);
  return;
}


/* ==== 00412920 FUN_00412920 ==== */

void FUN_00412920(int *param_1,undefined4 *param_2,undefined4 param_3)

{
  char cVar1;
  code *pcVar2;
  int local_c;
  int *local_8;
  
  local_8 = param_1;
  pcVar2 = (code *)FUN_0040eaac(*(int *)*param_2);
  if ((pcVar2 != (code *)0x0) && (cVar1 = (*pcVar2)(param_3,&local_c), cVar1 != '\0')) {
    FUN_0040cf54(local_8,param_2,local_c);
    return;
  }
  FUN_00411700();
  return;
}


/* ==== 00412968 FUN_00412968 ==== */

void FUN_00412968(int param_1,int param_2,undefined4 *param_3,int param_4)

{
  int *piVar1;
  
  piVar1 = FUN_00411214((int *)&DAT_004111ec,'\x01',param_1,param_3,(undefined4 *)0x0,param_2,
                        *(int *)(*(int *)(param_4 + -4) + 0x18));
  FUN_0040eec8(*(int **)(*(int *)(param_4 + -4) + 0x30),(int)piVar1);
  return;
}


/* ==== 004129a8 FUN_004129a8 ==== */

void FUN_004129a8(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

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
  puStack_28 = &LAB_00412b93;
  uStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_2c;
  bVar1 = FUN_00411b50(*(int *)(param_4 + -4),param_2,0);
  switch(bVar1) {
  case 0:
  case 0xd:
    uVar2 = FUN_00413310(*(int *)(param_4 + -4),extraout_EDX,extraout_ECX);
    if ((char)uVar2 == '\r') {
      FUN_004046cc(&variantarg);
    }
    else {
      FUN_00404710(&variantarg,(VARIANTARG *)PTR_VARIANTARG_00446a94);
    }
    break;
  default:
    piVar4 = FUN_0040a9f4((int *)&DAT_0040d61c,'\x01',(undefined4 *)PTR_PTR_00446d34);
    FUN_0040346c(piVar4);
    break;
  case 2:
    iVar3 = FUN_00412530(*(int *)(param_4 + -4),extraout_EDX,extraout_ECX);
    variantarg.n1._8_1_ = (char)iVar3;
    break;
  case 3:
    iVar3 = FUN_00412530(*(int *)(param_4 + -4),extraout_EDX,extraout_ECX);
    variantarg.n1._8_2_ = (short)iVar3;
    break;
  case 4:
    iVar3 = FUN_00412530(*(int *)(param_4 + -4),extraout_EDX,extraout_ECX);
    variantarg.n1._8_4_ = iVar3;
    break;
  case 5:
    FUN_00412324(*(int *)(param_4 + -4),extraout_EDX,extraout_ECX);
    variantarg.n1.n2.n3 = (_union_2685)(double)in_ST0;
    break;
  case 6:
  case 0xc:
    FUN_00413268(*(int *)(param_4 + -4),(int *)&local_18,extraout_ECX);
    FUN_00404a54(&variantarg,local_18);
    break;
  case 8:
  case 9:
    uVar2 = FUN_00413310(*(int *)(param_4 + -4),extraout_EDX,extraout_ECX);
    variantarg.n1._8_2_ = -(ushort)((char)uVar2 == '\t');
    break;
  case 0xf:
    FUN_00412364(*(int *)(param_4 + -4),extraout_EDX,extraout_ECX);
    variantarg.n1._8_4_ = (float)in_ST0;
    break;
  case 0x10:
    FUN_004123a4(*(int *)(param_4 + -4),extraout_EDX,extraout_ECX);
    variantarg.n1.n2.n3 = (_union_2685)(longlong)ROUND(in_ST0);
    break;
  case 0x11:
    FUN_004123f0(*(int *)(param_4 + -4),extraout_EDX,extraout_ECX);
    variantarg.n1.n2.n3 = (_union_2685)(double)in_ST0;
    break;
  case 0x12:
    FUN_004132c8(*(int *)(param_4 + -4),(int *)&str_in,extraout_ECX);
    FUN_00404a94(&variantarg,str_in);
  }
  variantarg.n1.n2.vt = *(undefined2 *)(&DAT_00446304 + (uint)bVar1 * 4);
  FUN_0040d210(*(int **)(param_4 + -8),*(int *)(param_4 + -0xc),&variantarg);
  *in_FS_OFFSET = uStack_2c;
  puStack_24 = &LAB_00412b9a;
  puStack_28 = (undefined1 *)0x412b82;
  FUN_00403fe8(&str_in);
  puStack_28 = (undefined1 *)0x412b8a;
  FUN_004039b8((int *)&local_18);
  puStack_28 = (undefined1 *)0x412b92;
  FUN_00404ac8(&variantarg);
  return;
}


/* ==== 00412ba0 FUN_00412ba0 ==== */

void FUN_00412ba0(int *param_1,int *param_2,undefined4 *param_3)

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
  puStack_38 = &LAB_00412e2c;
  uStack_3c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_3c;
  puVar2 = &stack0xfffffffc;
  local_10 = param_3;
  local_c = param_2;
  local_8 = param_1;
  if (param_3[2] == 0) {
    FUN_004116e8((undefined4 *)PTR_PTR_00446cb0);
    param_3 = extraout_ECX;
    param_2 = extraout_EDX;
    puVar2 = puStack_34;
  }
  puStack_34 = puVar2;
  pbVar1 = *(byte **)*local_10;
  switch((uint)*pbVar1) {
  case 1:
    cVar4 = FUN_00411b50((int)local_8,param_2,(uint)param_3);
    if (cVar4 == '\a') {
      FUN_00412430((int)local_8,&local_1c,extraout_ECX_00);
      FUN_00412920(local_c,local_10,local_1c);
    }
    else {
      iVar6 = FUN_00412530((int)local_8,extraout_EDX_00,extraout_ECX_00);
      FUN_0040cf54(local_c,local_10,iVar6);
    }
    break;
  case 2:
    bVar3 = FUN_00411c08((int)local_8,param_2,(uint)param_3);
    FUN_0040cf54(local_c,local_10,(uint)bVar3);
    break;
  case 3:
    FUN_00412430((int)local_8,(int *)&local_20,(uint)param_3);
    iVar6 = FUN_00411718((char *)pbVar1,local_20);
    FUN_0040cf54(local_c,local_10,iVar6);
    break;
  case 4:
    FUN_00412324((int)local_8,param_2,(uint)param_3);
    FUN_0040d164(local_c,local_10);
    break;
  case 5:
  case 10:
  case 0xb:
    FUN_00413268((int)local_8,(int *)&multi_byte_str,(uint)param_3);
    FUN_0040d138(local_c,local_10,multi_byte_str);
    break;
  case 6:
    iVar6 = FUN_0041314c((int)local_8,(int)pbVar1);
    FUN_0040cf54(local_c,local_10,iVar6);
    break;
  case 7:
    cVar4 = FUN_00411b50((int)local_8,param_2,(uint)param_3);
    if (cVar4 == '\r') {
      FUN_00413310((int)local_8,extraout_EDX_01,extraout_ECX_01);
      FUN_0040cf54(local_c,local_10,0);
    }
    else if (cVar4 == '\x0e') {
      FUN_00413310((int)local_8,extraout_EDX_01,extraout_ECX_01);
      piVar5 = (int *)FUN_0040cee0(local_c,local_10);
      FUN_00411c8c((int)local_8,piVar5);
    }
    else {
      FUN_00412430((int)local_8,(int *)&local_28,extraout_ECX_01);
      FUN_00412968((int)local_c,(int)local_10,local_28,(int)puVar7);
    }
    break;
  case 8:
    cVar4 = FUN_00411b50((int)local_8,param_2,(uint)param_3);
    if (cVar4 == '\r') {
      FUN_00413310((int)local_8,extraout_EDX_02,extraout_ECX_02);
      FUN_0040d250(local_c,(int)local_10,(undefined4 *)&DAT_004462fc);
    }
    else {
      FUN_00412430((int)local_8,&local_2c,extraout_ECX_02);
      local_18 = (**(code **)(*local_8 + 0x18))(local_8,local_8[6],local_2c);
      local_14 = local_8[6];
      if (local_18 != 0) {
        FUN_0040d250(local_c,(int)local_10,&local_18);
      }
    }
    break;
  case 0xc:
    FUN_004129a8((uint)*pbVar1,param_2,param_3,(int)&stack0xfffffffc);
    break;
  case 0x10:
    iVar6 = FUN_0041259c((int)local_8,param_2,(uint)param_3);
    FUN_0040d288(local_c,(int)local_10,extraout_ECX_03,iVar6,extraout_EDX_03);
  }
  *in_FS_OFFSET = uStack_3c;
  puStack_34 = &LAB_00412e33;
  puStack_38 = (undefined1 *)0x412e2b;
  FUN_004039dc(&local_2c,5);
  return;
}


/* ==== 00412e38 FUN_00412e38 ==== */

void FUN_00412e38(undefined4 *param_1,int *param_2)

{
  int iVar1;
  int i_val;
  undefined4 *local_14;
  undefined1 local_10;
  int local_c;
  undefined1 local_8;
  
  i_val = 0;
  FUN_004039b8(param_2);
  if (DAT_00447614 != (code *)0x0) {
    FUN_00403a0c(param_2,param_1);
    while( true ) {
      iVar1 = (*DAT_00447614)(*param_2);
      if (iVar1 == 0) break;
      i_val = i_val + 1;
      local_10 = 0xb;
      local_8 = 0;
      local_14 = param_1;
      local_c = i_val;
      FUN_0040873c((byte *)"%s_%d",&local_14,1,param_2);
    }
  }
  return;
}


/* ==== 00412ea8 FUN_00412ea8 ==== */

void FUN_00412ea8(int *param_1,int *param_2)

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
  local_24 = &LAB_0041313a;
  local_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&local_28;
  local_2c = (undefined1 *)0x412ed7;
  FUN_00413208((int)param_1,param_2,0);
  local_2c = (undefined1 *)0x412ee6;
  FUN_0040bc08(DAT_00447610);
  local_30 = (undefined4 *)&LAB_00413118;
  iStack_34 = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStack_34;
  puStack_3c = &LAB_004130d9;
  iStack_40 = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStack_40;
  puStack_44 = (undefined1 *)0x412f10;
  puStack_38 = &stack0xfffffffc;
  local_2c = &stack0xfffffffc;
  (**(code **)(*param_1 + 0x24))(param_1,&stack0xffffffeb,&stack0xffffffec);
  if (param_2 == (int *)0x0) {
    puStack_44 = (undefined1 *)0x412f21;
    FUN_0041322c((int)param_1,(int *)&stack0xffffffe4,extraout_ECX);
    puStack_44 = (undefined1 *)0x412f29;
    i_val = FUN_0040e70c(unaff_EDI);
    puStack_44 = (undefined1 *)0x412f30;
    local_10 = (int *)(**(code **)(i_val + 0x2c))(i_val,1,0);
    puStack_44 = (undefined1 *)0x412f3e;
    FUN_0041322c((int)param_1,(int *)&local_20,extraout_ECX_00);
    puStack_44 = (undefined1 *)0x412f49;
    (**(code **)(*local_10 + 0x18))(local_10,local_20);
  }
  else {
    puStack_44 = (undefined1 *)0x412f5c;
    FUN_0041322c((int)param_1,(int *)&local_24,extraout_ECX);
    local_10 = param_2;
    if ((*(byte *)(param_2 + 8) & 0x10) == 0) {
      *(ushort *)(param_2 + 8) = *(ushort *)(param_2 + 8) | 1;
      *(ushort *)(param_2 + 8) = *(ushort *)(param_2 + 8) | 2;
      puStack_44 = (undefined1 *)0x412f8d;
      FUN_0041322c((int)param_1,(int *)&local_30,extraout_ECX_01);
      puStack_44 = (undefined1 *)0x412f98;
      FUN_00412e38(local_30,(int *)&local_2c);
      puStack_44 = (undefined1 *)0x412fa3;
      (**(code **)(*param_2 + 0x18))(param_2,local_2c);
    }
    else {
      puStack_44 = (undefined1 *)0x412f70;
      FUN_0041322c((int)param_1,&local_28,extraout_ECX_01);
    }
  }
  param_1[6] = (int)local_10;
  param_1[7] = (int)local_10;
  puStack_44 = (undefined1 *)0x412fba;
  pvVar1 = FUN_00405fa4();
  if (*(int *)((int)pvVar1 + 8) == 0) {
    puStack_44 = (undefined1 *)0x412fe2;
    i_val = FUN_00402ce4((int *)&PTR_TList_virtual_000_0040d9ac,'\x01',extraout_ECX_02);
    param_1[0xd] = i_val;
  }
  else {
    puStack_44 = (undefined1 *)0x412fc8;
    pvVar1 = FUN_00405fa4();
    param_1[0xd] = *(int *)((int)pvVar1 + 8);
  }
  puStack_48 = &LAB_004130c3;
  iStack_4c = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStack_4c;
  puStack_44 = &stack0xfffffffc;
  i_val = FUN_0040f080(param_1[0xd],param_1[6]);
  if (i_val < 0) {
    FUN_0040eec8((int *)param_1[0xd],param_1[6]);
  }
  param_1[10] = param_1[6];
  *(ushort *)(param_1[6] + 0x20) = *(ushort *)(param_1[6] + 0x20) | 1;
  *(ushort *)(param_1[6] + 0x20) = *(ushort *)(param_1[6] + 0x20) | 2;
  (**(code **)(*(int *)param_1[6] + 0x14))((int *)param_1[6],param_1);
  *(ushort *)(param_1[6] + 0x20) = *(ushort *)(param_1[6] + 0x20) & 0xfffd;
  pvVar1 = FUN_00405fa4();
  if ((*(int *)((int)pvVar1 + 8) == 0) && (i_val = *(int *)(param_1[0xd] + 8), -1 < i_val + -1)) {
    j = 0;
    do {
      piVar2 = (int *)FUN_0040f024((undefined4 *)param_1[0xd],j);
      (**(code **)(*piVar2 + 0xc))();
      j = j + 1;
      i_val = i_val + -1;
    } while (i_val != 0);
  }
  *in_FS_OFFSET = iStack_4c;
  puStack_44 = &LAB_004130ca;
  puStack_48 = (undefined1 *)0x4130a6;
  pvVar1 = FUN_00405fa4();
  if (*(int *)((int)pvVar1 + 8) == 0) {
    puStack_48 = (undefined1 *)0x4130ba;
    FUN_00402d14((int *)param_1[0xd]);
  }
  param_1[0xd] = 0;
  return;
}


/* ==== 0041314c FUN_0041314c ==== */

void FUN_0041314c(int param_1,int param_2)

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
  puStack_20 = &LAB_004131f6;
  local_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &local_24;
  puStack_2c = &LAB_004131c9;
  uStack_30 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_30;
  local_8 = param_1;
  uVar2 = FUN_00413310(param_1,param_2,0);
  if ((char)uVar2 != '\v') {
    FUN_00411700();
  }
  iVar3 = FUN_0040ce08(param_2);
  pcVar1 = (char *)**(undefined4 **)(iVar3 + 1);
  uVar2 = extraout_ECX;
  while (FUN_0041322c(local_8,(int *)&local_c,uVar2), local_c != (byte *)0x0) {
    FUN_00411718(pcVar1,local_c);
    uVar2 = extraout_ECX_00;
  }
  *in_FS_OFFSET = uStack_30;
  *in_FS_OFFSET = local_24;
  puStack_1c = &LAB_004131fd;
  puStack_20 = (undefined1 *)0x4131f5;
  FUN_004039b8((int *)&local_c);
  return;
}


/* ==== 00413208 FUN_00413208 ==== */

void FUN_00413208(int param_1,undefined4 param_2,int param_3)

{
  int local_4;
  
  local_4 = param_3;
  FUN_00411b6c(param_1,&local_4,4);
  if (local_4 != DAT_004462f8) {
    FUN_004116e8((undefined4 *)PTR_PTR_00446bdc);
  }
  return;
}


/* ==== 0041322c FUN_0041322c ==== */

void FUN_0041322c(int param_1,int *param_2,uint param_3)

{
  undefined4 *puVar1;
  uint local_c;
  
  local_c = param_3;
  FUN_00411b6c(param_1,&local_c,1);
  FUN_00403aa0(param_2,(undefined4 *)0x0,local_c & 0xff);
  puVar1 = (undefined4 *)FUN_00403e08(param_2);
  FUN_00411b6c(param_1,puVar1,local_c & 0xff);
  return;
}


/* ==== 00413268 FUN_00413268 ==== */

void FUN_00413268(int param_1,int *param_2,uint param_3)

{
  uint uVar1;
  uint local_c;
  
  local_c = 0;
  uVar1 = FUN_00413310(param_1,param_2,param_3);
  if ((char)uVar1 == '\x06') {
    FUN_00411b6c(param_1,&local_c,1);
  }
  else if ((char)uVar1 == '\f') {
    FUN_00411b6c(param_1,&local_c,4);
  }
  else {
    FUN_00411700();
  }
  FUN_00403aa0(param_2,(undefined4 *)0x0,local_c);
  FUN_00411b6c(param_1,(undefined4 *)*param_2,local_c);
  return;
}


/* ==== 004132c8 FUN_004132c8 ==== */

void FUN_004132c8(int param_1,int *param_2,uint param_3)

{
  uint uVar1;
  UINT ui_val;
  
  ui_val = 0;
  uVar1 = FUN_00413310(param_1,param_2,param_3);
  if ((char)uVar1 != '\x12') {
    FUN_00411700();
  }
  FUN_00411b6c(param_1,&ui_val,4);
  FUN_00404124(param_2,ui_val);
  FUN_00411b6c(param_1,(undefined4 *)*param_2,ui_val * 2);
  return;
}


/* ==== 00413310 FUN_00413310 ==== */

uint FUN_00413310(int param_1,undefined4 param_2,uint param_3)

{
  undefined4 uVar1;
  uint local_4;
  
  local_4 = param_3;
  uVar1 = FUN_00411b6c(param_1,&local_4,1);
  return CONCAT31((int3)((uint)uVar1 >> 8),(undefined1)local_4);
}


/* ==== 00413324 FUN_00413324 ==== */

void FUN_00413324(int param_1,undefined4 param_2,uint param_3)

{
  uint extraout_ECX;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  int local_8;
  
  puStack_10 = &stack0xfffffffc;
  local_8 = 0;
  puStack_14 = &LAB_00413360;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  do {
    FUN_0041322c(param_1,&local_8,param_3);
    param_3 = extraout_ECX;
  } while (local_8 != 0);
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_00413367;
  puStack_14 = (undefined1 *)0x41335f;
  FUN_004039b8(&local_8);
  return;
}


/* ==== 0041336c FUN_0041336c ==== */

void FUN_0041336c(undefined4 param_1,undefined4 param_2,uint param_3,int param_4)

{
  bool bVar1;
  uint extraout_ECX;
  uint extraout_ECX_00;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  int *piVar2;
  
  piVar2 = (int *)(param_4 + -4);
  while( true ) {
    bVar1 = FUN_004118a0(*piVar2,param_2,param_3);
    if (bVar1) break;
    FUN_00413470(*piVar2,extraout_EDX_00,extraout_ECX_00);
    param_3 = extraout_ECX;
    param_2 = extraout_EDX;
  }
  FUN_004125e8(*piVar2,extraout_EDX_00,extraout_ECX_00);
  return;
}


/* ==== 00413394 FUN_00413394 ==== */

void FUN_00413394(uint param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined4 local_104 [64];
  
  while (0 < (int)param_1) {
    if ((int)param_1 < 0x101) {
      FUN_00411b6c(*(int *)(param_4 + -4),local_104,param_1);
      param_1 = 0;
    }
    else {
      FUN_00411b6c(*(int *)(param_4 + -4),local_104,0x100);
      param_1 = param_1 - 0x100;
    }
  }
  return;
}


/* ==== 004133e8 FUN_004133e8 ==== */

void FUN_004133e8(undefined4 param_1,undefined4 param_2,uint param_3,int param_4)

{
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  uint local_8;
  
  local_8 = param_3;
  FUN_00411b6c(*(int *)(param_4 + -4),&local_8,4);
  FUN_00413394(local_8,extraout_EDX,extraout_ECX,param_4);
  return;
}


/* ==== 00413410 FUN_00413410 ==== */

void FUN_00413410(undefined4 param_1,undefined4 param_2,uint param_3,uint param_4)

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
    bVar2 = FUN_004118a0(*piVar6,param_2,param_3);
    if (bVar2) break;
    cVar1 = FUN_00411b50(*piVar6,extraout_EDX_05,extraout_ECX_04);
    uVar3 = extraout_ECX;
    uVar5 = extraout_EDX;
    if ((byte)(cVar1 - 2U) < 3) {
      FUN_00413470(*piVar6,extraout_EDX,extraout_ECX);
      uVar3 = extraout_ECX_00;
      uVar5 = extraout_EDX_00;
    }
    uVar4 = param_4;
    FUN_00413394(1,uVar5,uVar3,param_4);
    uVar5 = extraout_EDX_01;
    while( true ) {
      bVar2 = FUN_004118a0(*piVar6,uVar5,uVar4);
      if (bVar2) break;
      FUN_004135d8(*piVar6,extraout_EDX_03,extraout_ECX_02);
      uVar4 = extraout_ECX_01;
      uVar5 = extraout_EDX_02;
    }
    FUN_004125e8(*piVar6,extraout_EDX_03,extraout_ECX_02);
    param_3 = extraout_ECX_03;
    param_2 = extraout_EDX_04;
  }
  FUN_004125e8(*piVar6,extraout_EDX_05,extraout_ECX_04);
  return;
}


/* ==== 00413470 FUN_00413470 ==== */

void FUN_00413470(int param_1,undefined4 param_2,uint param_3)

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
  puStack_14 = &LAB_004135cd;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  local_8 = param_1;
  uVar1 = FUN_00413310(param_1,0,param_3);
  uVar1 = uVar1 & 0x7f;
  switch(uVar1) {
  case 1:
    FUN_0041336c(uVar1,extraout_EDX,extraout_ECX,(int)&stack0xfffffffc);
    break;
  case 2:
    FUN_00413394(1,extraout_EDX,extraout_ECX,(int)&stack0xfffffffc);
    break;
  case 3:
    FUN_00413394(2,extraout_EDX,extraout_ECX,(int)&stack0xfffffffc);
    break;
  case 4:
    FUN_00413394(4,extraout_EDX,extraout_ECX,(int)&stack0xfffffffc);
    break;
  case 5:
    FUN_00413394(10,extraout_EDX,extraout_ECX,(int)&stack0xfffffffc);
    break;
  case 6:
  case 7:
    FUN_0041322c(local_8,&local_c,extraout_ECX);
    break;
  case 10:
    FUN_004133e8(uVar1,extraout_EDX,extraout_ECX,(int)&stack0xfffffffc);
    break;
  case 0xb:
    FUN_00413324(local_8,extraout_EDX,extraout_ECX);
    break;
  case 0xc:
    FUN_004133e8(uVar1,extraout_EDX,extraout_ECX,(int)&stack0xfffffffc);
    break;
  case 0xe:
    FUN_00413410(uVar1,extraout_EDX,extraout_ECX,(uint)&stack0xfffffffc);
    break;
  case 0xf:
    FUN_00413394(4,extraout_EDX,extraout_ECX,(int)&stack0xfffffffc);
    break;
  case 0x10:
    FUN_00413394(8,extraout_EDX,extraout_ECX,(int)&stack0xfffffffc);
    break;
  case 0x11:
    FUN_00413394(8,extraout_EDX,extraout_ECX,(int)&stack0xfffffffc);
    break;
  case 0x12:
    FUN_004133e8(uVar1,extraout_EDX,extraout_ECX,(int)&stack0xfffffffc);
    break;
  case 0x13:
    FUN_00413394(8,extraout_EDX,extraout_ECX,(int)&stack0xfffffffc);
  }
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_004135d4;
  puStack_14 = (undefined1 *)0x4135cc;
  FUN_004039b8(&local_c);
  return;
}


/* ==== 004135d8 FUN_004135d8 ==== */

void FUN_004135d8(int param_1,undefined4 param_2,uint param_3)

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
  puStack_14 = &LAB_00413615;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  FUN_0041322c(param_1,&local_8,param_3);
  FUN_00413470(param_1,extraout_EDX,extraout_ECX);
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_0041361c;
  puStack_14 = (undefined1 *)0x413614;
  FUN_004039b8(&local_8);
  return;
}


/* ==== 004136c8 TReader.virtual_014 ==== */

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
  FUN_00403a50((int *)&local_c,param_2);
  local_8 = 0;
  if (*(int *)(param_1 + 0x1c) != 0) {
    local_8 = FUN_00413ecc(*(int *)(param_1 + 0x1c),local_c);
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
      uVar1 = FUN_0040aa30((int)&DAT_0040d61c,'\x01',(undefined4 *)PTR_PTR_00446b60,0,&local_14);
      FUN_0040346c(uVar1);
    }
  }
  *in_FS_OFFSET = uVar2;
  FUN_004039b8((int *)&local_c);
  return;
}


/* ==== 00413780 TReader.virtual_020 ==== */

void TReader_virtual_020(int param_1,undefined4 param_2)

{
  if (*(short *)(param_1 + 0x4a) != 0) {
    (**(code **)(param_1 + 0x48))(*(undefined4 *)(param_1 + 0x4c),param_1,param_2);
  }
  return;
}


/* ==== 00413798 TReader.virtual_01c ==== */

void TReader_virtual_01c(int param_1,int *param_2,undefined4 *param_3)

{
  if (*(short *)(param_1 + 0x42) != 0) {
    (**(code **)(param_1 + 0x40))(*(undefined4 *)(param_1 + 0x44),param_1,param_2,param_3);
  }
  (**(code **)(*param_2 + 0x18))(param_2,*param_3);
  return;
}


/* ==== 004137c0 FUN_004137c0 ==== */

int FUN_004137c0(int param_1,char *param_2,int param_3)

{
  undefined4 uVar1;
  int local_c;
  
  local_c = param_3;
  local_c = FUN_0040e72c(*(undefined4 **)(param_1 + 0x18),param_2);
  if (((local_c == 0) && (*(int *)(param_1 + 0x1c) != 0)) &&
     (*(int *)(param_1 + 0x1c) != *(int *)(param_1 + 0x18))) {
    local_c = FUN_0040e72c(*(undefined4 **)(param_1 + 0x1c),param_2);
  }
  if (*(short *)(param_1 + 0x62) != 0) {
    (**(code **)(param_1 + 0x60))(*(undefined4 *)(param_1 + 100),param_1,param_2,&local_c);
  }
  if ((local_c != 0) &&
     (uVar1 = thunk_FUN_00402f24(local_c,(int)&PTR_TPersistent_virtual_000_0040e30c),
     (char)uVar1 != '\0')) {
    return local_c;
  }
  FUN_0040e5f0(param_2);
  return local_c;
}


/* ==== 00413830 FUN_00413830 ==== */

void FUN_00413830(int param_1,undefined4 *param_2,uint param_3)

{
  int iVar1;
  uint i_val;
  uint j;
  undefined4 *puVar2;
  
  while (param_3 != 0) {
    i_val = *(uint *)(param_1 + 0xc) - *(uint *)(param_1 + 0x10);
    if (*(uint *)(param_1 + 0xc) < *(uint *)(param_1 + 0x10) || i_val == 0) {
      FUN_0041387c(param_1);
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


/* ==== 0041387c FUN_0041387c ==== */

void FUN_0041387c(int param_1)

{
  FUN_00410b60(*(int **)(param_1 + 4),*(undefined4 *)(param_1 + 8),*(int *)(param_1 + 0x10));
  *(undefined4 *)(param_1 + 0x10) = 0;
  return;
}


/* ==== 00413894 FUN_00413894 ==== */

void FUN_00413894(int param_1,char param_2,undefined4 param_3)

{
  if (param_2 != '\0') {
    FUN_00413988(param_1,9,param_3);
    return;
  }
  FUN_00413988(param_1,8,param_3);
  return;
}


/* ==== 004138a8 FUN_004138a8 ==== */

void FUN_004138a8(int param_1,int param_2,undefined4 param_3)

{
  int local_8;
  
  local_8 = param_2;
  if ((-0x81 < param_2) && (param_2 < 0x80)) {
    FUN_00413988(param_1,2,param_3);
    FUN_00413830(param_1,&local_8,1);
    return;
  }
  if ((param_2 < -0x8000) || (0x7fff < param_2)) {
    FUN_00413988(param_1,4,param_3);
    FUN_00413830(param_1,&local_8,4);
  }
  else {
    FUN_00413988(param_1,3,param_3);
    FUN_00413830(param_1,&local_8,2);
  }
  return;
}


/* ==== 0041391c FUN_0041391c ==== */

void FUN_0041391c(int param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_00413988(param_1,1,param_3);
  return;
}


/* ==== 00413924 FUN_00413924 ==== */

void FUN_00413924(int param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_00413988(param_1,0,param_3);
  return;
}


/* ==== 0041392c FUN_0041392c ==== */

void FUN_0041392c(int param_1,undefined4 *param_2,uint param_3)

{
  undefined4 extraout_ECX;
  uint local_c;
  
  local_c = param_3;
  local_c = FUN_00403c38((int)param_2);
  if ((int)local_c < 0x100) {
    FUN_00413988(param_1,6,extraout_ECX);
    FUN_00413830(param_1,&local_c,1);
  }
  else {
    FUN_00413988(param_1,0xc,extraout_ECX);
    FUN_00413830(param_1,&local_c,4);
  }
  FUN_00413830(param_1,param_2,local_c);
  return;
}


/* ==== 00413988 FUN_00413988 ==== */

void FUN_00413988(int param_1,undefined1 param_2,undefined4 param_3)

{
  undefined1 local_4;
  undefined3 uStack_3;
  
  _local_4 = CONCAT31((int3)((uint)param_3 >> 8),param_2);
  FUN_00413830(param_1,(undefined4 *)&local_4,1);
  return;
}


/* ==== 0041399c FUN_0041399c ==== */

void FUN_0041399c(void)

{
  if (DAT_00447644 != (HWND)0x0) {
    DestroyWindow(DAT_00447644);
    DAT_00447644 = (HWND)0x0;
  }
  return;
}


/* ==== 004139b8 TComponent.virtual_02c ==== */

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
    param_1 = (int *)FUN_00403014((int)param_1,param_2,param_3,in_stack_ffffffe4,in_stack_ffffffe8);
    param_3 = extraout_ECX;
    cVar1 = extraout_DL;
  }
  *(undefined1 *)((int)param_1 + 0x22) = 1;
  if (param_3 != (int *)0x0) {
    FUN_00413b80(param_3,param_1,param_3);
  }
  if (cVar1 != '\0') {
    FUN_0040306c(param_1);
    *in_FS_OFFSET = in_stack_ffffffe4;
  }
  return param_1;
}


/* ==== 00413a04 TComponent.Destroy ==== */

void TComponent_Destroy(int *param_1,char param_2)

{
  int *piVar1;
  int *piVar2;
  byte extraout_DL;
  int i_val;
  
  piVar1 = FUN_00403074(param_1,param_2);
  FUN_00413c68((int)piVar1);
  if (piVar1[5] != 0) {
    i_val = *(int *)(piVar1[5] + 8) + -1;
    if (-1 < i_val) {
      do {
        piVar2 = (int *)FUN_0040f024((undefined4 *)piVar1[5],i_val);
        (**(code **)(*piVar2 + 0x10))(piVar2,piVar1,1);
        if (piVar1[5] == 0) break;
        i_val = i_val + -1;
      } while (i_val != -1);
    }
    FUN_00402d14((int *)piVar1[5]);
    piVar1[5] = 0;
  }
  FUN_00413c10(piVar1);
  if ((int *)piVar1[1] != (int *)0x0) {
    FUN_00413bd8((int *)piVar1[1],(int)piVar1);
  }
  TPersistent_Destroy(piVar1,extraout_DL & 0xfc);
  if ('\0' < (char)extraout_DL) {
    FUN_00403064(piVar1);
  }
  return;
}


/* ==== 00413a8c TComponent.BeforeDestruction ==== */

void TComponent_BeforeDestruction(int param_1)

{
  if ((*(byte *)(param_1 + 0x20) & 8) == 0) {
    FUN_00413c68(param_1);
  }
  return;
}


/* ==== 00413a98 FUN_00413a98 ==== */

void FUN_00413a98(int param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 extraout_ECX;
  
  if ((*(int *)(param_1 + 4) == 0) || (*(int *)(param_1 + 4) != *(int *)(param_2 + 4))) {
    if (*(int *)(param_1 + 0x14) == 0) {
      uVar1 = FUN_00402ce4((int *)&PTR_TList_virtual_000_0040d9ac,'\x01',param_3);
      *(undefined4 *)(param_1 + 0x14) = uVar1;
    }
    iVar2 = FUN_0040f080(*(int *)(param_1 + 0x14),param_2);
    if (iVar2 < 0) {
      FUN_0040eec8(*(int **)(param_1 + 0x14),param_2);
      FUN_00413a98(param_2,param_1,extraout_ECX);
    }
  }
  *(ushort *)(param_1 + 0x20) = *(ushort *)(param_1 + 0x20) | 0x100;
  return;
}


/* ==== 00413b2c FUN_00413b2c ==== */

void FUN_00413b2c(int param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x10) == 0) {
    uVar1 = FUN_00402ce4((int *)&PTR_TList_virtual_000_0040d9ac,'\x01',param_3);
    *(undefined4 *)(param_1 + 0x10) = uVar1;
  }
  FUN_0040eec8(*(int **)(param_1 + 0x10),param_2);
  *(int *)(param_2 + 4) = param_1;
  return;
}


/* ==== 00413b58 FUN_00413b58 ==== */

void FUN_00413b58(int param_1,int param_2)

{
  *(undefined4 *)(param_2 + 4) = 0;
  FUN_0040f164(*(int **)(param_1 + 0x10),param_2);
  if ((*(int **)(param_1 + 0x10))[2] == 0) {
    FUN_00402d14(*(int **)(param_1 + 0x10));
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  return;
}


/* ==== 00413b80 FUN_00413b80 ==== */

void FUN_00413b80(int *param_1,int *param_2,undefined4 param_3)

{
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  
  FUN_00402ef0(param_2,param_1,param_3);
  (**(code **)(*param_1 + 0x20))(param_1,param_2,0,param_2[2]);
  FUN_00413b2c((int)param_1,(int)param_2,extraout_ECX);
  FUN_0041409c((int)param_2,'\x01');
  if ((*(byte *)(param_1 + 8) & 0x10) != 0) {
    FUN_0041404c((int)param_2,CONCAT31((int3)((uint)extraout_EDX >> 8),1),'\x01');
  }
  (**(code **)(*param_1 + 0x10))(param_1,param_2,0);
  return;
}


/* ==== 00413bd8 FUN_00413bd8 ==== */

void FUN_00413bd8(int *param_1,int param_2)

{
  (**(code **)(*param_1 + 0x20))(param_1,param_2,*(undefined4 *)(param_2 + 8),0);
  (**(code **)(*param_1 + 0x10))(param_1,param_2,1);
  FUN_0041409c(param_2,'\0');
  FUN_00413b58((int)param_1,param_2);
  return;
}


/* ==== 00413c10 FUN_00413c10 ==== */

void FUN_00413c10(int *param_1)

{
  int *piVar1;
  
  while ((undefined4 *)param_1[4] != (undefined4 *)0x0) {
    piVar1 = (int *)FUN_0040f10c((undefined4 *)param_1[4]);
    if (((*(byte *)((int)piVar1 + 0x21) & 1) == 0) && ((*(ushort *)(param_1 + 8) & 0x210) != 0x210))
    {
      FUN_00413b58((int)param_1,(int)piVar1);
    }
    else {
      FUN_00413bd8(param_1,(int)piVar1);
    }
    (**(code **)(*piVar1 + -4))(piVar1,1);
  }
  return;
}


/* ==== 00413c68 FUN_00413c68 ==== */

void FUN_00413c68(int param_1)

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
        iVar1 = FUN_0040f024(*(undefined4 **)(param_1 + 0x10),j);
        FUN_00413c68(iVar1);
        j = j + 1;
        i_val = i_val + -1;
      } while (i_val != 0);
    }
  }
  return;
}


/* ==== 00413ca4 FUN_00413ca4 ==== */

void FUN_00413ca4(int param_1,int param_2)

{
  if (*(int **)(param_1 + 0x14) != (int *)0x0) {
    FUN_0040f164(*(int **)(param_1 + 0x14),param_2);
    if ((*(int **)(param_1 + 0x14))[2] == 0) {
      FUN_00402d14(*(int **)(param_1 + 0x14));
      *(undefined4 *)(param_1 + 0x14) = 0;
    }
  }
  return;
}


/* ==== 00413cc8 FUN_00413cc8 ==== */

void FUN_00413cc8(int param_1,int param_2)

{
  FUN_00413ca4(param_1,param_2);
  FUN_00413ca4(param_2,param_1);
  return;
}


/* ==== 00413ce4 TComponent.virtual_010 ==== */

void TComponent_virtual_010(int param_1,int param_2,char param_3)

{
  int *piVar1;
  int i_val;
  int j;
  
  if ((param_3 == '\x01') && (param_2 != 0)) {
    FUN_00413cc8(param_1,param_2);
  }
  if ((*(int *)(param_1 + 0x10) != 0) &&
     (i_val = *(int *)(*(int *)(param_1 + 0x10) + 8), -1 < i_val + -1)) {
    j = 0;
    do {
      piVar1 = (int *)FUN_0040f024(*(undefined4 **)(param_1 + 0x10),j);
      (**(code **)(*piVar1 + 0x10))(piVar1,param_2,param_3);
      j = j + 1;
      i_val = i_val + -1;
    } while (i_val != 0);
  }
  return;
}


/* ==== 00413d40 TComponent.virtual_004 ==== */

void TComponent_virtual_004(int param_1,int *param_2)

{
  undefined4 local_8;
  
  local_8 = 0;
  if (param_2[8] != 0) {
    local_8 = *(undefined4 *)(param_2[8] + 0x18);
  }
  (**(code **)(*param_2 + 4))
            (param_2,&DAT_00413db4,*(short *)(param_1 + 0x18) != (short)local_8,&LAB_00413b14,
             param_1,&LAB_00413aec,param_1);
  (**(code **)(*param_2 + 4))
            (param_2,&DAT_00413dc4,local_8._2_2_ != *(short *)(param_1 + 0x1a),&LAB_00413b20,param_1
             ,&LAB_00413b00,param_1);
  return;
}


/* ==== 00413dc8 TComponent.dynamic_fff2 ==== */

undefined4 TComponent_dynamic_fff2(void)

{
  return 0;
}


/* ==== 00413dcc TComponent.dynamic_fffd ==== */

void TComponent_dynamic_fffd(void)

{
  return;
}


/* ==== 00413dd4 TComponent.dynamic_fffc ==== */

undefined4 TComponent_dynamic_fffc(void)

{
  return 0;
}


/* ==== 00413dd8 TComponent.dynamic_fffb ==== */

void TComponent_dynamic_fffb(void)

{
  return;
}


/* ==== 00413ddc TComponent.dynamic_fffe ==== */

void TComponent_dynamic_fffe(int param_1,int *param_2)

{
  FUN_00403a0c(param_2,*(undefined4 **)(param_1 + 8));
  return;
}


/* ==== 00413df0 TComponent.dynamic_ffff ==== */

undefined4 TComponent_dynamic_ffff(int param_1)

{
  return *(undefined4 *)(param_1 + 4);
}


/* ==== 00413df4 TComponent.dynamic_fffa ==== */

void TComponent_dynamic_fffa(void)

{
  return;
}


/* ==== 00413df8 TComponent.dynamic_fff3 ==== */

undefined4 TComponent_dynamic_fff3(void)

{
  return 0;
}


/* ==== 00413dfc TComponent.dynamic_fff9 ==== */

void TComponent_dynamic_fff9(void)

{
  return;
}


/* ==== 00413e00 TComponent.dynamic_fff8 ==== */

void TComponent_dynamic_fff8(int param_1)

{
  *(ushort *)(param_1 + 0x20) = *(ushort *)(param_1 + 0x20) | 0x40;
  return;
}


/* ==== 00413e0c TComponent.dynamic_fff7 ==== */

void TComponent_dynamic_fff7(int param_1)

{
  *(ushort *)(param_1 + 0x20) = *(ushort *)(param_1 + 0x20) & 0xffbf;
  return;
}


/* ==== 00413e18 TComponent.virtual_00c ==== */

void TComponent_virtual_00c(int param_1)

{
  *(ushort *)(param_1 + 0x20) = *(ushort *)(param_1 + 0x20) & 0xfffe;
  return;
}


/* ==== 00413e24 TComponent.virtual_014 ==== */

void TComponent_virtual_014(int *param_1,int *param_2,uint param_3)

{
  FUN_004121e4(param_2,param_1,param_3);
  return;
}


/* ==== 00413e2c TComponent.virtual_024 ==== */

void TComponent_virtual_024(undefined4 param_1,int *param_2)

{
  (**(code **)(*param_2 + 0x10))(param_2,param_1);
  return;
}


/* ==== 00413e34 TComponent.virtual_020 ==== */

void TComponent_virtual_020(int param_1,int param_2,char *param_3,char *param_4)

{
  undefined4 uVar1;
  int iVar2;
  char *local_10;
  undefined1 local_c;
  char *local_8;
  
  local_8 = param_3;
  if (param_2 != 0) {
    uVar1 = FUN_00407ad0(param_3,param_4);
    if (((char)uVar1 == '\0') && (param_1 == *(int *)(param_2 + 4))) {
      iVar2 = FUN_00413ecc(param_1,param_4);
      if (iVar2 != 0) {
        local_10 = param_4;
        local_c = 0xb;
        uVar1 = FUN_0040aa30((int)&DAT_0040d894,'\x01',(undefined4 *)PTR_PTR_00446c54,0,&local_10);
        FUN_0040346c(uVar1);
      }
    }
  }
  if (((*(byte *)(param_1 + 0x20) & 0x10) != 0) && (*(int *)(param_1 + 4) != 0)) {
    (**(code **)(**(int **)(param_1 + 4) + 0x20))(*(int **)(param_1 + 4),param_2,local_8,param_4);
  }
  return;
}


/* ==== 00413eb4 TComponent.dynamic_fff6 ==== */

void TComponent_dynamic_fff6(undefined4 param_1,int *param_2,undefined4 param_3)

{
  FUN_00402ef0(param_2,param_1,param_3);
  return;
}


/* ==== 00413ec8 TComponent.dynamic_fff5 ==== */

void TComponent_dynamic_fff5(void)

{
  return;
}


/* ==== 00413ecc FUN_00413ecc ==== */

int FUN_00413ecc(int param_1,char *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int i_val;
  int j;
  
  if (((param_2 != (char *)0x0) && (*(int *)(param_1 + 0x10) != 0)) &&
     (i_val = *(int *)(*(int *)(param_1 + 0x10) + 8), -1 < i_val + -1)) {
    j = 0;
    do {
      iVar1 = FUN_0040f024(*(undefined4 **)(param_1 + 0x10),j);
      uVar2 = FUN_00407ad0(*(char **)(iVar1 + 8),param_2);
      if ((char)uVar2 != '\0') {
        return iVar1;
      }
      j = j + 1;
      i_val = i_val + -1;
    } while (i_val != 0);
  }
  return 0;
}


/* ==== 00413f1c TComponent.virtual_018 ==== */

void TComponent_virtual_018(int *param_1,uint *param_2)

{
  int *piVar1;
  undefined4 uVar2;
  bool bVar3;
  uint *local_14;
  undefined1 local_10;
  
  bVar3 = &stack0x00000000 == (undefined1 *)0x14;
  FUN_00403d48((uint *)param_1[2],param_2);
  if (!bVar3) {
    if (param_2 != (uint *)0x0) {
      uVar2 = FUN_00407c0c((char *)param_2);
      if ((char)uVar2 == '\0') {
        local_10 = 0xb;
        local_14 = param_2;
        uVar2 = FUN_0040aa30((int)&DAT_0040d894,'\x01',(undefined4 *)PTR_PTR_00446c08,0,&local_14);
        FUN_0040346c(uVar2);
      }
    }
    piVar1 = (int *)param_1[1];
    if (piVar1 == (int *)0x0) {
      (**(code **)(*param_1 + 0x20))(param_1,0,param_1[2],param_2);
    }
    else {
      (**(code **)(*piVar1 + 0x20))(piVar1,param_1,param_1[2],param_2);
    }
    FUN_0041409c((int)param_1,'\0');
    FUN_00413fa8((int)param_1,param_2);
    FUN_0041409c((int)param_1,'\x01');
  }
  return;
}


/* ==== 00413fa8 FUN_00413fa8 ==== */

void FUN_00413fa8(int param_1,undefined4 *param_2)

{
  FUN_00403a0c((int *)(param_1 + 8),param_2);
  return;
}


/* ==== 00413fbc FUN_00413fbc ==== */

void FUN_00413fbc(int param_1,int param_2)

{
  if (*(int *)(param_1 + 0x10) == 0) {
    FUN_0040efb0(&PTR_TList_virtual_000_0040d9ac,(undefined4 *)PTR_PTR_00446cd8,param_2);
  }
  FUN_0040f024(*(undefined4 **)(param_1 + 0x10),param_2);
  return;
}


/* ==== 00413fe8 FUN_00413fe8 ==== */

undefined4 FUN_00413fe8(int param_1)

{
  if (*(int *)(param_1 + 0x10) != 0) {
    return *(undefined4 *)(*(int *)(param_1 + 0x10) + 8);
  }
  return 0;
}


/* ==== 00413ff8 FUN_00413ff8 ==== */

void FUN_00413ff8(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 4) != 0) {
    iVar3 = FUN_0040f080(*(int *)(*(int *)(param_1 + 4) + 0x10),param_1);
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
        FUN_0040ef14(piVar1,iVar3);
        FUN_0040f0a0(*(int **)(*(int *)(param_1 + 4) + 0x10),param_2,param_1);
      }
    }
  }
  return;
}


/* ==== 0041404c FUN_0041404c ==== */

void FUN_0041404c(int param_1,undefined4 param_2,char param_3)

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
    i_val = FUN_00413fe8(param_1);
    if (-1 < i_val + -1) {
      j = 0;
      do {
        iVar1 = FUN_00413fbc(param_1,j);
        FUN_0041404c(iVar1,param_2,'\x01');
        j = j + 1;
        i_val = i_val + -1;
      } while (i_val != 0);
    }
  }
  return;
}


/* ==== 0041409c FUN_0041409c ==== */

void FUN_0041409c(int param_1,char param_2)

{
  int *piVar1;
  char acStack_10c [256];
  
  piVar1 = *(int **)(param_1 + 4);
  if (piVar1 != (int *)0x0) {
    FUN_00403c14(acStack_10c,*(undefined4 **)(param_1 + 8),0xff);
    piVar1 = (int *)FUN_00402fc4(piVar1,acStack_10c);
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


/* ==== 004140e4 TComponent.dynamic_fff4 ==== */

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


/* ==== 0041410c TComponent.dynamic_fff1 ==== */

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


/* ==== 00414134 TComponent.SafeCallException ==== */

void TComponent_SafeCallException(int param_1)

{
  if (*(int *)(param_1 + 0x1c) != 0) {
    (**(code **)(**(int **)(param_1 + 0x1c) + 0x1c))();
    return;
  }
  TObject_SafeCallException();
  return;
}


/* ==== 0041414c TComponent.virtual_01c ==== */

void TComponent_virtual_01c(void)

{
  return;
}


/* ==== 00414154 TComponent.virtual_028 ==== */

undefined4 TComponent_virtual_028(void)

{
  char cVar1;
  undefined4 uVar2;
  int *in_stack_00000004;
  int *in_stack_00000008;
  int *in_stack_0000000c;
  
  if (in_stack_00000004[7] == 0) {
    cVar1 = FUN_00402da8(in_stack_00000004,in_stack_00000008,in_stack_0000000c);
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


/* ==== 00414194 TBasicActionLink.virtual_014 ==== */

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
    param_1 = (int *)FUN_00403014((int)param_1,param_2,param_3,in_stack_ffffffe4,in_stack_ffffffe8);
    param_3 = extraout_ECX;
    cVar1 = extraout_DL;
  }
  FUN_00402ce4(param_1,'\0',param_3);
  (**(code **)*param_1)(param_1,param_3);
  if (cVar1 != '\0') {
    FUN_0040306c(param_1);
    *in_FS_OFFSET = in_stack_ffffffe4;
  }
  return param_1;
}


/* ==== 004141d8 TBasicActionLink.virtual_000 ==== */

void TBasicActionLink_virtual_000(void)

{
  return;
}


/* ==== 004141dc TBasicActionLink.Destroy ==== */

void TBasicActionLink_Destroy(int *param_1,char param_2)

{
  int *piVar1;
  byte extraout_DL;
  
  piVar1 = FUN_00403074(param_1,param_2);
  if (piVar1[4] != 0) {
    FUN_004143c4(piVar1[4],(int)piVar1);
  }
  TObject_Destroy(piVar1,extraout_DL & 0xfc);
  if ('\0' < (char)extraout_DL) {
    FUN_00403064(piVar1);
  }
  return;
}


/* ==== 00414210 TBasicActionLink.virtual_004 ==== */

void TBasicActionLink_virtual_004(int param_1)

{
  if (*(short *)(param_1 + 10) != 0) {
    (**(code **)(param_1 + 8))(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x10));
  }
  return;
}


/* ==== 00414228 TBasicActionLink.virtual_018 ==== */

void TBasicActionLink_virtual_018(int param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_00402ef0(*(int **)(param_1 + 0x10),param_2,param_3);
  return;
}


/* ==== 00414238 TBasicActionLink.virtual_00c ==== */

void TBasicActionLink_virtual_00c(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x10);
  if (param_2 != iVar1) {
    if (iVar1 != 0) {
      FUN_004143c4(iVar1,param_1);
    }
    *(int *)(param_1 + 0x10) = param_2;
    if (param_2 != 0) {
      FUN_004143b8(param_2,param_1);
    }
  }
  return;
}


/* ==== 00414264 TBasicActionLink.virtual_008 ==== */

undefined1 TBasicActionLink_virtual_008(void)

{
  return 1;
}


/* ==== 00414268 TBasicActionLink.virtual_010 ==== */

void TBasicActionLink_virtual_010(void)

{
  return;
}


/* ==== 00414270 TBasicActionLink.virtual_01c ==== */

void TBasicActionLink_virtual_01c(int param_1)

{
  (**(code **)(**(int **)(param_1 + 0x10) + 0x44))();
  return;
}


/* ==== 0041427c TBasicAction.virtual_02c ==== */

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
    param_1 = (int *)FUN_00403014((int)param_1,param_2,param_3,in_stack_ffffffe8,in_stack_ffffffec);
    param_3 = extraout_ECX;
    cVar2 = extraout_DL;
  }
  TComponent_virtual_02c(param_1,'\0',param_3);
  iVar1 = FUN_00402ce4((int *)&PTR_TList_virtual_000_0040d9ac,'\x01',extraout_ECX_00);
  param_1[0x10] = iVar1;
  if (cVar2 != '\0') {
    FUN_0040306c(param_1);
    *in_FS_OFFSET = in_stack_ffffffe8;
  }
  return param_1;
}


/* ==== 004142c0 TBasicAction.Destroy ==== */

void TBasicAction_Destroy(int *param_1,char param_2)

{
  int *piVar1;
  int iVar2;
  byte extraout_DL;
  
  piVar1 = FUN_00403074(param_1,param_2);
  TComponent_Destroy(piVar1,extraout_DL & 0xfc);
  while (0 < (int)((undefined4 *)piVar1[0x10])[2]) {
    iVar2 = FUN_0040f10c((undefined4 *)piVar1[0x10]);
    FUN_004143c4((int)piVar1,iVar2);
  }
  FUN_00402d14((int *)piVar1[0x10]);
  if ('\0' < (char)extraout_DL) {
    FUN_00403064(piVar1);
  }
  return;
}


/* ==== 0041430c TBasicAction.virtual_038 ==== */

undefined4 TBasicAction_virtual_038(void)

{
  return 0;
}


/* ==== 00414310 TBasicAction.virtual_040 ==== */

void TBasicAction_virtual_040(void)

{
  return;
}


/* ==== 00414314 TBasicAction.virtual_03c ==== */

void TBasicAction_virtual_03c(void)

{
  return;
}


/* ==== 00414318 TBasicAction.dynamic_fff0 ==== */

undefined4 TBasicAction_dynamic_fff0(int param_1)

{
  undefined4 uVar1;
  
  if (*(short *)(param_1 + 0x32) != 0) {
    uVar1 = (**(code **)(param_1 + 0x30))(*(undefined4 *)(param_1 + 0x34),param_1);
    return CONCAT31((int3)((uint)uVar1 >> 8),1);
  }
  return 0;
}


/* ==== 00414334 TBasicAction.virtual_044 ==== */

undefined4 TBasicAction_virtual_044(int param_1)

{
  undefined4 uVar1;
  
  if (*(short *)(param_1 + 0x3a) != 0) {
    uVar1 = (**(code **)(param_1 + 0x38))(*(undefined4 *)(param_1 + 0x3c),param_1);
    return CONCAT31((int3)((uint)uVar1 >> 8),1);
  }
  return 0;
}


/* ==== 00414350 TBasicAction.virtual_034 ==== */

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
        piVar1 = (int *)FUN_0040f024((undefined4 *)param_1[0x10],j);
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


/* ==== 004143a4 TBasicAction.virtual_030 ==== */

void TBasicAction_virtual_030(int param_1)

{
  if (*(short *)(param_1 + 0x2a) != 0) {
    (**(code **)(param_1 + 0x28))(*(undefined4 *)(param_1 + 0x2c),param_1);
  }
  return;
}


/* ==== 004143b8 FUN_004143b8 ==== */

void FUN_004143b8(int param_1,int param_2)

{
  *(int *)(param_2 + 0x10) = param_1;
  FUN_0040eec8(*(int **)(param_1 + 0x40),param_2);
  return;
}


/* ==== 004143c4 FUN_004143c4 ==== */

void FUN_004143c4(int param_1,int param_2)

{
  int iVar1;
  int j;
  int i_val;
  
  i_val = *(int *)(*(int *)(param_1 + 0x40) + 8);
  if (-1 < i_val + -1) {
    j = 0;
    do {
      iVar1 = FUN_0040f024(*(undefined4 **)(param_1 + 0x40),j);
      if (param_2 == iVar1) {
        *(undefined4 *)(param_2 + 0x10) = 0;
        FUN_0040ef14(*(int **)(param_1 + 0x40),j);
        return;
      }
      j = j + 1;
      i_val = i_val + -1;
    } while (i_val != 0);
  }
  return;
}


/* ==== 00414404 FUN_00414404 ==== */

int * FUN_00414404(int *param_1,char param_2,int param_3,undefined1 param_4)

{
  int extraout_ECX;
  char extraout_DL;
  char cVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_ffffffe0;
  undefined4 in_stack_ffffffe4;
  
  cVar1 = '\0';
  if (param_2 != '\0') {
    param_1 = (int *)FUN_00403014((int)param_1,param_2,param_3,in_stack_ffffffe0,in_stack_ffffffe4);
    param_3 = extraout_ECX;
    cVar1 = extraout_DL;
  }
  FUN_00402ce4(param_1,'\0',param_3);
  param_1[3] = param_3;
  *(undefined1 *)(param_1 + 4) = param_4;
  if (cVar1 != '\0') {
    FUN_0040306c(param_1);
    *in_FS_OFFSET = in_stack_ffffffe0;
  }
  return param_1;
}


/* ==== 0041444c TStreamAdapter.Destroy ==== */

void TStreamAdapter_Destroy(int *param_1,char param_2)

{
  int *piVar1;
  byte extraout_DL;
  
  piVar1 = FUN_00403074(param_1,param_2);
  if ((char)piVar1[4] == '\x01') {
    FUN_00402d14((int *)piVar1[3]);
    piVar1[3] = 0;
  }
  TObject_Destroy(piVar1,extraout_DL & 0xfc);
  if ('\0' < (char)extraout_DL) {
    FUN_00403064(piVar1);
  }
  return;
}


/* ==== 00414484 TStreamAdapter.virtual_000 ==== */

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
  puStack_18 = &LAB_004144d3;
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


/* ==== 004144ec TStreamAdapter.virtual_004 ==== */

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
  puStack_18 = &LAB_0041453b;
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


/* ==== 00414554 TStreamAdapter.virtual_008 ==== */

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
  puStack_18 = &LAB_004145b3;
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


/* ==== 004145cc TStreamAdapter.virtual_00c ==== */

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
  puStack_18 = &LAB_00414615;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  (**(code **)**(undefined4 **)(in_stack_00000004 + 0xc))
            (*(undefined4 **)(in_stack_00000004 + 0xc),in_stack_00000008);
  iVar1 = FUN_00410af0(*(int **)(in_stack_00000004 + 0xc));
  if (iVar1 >> 0x1f == in_stack_0000000c && iVar1 == in_stack_00000008) {
    uVar2 = 0;
  }
  else {
    uVar2 = 0x80004005;
  }
  *in_FS_OFFSET = uStack_1c;
  return uVar2;
}


/* ==== 00414630 TStreamAdapter.virtual_010 ==== */

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
  
  puStack_3c = (undefined1 *)0x414641;
  FUN_00405324(in_stack_00000008);
  puStack_40 = &LAB_00414804;
  uStack_44 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_44;
  local_1c = 0;
  local_18 = 0;
  puStack_4c = &LAB_004147dd;
  uStack_50 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_50;
  if (in_stack_00000010 == 0) {
    if (in_stack_0000000c < 0x100001) {
LAB_0041469a:
      local_10 = in_stack_0000000c;
      goto LAB_004146a0;
    }
  }
  else if (in_stack_00000010 < 1) goto LAB_0041469a;
  local_10 = 0x100000;
LAB_004146a0:
  puStack_54 = (undefined1 *)0x4146a8;
  puStack_48 = &stack0xfffffffc;
  puStack_3c = &stack0xfffffffc;
  iVar2 = FUN_004026b8(local_10);
  puStack_58 = &LAB_004147cc;
  uStack_5c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_5c;
  puStack_54 = &stack0xfffffffc;
  do {
    if (in_stack_00000010 == 0) {
      if (in_stack_0000000c == 0) {
LAB_0041478c:
        *in_FS_OFFSET = uStack_5c;
        puStack_54 = &DAT_004147d3;
        puStack_58 = (undefined1 *)0x4147a1;
        FUN_004026d0(iVar2);
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
    else if (in_stack_00000010 < 1) goto LAB_0041478c;
    uVar1 = in_stack_0000000c;
    if (in_stack_00000010 == 0) {
      if (0x7fffffff < in_stack_0000000c) {
LAB_004146d1:
        uVar1 = 0x7fffffff;
      }
    }
    else if (0 < in_stack_00000010) goto LAB_004146d1;
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
        FUN_0040350c();
        *in_FS_OFFSET = uStack_50;
        *in_FS_OFFSET = uStack_44;
        puStack_3c = &LAB_0041480b;
        puStack_40 = (undefined1 *)0x414803;
        FUN_004052f0((int *)&stack0x00000008);
        return;
      }
    }
    bVar5 = in_stack_0000000c < uVar1;
    in_stack_0000000c = in_stack_0000000c - uVar1;
    in_stack_00000010 = (in_stack_00000010 - ((int)uVar1 >> 0x1f)) - (uint)bVar5;
  } while( true );
}


/* ==== 00414818 TStreamAdapter.virtual_014 ==== */

undefined4 TStreamAdapter_virtual_014(void)

{
  return 0;
}


/* ==== 00414824 TStreamAdapter.virtual_018 ==== */

undefined4 TStreamAdapter_virtual_018(void)

{
  return 0x80030102;
}


/* ==== 00414830 TStreamAdapter.virtual_01c ==== */

undefined4 TStreamAdapter_virtual_01c(void)

{
  return 0x80030001;
}


/* ==== 0041483c TStreamAdapter.virtual_020 ==== */

undefined4 TStreamAdapter_virtual_020(void)

{
  return 0x80030001;
}


/* ==== 00414848 TStreamAdapter.virtual_024 ==== */

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
  puStack_18 = &LAB_004148ad;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  if (in_stack_00000008 != 0) {
    *(undefined4 *)(in_stack_00000008 + 4) = 2;
    iVar1 = FUN_00410af0(*(int **)(in_stack_00000004 + 0xc));
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


/* ==== 004148c8 TStreamAdapter.virtual_028 ==== */

undefined4 TStreamAdapter_virtual_028(void)

{
  undefined4 *in_stack_00000008;
  
  if (in_stack_00000008 != (undefined4 *)0x0) {
    *in_stack_00000008 = 0;
  }
  return 0x80004001;
}


/* ==== 004148e0 FUN_004148e0 ==== */

void FUN_004148e0(void)

{
  undefined4 *puVar1;
  int *piVar2;
  int i_val;
  int j;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  
  puStack_14 = (undefined1 *)0x4148f0;
  puVar1 = (undefined4 *)FUN_0040f38c(DAT_00447624);
  puStack_18 = &LAB_00414935;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  i_val = puVar1[2];
  if (-1 < i_val + -1) {
    j = 0;
    puStack_14 = &stack0xfffffffc;
    do {
      piVar2 = (int *)FUN_0040f024(puVar1,j);
      FUN_00402d14(piVar2);
      j = j + 1;
      i_val = i_val + -1;
    } while (i_val != 0);
  }
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_0041493c;
  puStack_18 = (undefined1 *)0x414934;
  FUN_0040f3f0(DAT_00447624);
  return;
}


