/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00169090  Symbol: png_reset_crc */

void png_reset_crc(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = crc32(0,0,0);
  *(undefined4 *)(param_1 + 0x1d4) = uVar1;
  return;
}


