/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001a9798  Symbol: jpeg_read_scanlines */

int jpeg_read_scanlines(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int local_1c [2];
  
  if (param_1[5] != 0xcd) {
    *(undefined4 *)(*param_1 + 0x14) = 0x15;
    *(int *)(*param_1 + 0x18) = param_1[5];
    (**(code **)*param_1)();
  }
  if ((uint)param_1[0x23] < (uint)param_1[0x1d]) {
    if (param_1[2] != 0) {
      *(int *)(param_1[2] + 4) = param_1[0x23];
      *(int *)(param_1[2] + 8) = param_1[0x1d];
      (**(code **)param_1[2])(param_1);
    }
    local_1c[0] = 0;
    (**(code **)(param_1[0x6f] + 4))(param_1,param_2,local_1c,param_3);
    param_1[0x23] = local_1c[0] + param_1[0x23];
  }
  else {
    *(undefined4 *)(*param_1 + 0x14) = 0x7e;
    (**(code **)(*param_1 + 4))(param_1,0xffffffff);
    local_1c[0] = 0;
  }
  return local_1c[0];
}


