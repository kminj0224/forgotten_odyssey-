/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0019a7a8  Symbol: FUN_0019a7a8 */

int FUN_0019a7a8(int param_1,int param_2,int param_3,undefined4 param_4,int param_5)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = DAT_0019a83c;
  FUN_00195acc(param_1,param_4,param_3,param_4,param_4);
  *(undefined4 *)(param_1 + 0x20) = 1;
  if ((param_3 != 0) && (iVar1 = FUN_001a4238(param_3), iVar1 != 0)) {
    FUN_00179f9c(param_1,iVar1);
    if (*(int *)(*(int *)(param_1 + 0x24) + 0x2c) != 0) {
      (***(code ***)(iVar3 + 0x19a7be + DAT_0019a840))();
    }
    iVar3 = *(int *)(param_1 + 0x24);
    uVar2 = FUN_0019c904(param_3);
    *(undefined4 *)(iVar3 + 0x2c) = uVar2;
  }
  if (((param_2 != 0) && (iVar3 = *(int *)(param_1 + 0x24), iVar3 != 0)) &&
     (*(int *)(iVar3 + 4) == 0)) {
    uVar2 = FUN_0019c904(param_2);
    *(undefined4 *)(iVar3 + 4) = uVar2;
  }
  FUN_0019a56c(param_1);
  iVar3 = *(int *)(param_1 + 8);
  *(undefined4 *)(param_1 + 8) = 0;
  if (param_5 == 0) {
    if (((iVar3 != 0) && (*(int *)(param_1 + 0x16c) != 0)) &&
       (*(int *)(iVar3 + 0x50) == *(int *)(param_1 + 0x128))) {
      *(undefined4 *)(param_1 + 0x128) = 0;
    }
    FUN_00179908(param_1);
  }
  return iVar3;
}


