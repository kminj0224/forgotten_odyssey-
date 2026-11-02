/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001f384c  Symbol: FUN_001f384c */

int FUN_001f384c(int *param_1)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = FUN_001c60f4(DAT_001f38ac + 0x1f3860);
  if (*(uint *)(*param_1 + 8) <= uVar1) {
    return 0;
  }
  iVar2 = *(int *)(*(int *)(*param_1 + 4) + uVar1 * 4);
  if (iVar2 == 0) {
    return 0;
  }
  iVar2 = __dynamic_cast(iVar2,*(undefined4 *)(DAT_001f38b0 + 0x1f3890),DAT_001f38b4 + 0x1f3894,0);
  if (iVar2 != 0) {
    iVar2 = 1;
  }
  return iVar2;
}


