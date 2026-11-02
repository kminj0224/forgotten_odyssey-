/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00173074  Symbol: png_crc_error */

bool png_crc_error(int param_1)

{
  byte local_14;
  byte local_13;
  byte local_12;
  byte local_11;
  
  if ((int)((uint)*(byte *)(param_1 + 0x1e0) << 0x1a) < 0) {
    if ((*(uint *)(param_1 + 0x130) & 0x300) == 0x300) {
LAB_001730d6:
      *(undefined4 *)(param_1 + 0x34c) = 0x81;
      png_read_data(param_1,&local_14,4);
      return false;
    }
  }
  else if (*(int *)(param_1 + 0x130) << 0x14 < 0) goto LAB_001730d6;
  *(undefined4 *)(param_1 + 0x34c) = 0x81;
  png_read_data(param_1,&local_14,4);
  return *(int *)(param_1 + 0x1d4) !=
         (uint)local_14 * 0x1000000 + (uint)local_13 * 0x10000 + (uint)local_11 +
         (uint)local_12 * 0x100;
}


