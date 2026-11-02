/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0016aa90  Symbol: png_set_swap_alpha */

void png_set_swap_alpha(int param_1)

{
  if (param_1 != 0) {
    *(uint *)(param_1 + 0x134) = *(uint *)(param_1 + 0x134) | 0x20000;
  }
  return;
}


