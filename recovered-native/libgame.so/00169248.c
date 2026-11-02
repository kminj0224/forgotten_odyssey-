/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00169248  Symbol: png_set_sCAL */

void png_set_sCAL(int param_1,int param_2,undefined param_3,undefined4 param_4,undefined4 param_5,
                 undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  if ((param_2 != 0) && (param_1 != 0)) {
    *(undefined *)(param_2 + 0xdc) = param_3;
    *(undefined4 *)(param_2 + 0xe0) = param_5;
    *(undefined4 *)(param_2 + 0xe4) = param_6;
    *(undefined4 *)(param_2 + 0xe8) = param_7;
    *(undefined4 *)(param_2 + 0xec) = param_8;
    *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) | 0x4000;
  }
  return;
}


