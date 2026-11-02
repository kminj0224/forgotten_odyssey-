/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0016dca8  Symbol: png_set_expand_gray_1_2_4_to_8 */

void png_set_expand_gray_1_2_4_to_8(int param_1)

{
  if (param_1 != 0) {
    *(uint *)(param_1 + 0x134) = *(uint *)(param_1 + 0x134) | 0x1000;
    *(uint *)(param_1 + 0x130) = *(uint *)(param_1 + 0x130) & 0xffffffbf;
  }
  return;
}


