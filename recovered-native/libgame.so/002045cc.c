/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 002045cc  Symbol: FUN_002045cc */

int * FUN_002045cc(int *param_1,int param_2)

{
  int iVar1;
  
  if (param_2 != 0) {
    param_2 = 1;
  }
  iVar1 = DAT_0020462c + 0x2045e8;
  param_1[1] = param_2;
  *param_1 = iVar1;
  iVar1 = FUN_001c5b90();
  param_1[2] = iVar1;
  *(undefined *)(param_1 + 3) = 0;
  FUN_00206d54(param_1);
  return param_1;
}


