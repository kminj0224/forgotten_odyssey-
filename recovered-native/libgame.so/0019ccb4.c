/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0019ccb4  Symbol: FUN_0019ccb4 */

int FUN_0019ccb4(int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  
  if (param_1 == 0) {
LAB_0019ccbc:
    param_1 = -1;
  }
  else {
    do {
      if (param_2 == (undefined4 *)0x0) goto LAB_0019ccbc;
      for (puVar1 = *(undefined4 **)(param_1 + 0x10); puVar1 != (undefined4 *)0x0;
          puVar1 = (undefined4 *)*puVar1) {
        if ((puVar1 + 5 <= param_2) && (param_2 <= (undefined4 *)puVar1[1])) {
          return 1;
        }
      }
      param_1 = *(int *)(param_1 + 0x14);
    } while (param_1 != 0);
  }
  return param_1;
}


