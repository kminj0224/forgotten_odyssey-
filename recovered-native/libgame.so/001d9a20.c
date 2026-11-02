/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001d9a20  Symbol: FUN_001d9a20 */

int * FUN_001d9a20(int *param_1,int param_2)

{
  int iVar1;
  
  if (param_2 != 0) {
    param_2 = 1;
  }
  iVar1 = DAT_001d9a74 + 0x1d9a3c;
  param_1[1] = param_2;
  *param_1 = iVar1;
  param_1[2] = 0;
  iVar1 = FUN_001c5bb8();
  param_1[4] = iVar1;
  FUN_00206ed8(param_1,0);
  return param_1;
}


