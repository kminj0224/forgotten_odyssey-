/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001d25d8  Symbol: FUN_001d25d8 */

int * FUN_001d25d8(int *param_1)

{
  int iVar1;
  int iVar2;
  
  FUN_0020472c(param_1 + 2);
  iVar1 = DAT_001d2640 + 0x1d2608;
  iVar2 = DAT_001d2640 + 0x1d261c;
  param_1[0x1e] = 0;
  *(undefined *)(param_1 + 0x1f) = 0;
  *(undefined *)((int)param_1 + 0x7d) = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  *param_1 = iVar1;
  param_1[1] = 0;
  param_1[2] = iVar2;
  FUN_001d1048(param_1 + 2);
  return param_1;
}


