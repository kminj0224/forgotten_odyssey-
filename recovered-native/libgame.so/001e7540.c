/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001e7540  Symbol: FUN_001e7540 */

int FUN_001e7540(int param_1,int param_2)

{
  int iVar1;
  
  if (param_2 != -1) {
    iVar1 = putc(param_2,*(FILE **)(param_1 + 0x20));
    return iVar1;
  }
  iVar1 = fflush(*(FILE **)(param_1 + 0x20));
  if (iVar1 != 0) {
    iVar1 = -1;
  }
  return iVar1;
}


