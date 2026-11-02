/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001cb440  Symbol: FUN_001cb440 */

int FUN_001cb440(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = (**(code **)(**(int **)(param_1 + 0x54) + 0x18))();
  if (iVar1 == 0) {
    iVar1 = (**(code **)(**(int **)(param_1 + 0x54) + 0x1c))
                      (*(int **)(param_1 + 0x54),param_2,*(undefined4 *)(param_1 + 0x58),
                       *(undefined4 *)(param_1 + 0x60),*(int *)(param_1 + 8) - *(int *)(param_1 + 4)
                      );
    iVar1 = (*(int *)(param_1 + 0x58) + iVar1) - *(int *)(param_1 + 100);
  }
  else {
    iVar1 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0xc);
  }
  return iVar1;
}


