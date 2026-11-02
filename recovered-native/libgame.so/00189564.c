/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00189564  Symbol: FUN_00189564 */

int FUN_00189564(int param_1)

{
  int iVar1;
  
  if (param_1 != 0) {
    for (iVar1 = *(int *)(param_1 + 0xc); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x18)) {
      if (*(int *)(iVar1 + 4) == 0xe) {
        return iVar1;
      }
    }
    param_1 = *(int *)(param_1 + 0x2c);
  }
  return param_1;
}


