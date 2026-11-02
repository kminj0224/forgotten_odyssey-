/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001cb230  Symbol: FUN_001cb230 */

void FUN_001cb230(int param_1)

{
  void *pvVar1;
  
  if (*(char *)(param_1 + 0x44) != '\0') {
    return;
  }
  if (*(int *)(param_1 + 0x3c) != 0) {
    return;
  }
  pvVar1 = operator_new__(*(uint *)(param_1 + 0x40));
  *(undefined *)(param_1 + 0x44) = 1;
  *(void **)(param_1 + 0x3c) = pvVar1;
  return;
}


