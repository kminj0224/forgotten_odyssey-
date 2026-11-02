/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001ff8ac  Symbol: FUN_001ff8ac */

wchar_t ** FUN_001ff8ac(wchar_t **param_1,wchar_t *param_2,wchar_t param_3)

{
  wchar_t wVar1;
  wchar_t **ppwVar2;
  wchar_t *__s1;
  
  __s1 = *param_1;
  if (0xffffffe < (uint)param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_001c4558((int)&DAT_001ff998 + DAT_001ff99c);
  }
  if (((param_2 < __s1) || (__s1 + __s1[-3] < param_2)) || (L'\0' < __s1[-1])) {
    ppwVar2 = (wchar_t **)FUN_001ff84c(param_1,0,__s1[-3],param_2,param_3);
    return ppwVar2;
  }
  wVar1 = (int)param_2 - (int)__s1 >> 2;
  if ((uint)wVar1 < (uint)param_3) {
    if (wVar1 == L'\0') goto LAB_001ff924;
    if (param_3 != L'\x01') {
      wmemmove(__s1,param_2,param_3);
      __s1 = *param_1;
      goto LAB_001ff924;
    }
  }
  else if (param_3 != L'\x01') {
    wmemcpy(__s1,param_2,param_3);
    __s1 = *param_1;
    goto LAB_001ff924;
  }
  *__s1 = *param_2;
LAB_001ff924:
  if (__s1 + -3 != (wchar_t *)(DAT_001ff998 + 0x1ff934)) {
    __s1[-1] = L'\0';
    __s1[-3] = param_3;
    __s1[param_3] = L'\0';
  }
  return param_1;
}


