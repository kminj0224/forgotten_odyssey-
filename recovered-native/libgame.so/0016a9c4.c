/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0016a9c4  Symbol: png_set_shift */

void png_set_shift(int param_1,void *param_2)

{
  if (param_1 != 0) {
    *(uint *)(param_1 + 0x134) = *(uint *)(param_1 + 0x134) | 8;
    memcpy((void *)(param_1 + DAT_0016a9e4),param_2,5);
  }
  return;
}


