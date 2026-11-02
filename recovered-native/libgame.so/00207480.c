/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00207480  Symbol: FUN_00207480 */

void FUN_00207480(int param_1,wchar_t *param_2,size_t param_3,wchar_t *param_4,tm *param_5)

{
  char *__s;
  size_t sVar1;
  char *__locale;
  
  __s = setlocale(6,(char *)0x0);
  if (__s != (char *)0x0) {
    sVar1 = strlen(__s);
    __locale = (char *)operator_new__(sVar1 + 1);
    memcpy(__locale,__s,sVar1 + 1);
    setlocale(6,*(char **)(param_1 + 0x10));
    sVar1 = wcsftime(param_2,param_3,param_4,param_5);
    setlocale(6,__locale);
    if (__locale != (char *)0x0) {
      operator_delete__(__locale);
    }
    if (sVar1 == 0) {
      *param_2 = L'\0';
    }
    return;
  }
  sVar1 = wcsftime(param_2,param_3,param_4,param_5);
  setlocale(6,(char *)0x0);
  if (sVar1 == 0) {
    *param_2 = L'\0';
  }
  return;
}


