/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0017c760  Symbol: FUN_0017c760 */

undefined4 FUN_0017c760(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = DAT_0017c7e0 + 0x17c76c;
  if (param_2 == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    if (**(int **)(iVar3 + DAT_0017c7e4) != 0) {
      iVar2 = *(int *)(param_1 + 0x24);
      if ((iVar2 != 0) && (*(int *)(iVar2 + 4) != 0)) {
        (***(code ***)(iVar3 + DAT_0017c7e8))
                  (**(undefined4 **)(iVar3 + DAT_0017c7ec),iVar3 + DAT_0017c7f0,*(int *)(iVar2 + 4),
                   *(undefined4 *)(iVar2 + 0x1c),param_4);
      }
      (***(code ***)(iVar3 + DAT_0017c7e8))
                (**(undefined4 **)(iVar3 + DAT_0017c7ec),iVar3 + DAT_0017c7f4,
                 *(int *)(param_1 + 0x28) + 1,*(undefined4 *)(param_2 + 0x10));
    }
    uVar1 = FUN_0017bfa0(param_1,param_2);
    if (*(int *)(param_1 + 0x124) == 0) {
      if (*(int *)(*(int *)(param_1 + 0x24) + 0x14) - *(int *)(*(int *)(param_1 + 0x24) + 0x10) <
          0xfa) {
        FUN_0017c738(param_1);
      }
    }
  }
  return uVar1;
}


