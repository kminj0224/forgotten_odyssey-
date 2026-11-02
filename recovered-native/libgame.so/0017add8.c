/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0017add8  Symbol: FUN_0017add8 */

undefined4 FUN_0017add8(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0xec);
  if (iVar3 < 1) {
    uVar1 = 0;
  }
  else {
    *(int *)(param_1 + 0xec) = iVar3 + -1;
    if (iVar3 + -1 == 0) {
      iVar3 = *(int *)(param_1 + 0xf4);
    }
    else {
      iVar3 = *(int *)(param_1 + 0xf4) + (iVar3 + -2) * 4;
    }
    *(int *)(param_1 + 0xe8) = iVar3;
    puVar2 = (undefined4 *)(*(int *)(param_1 + 0xf4) + *(int *)(param_1 + 0xec) * 4);
    uVar1 = *puVar2;
    *puVar2 = 0xffffffff;
  }
  return uVar1;
}


