/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0019f210  Symbol: FUN_0019f210 */

int FUN_0019f210(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 local_1c [2];
  
  iVar3 = DAT_0019f2fc + 0x19f21c;
  if (param_1 == 0) {
    return 0;
  }
  if ((*(int *)(param_1 + 0xd8) == 0) && (iVar1 = FUN_001a256c(param_2), iVar1 != 0)) {
    return iVar1;
  }
  iVar1 = *(int *)(param_1 + 8);
  if ((iVar1 == 0) || (*(int *)(iVar1 + 0x28) != 1)) {
    iVar1 = FUN_001a2628(iVar1,param_2);
  }
  else {
    if (*(int *)(param_1 + 0xd8) == 2) {
      *(undefined4 *)(iVar1 + 0x28) = 0;
      iVar1 = FUN_001a2628(*(undefined4 *)(param_1 + 8),param_2);
      iVar2 = *(int *)(param_1 + 8);
    }
    else {
      iVar1 = FUN_001a2628(iVar1,param_2);
      if (iVar1 != 0) goto LAB_0019f2a0;
      *(undefined4 *)(*(int *)(param_1 + 8) + 0x28) = 0;
      iVar1 = FUN_001a2628(*(undefined4 *)(param_1 + 8),param_2);
      if (iVar1 != 0) {
        FUN_0019f1a8(param_1,0x67,iVar3 + DAT_0019f300,param_2);
      }
      iVar2 = *(int *)(param_1 + 8);
    }
    *(undefined4 *)(iVar2 + 0x28) = 1;
  }
  if (iVar1 == 0) {
    return 0;
  }
LAB_0019f2a0:
  if ((*(int *)(param_1 + 0x68) == 0) && (*(int *)(param_1 + 0x10) == 0)) {
    return iVar1;
  }
  if (*(int *)(iVar1 + 0xc) != 0) {
    return iVar1;
  }
  if (*(int *)(iVar1 + 0x30) == 2) {
    iVar2 = FUN_001857f4(param_1,*(undefined4 *)(iVar1 + 0x40),*(undefined4 *)(iVar1 + 0x34),
                         local_1c);
    if (iVar2 != 0) {
      FUN_0019f1a8(param_1,0x68,iVar3 + DAT_0019f304,param_2);
      *(undefined4 *)(param_1 + 0x68) = 0;
      return 0;
    }
    FUN_0018c294(iVar1,local_1c[0]);
    *(undefined4 *)(iVar1 + 0x44) = 1;
    if (*(int *)(iVar1 + 0x48) == 0) {
      *(undefined4 *)(iVar1 + 0x48) = 1;
      return iVar1;
    }
    return iVar1;
  }
  return iVar1;
}


