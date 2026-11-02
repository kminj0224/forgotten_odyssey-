/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0019f308  Symbol: FUN_0019f308 */

void FUN_0019f308(int param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined4 param_5,
                 undefined4 param_6,undefined4 param_7)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int local_1c [2];
  
  iVar3 = DAT_0019f3d8 + 0x19f314;
  if ((param_1 != 0) && (local_1c[0] = 0, *(int *)(param_1 + 8) != 0)) {
    iVar1 = FUN_0019c30c(param_3,iVar3 + DAT_0019f3dc);
    if ((iVar1 != 0) && (param_4 != 2)) {
      uVar2 = *(undefined4 *)(param_1 + 100);
      FUN_0019e068(param_1,0x21c,iVar3 + DAT_0019f3e0,0,0);
      *(undefined4 *)(param_1 + 100) = uVar2;
    }
    iVar1 = FUN_0017d590(param_1,param_3,local_1c);
    *(undefined4 *)(param_1 + 0x90) = 1;
    if (*(int *)(param_1 + 0xd8) == 1) {
      uVar2 = *(undefined4 *)(*(int *)(param_1 + 8) + 0x2c);
    }
    else {
      if (*(int *)(param_1 + 0xd8) != 2) {
        FUN_0019f1a8(param_1,1,iVar3 + DAT_0019f3e4,iVar1);
        FUN_00193e3c(param_7);
        return;
      }
      uVar2 = *(undefined4 *)(*(int *)(param_1 + 8) + 0x30);
    }
    FUN_00194d20(param_1 + 0x6c,uVar2,param_2,iVar1,local_1c[0],param_4,param_5,param_6,param_7);
    if (local_1c[0] != 0) {
      (***(code ***)(iVar3 + DAT_0019f3e8))();
    }
    if (iVar1 != 0) {
      (***(code ***)(iVar3 + DAT_0019f3e8))(iVar1);
    }
  }
  return;
}


