/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001d1090  Symbol: FUN_001d1090 */

int * FUN_001d1090(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  FUN_0020472c();
  iVar1 = DAT_001d10f0 + 0x1d10b8;
  *param_1 = iVar1;
  param_1[0x1c] = 0;
  *(undefined *)(param_1 + 0x1d) = 0;
  *(undefined *)((int)param_1 + 0x75) = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  FUN_001d1048(param_1,param_2,iVar1,0,param_4);
  return param_1;
}


