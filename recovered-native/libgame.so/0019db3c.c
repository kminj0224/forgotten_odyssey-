/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0019db3c  Symbol: FUN_0019db3c */

void FUN_0019db3c(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_1 != 0) {
    iVar1 = FUN_001895dc(*(undefined4 *)(param_1 + 0x34));
    if ((iVar1 == 0) || (*(int *)(iVar1 + 4) != 4)) {
      uVar2 = FUN_0018af44(*(undefined4 *)(param_1 + 8),param_2,param_3);
      FUN_0018c194(*(undefined4 *)(param_1 + 0x34),uVar2);
    }
    else {
      FUN_0018ad08(iVar1,param_2,param_3);
    }
  }
  return;
}


