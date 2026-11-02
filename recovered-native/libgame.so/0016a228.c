/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0016a228  Symbol: png_get_image_width */

undefined4 png_get_image_width(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  if ((param_2 == (undefined4 *)0x0) || (param_1 == 0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = *param_2;
  }
  return uVar1;
}


