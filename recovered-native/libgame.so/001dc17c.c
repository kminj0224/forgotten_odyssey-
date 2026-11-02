/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001dc17c  Symbol: FUN_001dc17c */

int FUN_001dc17c(int *param_1)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = FUN_001c60f4(DAT_001dc1dc + 0x1dc190);
  if (*(uint *)(*param_1 + 8) <= uVar1) {
    return 0;
  }
  iVar2 = *(int *)(*(int *)(*param_1 + 4) + uVar1 * 4);
  if (iVar2 == 0) {
    return 0;
  }
  iVar2 = __dynamic_cast(iVar2,*(undefined4 *)(DAT_001dc1e0 + 0x1dc1c0),DAT_001dc1e4 + 0x1dc1c4,0);
  if (iVar2 != 0) {
    iVar2 = 1;
  }
  return iVar2;
}


