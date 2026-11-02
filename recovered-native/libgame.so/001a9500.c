/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001a9500  Symbol: jpeg_input_complete */

undefined4 jpeg_input_complete(int *param_1)

{
  if (10 < param_1[5] - 200U) {
    *(undefined4 *)(*param_1 + 0x14) = 0x15;
    *(int *)(*param_1 + 0x18) = param_1[5];
    (**(code **)*param_1)();
  }
  return *(undefined4 *)(param_1[0x72] + 0x14);
}


