/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0016ae00  Symbol: png_get_user_transform_ptr */

undefined4 png_get_user_transform_ptr(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = *(undefined4 *)(param_1 + 0x124);
  }
  return uVar1;
}


