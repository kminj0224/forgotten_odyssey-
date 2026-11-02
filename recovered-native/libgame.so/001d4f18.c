/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001d4f18  Symbol: FUN_001d4f18 */

int * FUN_001d4f18(int *param_1)

{
  int iVar1;
  int iVar2;
  
  FUN_0020472c(param_1 + 2);
  iVar1 = DAT_001d4f80 + 0x1d4f48;
  iVar2 = DAT_001d4f80 + 0x1d4f5c;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  *(undefined *)(param_1 + 0x20) = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  *param_1 = iVar1;
  param_1[1] = 0;
  param_1[2] = iVar2;
  FUN_001d169c(param_1 + 2);
  return param_1;
}


