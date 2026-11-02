/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0010a482  Symbol: FUN_0010a482 */

int FUN_0010a482(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x18) - (int)*(int **)(param_1 + 0x14) >> 2;
  if (iVar1 != 0) {
    iVar1 = **(int **)(param_1 + 0x14);
  }
  return iVar1;
}


