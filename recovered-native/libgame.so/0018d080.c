/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0018d080  Symbol: FUN_0018d080 */

int FUN_0018d080(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  iVar4 = DAT_0018d144 + 0x18d08c;
  iVar2 = param_1;
  if (param_1 != 0) {
    if ((param_2 == 0) || (param_1 == param_2)) {
      iVar2 = 0;
    }
    else {
      FUN_0018b26c(param_2);
      if (*(int *)(param_2 + 4) == 3) {
        if (*(int *)(param_1 + 4) == 3) {
          uVar1 = FUN_0019c904(*(undefined4 *)(param_2 + 0x28));
          uVar1 = FUN_0019c9a0(uVar1,*(undefined4 *)(param_1 + 0x28));
          FUN_0018c774(param_1,uVar1);
          (***(code ***)(iVar4 + DAT_0018d148))(uVar1);
          FUN_0018bf48(param_2);
          return param_1;
        }
        iVar2 = *(int *)(param_1 + 0x1c);
        if (((iVar2 != 0) && (*(int *)(iVar2 + 4) == 3)) &&
           (*(int *)(param_1 + 8) == *(int *)(iVar2 + 8))) {
          FUN_0018c174(iVar2,*(undefined4 *)(param_2 + 0x28));
          FUN_0018bf48(param_2);
          return *(int *)(param_1 + 0x1c);
        }
      }
      else if (*(int *)(param_2 + 4) == 2) {
        iVar2 = FUN_0018bec0(*(undefined4 *)(param_1 + 0x1c),param_1,param_2,2,param_4);
        return iVar2;
      }
      if (*(int *)(param_2 + 0x20) != *(int *)(param_1 + 0x20)) {
        FUN_001895a0(param_2);
      }
      uVar1 = *(undefined4 *)(param_1 + 0x1c);
      uVar3 = *(undefined4 *)(param_1 + 0x14);
      *(int *)(param_2 + 0x18) = param_1;
      *(undefined4 *)(param_2 + 0x1c) = uVar1;
      *(int *)(param_1 + 0x1c) = param_2;
      *(undefined4 *)(param_2 + 0x14) = uVar3;
      if (*(int *)(param_2 + 0x1c) != 0) {
        *(int *)(*(int *)(param_2 + 0x1c) + 0x18) = param_2;
      }
      iVar4 = *(int *)(param_2 + 0x14);
      iVar2 = param_2;
      if ((iVar4 != 0) && (*(int *)(iVar4 + 0xc) == param_1)) {
        *(int *)(iVar4 + 0xc) = param_2;
      }
    }
  }
  return iVar2;
}


