/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0016bbe8  Symbol: png_read_update_info */

void png_read_update_info(int param_1,undefined4 param_2)

{
  if (param_1 != 0) {
    if (*(int *)(param_1 + 0x130) << 0x19 < 0) {
      png_warning(param_1,DAT_0016bc18 + 0x16bbf4 + DAT_0016bc1c);
    }
    else {
      png_read_start_row();
    }
    png_read_transform_info(param_1,param_2);
  }
  return;
}


