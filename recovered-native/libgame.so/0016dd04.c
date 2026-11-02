/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0016dd04  Symbol: png_set_read_user_transform_fn */

void png_set_read_user_transform_fn(int param_1,undefined4 param_2)

{
  if (param_1 != 0) {
    *(uint *)(param_1 + 0x134) = *(uint *)(param_1 + 0x134) | 0x100000;
    *(undefined4 *)(param_1 + 0x11c) = param_2;
  }
  return;
}


