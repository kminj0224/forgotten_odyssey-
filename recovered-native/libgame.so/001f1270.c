/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001f1270  Symbol: FUN_001f1270 */

int * FUN_001f1270(int *param_1,int param_2,int param_3)

{
  int iVar1;
  
  if (param_3 != 0) {
    param_3 = 1;
  }
  iVar1 = DAT_001f12c0 + 0x1f1288;
  param_1[2] = param_2;
  param_1[1] = param_3;
  *param_1 = iVar1;
  iVar1 = FUN_001c5bb8();
  param_1[4] = iVar1;
  FUN_00207558(param_1,0);
  return param_1;
}


