/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001958b0  Symbol: FUN_001958b0 */

undefined4 FUN_001958b0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  
  iVar2 = *(int *)(param_1 + 0xbc);
  if (iVar2 < 1) {
    uVar1 = 0;
  }
  else {
    iVar3 = iVar2 + -1;
    *(int *)(param_1 + 0xbc) = iVar3;
    if (iVar3 != 0) {
      iVar3 = *(int *)((iVar2 + -2) * 4 + *(int *)(param_1 + 0xc4));
    }
    *(int *)(param_1 + 0xb8) = iVar3;
    puVar4 = (undefined4 *)(*(int *)(param_1 + 0xc4) + *(int *)(param_1 + 0xbc) * 4);
    uVar1 = *puVar4;
    *puVar4 = 0;
  }
  return uVar1;
}


