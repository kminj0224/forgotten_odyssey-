/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00184828  Symbol: FUN_00184828 */

int FUN_00184828(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int iVar6;
  
  *param_2 = 0;
  iVar6 = DAT_00184930 + 0x18483e;
  if ((*(int *)(param_1 + 0x124) == 0) &&
     (*(int *)(*(int *)(param_1 + 0x24) + 0x14) - *(int *)(*(int *)(param_1 + 0x24) + 0x10) < 0xfa))
  {
    FUN_0017c738(param_1);
  }
  iVar1 = FUN_0017f6b8(param_1);
  if (iVar1 == 0) {
    FUN_0017bae0(param_1,0x44,iVar6 + DAT_00184934);
    return 0;
  }
  FUN_0017ff44(param_1);
  if (**(char **)(*(int *)(param_1 + 0x24) + 0x10) != '=') {
    FUN_0017b798(param_1,0x29,iVar6 + DAT_00184938,iVar1);
    return 0;
  }
  FUN_0017a4a4(param_1);
  FUN_0017ff44(param_1);
  uVar2 = FUN_0018480c(param_1);
  *(undefined4 *)(param_1 + 0xac) = 7;
  if (((*(int *)(param_1 + 0x10c) != 0) &&
      (iVar3 = FUN_0019c30c(iVar1,iVar6 + DAT_0018493c), iVar3 != 0)) &&
     (iVar3 = FUN_0017abf0(uVar2), iVar3 == 0)) {
    FUN_0017dcec(param_1,0x62,iVar6 + DAT_00184940,uVar2);
  }
  iVar3 = FUN_0019c30c(iVar1,iVar6 + DAT_00184944);
  if (iVar3 != 0) {
    iVar3 = FUN_0019c30c(uVar2,iVar6 + DAT_00184948);
    if (iVar3 == 0) {
      iVar3 = FUN_0019c30c(uVar2,iVar6 + DAT_0018494c);
      if (iVar3 == 0) {
        FUN_0017dcec(param_1,0x66,iVar6 + DAT_00184950,uVar2);
        goto LAB_00184924;
      }
      puVar5 = *(undefined4 **)(param_1 + 0xe8);
      uVar4 = 1;
    }
    else {
      puVar5 = *(undefined4 **)(param_1 + 0xe8);
      uVar4 = 0;
    }
    *puVar5 = uVar4;
  }
LAB_00184924:
  *param_2 = uVar2;
  return iVar1;
}


