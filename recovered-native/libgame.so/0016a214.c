/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0016a214  Symbol: png_get_rows */

undefined4 png_get_rows(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if ((param_2 == 0) || (param_1 == 0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(param_2 + 0xf8);
  }
  return uVar1;
}


