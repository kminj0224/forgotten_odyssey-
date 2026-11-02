/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001a5e1c  Symbol: jpeg_write_m_header */

void jpeg_write_m_header(int *param_1,undefined4 param_2,undefined4 param_3)

{
  if ((param_1[0x41] != 0) || (2 < param_1[5] - 0x65U)) {
    *(undefined4 *)(*param_1 + 0x14) = 0x15;
    *(int *)(*param_1 + 0x18) = param_1[5];
    (**(code **)*param_1)(param_1);
  }
  (**(code **)(param_1[0x65] + 0x14))(param_1,param_2,param_3);
  return;
}


