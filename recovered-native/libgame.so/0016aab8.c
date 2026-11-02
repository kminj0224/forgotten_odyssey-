/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0016aab8  Symbol: png_set_invert_mono */

void png_set_invert_mono(int param_1)

{
  if (param_1 != 0) {
    *(uint *)(param_1 + 0x134) = *(uint *)(param_1 + 0x134) | 0x20;
  }
  return;
}


