/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0017ad98  Symbol: FUN_0017ad98 */

undefined4 FUN_0017ad98(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  
  if (param_1 != 0) {
    iVar2 = *(int *)(param_1 + 0xbc);
    if (0 < iVar2) {
      iVar3 = iVar2 + -1;
      *(int *)(param_1 + 0xbc) = iVar3;
      if (iVar3 != 0) {
        iVar3 = *(int *)((iVar2 + -2) * 4 + *(int *)(param_1 + 0xc4));
      }
      *(int *)(param_1 + 0xb8) = iVar3;
      puVar4 = (undefined4 *)(*(int *)(param_1 + 0xc4) + *(int *)(param_1 + 0xbc) * 4);
      uVar1 = *puVar4;
      *puVar4 = 0;
      return uVar1;
    }
  }
  return 0;
}


