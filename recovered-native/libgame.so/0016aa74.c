/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0016aa74  Symbol: png_set_add_alpha */

void png_set_add_alpha(int param_1)

{
  if (param_1 != 0) {
    png_set_filler(param_1);
    *(uint *)(param_1 + 0x134) = *(uint *)(param_1 + 0x134) | 0x1000000;
  }
  return;
}


