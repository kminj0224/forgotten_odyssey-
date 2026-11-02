/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001692f8  Symbol: png_set_invalid */

void png_set_invalid(int param_1,int param_2,uint param_3)

{
  if ((param_2 != 0) && (param_1 != 0)) {
    *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) & ~param_3;
  }
  return;
}


