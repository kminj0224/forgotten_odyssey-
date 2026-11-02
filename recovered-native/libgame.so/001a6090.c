/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001a6090  Symbol: jpeg_write_scanlines */

void jpeg_write_scanlines(int *param_1,undefined4 param_2,uint param_3)

{
  int local_1c [2];
  
  if (param_1[5] != 0x65) {
    *(undefined4 *)(*param_1 + 0x14) = 0x15;
    *(int *)(*param_1 + 0x18) = param_1[5];
    (**(code **)*param_1)();
  }
  if ((uint)param_1[8] <= (uint)param_1[0x41]) {
    *(undefined4 *)(*param_1 + 0x14) = 0x7e;
    (**(code **)(*param_1 + 4))(param_1,0xffffffff);
  }
  if (param_1[2] != 0) {
    *(int *)(param_1[2] + 4) = param_1[0x41];
    *(int *)(param_1[2] + 8) = param_1[8];
    (**(code **)param_1[2])(param_1);
  }
  if (*(int *)(param_1[0x61] + 0xc) != 0) {
    (**(code **)(param_1[0x61] + 4))(param_1);
  }
  if ((uint)(param_1[8] - param_1[0x41]) < param_3) {
    param_3 = param_1[8] - param_1[0x41];
  }
  local_1c[0] = 0;
  (**(code **)(param_1[0x62] + 4))(param_1,param_2,local_1c,param_3);
  param_1[0x41] = local_1c[0] + param_1[0x41];
  return;
}


