/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00169368  Symbol: png_set_rows */

void png_set_rows(int param_1,int param_2,int param_3)

{
  if ((param_2 != 0) && (param_1 != 0)) {
    if ((*(int *)(param_2 + 0xf8) != 0) && (*(int *)(param_2 + 0xf8) != param_3)) {
      png_free_data(param_1,param_2,0x40,0);
    }
    *(int *)(param_2 + 0xf8) = param_3;
    if (param_3 != 0) {
      *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) | 0x8000;
    }
  }
  return;
}


