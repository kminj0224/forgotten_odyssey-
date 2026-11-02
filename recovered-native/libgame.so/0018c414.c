/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0018c414  Symbol: FUN_0018c414 */

int FUN_0018c414(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  iVar3 = DAT_0018c4dc + 0x18c420;
  iVar2 = param_1;
  if (param_1 != 0) {
    if ((param_2 == 0) || (param_1 == param_2)) {
      iVar2 = 0;
    }
    else {
      FUN_0018b26c(param_2);
      if (*(int *)(param_2 + 4) == 3) {
        if (*(int *)(param_1 + 4) == 3) {
          FUN_0018c174(param_1,*(undefined4 *)(param_2 + 0x28));
          FUN_0018bf48(param_2);
          return param_1;
        }
        iVar2 = *(int *)(param_1 + 0x18);
        if (((iVar2 != 0) && (*(int *)(iVar2 + 4) == 3)) &&
           (*(int *)(param_1 + 8) == *(int *)(iVar2 + 8))) {
          uVar1 = FUN_0019c904(*(undefined4 *)(param_2 + 0x28));
          uVar1 = FUN_0019c9a0(uVar1,*(undefined4 *)(*(int *)(param_1 + 0x18) + 0x28));
          FUN_0018c774(*(undefined4 *)(param_1 + 0x18),uVar1);
          (***(code ***)(iVar3 + DAT_0018c4e0))(uVar1);
          FUN_0018bf48(param_2);
          return *(int *)(param_1 + 0x18);
        }
      }
      else if (*(int *)(param_2 + 4) == 2) {
        iVar2 = FUN_0018bec0(param_1,param_1,param_2,2,param_4);
        return iVar2;
      }
      if (*(int *)(param_2 + 0x20) != *(int *)(param_1 + 0x20)) {
        FUN_001895a0(param_2);
      }
      uVar1 = *(undefined4 *)(param_1 + 0x18);
      uVar4 = *(undefined4 *)(param_1 + 0x14);
      *(int *)(param_2 + 0x1c) = param_1;
      *(undefined4 *)(param_2 + 0x18) = uVar1;
      *(int *)(param_1 + 0x18) = param_2;
      *(undefined4 *)(param_2 + 0x14) = uVar4;
      if (*(int *)(param_2 + 0x18) != 0) {
        *(int *)(*(int *)(param_2 + 0x18) + 0x1c) = param_2;
      }
      iVar3 = *(int *)(param_2 + 0x14);
      iVar2 = param_2;
      if ((iVar3 != 0) && (*(int *)(iVar3 + 0x10) == param_1)) {
        *(int *)(iVar3 + 0x10) = param_2;
      }
    }
  }
  return iVar2;
}


