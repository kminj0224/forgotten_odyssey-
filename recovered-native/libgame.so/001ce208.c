/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001ce208  Symbol: FUN_001ce208 */

int FUN_001ce208(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = (**(code **)(**(int **)(param_1 + 0x58) + 0x18))();
  if (iVar1 == 0) {
    iVar1 = (**(code **)(**(int **)(param_1 + 0x58) + 0x1c))
                      (*(int **)(param_1 + 0x58),param_2,*(undefined4 *)(param_1 + 0x5c),
                       *(undefined4 *)(param_1 + 100),
                       *(int *)(param_1 + 8) - *(int *)(param_1 + 4) >> 2);
    iVar1 = (*(int *)(param_1 + 0x5c) + iVar1) - *(int *)(param_1 + 0x68);
  }
  else {
    iVar1 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0xc) >> 2;
  }
  return iVar1;
}


