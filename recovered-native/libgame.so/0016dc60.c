/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0016dc60  Symbol: png_set_expand */

void png_set_expand(int param_1)

{
  if (param_1 != 0) {
    *(uint *)(param_1 + 0x134) = DAT_0016dc80 | *(uint *)(param_1 + 0x134);
    *(uint *)(param_1 + 0x130) = *(uint *)(param_1 + 0x130) & 0xffffffbf;
  }
  return;
}


