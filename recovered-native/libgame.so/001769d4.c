/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001769d4  Symbol: png_write_chunk_end */

void png_write_chunk_end(int param_1)

{
  undefined auStack_14 [8];
  
  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 0x34c) = 0x82;
    png_save_uint_32(auStack_14,*(undefined4 *)(param_1 + 0x1d4));
    png_write_data(param_1,auStack_14,4);
  }
  return;
}


