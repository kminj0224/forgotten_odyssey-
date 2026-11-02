/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001689f4  Symbol: png_set_sig_bytes */

void png_set_sig_bytes(int param_1,int param_2)

{
  if (param_1 != 0) {
    if (8 < param_2) {
                    /* WARNING: Subroutine does not return */
      png_error(param_1,DAT_00168a20 + 0x168a00 + DAT_00168a24);
    }
    *(byte *)(param_1 + 0x1f0) = (byte)param_2 & (char)~(byte)((uint)param_2 >> 0x18) >> 7;
  }
  return;
}


