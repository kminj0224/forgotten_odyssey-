/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00196ba0  Symbol: FUN_00196ba0 */

undefined4 FUN_00196ba0(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (param_1 != 0) {
    if (*(int *)(param_1 + 4) != 1) {
      if (*(int *)(param_1 + 4) != 2) {
        return 0;
      }
      uVar3 = FUN_00196b60(*(undefined4 *)(*(int *)(param_1 + 0x14) + 8));
      uVar3 = FUN_00195ec8(uVar3,*(undefined4 *)(param_1 + 8),param_2);
      return uVar3;
    }
    if (param_2 == 0) {
      uVar3 = FUN_00196b60(*(undefined4 *)(*(int *)(param_1 + 0x14) + 8));
      uVar2 = FUN_00196b60(*(undefined4 *)(param_1 + 8));
      uVar3 = FUN_00195f6c(uVar3,uVar2);
      return uVar3;
    }
    uVar3 = FUN_00196b60(*(undefined4 *)(*(int *)(param_1 + 0x14) + 8));
    iVar1 = FUN_00195f3c(uVar3,*(undefined4 *)(param_1 + 8));
    if (iVar1 != 0) {
      return 4;
    }
  }
  return 1;
}


