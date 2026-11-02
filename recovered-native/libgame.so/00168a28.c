/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00168a28  Symbol: png_reset_zstream */

undefined4 png_reset_zstream(int param_1)

{
  undefined4 uVar1;
  
  if (param_1 == 0) {
    uVar1 = 0xfffffffe;
  }
  else {
    uVar1 = inflateReset(param_1 + 0x138);
  }
  return uVar1;
}


