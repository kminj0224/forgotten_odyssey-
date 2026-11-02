/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0016a0f0  Symbol: png_set_sRGB_gAMA_and_cHRM */

void png_set_sRGB_gAMA_and_cHRM(int param_1,int param_2)

{
  if ((param_2 != 0) && (param_1 != 0)) {
    png_set_sRGB(param_1,param_2);
    png_set_gAMA(param_1,param_2,DAT_0016a188,DAT_0016a18c);
    png_set_gAMA_fixed(param_1,param_2,DAT_0016a1d0);
    png_set_cHRM_fixed(param_1,param_2,DAT_0016a1dc,DAT_0016a1ec,64000,DAT_0016a1d4,DAT_0016a1d8,
                       DAT_0016a1e0,DAT_0016a1e4,DAT_0016a1e8);
    png_set_cHRM(param_1,param_2,DAT_0016a1c8,DAT_0016a1cc,DAT_0016a190,DAT_0016a194,DAT_0016a198,
                 DAT_0016a19c,DAT_0016a1a0,DAT_0016a1a4,DAT_0016a1a8,DAT_0016a1ac,DAT_0016a1b0,
                 DAT_0016a1b4,DAT_0016a1b8,DAT_0016a1bc,DAT_0016a1c0,DAT_0016a1c4);
  }
  return;
}


