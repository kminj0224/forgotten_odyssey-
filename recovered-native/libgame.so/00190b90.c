/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00190b90  Symbol: FUN_00190b90 */

undefined4 FUN_00190b90(int param_1)

{
  undefined4 uVar1;
  
  if ((param_1 != 0) && (*(int *)(param_1 + 0x1c) == 0)) {
    if (*(int *)(param_1 + 4) != 0) {
      uVar1 = FUN_00190a9c();
      return uVar1;
    }
    if ((*(int *)(param_1 + 0x10) != 0) && (*(int *)(*(int *)(param_1 + 0x10) + 0xc) == 2)) {
      return 0;
    }
  }
  return 0xffffffff;
}


