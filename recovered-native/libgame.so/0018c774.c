/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0018c774  Symbol: FUN_0018c774 */

void FUN_0018c774(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  
  iVar4 = DAT_0018c81c + 0x18c780;
  if ((param_1 != 0) && (*(uint *)(param_1 + 4) < 0xc)) {
    uVar3 = 1 << (*(uint *)(param_1 + 4) & 0xff);
    if ((uVar3 & DAT_0018c820) == 0) {
      if ((uVar3 & 0x1f8) != 0) {
        if (((*(int *)(param_1 + 0x28) != 0) && (*(int *)(param_1 + 0x28) != param_1 + 0x2c)) &&
           ((*(int *)(param_1 + 0x20) == 0 ||
            ((*(int *)(*(int *)(param_1 + 0x20) + 0x50) == 0 || (iVar1 = FUN_0019ccb4(), iVar1 == 0)
             ))))) {
          (***(code ***)(iVar4 + DAT_0018c824))(*(undefined4 *)(param_1 + 0x28));
        }
        if (*(int *)(param_1 + 0xc) != 0) {
          FUN_0018bb84();
        }
        *(undefined4 *)(param_1 + 0xc) = 0;
        *(undefined4 *)(param_1 + 0x10) = 0;
        if (param_2 == 0) {
          *(undefined4 *)(param_1 + 0x28) = 0;
        }
        else {
          uVar2 = FUN_0019c904(param_2);
          *(undefined4 *)(param_1 + 0x28) = uVar2;
        }
        *(undefined4 *)(param_1 + 0x2c) = 0;
        *(undefined4 *)(param_1 + 0x30) = 0;
      }
    }
    else {
      if (*(int *)(param_1 + 0xc) != 0) {
        FUN_0018bb84();
      }
      iVar4 = FUN_0018c4e4(*(undefined4 *)(param_1 + 0x20),param_2);
      *(int *)(param_1 + 0xc) = iVar4;
      if (iVar4 != 0) {
        while (*(int *)(iVar4 + 0x18) != 0) {
          *(int *)(iVar4 + 0x14) = param_1;
          iVar4 = *(int *)(iVar4 + 0x18);
        }
        *(int *)(iVar4 + 0x14) = param_1;
      }
      *(int *)(param_1 + 0x10) = iVar4;
    }
  }
  return;
}


