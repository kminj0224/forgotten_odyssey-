/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0016a390  Symbol: png_get_y_offset_pixels */

undefined4 png_get_y_offset_pixels(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if ((((param_2 == 0) || (param_1 == 0)) || (-1 < *(int *)(param_2 + 8) << 0x17)) ||
     (*(char *)(param_2 + 0x6c) != '\0')) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(param_2 + 0x68);
  }
  return uVar1;
}


