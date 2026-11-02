/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001e80b4  Symbol: FUN_001e80b4 */

int * FUN_001e80b4(int *param_1)

{
  int iVar1;
  int iVar2;
  
  FUN_0020472c(param_1 + 1);
  iVar1 = DAT_001e8118 + 0x1e80e4;
  iVar2 = DAT_001e8118 + 0x1e80f8;
  param_1[0x1d] = 0;
  *(undefined *)(param_1 + 0x1e) = 0;
  *(undefined *)((int)param_1 + 0x79) = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  *param_1 = iVar1;
  param_1[1] = iVar2;
  FUN_001d1048(param_1 + 1);
  return param_1;
}


