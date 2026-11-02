/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0016dbb8  Symbol: png_set_strip_alpha */

void png_set_strip_alpha(int param_1)

{
  if (param_1 != 0) {
    *(uint *)(param_1 + 0x130) = *(uint *)(param_1 + 0x130) | 0x400000;
  }
  return;
}


