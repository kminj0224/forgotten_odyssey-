/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001f19c8  Symbol: FUN_001f19c8 */

int * FUN_001f19c8(int *param_1,int param_2)

{
  int iVar1;
  
  if (param_2 != 0) {
    param_2 = 1;
  }
  iVar1 = DAT_001f1a08 + 0x1f19e0;
  param_1[1] = param_2;
  *param_1 = iVar1;
  iVar1 = FUN_001c5b90();
  param_1[2] = iVar1;
  return param_1;
}


