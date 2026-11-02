/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0016b65c  Symbol: png_start_read_image */

void png_start_read_image(int param_1)

{
  if (param_1 != 0) {
    if (-1 < *(int *)(param_1 + 0x130) << 0x19) {
      png_read_start_row();
    }
  }
  return;
}


