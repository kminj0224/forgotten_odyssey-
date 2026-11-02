/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001ea18c  Symbol: FUN_001ea18c */

int * FUN_001ea18c(int *param_1)

{
  int iVar1;
  int iVar2;
  
  FUN_0020472c(param_1 + 1);
  iVar1 = DAT_001ea1f0 + 0x1ea1bc;
  iVar2 = DAT_001ea1f0 + 0x1ea1d0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  *(undefined *)(param_1 + 0x1f) = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  *param_1 = iVar1;
  param_1[1] = iVar2;
  FUN_001d169c(param_1 + 1);
  return param_1;
}


