/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0018ad08  Symbol: FUN_0018ad08 */

undefined4 FUN_0018ad08(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  if ((param_1 != 0) &&
     (((iVar2 = *(int *)(param_1 + 4), iVar2 - 3U < 2 || (iVar2 == 8)) || (iVar2 == 7)))) {
    if ((*(int *)(param_1 + 0x28) == param_1 + 0x2c) ||
       (((*(int *)(param_1 + 0x20) != 0 && (*(int *)(*(int *)(param_1 + 0x20) + 0x50) != 0)) &&
        (iVar2 = FUN_0019ccb4(), iVar2 != 0)))) {
      uVar1 = FUN_0019c9c4(*(undefined4 *)(param_1 + 0x28),param_2,param_3);
    }
    else {
      uVar1 = FUN_0019c920(*(undefined4 *)(param_1 + 0x28),param_2,param_3);
    }
    *(undefined4 *)(param_1 + 0x28) = uVar1;
    *(undefined4 *)(param_1 + 0x2c) = 0;
    if (*(int *)(param_1 + 0x28) != 0) {
      return 0;
    }
  }
  return 0xffffffff;
}


