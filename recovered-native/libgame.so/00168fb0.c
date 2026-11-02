/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00168fb0  Symbol: png_info_destroy */

void png_info_destroy(int param_1,undefined4 param_2)

{
  undefined4 local_14;
  
  local_14 = param_2;
  png_free_data(param_1,param_2,DAT_00168fec,0xffffffff);
  if (*(int *)(param_1 + 0x2e4) != 0) {
    png_free(param_1,*(undefined4 *)(param_1 + 0x2e8));
    *(undefined4 *)(param_1 + 0x2e8) = 0;
    *(undefined4 *)(param_1 + 0x2e4) = 0;
  }
  png_info_init_3(&local_14,0x120);
  return;
}


