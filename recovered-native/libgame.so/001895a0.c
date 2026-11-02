/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001895a0  Symbol: FUN_001895a0 */

void FUN_001895a0(int param_1,int param_2)

{
  int iVar1;
  
  if ((param_1 != 0) && (*(int *)(param_1 + 0x20) != param_2)) {
    if (*(int *)(param_1 + 4) == 1) {
      for (iVar1 = *(int *)(param_1 + 0x2c); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x18)) {
        *(int *)(iVar1 + 0x20) = param_2;
        FUN_00189580(*(undefined4 *)(iVar1 + 0xc),param_2);
      }
    }
    if (*(int *)(param_1 + 0xc) != 0) {
      FUN_00189580(*(int *)(param_1 + 0xc),param_2);
    }
    *(int *)(param_1 + 0x20) = param_2;
  }
  return;
}


