/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001ce024  Symbol: FUN_001ce024 */

void FUN_001ce024(int param_1)

{
  if (*(char *)(param_1 + 0x44) != '\0') {
    if (*(void **)(param_1 + 0x3c) != (void *)0x0) {
      operator_delete__(*(void **)(param_1 + 0x3c));
    }
    *(undefined4 *)(param_1 + 0x3c) = 0;
    *(undefined *)(param_1 + 0x44) = 0;
  }
  if (*(void **)(param_1 + 0x5c) != (void *)0x0) {
    operator_delete__(*(void **)(param_1 + 0x5c));
  }
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 100) = 0;
  *(undefined4 *)(param_1 + 0x68) = 0;
  return;
}


