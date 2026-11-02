/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001949cc  Symbol: FUN_001949cc */

void FUN_001949cc(int param_1)

{
  int iVar1;
  code **ppcVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = DAT_00194aa0 + 0x1949d6;
  if (param_1 == 0) {
    return;
  }
  iVar4 = 0;
  if (*(int *)(param_1 + 0x20) != 0) {
    iVar4 = *(int *)(*(int *)(param_1 + 0x20) + 0x50);
  }
  FUN_0018b26c(param_1);
  if (*(int *)(param_1 + 0x34) != 0) {
    FUN_00193e3c();
  }
  iVar1 = *(int *)(param_1 + 0x3c);
  if (iVar4 == 0) {
    if (iVar1 != 0) {
      (***(code ***)(iVar3 + DAT_00194aa4))(iVar1);
    }
    if (*(int *)(param_1 + 8) != 0) {
      (***(code ***)(iVar3 + DAT_00194aa4))();
    }
    if (*(int *)(param_1 + 0x30) != 0) {
      (***(code ***)(iVar3 + DAT_00194aa4))();
    }
    iVar4 = *(int *)(param_1 + 0x38);
    if (iVar4 == 0) goto LAB_00194a94;
    ppcVar2 = *(code ***)(iVar3 + DAT_00194aa4);
  }
  else {
    if ((iVar1 != 0) && (iVar1 = FUN_0019ccb4(iVar4), iVar1 == 0)) {
      (***(code ***)(iVar3 + DAT_00194aa4))(*(undefined4 *)(param_1 + 0x3c));
    }
    if ((*(int *)(param_1 + 8) != 0) && (iVar1 = FUN_0019ccb4(iVar4), iVar1 == 0)) {
      (***(code ***)(iVar3 + DAT_00194aa4))(*(undefined4 *)(param_1 + 8));
    }
    if ((*(int *)(param_1 + 0x38) != 0) && (iVar1 = FUN_0019ccb4(iVar4), iVar1 == 0)) {
      (***(code ***)(iVar3 + DAT_00194aa4))(*(undefined4 *)(param_1 + 0x38));
    }
    if ((*(int *)(param_1 + 0x30) == 0) || (iVar4 = FUN_0019ccb4(iVar4), iVar4 != 0))
    goto LAB_00194a94;
    iVar4 = *(int *)(param_1 + 0x30);
    ppcVar2 = *(code ***)(iVar3 + DAT_00194aa4);
  }
  (**ppcVar2)(iVar4);
LAB_00194a94:
  (***(code ***)(iVar3 + DAT_00194aa4))(param_1);
  return;
}


