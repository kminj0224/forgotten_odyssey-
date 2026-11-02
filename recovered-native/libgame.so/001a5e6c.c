/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001a5e6c  Symbol: jpeg_write_tables */

void jpeg_write_tables(int *param_1)

{
  if (param_1[5] != 100) {
    *(undefined4 *)(*param_1 + 0x14) = 0x15;
    *(int *)(*param_1 + 0x18) = param_1[5];
    (**(code **)*param_1)();
  }
  (**(code **)(*param_1 + 0x10))(param_1);
  (**(code **)(param_1[6] + 8))(param_1);
  jinit_marker_writer(param_1);
  (**(code **)(param_1[0x65] + 0x10))(param_1);
  (**(code **)(param_1[6] + 0x10))(param_1);
  return;
}


