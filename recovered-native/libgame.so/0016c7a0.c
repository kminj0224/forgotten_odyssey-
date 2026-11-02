/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0016c7a0  Symbol: png_set_compression_strategy */

void png_set_compression_strategy(int param_1,undefined4 param_2)

{
  if (param_1 != 0) {
    *(uint *)(param_1 + 0x130) = *(uint *)(param_1 + 0x130) | 1;
    *(undefined4 *)(param_1 + 0x188) = param_2;
  }
  return;
}


