/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0018c9a8  Symbol: FUN_0018c9a8 */

int FUN_0018c9a8(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  iVar7 = DAT_0018cae4 + 0x18c9b4;
  if (param_3 == 0) {
    return 0;
  }
  if (param_2 == 0) {
    if (param_1 != 0) goto LAB_0018c9d2;
    if (*(int *)(param_3 + 0x14) != 0) {
      param_1 = *(int *)(*(int *)(param_3 + 0x14) + 0x20);
      goto LAB_0018c9d2;
    }
    uVar5 = *(undefined4 *)(param_3 + 8);
    param_1 = 0;
    if (*(int *)(param_3 + 0xc) != 0) {
      param_1 = *(int *)(*(int *)(param_3 + 0xc) + 0x20);
    }
  }
  else {
    param_1 = *(int *)(param_2 + 0x20);
LAB_0018c9d2:
    uVar5 = *(undefined4 *)(param_3 + 8);
  }
  iVar2 = FUN_0018c8f4(param_1,uVar5,0);
  if (iVar2 == 0) {
    return 0;
  }
  *(int *)(iVar2 + 0x14) = param_2;
  if ((param_2 != 0) && (*(int *)(param_3 + 0x24) != 0)) {
    iVar3 = FUN_00189e8c(*(undefined4 *)(param_2 + 0x20),param_2,
                         *(undefined4 *)(*(int *)(param_3 + 0x24) + 0xc));
    if (iVar3 == 0) {
      iVar3 = FUN_00189e8c(*(undefined4 *)(param_3 + 0x20),*(undefined4 *)(param_3 + 0x14),
                           *(undefined4 *)(*(int *)(param_3 + 0x24) + 0xc));
      if (iVar3 == 0) goto LAB_0018ca68;
      iVar4 = 0;
      iVar1 = param_2;
      do {
        iVar8 = iVar1;
        iVar6 = iVar4;
        iVar4 = iVar8;
        iVar1 = *(int *)(iVar8 + 0x14);
      } while (*(int *)(iVar8 + 0x14) != 0);
      if (iVar8 == *(int *)(param_2 + 0x20)) {
        iVar8 = iVar6;
      }
      uVar5 = FUN_0018a4ec(iVar8,*(undefined4 *)(iVar3 + 8),*(undefined4 *)(iVar3 + 0xc));
    }
    else {
      iVar4 = FUN_0019c30c(*(undefined4 *)(iVar3 + 8),*(undefined4 *)(*(int *)(param_3 + 0x24) + 8))
      ;
      if (iVar4 != 0) {
        *(int *)(iVar2 + 0x24) = iVar3;
        goto LAB_0018ca68;
      }
      uVar5 = FUN_0018a6c8(*(undefined4 *)(param_2 + 0x20),param_2,*(undefined4 *)(param_3 + 0x24));
    }
    *(undefined4 *)(iVar2 + 0x24) = uVar5;
  }
  else {
    *(undefined4 *)(iVar2 + 0x24) = 0;
  }
LAB_0018ca68:
  if (*(int *)(param_3 + 0xc) != 0) {
    iVar3 = FUN_0018cd2c(*(int *)(param_3 + 0xc),*(undefined4 *)(iVar2 + 0x20),iVar2);
    *(int *)(iVar2 + 0xc) = iVar3;
    *(undefined4 *)(iVar2 + 0x10) = 0;
    for (; iVar3 != 0; iVar3 = *(int *)(iVar3 + 0x18)) {
      if (*(int *)(iVar3 + 0x18) == 0) {
        *(int *)(iVar2 + 0x10) = iVar3;
      }
    }
  }
  if ((((param_2 != 0) && (*(int *)(param_2 + 0x20) != 0)) &&
      (iVar3 = *(int *)(param_3 + 0x20), iVar3 != 0)) &&
     (((*(int *)(iVar3 + 0x40) != 0 && (*(int *)(param_3 + 0x14) != 0)) &&
      ((iVar3 = FUN_001943cc(iVar3,*(int *)(param_3 + 0x14),param_3), iVar3 != 0 &&
       (iVar3 = FUN_0018b544(*(undefined4 *)(param_3 + 0x20),*(undefined4 *)(param_3 + 0xc),1),
       iVar3 != 0)))))) {
    FUN_0019454c(0,*(undefined4 *)(param_2 + 0x20),iVar3,iVar2);
    (***(code ***)(iVar7 + DAT_0018cae8))(iVar3);
  }
  return iVar2;
}


