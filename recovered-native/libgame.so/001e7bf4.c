/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001e7bf4  Symbol: FUN_001e7bf4 */

int * FUN_001e7bf4(int *param_1,undefined4 param_2)

{
  int iVar1;
  
  FUN_0020472c(param_1 + 1);
  iVar1 = DAT_001e7c60 + 0x1e7c3c;
  *param_1 = DAT_001e7c60 + 0x1e7c28;
  param_1[1] = iVar1;
  param_1[0x1d] = 0;
  *(undefined *)(param_1 + 0x1e) = 0;
  *(undefined *)((int)param_1 + 0x79) = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  FUN_001d1048(param_1 + 1,param_2);
  return param_1;
}


