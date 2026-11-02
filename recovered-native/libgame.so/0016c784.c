/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0016c784  Symbol: png_set_compression_mem_level */

void png_set_compression_mem_level(int param_1,undefined4 param_2)

{
  if (param_1 != 0) {
    *(uint *)(param_1 + 0x130) = *(uint *)(param_1 + 0x130) | 4;
    *(undefined4 *)(param_1 + 0x184) = param_2;
  }
  return;
}


