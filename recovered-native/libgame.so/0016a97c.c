/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0016a97c  Symbol: png_set_packing */

void png_set_packing(int param_1)

{
  if ((param_1 != 0) && (*(byte *)(param_1 + DAT_0016a9a0) < 8)) {
    *(uint *)(param_1 + 0x134) = *(uint *)(param_1 + 0x134) | 4;
    *(undefined *)(param_1 + 0x1ec) = 8;
  }
  return;
}


