/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0016a2d8  Symbol: png_get_pixels_per_meter */

int png_get_pixels_per_meter(int param_1,int param_2)

{
  int iVar1;
  
  if ((((param_2 == 0) || (param_1 == 0)) || (-1 < *(int *)(param_2 + 8) << 0x18)) ||
     ((*(char *)(param_2 + 0x78) != '\x01' ||
      (iVar1 = *(int *)(param_2 + 0x70), iVar1 != *(int *)(param_2 + 0x74))))) {
    iVar1 = 0;
  }
  return iVar1;
}


