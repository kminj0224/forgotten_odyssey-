/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00169228  Symbol: png_set_oFFs */

void png_set_oFFs(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined param_5)

{
  if ((param_2 != 0) && (param_1 != 0)) {
    *(undefined4 *)(param_2 + 100) = param_3;
    *(undefined4 *)(param_2 + 0x68) = param_4;
    *(undefined *)(param_2 + 0x6c) = param_5;
    *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) | 0x100;
  }
  return;
}


