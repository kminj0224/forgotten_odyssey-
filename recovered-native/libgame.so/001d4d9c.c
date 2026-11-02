/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001d4d9c  Symbol: FUN_001d4d9c */

int * FUN_001d4d9c(int *param_1,undefined4 param_2)

{
  int iVar1;
  
  FUN_0020472c(param_1 + 2);
  iVar1 = DAT_001d4e10 + 0x1d4de4;
  *param_1 = DAT_001d4e10 + 0x1d4dd0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  *(undefined *)(param_1 + 0x20) = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[2] = iVar1;
  param_1[1] = 0;
  FUN_001d169c(param_1 + 2,param_2);
  return param_1;
}


