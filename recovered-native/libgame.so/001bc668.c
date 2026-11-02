/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001bc668  Symbol: jpeg_fdct_2x1 */

void jpeg_fdct_2x1(int *param_1,int *param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  
  memset(param_1,0,0x100);
  uVar1 = (uint)*(byte *)(*param_2 + param_3);
  uVar2 = (uint)((byte *)(*param_2 + param_3))[1];
  *param_1 = ((uVar1 - 0x100) + uVar2) * 0x20;
  param_1[1] = (uVar1 - uVar2) * 0x20;
  return;
}


