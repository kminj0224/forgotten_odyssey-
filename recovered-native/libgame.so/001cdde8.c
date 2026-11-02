/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001cdde8  Symbol: FUN_001cdde8 */

void FUN_001cdde8(int *param_1,undefined4 *param_2)

{
  int iVar1;
  
  iVar1 = FUN_001cbf80(param_1 + 3,*param_2);
  if (iVar1 != 0) {
    FUN_001d0d2c((int)param_1 + *(int *)(*param_1 + -0xc),0);
    return;
  }
  iVar1 = (int)param_1 + *(int *)(*param_1 + -0xc);
  FUN_001d0d2c(iVar1,*(uint *)(iVar1 + 0x14) | 4);
  return;
}


