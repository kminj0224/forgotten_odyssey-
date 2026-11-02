/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00172b2c  Symbol: png_set_longjmp_fn */

int png_set_longjmp_fn(int param_1,undefined4 param_2,int param_3)

{
  if ((param_3 == 0x100) && (param_1 != 0)) {
    *(undefined4 *)(param_1 + 0x100) = param_2;
  }
  else {
    param_1 = 0;
  }
  return param_1;
}


