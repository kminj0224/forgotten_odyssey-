/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0016dba4  Symbol: png_set_strip_16 */

void png_set_strip_16(int param_1)

{
  if (param_1 != 0) {
    *(uint *)(param_1 + 0x134) = *(uint *)(param_1 + 0x134) | 0x400;
  }
  return;
}


