/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0016a9e8  Symbol: png_set_interlace_handling */

undefined4 png_set_interlace_handling(int param_1)

{
  undefined4 uVar1;
  
  if ((param_1 == 0) || (*(char *)(param_1 + DAT_0016aa08) == '\0')) {
    uVar1 = 1;
  }
  else {
    *(uint *)(param_1 + 0x134) = *(uint *)(param_1 + 0x134) | 2;
    uVar1 = 7;
  }
  return uVar1;
}


