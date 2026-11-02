/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001bd390  Symbol: jpeg_fdct_1x1 */

void jpeg_fdct_1x1(int *param_1,int *param_2,int param_3)

{
  memset(param_1,0,0x100);
  *param_1 = (*(byte *)(*param_2 + param_3) - 0x80) * 0x40;
  return;
}


