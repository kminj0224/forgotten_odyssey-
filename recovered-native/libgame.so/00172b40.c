/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00172b40  Symbol: png_set_error_fn */

void png_set_error_fn(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 0x10c) = param_2;
    *(undefined4 *)(param_1 + 0x104) = param_3;
    *(undefined4 *)(param_1 + 0x108) = param_4;
  }
  return;
}


