/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0018bec0  Symbol: FUN_0018bec0 */

int FUN_0018bec0(int param_1,int param_2,int param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*(int *)(param_2 + 4) == 2) {
    iVar2 = *(int *)(param_3 + 0x24);
    uVar1 = 0;
    if (iVar2 != 0) {
      uVar1 = *(undefined4 *)(iVar2 + 8);
    }
    iVar2 = FUN_001898dc(*(undefined4 *)(param_2 + 0x14),*(undefined4 *)(param_3 + 8),uVar1,iVar2,
                         param_4);
    if (*(int *)(param_3 + 0x20) != *(int *)(param_2 + 0x20)) {
      FUN_001895a0(param_3);
    }
    uVar1 = *(undefined4 *)(param_2 + 0x14);
    *(int *)(param_3 + 0x1c) = param_1;
    *(undefined4 *)(param_3 + 0x14) = uVar1;
    if (param_1 == 0) {
      *(int *)(param_3 + 0x18) = param_2;
      *(int *)(param_2 + 0x1c) = param_3;
    }
    else {
      *(undefined4 *)(param_3 + 0x18) = *(undefined4 *)(param_1 + 0x18);
      *(int *)(param_1 + 0x18) = param_3;
      if (*(int *)(param_3 + 0x18) != 0) {
        *(int *)(*(int *)(param_3 + 0x18) + 0x1c) = param_3;
      }
    }
    if ((*(int *)(param_3 + 0x1c) == 0) && (*(int *)(param_3 + 0x14) != 0)) {
      *(int *)(*(int *)(param_3 + 0x14) + 0x2c) = param_3;
    }
    if ((iVar2 != 0) && (*(int *)(iVar2 + 4) != 0x10)) {
      FUN_0018be78(iVar2);
    }
  }
  else {
    param_3 = 0;
  }
  return param_3;
}


