/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00169058  Symbol: png_calculate_crc */

void png_calculate_crc(int param_1)

{
  undefined4 uVar1;
  
  if ((int)((uint)*(byte *)(param_1 + 0x1e0) << 0x1a) < 0) {
    if ((*(uint *)(param_1 + 0x130) & 0x300) == 0x300) {
      return;
    }
  }
  else if (*(int *)(param_1 + 0x130) << 0x14 < 0) {
    return;
  }
  uVar1 = crc32(*(undefined4 *)(param_1 + 0x1d4));
  *(undefined4 *)(param_1 + 0x1d4) = uVar1;
  return;
}


