/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001f369c  Symbol: FUN_001f369c */

int FUN_001f369c(int *param_1)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = FUN_001c60f4(DAT_001f36fc + 0x1f36b0);
  if (*(uint *)(*param_1 + 8) <= uVar1) {
    return 0;
  }
  iVar2 = *(int *)(*(int *)(*param_1 + 4) + uVar1 * 4);
  if (iVar2 == 0) {
    return 0;
  }
  iVar2 = __dynamic_cast(iVar2,*(undefined4 *)(DAT_001f3700 + 0x1f36e0),DAT_001f3704 + 0x1f36e4,0);
  if (iVar2 != 0) {
    iVar2 = 1;
  }
  return iVar2;
}


