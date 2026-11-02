/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0016c754  Symbol: png_set_flush */

void png_set_flush(int param_1,uint param_2)

{
  if (param_1 != 0) {
    *(uint *)(param_1 + 0x214) = param_2 & (int)~param_2 >> 0x1f;
  }
  return;
}


