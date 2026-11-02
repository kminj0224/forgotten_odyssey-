/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0019f0e0  Symbol: FUN_0019f0e0 */

void FUN_0019f0e0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = DAT_0019f140 + 0x19f0ec;
  if ((param_1 != 0) && (*(int *)(param_1 + 8) != 0)) {
    iVar1 = FUN_00189564();
    if (iVar1 != 0) {
      if (*(int *)(param_1 + 0x20) != 0) {
        return;
      }
      FUN_0018b26c();
      FUN_0018b94c(iVar1);
      *(undefined4 *)(*(int *)(param_1 + 8) + 0x2c) = 0;
    }
    iVar1 = *(int *)(param_1 + 8);
    uVar2 = FUN_0018a2f4(iVar1,param_2,param_3,param_4);
    *(undefined4 *)(iVar1 + 0x2c) = uVar2;
    if (*(int *)(*(int *)(param_1 + 8) + 0x2c) == 0) {
      FUN_0019d7d4(param_1,iVar3 + DAT_0019f144);
    }
  }
  return;
}


