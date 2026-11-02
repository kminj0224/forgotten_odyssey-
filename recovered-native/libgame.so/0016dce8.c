/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0016dce8  Symbol: png_set_gray_to_rgb */

void png_set_gray_to_rgb(int param_1)

{
  *(uint *)(param_1 + 0x134) = *(uint *)(param_1 + 0x134) | 0x4000;
  *(uint *)(param_1 + 0x130) = *(uint *)(param_1 + 0x130) & 0xffffffbf;
  return;
}


