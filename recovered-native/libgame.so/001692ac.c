/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001692ac  Symbol: png_set_unknown_chunk_location */

void png_set_unknown_chunk_location(int param_1,int param_2,int param_3,undefined param_4)

{
  if ((((param_2 != 0) && (param_1 != 0)) && (-1 < param_3)) && (param_3 < *(int *)(param_2 + 0xc0))
     ) {
    *(undefined *)(*(int *)(param_2 + 0xbc) + param_3 * 0x14 + 0x10) = param_4;
  }
  return;
}


