/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00169498  Symbol: png_set_tIME */

void png_set_tIME(int param_1,int param_2,void *param_3)

{
  if (((param_2 != 0) && (param_1 != 0)) && ((*(uint *)(param_1 + 300) & 0x200) == 0)) {
    memcpy((void *)(param_2 + 0x3c),param_3,8);
    *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) | 0x200;
  }
  return;
}


