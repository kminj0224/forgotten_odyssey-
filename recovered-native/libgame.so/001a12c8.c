/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001a12c8  Symbol: FUN_001a12c8 */

void FUN_001a12c8(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  
  iVar7 = DAT_001a13c0 + 0x1a12d4;
  if (param_2 == 0) {
    return;
  }
  if (param_1 == 0) {
    return;
  }
  iVar6 = *(int *)(param_1 + 0x18);
  if (iVar6 == 0) {
    return;
  }
  FUN_00190950(iVar6,10,iVar7 + DAT_001a13c4);
  FUN_00190a68(iVar6,*(undefined4 *)(param_2 + 8));
  if (*(int *)(param_2 + 0x34) == 0) {
    if (*(int *)(param_2 + 0x38) == 0) goto LAB_001a1334;
    uVar2 = 8;
    iVar1 = DAT_001a13d0;
  }
  else {
    FUN_00190950(iVar6,8,iVar7 + DAT_001a13c8);
    FUN_0018ac20(*(undefined4 *)(iVar6 + 0x10),*(undefined4 *)(param_2 + 0x34));
    uVar2 = 1;
    iVar1 = DAT_001a13cc;
  }
  FUN_00190950(iVar6,uVar2,iVar7 + iVar1);
  FUN_0018ac20(*(undefined4 *)(iVar6 + 0x10),*(undefined4 *)(param_2 + 0x38));
LAB_001a1334:
  if ((((*(int *)(param_2 + 0x30) == 0) && (*(int *)(param_2 + 0x28) == 0)) &&
      (*(int *)(param_2 + 0x2c) == 0)) &&
     ((*(int *)(param_2 + 0x24) == 0 && (*(int *)(param_2 + 0x3c) == 0)))) {
    uVar3 = 1;
    iVar1 = DAT_001a13d4;
  }
  else {
    FUN_00190950(iVar6,3,iVar7 + DAT_001a13d8);
    if ((*(int *)(param_2 + 0x24) != 0) &&
       ((*(int *)(param_2 + 0x20) == 0 || (*(int *)(*(int *)(param_2 + 0x20) + 0x2c) == param_2))))
    {
      FUN_00194620(*(undefined4 *)(iVar6 + 0x10));
    }
    uVar4 = *(undefined4 *)(param_1 + 0x28);
    uVar5 = *(undefined4 *)(param_1 + 0x24);
    uVar2 = *(undefined4 *)(param_1 + 0x1c);
    *(undefined4 *)(param_1 + 0x28) = 0;
    *(undefined4 *)(param_1 + 0x24) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_2 + 0x20);
    FUN_001a1244(param_1,*(undefined4 *)(param_2 + 0xc));
    uVar3 = 2;
    *(undefined4 *)(param_1 + 0x28) = uVar4;
    *(undefined4 *)(param_1 + 0x24) = uVar5;
    *(undefined4 *)(param_1 + 0x1c) = uVar2;
    iVar1 = DAT_001a13dc;
  }
  FUN_00190950(iVar6,uVar3,iVar7 + iVar1);
  return;
}


