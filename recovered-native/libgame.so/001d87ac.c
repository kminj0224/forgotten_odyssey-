/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001d87ac  Symbol: FUN_001d87ac */

int FUN_001d87ac(undefined4 param_1,char *param_2,undefined4 param_3,char *param_4)

{
  char *__s1;
  int iVar1;
  size_t sVar2;
  char *__locale;
  char *__s2;
  
  __s1 = setlocale(1,(char *)0x0);
  if (__s1 != (char *)0x0) {
    __s2 = (char *)(DAT_001d8888 + 0x1d87e0);
    iVar1 = strcmp(__s1,__s2);
    if (iVar1 != 0) {
      sVar2 = strlen(__s1);
      __locale = (char *)operator_new__(sVar2 + 1);
      memcpy(__locale,__s1,sVar2 + 1);
      setlocale(1,__s2);
      iVar1 = vsprintf(param_2,param_4,&stack0x00000000);
      if (__locale == (char *)0x0) {
        return iVar1;
      }
      setlocale(1,__locale);
      operator_delete__(__locale);
      return iVar1;
    }
  }
  iVar1 = vsprintf(param_2,param_4,&stack0x00000000);
  return iVar1;
}


