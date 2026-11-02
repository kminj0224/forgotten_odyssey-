/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00172990  Symbol: png_set_mem_fn */

void png_set_mem_fn(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 0x300) = param_2;
    *(undefined4 *)(param_1 + 0x304) = param_3;
    *(undefined4 *)(param_1 + 0x308) = param_4;
  }
  return;
}


