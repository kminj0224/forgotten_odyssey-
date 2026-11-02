/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001e74dc  Symbol: FUN_001e74dc */

void FUN_001e74dc(int param_1)

{
  int __c;
  
  __c = getc(*(FILE **)(param_1 + 0x20));
  ungetc(__c,*(FILE **)(param_1 + 0x20));
  return;
}


