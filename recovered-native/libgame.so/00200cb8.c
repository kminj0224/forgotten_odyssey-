/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00200cb8  Symbol: FUN_00200cb8 */

wchar_t * FUN_00200cb8(wchar_t *param_1,wchar_t *param_2,undefined4 param_3,undefined4 param_4)

{
  size_t *psVar1;
  wchar_t *__s1;
  size_t __n;
  
  if (param_1 == param_2) {
    return (wchar_t *)(DAT_00200d7c + 0x200d40);
  }
  if (param_1 == (wchar_t *)0x0) {
    if (param_2 != (wchar_t *)0x0) {
      FUN_001c43f0(DAT_00200d80 + 0x200d50);
    }
    psVar1 = (size_t *)FUN_001ff4e0();
    __s1 = (wchar_t *)(psVar1 + 3);
    __n = 0;
  }
  else {
    __n = (int)param_2 - (int)param_1 >> 2;
    psVar1 = (size_t *)FUN_001ff4e0(__n,0,param_3,(int)param_2 - (int)param_1,param_4);
    __s1 = (wchar_t *)(psVar1 + 3);
    if (__n == 1) {
      psVar1[3] = *param_1;
      goto LAB_00200d04;
    }
  }
  wmemcpy(__s1,param_1,__n);
LAB_00200d04:
  if (psVar1 != (size_t *)(DAT_00200d78 + 0x200d10)) {
    psVar1[2] = 0;
    *psVar1 = __n;
    __s1[__n] = L'\0';
  }
  return __s1;
}


