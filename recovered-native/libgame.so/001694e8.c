/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001694e8  Symbol: png_set_bKGD */

void png_set_bKGD(int param_1,int param_2,void *param_3)

{
  if ((param_2 != 0) && (param_1 != 0)) {
    memcpy((void *)(param_2 + 0x5a),param_3,10);
    *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) | 0x20;
  }
  return;
}


