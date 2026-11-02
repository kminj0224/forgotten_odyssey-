/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00195d0c  Symbol: FUN_00195d0c */

void FUN_00195d0c(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  
  iVar6 = DAT_00195eb8 + 0x195d16;
  if (param_1 != 0) {
    FUN_0017c498();
    iVar5 = *(int *)(param_1 + 0x128);
    while (iVar1 = FUN_0017ad38(param_1), iVar1 != 0) {
      FUN_00179898();
    }
    *(undefined4 *)(param_1 + 0xec) = 0;
    *(undefined4 *)(param_1 + 0x28) = 0;
    *(undefined4 *)(param_1 + 0x24) = 0;
    puVar3 = *(undefined4 **)(undefined4 *)(param_1 + 0xf4);
    if (puVar3 != (undefined4 *)0x0) {
      *puVar3 = 0xffffffff;
      puVar3 = *(undefined4 **)(undefined4 *)(param_1 + 0xf4);
    }
    *(undefined4 **)(param_1 + 0xe8) = puVar3;
    *(undefined4 *)(param_1 + 0xbc) = 0;
    *(undefined4 *)(param_1 + 0x38) = 0;
    *(undefined4 *)(param_1 + 0x34) = 0;
    *(undefined4 *)(param_1 + 0xb8) = 0;
    if ((*(int *)(param_1 + 0x14) != 0) &&
       ((iVar5 == 0 || (iVar1 = FUN_0019ccb4(iVar5), iVar1 == 0)))) {
      (***(code ***)(iVar6 + DAT_00195ebc))(*(undefined4 *)(param_1 + 0x14));
    }
    *(undefined4 *)(param_1 + 0x14) = 0;
    if ((*(int *)(param_1 + 0x18) != 0) &&
       ((iVar5 == 0 || (iVar1 = FUN_0019ccb4(iVar5), iVar1 == 0)))) {
      (***(code ***)(iVar6 + DAT_00195ebc))(*(undefined4 *)(param_1 + 0x18));
    }
    *(undefined4 *)(param_1 + 0x18) = 0;
    if ((*(int *)(param_1 + 0xb4) != 0) &&
       ((iVar5 == 0 || (iVar1 = FUN_0019ccb4(iVar5), iVar1 == 0)))) {
      (***(code ***)(iVar6 + DAT_00195ebc))(*(undefined4 *)(param_1 + 0xb4));
    }
    *(undefined4 *)(param_1 + 0xb4) = 0;
    if ((*(int *)(param_1 + 0xe0) != 0) &&
       ((iVar5 == 0 || (iVar1 = FUN_0019ccb4(iVar5), iVar1 == 0)))) {
      (***(code ***)(iVar6 + DAT_00195ebc))(*(undefined4 *)(param_1 + 0xe0));
    }
    *(undefined4 *)(param_1 + 0xe0) = 0;
    if ((*(int *)(param_1 + 0xe4) != 0) &&
       ((iVar5 == 0 || (iVar5 = FUN_0019ccb4(iVar5), iVar5 == 0)))) {
      (***(code ***)(iVar6 + DAT_00195ebc))(*(undefined4 *)(param_1 + 0xe4));
    }
    *(undefined4 *)(param_1 + 0xe4) = 0;
    if (*(int *)(param_1 + 8) != 0) {
      FUN_0018ba54();
    }
    iVar5 = DAT_00195ec0;
    *(undefined4 *)(param_1 + 0x1c) = 0xffffffff;
    *(undefined4 *)(param_1 + 0xac) = 0;
    iVar1 = DAT_00195ec4;
    *(undefined4 *)(param_1 + 0xb0) = 0;
    uVar4 = *(undefined4 *)(iVar6 + iVar5);
    *(undefined4 *)(param_1 + 0x20) = 1;
    *(undefined4 *)(param_1 + 0xc) = 1;
    *(undefined4 *)(param_1 + 0x164) = 1;
    *(undefined4 *)(param_1 + 100) = 1;
    uVar2 = *(undefined4 *)(iVar6 + iVar1);
    *(undefined4 *)(param_1 + 200) = 0;
    *(undefined4 *)(param_1 + 0xcc) = 0;
    *(undefined4 *)(param_1 + 0x74) = uVar2;
    *(undefined4 *)(param_1 + 0xd8) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 0x58) = 0;
    *(undefined4 *)(param_1 + 0x5c) = 0;
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(int *)(param_1 + 0x6c) = param_1;
    *(undefined4 *)(param_1 + 0x70) = uVar4;
    *(undefined4 *)(param_1 + 0x44) = 0;
    *(undefined4 *)(param_1 + 0x54) = 0;
    *(undefined4 *)(param_1 + 0xf8) = 0;
    *(undefined4 *)(param_1 + 0x100) = 0;
    *(undefined4 *)(param_1 + 0x11c) = 0;
    FUN_00179218(param_1 + 0x48);
    if (*(int *)(param_1 + 0x15c) != 0) {
      FUN_0018f328(*(int *)(param_1 + 0x15c),**(undefined4 **)(iVar6 + DAT_00195ebc));
      *(undefined4 *)(param_1 + 0x15c) = 0;
    }
    if (*(int *)(param_1 + 0x160) != 0) {
      FUN_0018f328(*(int *)(param_1 + 0x160),0);
      *(undefined4 *)(param_1 + 0x160) = 0;
    }
  }
  return;
}


