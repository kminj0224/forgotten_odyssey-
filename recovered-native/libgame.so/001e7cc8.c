/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001e7cc8  Symbol: FUN_001e7cc8 */

void FUN_001e7cc8(int *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  
  iVar1 = (**(code **)(**(int **)((int)param_1 + *(int *)(*param_1 + -0xc) + 0x78) + 0x30))();
  if (param_3 == iVar1) {
    return;
  }
  iVar1 = (int)param_1 + *(int *)(*param_1 + -0xc);
  FUN_001d0d2c(iVar1,*(uint *)(iVar1 + 0x14) | 1);
  return;
}


