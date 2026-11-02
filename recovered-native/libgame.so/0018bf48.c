/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0018bf48  Symbol: FUN_0018bf48 */

void FUN_0018bf48(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = DAT_0018c088 + 0x18bf52;
  if (param_1 != 0) {
    iVar2 = *(int *)(param_1 + 4);
    if (iVar2 == 0xe) {
      FUN_0018b94c();
    }
    else if (iVar2 == 0x12) {
      FUN_00189514();
    }
    else if (iVar2 == 2) {
      FUN_0018bdf4();
    }
    else {
      if ((*(int *)(iVar3 + DAT_0018c08c + 4) != 0) &&
         (**(code ***)(iVar3 + DAT_0018c090) != (code *)0x0)) {
        (***(code ***)(iVar3 + DAT_0018c090))(param_1);
      }
      iVar2 = 0;
      if (*(int *)(param_1 + 0x20) != 0) {
        iVar2 = *(int *)(*(int *)(param_1 + 0x20) + 0x50);
      }
      if (*(int *)(param_1 + 4) == 0x11) {
        if ((*(int *)(param_1 + 0x38) != 0) &&
           ((iVar2 == 0 || (iVar1 = FUN_0019ccb4(iVar2), iVar1 == 0)))) {
          (***(code ***)(iVar3 + DAT_0018c094))(*(undefined4 *)(param_1 + 0x38));
        }
        if ((*(int *)(param_1 + 0x34) != 0) &&
           ((iVar2 == 0 || (iVar1 = FUN_0019ccb4(iVar2), iVar1 == 0)))) {
          (***(code ***)(iVar3 + DAT_0018c094))(*(undefined4 *)(param_1 + 0x34));
        }
      }
      if ((*(int *)(param_1 + 0xc) != 0) && (*(int *)(param_1 + 4) != 5)) {
        FUN_0018bb84();
      }
      iVar1 = *(int *)(param_1 + 4);
      if ((((iVar1 == 0x13) || (iVar1 == 1)) || (iVar1 == 0x14)) && (*(int *)(param_1 + 0x2c) != 0))
      {
        FUN_0018bf34();
      }
      iVar1 = *(int *)(param_1 + 4);
      if (((((iVar1 != 1) && (*(int *)(param_1 + 0x28) != 0)) &&
           ((iVar1 != 5 && ((iVar1 != 0x14 && (iVar1 != 0x13)))))) &&
          (*(int *)(param_1 + 0x28) != param_1 + 0x2c)) &&
         ((iVar2 == 0 || (iVar1 = FUN_0019ccb4(iVar2), iVar1 == 0)))) {
        (***(code ***)(iVar3 + DAT_0018c094))(*(undefined4 *)(param_1 + 0x28));
      }
      if ((((*(int *)(param_1 + 8) != 0) && (*(int *)(param_1 + 4) != 3)) &&
          (*(int *)(param_1 + 4) != 8)) &&
         ((iVar2 == 0 || (iVar2 = FUN_0019ccb4(iVar2), iVar2 == 0)))) {
        (***(code ***)(iVar3 + DAT_0018c094))(*(undefined4 *)(param_1 + 8));
      }
      iVar2 = *(int *)(param_1 + 4);
      if ((((iVar2 == 0x13) || (iVar2 == 1)) || (iVar2 == 0x14)) && (*(int *)(param_1 + 0x30) != 0))
      {
        FUN_00189550();
      }
      (***(code ***)(iVar3 + DAT_0018c094))(param_1);
    }
  }
  return;
}


