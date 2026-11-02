/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001a1e34  Symbol: FUN_001a1e34 */

void FUN_001a1e34(int param_1)

{
  int iVar1;
  code **ppcVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = DAT_001a1f60 + 0x1a1e3e;
  if (param_1 == 0) {
    return;
  }
  iVar4 = 0;
  if (*(int *)(param_1 + 0x20) != 0) {
    iVar4 = *(int *)(*(int *)(param_1 + 0x20) + 0x50);
  }
  if (((*(int *)(param_1 + 0xc) != 0) && (*(int *)(param_1 + 0x44) == 1)) &&
     (param_1 == *(int *)(*(int *)(param_1 + 0xc) + 0x14))) {
    FUN_0018bb84();
  }
  iVar1 = *(int *)(param_1 + 8);
  if (iVar4 == 0) {
    if (iVar1 != 0) {
      (***(code ***)(iVar3 + DAT_001a1f64))(iVar1);
    }
    if (*(int *)(param_1 + 0x34) != 0) {
      (***(code ***)(iVar3 + DAT_001a1f64))();
    }
    if (*(int *)(param_1 + 0x38) != 0) {
      (***(code ***)(iVar3 + DAT_001a1f64))();
    }
    if (*(int *)(param_1 + 0x40) != 0) {
      (***(code ***)(iVar3 + DAT_001a1f64))();
    }
    if (*(int *)(param_1 + 0x28) != 0) {
      (***(code ***)(iVar3 + DAT_001a1f64))();
    }
    iVar4 = *(int *)(param_1 + 0x24);
    if (iVar4 == 0) goto LAB_001a1f54;
    ppcVar2 = *(code ***)(iVar3 + DAT_001a1f64);
  }
  else {
    if ((iVar1 != 0) && (iVar1 = FUN_0019ccb4(iVar4), iVar1 == 0)) {
      (***(code ***)(iVar3 + DAT_001a1f64))(*(undefined4 *)(param_1 + 8));
    }
    if ((*(int *)(param_1 + 0x34) != 0) && (iVar1 = FUN_0019ccb4(iVar4), iVar1 == 0)) {
      (***(code ***)(iVar3 + DAT_001a1f64))(*(undefined4 *)(param_1 + 0x34));
    }
    if ((*(int *)(param_1 + 0x38) != 0) && (iVar1 = FUN_0019ccb4(iVar4), iVar1 == 0)) {
      (***(code ***)(iVar3 + DAT_001a1f64))(*(undefined4 *)(param_1 + 0x38));
    }
    if ((*(int *)(param_1 + 0x40) != 0) && (iVar1 = FUN_0019ccb4(iVar4), iVar1 == 0)) {
      (***(code ***)(iVar3 + DAT_001a1f64))(*(undefined4 *)(param_1 + 0x40));
    }
    if ((*(int *)(param_1 + 0x28) != 0) && (iVar1 = FUN_0019ccb4(iVar4), iVar1 == 0)) {
      (***(code ***)(iVar3 + DAT_001a1f64))(*(undefined4 *)(param_1 + 0x28));
    }
    if ((*(int *)(param_1 + 0x24) == 0) || (iVar4 = FUN_0019ccb4(iVar4), iVar4 != 0))
    goto LAB_001a1f54;
    iVar4 = *(int *)(param_1 + 0x24);
    ppcVar2 = *(code ***)(iVar3 + DAT_001a1f64);
  }
  (**ppcVar2)(iVar4);
LAB_001a1f54:
  (***(code ***)(iVar3 + DAT_001a1f64))(param_1);
  return;
}


