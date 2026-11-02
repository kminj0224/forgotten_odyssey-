/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0018ba54  Symbol: FUN_0018ba54 */

void FUN_0018ba54(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = DAT_0018bb74 + 0x18ba60;
  if (param_1 != 0) {
    iVar3 = *(int *)(param_1 + 0x50);
    if ((*(int *)(iVar2 + DAT_0018bb78 + 4) != 0) &&
       (**(code ***)(iVar2 + DAT_0018bb7c) != (code *)0x0)) {
      (***(code ***)(iVar2 + DAT_0018bb7c))(param_1);
    }
    if (*(int *)(param_1 + 0x40) != 0) {
      FUN_001941a8();
    }
    *(undefined4 *)(param_1 + 0x40) = 0;
    if (*(int *)(param_1 + 0x44) != 0) {
      FUN_00194190();
    }
    iVar1 = *(int *)(param_1 + 0x2c);
    iVar4 = *(int *)(param_1 + 0x30);
    *(undefined4 *)(param_1 + 0x44) = 0;
    if ((iVar1 != iVar4) && (iVar4 != 0)) {
      FUN_0018b26c(iVar4);
      *(undefined4 *)(param_1 + 0x30) = 0;
      FUN_0018b94c(iVar4);
    }
    if (iVar1 != 0) {
      FUN_0018b26c(*(undefined4 *)(param_1 + 0x2c));
      *(undefined4 *)(param_1 + 0x2c) = 0;
      FUN_0018b94c(iVar1);
    }
    if (*(int *)(param_1 + 0xc) != 0) {
      FUN_0018bb84();
    }
    if (*(int *)(param_1 + 0x34) != 0) {
      FUN_00189550();
    }
    if ((*(int *)(param_1 + 0x38) != 0) &&
       ((iVar3 == 0 || (iVar1 = FUN_0019ccb4(iVar3), iVar1 == 0)))) {
      (***(code ***)(iVar2 + DAT_0018bb80))(*(undefined4 *)(param_1 + 0x38));
    }
    if ((*(int *)(param_1 + 8) != 0) && ((iVar3 == 0 || (iVar1 = FUN_0019ccb4(iVar3), iVar1 == 0))))
    {
      (***(code ***)(iVar2 + DAT_0018bb80))(*(undefined4 *)(param_1 + 8));
    }
    if ((*(int *)(param_1 + 0x3c) != 0) &&
       ((iVar3 == 0 || (iVar1 = FUN_0019ccb4(iVar3), iVar1 == 0)))) {
      (***(code ***)(iVar2 + DAT_0018bb80))(*(undefined4 *)(param_1 + 0x3c));
    }
    if ((*(int *)(param_1 + 0x48) != 0) &&
       ((iVar3 == 0 || (iVar1 = FUN_0019ccb4(iVar3), iVar1 == 0)))) {
      (***(code ***)(iVar2 + DAT_0018bb80))(*(undefined4 *)(param_1 + 0x48));
    }
    (***(code ***)(iVar2 + DAT_0018bb80))(param_1);
    if (iVar3 != 0) {
      FUN_0019d610(iVar3);
    }
  }
  return;
}


