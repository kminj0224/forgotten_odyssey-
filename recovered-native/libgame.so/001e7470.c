/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001e7470  Symbol: FUN_001e7470 */

void FUN_001e7470(int param_1)

{
  wint_t __wc;
  
  __wc = getwc(*(__FILE **)(param_1 + 0x20));
  ungetwc(__wc,*(__FILE **)(param_1 + 0x20));
  return;
}


