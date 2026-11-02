/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0016a9a4  Symbol: png_set_packswap */

void png_set_packswap(int param_1)

{
  if ((param_1 != 0) && (*(byte *)(param_1 + DAT_0016a9c0) < 8)) {
    *(uint *)(param_1 + 0x134) = *(uint *)(param_1 + 0x134) | 0x10000;
  }
  return;
}


