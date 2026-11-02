/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0017387c  Symbol: png_check_chunk_name */

void png_check_chunk_name(undefined4 param_1,char *param_2)

{
  if ((((((byte)(*param_2 + 0xa5U) < 6) || (0x39 < (byte)(*param_2 + 0xbfU))) ||
       ((byte)(param_2[1] + 0xa5U) < 6)) ||
      ((0x39 < (byte)(param_2[1] + 0xbfU) || ((byte)(param_2[2] + 0xa5U) < 6)))) ||
     ((0x39 < (byte)(param_2[2] + 0xbfU) ||
      (((byte)(param_2[3] + 0xa5U) < 6 || (0x39 < (byte)(param_2[3] + 0xbfU))))))) {
    png_chunk_error(param_1,DAT_001738f0 + 0x17388e + DAT_001738f4);
  }
  return;
}


