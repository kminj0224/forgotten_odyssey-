/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0016c730  Symbol: png_convert_from_struct_tm */

void png_convert_from_struct_tm(short *param_1,undefined4 *param_2)

{
  *param_1 = (short)param_2[5] + (short)DAT_0016c750;
  *(char *)(param_1 + 1) = (char)param_2[4] + '\x01';
  *(char *)((int)param_1 + 3) = (char)param_2[3];
  *(char *)(param_1 + 2) = (char)param_2[2];
  *(char *)((int)param_1 + 5) = (char)param_2[1];
  *(char *)(param_1 + 3) = (char)*param_2;
  return;
}


