/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0016a258  Symbol: png_get_color_type */

undefined png_get_color_type(int param_1,int param_2)

{
  undefined uVar1;
  
  if ((param_2 == 0) || (param_1 == 0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined *)(param_2 + 0x19);
  }
  return uVar1;
}


