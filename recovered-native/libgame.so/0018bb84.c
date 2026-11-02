/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0018bb84  Symbol: FUN_0018bb84 */

void FUN_0018bb84(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  iVar2 = DAT_0018bca4;
  iVar1 = DAT_0018bca0;
  iVar6 = DAT_0018bc98 + 0x18bb90;
  if (param_1 != 0) {
    iVar4 = *(int *)(param_1 + 4);
    if (iVar4 == 0x12) {
      FUN_00189550();
    }
    else if ((iVar4 == 0xd) || (iVar4 == 9)) {
      FUN_0018ba54(param_1);
    }
    else {
      iVar4 = 0;
      if (*(int *)(param_1 + 0x20) != 0) {
        iVar4 = *(int *)(*(int *)(param_1 + 0x20) + 0x50);
      }
      iVar7 = iVar6 + DAT_0018bc9c;
      do {
        iVar3 = *(int *)(param_1 + 0x18);
        if (*(int *)(param_1 + 4) != 0xe) {
          if ((*(int *)(iVar7 + 4) != 0) && (**(code ***)(iVar6 + iVar2) != (code *)0x0)) {
            (***(code ***)(iVar6 + iVar2))(param_1);
          }
          if ((*(int *)(param_1 + 0xc) != 0) && (*(int *)(param_1 + 4) != 5)) {
            FUN_0018bb84();
          }
          iVar5 = *(int *)(param_1 + 4);
          if ((((iVar5 == 0x13) || (iVar5 == 1)) || (iVar5 == 0x14)) &&
             (*(int *)(param_1 + 0x2c) != 0)) {
            FUN_0018bf34();
          }
          iVar5 = *(int *)(param_1 + 4);
          if (((((iVar5 != 0x13) && (iVar5 != 1)) &&
               ((iVar5 != 0x14 && ((iVar5 != 5 && (*(int *)(param_1 + 0x28) != param_1 + 0x2c))))))
              && (*(int *)(param_1 + 0x28) != 0)) &&
             ((iVar4 == 0 || (iVar5 = FUN_0019ccb4(iVar4), iVar5 == 0)))) {
            (***(code ***)(iVar6 + iVar1))(*(undefined4 *)(param_1 + 0x28));
          }
          iVar5 = *(int *)(param_1 + 4);
          if ((((iVar5 == 0x13) || (iVar5 == 1)) || (iVar5 == 0x14)) &&
             (*(int *)(param_1 + 0x30) != 0)) {
            FUN_00189550();
          }
          if (((*(int *)(param_1 + 8) != 0) && (*(int *)(param_1 + 4) != 3)) &&
             ((*(int *)(param_1 + 4) != 8 &&
              ((iVar4 == 0 || (iVar5 = FUN_0019ccb4(iVar4), iVar5 == 0)))))) {
            (***(code ***)(iVar6 + iVar1))(*(undefined4 *)(param_1 + 8));
          }
          (***(code ***)(iVar6 + iVar1))(param_1);
        }
        param_1 = iVar3;
      } while (iVar3 != 0);
    }
  }
  return;
}


