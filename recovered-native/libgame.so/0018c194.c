/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0018c194  Symbol: FUN_0018c194 */

int FUN_0018c194(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (param_1 == 0) {
    return 0;
  }
  if ((param_2 == 0) || (param_1 == param_2)) {
LAB_0018c28a:
    param_1 = 0;
  }
  else {
    if (*(int *)(param_2 + 4) == 3) {
      if (((*(int *)(param_1 + 4) != 3) || (*(int *)(param_1 + 0x28) == 0)) ||
         (*(int *)(param_1 + 8) != *(int *)(param_2 + 8))) {
        iVar1 = *(int *)(param_1 + 0x10);
        if (((iVar1 != 0) && (*(int *)(iVar1 + 4) == 3)) &&
           ((*(int *)(iVar1 + 8) == *(int *)(param_2 + 8) && (iVar1 != param_2)))) {
          FUN_0018c174(iVar1,*(undefined4 *)(param_2 + 0x28));
          FUN_0018bf48(param_2);
          return *(int *)(param_1 + 0x10);
        }
        goto LAB_0018c1e8;
      }
    }
    else {
LAB_0018c1e8:
      iVar1 = *(int *)(param_1 + 0x20);
      iVar3 = *(int *)(param_2 + 0x14);
      *(int *)(param_2 + 0x14) = param_1;
      if (*(int *)(param_2 + 0x20) != iVar1) {
        FUN_001895a0(param_2);
      }
      if (iVar3 == param_1) {
        return param_2;
      }
      if ((*(int *)(param_1 + 4) != 3) || (*(int *)(param_1 + 0x28) == 0)) {
        if (*(int *)(param_2 + 4) != 2) {
          if (*(int *)(param_1 + 0xc) == 0) {
            *(int *)(param_1 + 0xc) = param_2;
          }
          else {
            iVar1 = *(int *)(param_1 + 0x10);
            *(int *)(iVar1 + 0x18) = param_2;
            *(int *)(param_2 + 0x1c) = iVar1;
          }
          *(int *)(param_1 + 0x10) = param_2;
          return param_2;
        }
        if (*(int *)(param_1 + 4) == 1) {
          if (*(int *)(param_1 + 0x2c) != 0) {
            if (*(int *)(param_2 + 0x24) == 0) {
              uVar2 = 0;
            }
            else {
              uVar2 = *(undefined4 *)(*(int *)(param_2 + 0x24) + 8);
            }
            iVar1 = FUN_001898dc(param_1,*(undefined4 *)(param_2 + 8),uVar2);
            if (iVar1 == param_2) {
              return param_2;
            }
            if ((iVar1 != 0) && (*(int *)(iVar1 + 4) != 0x10)) {
              FUN_0018b26c();
              FUN_0018bdf4(iVar1);
            }
            if (iVar1 == param_2) {
              return param_2;
            }
          }
          iVar1 = *(int *)(param_1 + 0x2c);
          if (*(int *)(param_1 + 0x2c) == 0) {
            *(int *)(param_1 + 0x2c) = param_2;
            return param_2;
          }
          do {
            iVar3 = iVar1;
            iVar1 = *(int *)(iVar3 + 0x18);
          } while (*(int *)(iVar3 + 0x18) != 0);
          *(int *)(iVar3 + 0x18) = param_2;
          *(int *)(param_2 + 0x1c) = iVar3;
          return param_2;
        }
        goto LAB_0018c28a;
      }
    }
    FUN_0018c174(param_1,*(undefined4 *)(param_2 + 0x28));
    FUN_0018bf48(param_2);
  }
  return param_1;
}


