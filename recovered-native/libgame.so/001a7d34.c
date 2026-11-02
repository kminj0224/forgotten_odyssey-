/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001a7d34  Symbol: jpeg_destroy */

void jpeg_destroy(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    (**(code **)(*(int *)(param_1 + 4) + 0x28))();
  }
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  return;
}


