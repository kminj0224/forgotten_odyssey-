/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001a61e4  Symbol: jpeg_start_compress */

void jpeg_start_compress(int *param_1,int param_2)

{
  if (param_1[5] != 100) {
    *(undefined4 *)(*param_1 + 0x14) = 0x15;
    *(int *)(*param_1 + 0x18) = param_1[5];
    (**(code **)*param_1)();
  }
  if (param_2 != 0) {
    jpeg_suppress_tables(param_1,0);
  }
  (**(code **)(*param_1 + 0x10))(param_1);
  (**(code **)(param_1[6] + 8))(param_1);
  jinit_compress_master(param_1);
  (**(code **)param_1[0x61])(param_1);
  param_1[0x41] = 0;
  param_1[5] = 0x66 - (uint)(param_1[0x34] == 0);
  return;
}


