/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001692e4  Symbol: png_set_read_user_chunk_fn */

void png_set_read_user_chunk_fn(int param_1,undefined4 param_2,undefined4 param_3)

{
  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 0x2e0) = param_3;
    *(undefined4 *)(param_1 + 0x2dc) = param_2;
  }
  return;
}


