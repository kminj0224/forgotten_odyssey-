/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001a98b0  Symbol: jpeg_start_output */

void jpeg_start_output(int *param_1,int param_2)

{
  if ((param_1[5] != 0xcc) && (param_1[5] != 0xcf)) {
    *(undefined4 *)(*param_1 + 0x14) = 0x15;
    *(int *)(*param_1 + 0x18) = param_1[5];
    (**(code **)*param_1)();
  }
  if (param_2 < 1) {
    param_2 = 1;
  }
  if ((*(int *)(param_1[0x72] + 0x14) != 0) && (param_1[0x24] < param_2)) {
    param_2 = param_1[0x24];
  }
  param_1[0x26] = param_2;
  FUN_001a96e4(param_1);
  return;
}


