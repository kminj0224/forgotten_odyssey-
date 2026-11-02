/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001e7574  Symbol: FUN_001e7574 */

wint_t FUN_001e7574(int param_1,wchar_t param_2)

{
  wint_t wVar1;
  
  if (param_2 != L'\xffffffff') {
    wVar1 = putwc(param_2,*(__FILE **)(param_1 + 0x20));
    return wVar1;
  }
  wVar1 = fflush(*(FILE **)(param_1 + 0x20));
  if (wVar1 != 0) {
    wVar1 = 0xffffffff;
  }
  return wVar1;
}


