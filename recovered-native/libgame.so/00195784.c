/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00195784  Symbol: FUN_00195784 */

int FUN_00195784(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar5 = DAT_0019588c + 0x195790;
  if (param_2 == 0) {
    return 0;
  }
  if (param_3 == 0) {
    return 0;
  }
  if (param_4 == 0) {
    return 0;
  }
  iVar6 = *(int *)(param_2 + 0x44);
  if (iVar6 == 0) {
    iVar6 = FUN_0018f404(0,*(undefined4 *)(param_2 + 0x50));
    *(int *)(param_2 + 0x44) = iVar6;
    if (iVar6 == 0) {
      FUN_00194208(param_1,iVar5 + DAT_00195890);
      return 0;
    }
  }
  iVar1 = (***(code ***)(iVar5 + DAT_00195894))(0x14);
  if (iVar1 == 0) {
    FUN_00194208(param_1,iVar5 + DAT_00195898);
    return 0;
  }
  uVar2 = FUN_0019c904(param_3);
  *(undefined4 *)(iVar1 + 4) = uVar2;
  if ((param_1 == 0) || (*(int *)(param_1 + 0x2c) == 0)) {
    *(undefined4 *)(iVar1 + 0xc) = 0;
    *(int *)(iVar1 + 8) = param_4;
  }
  else {
    uVar2 = FUN_0019c904(*(undefined4 *)(param_4 + 8));
    *(undefined4 *)(iVar1 + 0xc) = uVar2;
    *(undefined4 *)(iVar1 + 8) = 0;
  }
  uVar2 = thunk_FUN_001895e8(*(undefined4 *)(param_4 + 0x14));
  *(undefined4 *)(iVar1 + 0x10) = uVar2;
  iVar3 = FUN_0018eb78(iVar6,param_3);
  if (iVar3 == 0) {
    iVar3 = FUN_001a5c68(iVar5 + DAT_0019589c,iVar5 + DAT_001958a0);
    iVar4 = DAT_001958a4;
    if (iVar3 == 0) goto LAB_00195856;
    iVar6 = FUN_0018f240(iVar6,param_3,iVar3);
    if (iVar6 < 0) {
      FUN_001a5a44(iVar3);
      iVar4 = DAT_001958a8;
      goto LAB_00195856;
    }
  }
  iVar6 = FUN_001a594c(iVar3,iVar1);
  iVar4 = DAT_001958a8;
  if (iVar6 == 0) {
    return iVar1;
  }
LAB_00195856:
  FUN_00194f00(0,iVar5 + iVar4);
  if (*(int *)(iVar1 + 4) != 0) {
    (***(code ***)(iVar5 + DAT_001958ac))();
  }
  if (*(int *)(iVar1 + 0xc) != 0) {
    (***(code ***)(iVar5 + DAT_001958ac))();
  }
  (***(code ***)(iVar5 + DAT_001958ac))(iVar1);
  return 0;
}


