/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00169334  Symbol: png_set_compression_buffer_size */

void png_set_compression_buffer_size
               (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  if (param_1 != 0) {
    png_free(param_1,*(undefined4 *)(param_1 + 0x170),param_3,param_4,param_4);
    *(undefined4 *)(param_1 + 0x174) = param_2;
    uVar1 = png_malloc(param_1,param_2);
    *(undefined4 *)(param_1 + 0x144) = uVar1;
    *(undefined4 *)(param_1 + 0x170) = uVar1;
    *(undefined4 *)(param_1 + 0x148) = *(undefined4 *)(param_1 + 0x174);
  }
  return;
}


