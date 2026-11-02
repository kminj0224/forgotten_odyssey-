/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001a7d08  Symbol: jpeg_abort */

void jpeg_abort(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    (**(code **)(*(int *)(param_1 + 4) + 0x24))(param_1,1);
    if (*(int *)(param_1 + 0x10) == 0) {
      *(undefined4 *)(param_1 + 0x14) = 100;
    }
    else {
      *(undefined4 *)(param_1 + 0x14) = 200;
      *(undefined4 *)(param_1 + 0x134) = 0;
    }
  }
  return;
}


