/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0016a248  Symbol: png_get_bit_depth */

undefined png_get_bit_depth(int param_1,int param_2)

{
  undefined uVar1;
  
  if ((param_2 == 0) || (param_1 == 0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined *)(param_2 + 0x18);
  }
  return uVar1;
}


