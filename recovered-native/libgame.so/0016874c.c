/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0016874c  Symbol: png_data_freer */

void png_data_freer(int param_1,int param_2,int param_3,uint param_4)

{
  if ((param_2 != 0) && (param_1 != 0)) {
    if (param_3 == 1) {
      *(uint *)(param_2 + 0xb8) = param_4 | *(uint *)(param_2 + 0xb8);
    }
    else if (param_3 == 2) {
      *(uint *)(param_2 + 0xb8) = *(uint *)(param_2 + 0xb8) & ~param_4;
    }
    else {
      png_warning(param_1,DAT_00168780 + 0x168754 + DAT_00168784);
    }
  }
  return;
}


