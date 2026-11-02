/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001791a8  Symbol: png_default_flush */

void png_default_flush(int param_1)

{
  if (param_1 != 0) {
    fflush(*(FILE **)(param_1 + 0x118));
  }
  return;
}


