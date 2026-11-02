/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0017db94  Symbol: FUN_0017db94 */

void FUN_0017db94(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x160) == 0) {
    iVar1 = FUN_0018f404(10,*(undefined4 *)(param_1 + 0x128));
    *(int *)(param_1 + 0x160) = iVar1;
    if (iVar1 == 0) {
      FUN_00179430(param_1,0);
      return;
    }
  }
  iVar1 = FUN_0018eb6c(*(undefined4 *)(param_1 + 0x160),param_2,param_3);
  if (iVar1 == 0) {
    FUN_0018f230(*(undefined4 *)(param_1 + 0x160),param_2,param_3,param_4);
  }
  return;
}


