/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0016c7e4  Symbol: png_set_compression_method */

void png_set_compression_method(int param_1,int param_2)

{
  if (param_1 != 0) {
    if (param_2 != 8) {
      png_warning(param_1,DAT_0016c814 + 0x16c7f0 + DAT_0016c818);
    }
    *(uint *)(param_1 + 0x130) = *(uint *)(param_1 + 0x130) | 0x10;
    *(int *)(param_1 + 0x17c) = param_2;
  }
  return;
}


