/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00177428  Symbol: png_write_chunk */

void png_write_chunk(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  if (param_1 != 0) {
    png_write_chunk_start(param_1,param_2,param_4);
    png_write_chunk_data(param_1,param_3,param_4);
    png_write_chunk_end(param_1);
  }
  return;
}


