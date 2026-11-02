/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001a9528  Symbol: jpeg_has_multiple_scans */

undefined4 jpeg_has_multiple_scans(int *param_1)

{
  if (8 < param_1[5] - 0xcaU) {
    *(undefined4 *)(*param_1 + 0x14) = 0x15;
    *(int *)(*param_1 + 0x18) = param_1[5];
    (**(code **)*param_1)();
  }
  return *(undefined4 *)(param_1[0x72] + 0x10);
}


