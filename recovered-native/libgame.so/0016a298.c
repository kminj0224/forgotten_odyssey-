/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0016a298  Symbol: png_get_x_pixels_per_meter */

undefined4 png_get_x_pixels_per_meter(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if ((((param_2 == 0) || (param_1 == 0)) || (-1 < *(int *)(param_2 + 8) << 0x18)) ||
     (*(char *)(param_2 + 0x78) != '\x01')) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(param_2 + 0x70);
  }
  return uVar1;
}


