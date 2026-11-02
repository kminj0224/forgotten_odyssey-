/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001ad504  Symbol: jpeg_std_error */

void jpeg_std_error(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = DAT_001ad54c;
  iVar1 = DAT_001ad544 + 0x1ad50e;
  *param_1 = iVar1 + DAT_001ad548;
  param_1[1] = iVar1 + DAT_001ad550;
  param_1[2] = iVar1 + DAT_001ad554;
  param_1[3] = iVar1 + DAT_001ad558;
  iVar2 = *(int *)(iVar1 + iVar2);
  param_1[4] = iVar1 + DAT_001ad55c;
  param_1[0x1c] = iVar2;
  param_1[0x1d] = 0x7e;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[5] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  return;
}


