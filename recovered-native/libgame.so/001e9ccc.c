/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001e9ccc  Symbol: FUN_001e9ccc */

int * FUN_001e9ccc(int *param_1,undefined4 param_2)

{
  int iVar1;
  
  FUN_0020472c(param_1 + 1);
  iVar1 = DAT_001e9d38 + 0x1e9d14;
  *param_1 = DAT_001e9d38 + 0x1e9d00;
  param_1[1] = iVar1;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  *(undefined *)(param_1 + 0x1f) = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  FUN_001d169c(param_1 + 1,param_2);
  return param_1;
}


