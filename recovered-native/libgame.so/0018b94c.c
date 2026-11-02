/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0018b94c  Symbol: FUN_0018b94c */

void FUN_0018b94c(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = DAT_0018ba44 + 0x18b958;
  if (param_1 != 0) {
    iVar5 = 0;
    if (*(int *)(param_1 + 0x20) != 0) {
      iVar5 = *(int *)(*(int *)(param_1 + 0x20) + 0x50);
    }
    if ((*(int *)(iVar4 + DAT_0018ba48 + 4) != 0) &&
       (**(code ***)(iVar4 + DAT_0018ba4c) != (code *)0x0)) {
      (***(code ***)(iVar4 + DAT_0018ba4c))(param_1);
    }
    iVar2 = *(int *)(param_1 + 0xc);
    while (iVar1 = iVar2, iVar1 != 0) {
      iVar2 = *(int *)(iVar1 + 0x18);
      iVar3 = *(int *)(iVar1 + 4);
      if ((((iVar3 != 0xf) && (iVar3 != 0xc)) && (iVar3 != 0x10)) && (iVar3 != 0x11)) {
        FUN_0018b26c(iVar1);
        FUN_0018bf48(iVar1);
      }
    }
    if ((*(int *)(param_1 + 8) != 0) && ((iVar5 == 0 || (iVar2 = FUN_0019ccb4(iVar5), iVar2 == 0))))
    {
      (***(code ***)(iVar4 + DAT_0018ba50))(*(undefined4 *)(param_1 + 8));
    }
    if ((*(int *)(param_1 + 0x38) != 0) &&
       ((iVar5 == 0 || (iVar2 = FUN_0019ccb4(iVar5), iVar2 == 0)))) {
      (***(code ***)(iVar4 + DAT_0018ba50))(*(undefined4 *)(param_1 + 0x38));
    }
    if ((*(int *)(param_1 + 0x34) != 0) &&
       ((iVar5 == 0 || (iVar5 = FUN_0019ccb4(iVar5), iVar5 == 0)))) {
      (***(code ***)(iVar4 + DAT_0018ba50))(*(undefined4 *)(param_1 + 0x34));
    }
    if (*(int *)(param_1 + 0x24) != 0) {
      FUN_001941c0();
    }
    if (*(int *)(param_1 + 0x28) != 0) {
      FUN_001941f0();
    }
    if (*(int *)(param_1 + 0x2c) != 0) {
      FUN_001941d8();
    }
    if (*(int *)(param_1 + 0x30) != 0) {
      FUN_001a1e1c();
    }
    if (*(int *)(param_1 + 0x3c) != 0) {
      FUN_001a1e1c();
    }
    (***(code ***)(iVar4 + DAT_0018ba50))(param_1);
  }
  return;
}


