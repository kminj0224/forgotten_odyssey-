/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00169294  Symbol: png_set_sRGB */

void png_set_sRGB(int param_1,int param_2,undefined param_3)

{
  if ((param_2 != 0) && (param_1 != 0)) {
    *(undefined *)(param_2 + 0x2c) = param_3;
    *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) | 0x800;
  }
  return;
}


