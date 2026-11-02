/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0016dadc  Symbol: png_write_png */

/* WARNING: Type propagation algorithm not settling */

void png_write_png(int param_1,int param_2,int param_3)

{
  if ((param_2 != 0) && (param_1 != 0)) {
    png_write_info();
    if (param_3 << 0x1a < 0) {
      png_set_invert_mono(param_1);
    }
    if ((param_3 << 0x19 < 0) && (*(int *)(param_2 + 8) << 0x1e < 0)) {
      png_set_shift(param_1,param_2 + 0x44);
    }
    if (param_3 << 0x1d < 0) {
      png_set_packing(param_1);
    }
    if (param_3 << 0x17 < 0) {
      png_set_swap_alpha(param_1);
    }
    if (param_3 << 0x13 < 0) {
      png_set_filler(param_1,0,1);
    }
    else if (param_3 << 0x14 < 0) {
      png_set_filler(param_1,0,0);
    }
    if (param_3 << 0x18 < 0) {
      png_set_bgr(param_1);
    }
    if (param_3 << 0x16 < 0) {
      png_set_swap(param_1);
    }
    if (param_3 << 0x1c < 0) {
      png_set_packswap(param_1);
    }
    if (param_3 << 0x15 < 0) {
      png_set_invert_alpha(param_1);
    }
    if (*(int *)(param_2 + 8) << 0x10 < 0) {
      png_write_image(param_1,*(undefined4 *)(param_2 + 0xf8));
    }
    png_write_end(param_1,param_2);
  }
  return;
}


