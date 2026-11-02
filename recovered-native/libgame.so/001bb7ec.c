/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001bb7ec  Symbol: jpeg_fdct_1x2 */

void jpeg_fdct_1x2(int *param_1,int *param_2,int param_3)

{
  byte bVar1;
  byte bVar2;
  
  memset(param_1,0,0x100);
  bVar1 = *(byte *)(*param_2 + param_3);
  bVar2 = *(byte *)(param_2[1] + param_3);
  *param_1 = ((bVar1 - 0x100) + (uint)bVar2) * 0x20;
  param_1[8] = ((uint)bVar1 - (uint)bVar2) * 0x20;
  return;
}


