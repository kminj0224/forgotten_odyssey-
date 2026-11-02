/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 002000d0  Symbol: FUN_002000d0 */

int * FUN_002000d0(int *param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  if (-1 < *(int *)(iVar1 + -4)) {
    FUN_001fff60(param_2);
    iVar1 = *param_2;
  }
  *param_1 = iVar1 + *(int *)(iVar1 + -0xc) * 4;
  return param_1;
}


