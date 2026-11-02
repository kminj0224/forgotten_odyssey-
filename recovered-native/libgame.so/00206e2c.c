/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00206e2c  Symbol: FUN_00206e2c */

void FUN_00206e2c(int param_1,char *param_2,size_t param_3,char *param_4,tm *param_5)

{
  char *__s;
  size_t sVar1;
  char *__locale;
  
  __s = setlocale(6,(char *)0x0);
  if (__s == (char *)0x0) {
    __locale = (char *)0x0;
  }
  else {
    sVar1 = strlen(__s);
    __locale = (char *)operator_new__(sVar1 + 1);
    memcpy(__locale,__s,sVar1 + 1);
    setlocale(6,*(char **)(param_1 + 0x10));
  }
  sVar1 = strftime(param_2,param_3,param_4,param_5);
  setlocale(6,__locale);
  if (__locale != (char *)0x0) {
    operator_delete__(__locale);
  }
  if (sVar1 == 0) {
    *param_2 = '\0';
  }
  return;
}


