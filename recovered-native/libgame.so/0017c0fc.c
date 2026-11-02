/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0017c0fc  Symbol: FUN_0017c0fc */

void FUN_0017c0fc(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = DAT_0017c2bc + 0x17c106;
  if (param_1 != 0) {
    iVar3 = *(int *)(param_1 + 0x128);
    while (iVar1 = FUN_0017ad38(param_1), iVar1 != 0) {
      FUN_00179898();
    }
    *(undefined4 *)(param_1 + 0xec) = 0;
    *(undefined4 *)(param_1 + 0x28) = 0;
    *(undefined4 *)(param_1 + 0x24) = 0;
    puVar2 = *(undefined4 **)(undefined4 *)(param_1 + 0xf4);
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = 0xffffffff;
      puVar2 = *(undefined4 **)(undefined4 *)(param_1 + 0xf4);
    }
    *(undefined4 **)(param_1 + 0xe8) = puVar2;
    *(undefined4 *)(param_1 + 0xbc) = 0;
    *(undefined4 *)(param_1 + 0x38) = 0;
    *(undefined4 *)(param_1 + 0x34) = 0;
    *(undefined4 *)(param_1 + 0xb8) = 0;
    if ((*(int *)(param_1 + 0x14) != 0) &&
       ((iVar3 == 0 || (iVar1 = FUN_0019ccb4(iVar3), iVar1 == 0)))) {
      (***(code ***)(iVar4 + DAT_0017c2c0))(*(undefined4 *)(param_1 + 0x14));
    }
    *(undefined4 *)(param_1 + 0x14) = 0;
    if ((*(int *)(param_1 + 0x18) != 0) &&
       ((iVar3 == 0 || (iVar1 = FUN_0019ccb4(iVar3), iVar1 == 0)))) {
      (***(code ***)(iVar4 + DAT_0017c2c0))(*(undefined4 *)(param_1 + 0x18));
    }
    *(undefined4 *)(param_1 + 0x18) = 0;
    if ((*(int *)(param_1 + 0xb4) != 0) &&
       ((iVar3 == 0 || (iVar1 = FUN_0019ccb4(iVar3), iVar1 == 0)))) {
      (***(code ***)(iVar4 + DAT_0017c2c0))(*(undefined4 *)(param_1 + 0xb4));
    }
    *(undefined4 *)(param_1 + 0xb4) = 0;
    if ((*(int *)(param_1 + 0xe0) != 0) &&
       ((iVar3 == 0 || (iVar1 = FUN_0019ccb4(iVar3), iVar1 == 0)))) {
      (***(code ***)(iVar4 + DAT_0017c2c0))(*(undefined4 *)(param_1 + 0xe0));
    }
    *(undefined4 *)(param_1 + 0xe0) = 0;
    if ((*(int *)(param_1 + 0xe4) != 0) &&
       ((iVar3 == 0 || (iVar3 = FUN_0019ccb4(iVar3), iVar3 == 0)))) {
      (***(code ***)(iVar4 + DAT_0017c2c0))(*(undefined4 *)(param_1 + 0xe4));
    }
    *(undefined4 *)(param_1 + 0xe4) = 0;
    if (*(int *)(param_1 + 8) != 0) {
      FUN_0018ba54();
    }
    *(undefined4 *)(param_1 + 0xac) = 0;
    *(undefined4 *)(param_1 + 0xd4) = 0;
    *(undefined4 *)(param_1 + 0xb0) = 0;
    *(undefined4 *)(param_1 + 200) = 0;
    *(undefined4 *)(param_1 + 0xcc) = 0;
    *(undefined4 *)(param_1 + 0xc) = 1;
    *(undefined4 *)(param_1 + 0x164) = 1;
    *(undefined4 *)(param_1 + 100) = 1;
    *(undefined4 *)(param_1 + 0xd8) = 0;
    *(undefined4 *)(param_1 + 0x100) = 1;
    *(undefined4 *)(param_1 + 0x1c) = 0xffffffff;
    *(undefined4 *)(param_1 + 0xf8) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 0x58) = 0;
    *(undefined4 *)(param_1 + 0x5c) = 0;
    *(undefined4 *)(param_1 + 0x20) = 0;
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(undefined4 *)(param_1 + 0x44) = 0;
    *(undefined4 *)(param_1 + 0x54) = 0;
    *(undefined4 *)(param_1 + 0x11c) = 0;
    *(undefined4 *)(param_1 + 0x1b8) = 0;
    *(undefined4 *)(param_1 + 0x1bc) = 0;
    FUN_00179218(param_1 + 0x48);
    if (*(int *)(param_1 + 0x15c) != 0) {
      FUN_0018f328(*(int *)(param_1 + 0x15c),**(undefined4 **)(iVar4 + DAT_0017c2c0));
      *(undefined4 *)(param_1 + 0x15c) = 0;
    }
    if (*(int *)(param_1 + 0x160) != 0) {
      FUN_0018f328(*(int *)(param_1 + 0x160),0);
      *(undefined4 *)(param_1 + 0x160) = 0;
    }
    if (*(int *)(param_1 + 0x184) != 0) {
      FUN_001a4acc(param_1 + 0x180);
    }
  }
  return;
}


