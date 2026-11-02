/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001a24c8  Symbol: FUN_001a24c8 */

void FUN_001a24c8(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = 0;
  if (param_1 != 0) {
    if (*(int *)(param_1 + 0x2c) != 0) {
      FUN_001a245c(param_1);
      return;
    }
    uVar1 = *(undefined4 *)(param_1 + 0x50);
  }
  iVar2 = FUN_001a22d4(uVar1);
  if (iVar2 != 0) {
    *(int *)(iVar2 + 0x20) = param_1;
  }
  return;
}


