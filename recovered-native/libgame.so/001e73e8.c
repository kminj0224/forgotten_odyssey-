/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001e73e8  Symbol: FUN_001e73e8 */

void FUN_001e73e8(int param_1)

{
  wint_t wVar1;
  
  wVar1 = getwc(*(__FILE **)(param_1 + 0x20));
  *(wint_t *)(param_1 + 0x24) = wVar1;
  return;
}


