/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0016dc84  Symbol: png_set_palette_to_rgb */

void png_set_palette_to_rgb(int param_1)

{
  if (param_1 != 0) {
    *(uint *)(param_1 + 0x134) = DAT_0016dca4 | *(uint *)(param_1 + 0x134);
    *(uint *)(param_1 + 0x130) = *(uint *)(param_1 + 0x130) & 0xffffffbf;
  }
  return;
}


