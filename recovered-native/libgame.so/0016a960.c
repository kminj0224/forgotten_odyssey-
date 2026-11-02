/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0016a960  Symbol: png_set_swap */

void png_set_swap(int param_1)

{
  if ((param_1 != 0) && (*(char *)(param_1 + DAT_0016a978) == '\x10')) {
    *(uint *)(param_1 + 0x134) = *(uint *)(param_1 + 0x134) | 0x10;
  }
  return;
}


