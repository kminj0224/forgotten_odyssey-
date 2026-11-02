/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001d0b88  Symbol: FUN_001d0b88 */

void FUN_001d0b88(int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_001ced68(param_1 + 3);
  if (iVar1 != 0) {
    FUN_001d1404((int)param_1 + *(int *)(*param_1 + -0xc),0);
    return;
  }
  iVar1 = (int)param_1 + *(int *)(*param_1 + -0xc);
  FUN_001d1404(iVar1,*(uint *)(iVar1 + 0x14) | 4);
  return;
}


