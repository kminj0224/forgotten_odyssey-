/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001d02c0  Symbol: FUN_001d02c0 */

void FUN_001d02c0(int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_001cec0c(param_1 + 1);
  if (iVar1 != 0) {
    return;
  }
  iVar1 = (int)param_1 + *(int *)(*param_1 + -0xc);
  FUN_001d1404(iVar1,*(uint *)(iVar1 + 0x14) | 4);
  return;
}


