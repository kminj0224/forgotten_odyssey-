/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0016a1f0  Symbol: png_get_valid */

uint png_get_valid(int param_1,int param_2,uint param_3)

{
  if ((param_2 == 0) || (param_1 == 0)) {
    param_3 = 0;
  }
  else {
    param_3 = *(uint *)(param_2 + 8) & param_3;
  }
  return param_3;
}


