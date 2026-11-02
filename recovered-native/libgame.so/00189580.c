/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00189580  Symbol: FUN_00189580 */

void FUN_00189580(int param_1,int param_2)

{
  if (param_1 != 0) {
    do {
      if (*(int *)(param_1 + 0x20) != param_2) {
        FUN_001895a0(param_1,param_2);
      }
      param_1 = *(int *)(param_1 + 0x18);
    } while (param_1 != 0);
  }
  return;
}


