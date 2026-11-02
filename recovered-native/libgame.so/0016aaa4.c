/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0016aaa4  Symbol: png_set_invert_alpha */

void png_set_invert_alpha(int param_1)

{
  if (param_1 != 0) {
    *(uint *)(param_1 + 0x134) = *(uint *)(param_1 + 0x134) | 0x80000;
  }
  return;
}


