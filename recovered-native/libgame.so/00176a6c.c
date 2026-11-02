/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00176a6c  Symbol: png_write_chunk_data */

void png_write_chunk_data(int param_1,int param_2,int param_3)

{
  if (((param_1 != 0) && (param_3 != 0)) && (param_2 != 0)) {
    png_write_data();
    png_calculate_crc(param_1,param_2,param_3);
  }
  return;
}


