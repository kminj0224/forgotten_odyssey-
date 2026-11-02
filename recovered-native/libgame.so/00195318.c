/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00195318  Symbol: FUN_00195318 */

void FUN_00195318(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = DAT_001953ec + 0x195324;
  if (param_2 == 0) {
    return;
  }
  if (param_1 == 0) {
    return;
  }
  uVar2 = *(uint *)(param_2 + 0x24);
  if (uVar2 == 2) {
    FUN_0018a990(param_1,iVar3 + DAT_001953f0);
    if (*(int *)(param_2 + 0x30) != 0) {
      FUN_0018ab00(param_1);
      FUN_0018a990(param_1,iVar3 + DAT_001953f4);
    }
    FUN_0018ab00(param_1,*(undefined4 *)(param_2 + 8));
    iVar1 = DAT_001953fc;
  }
  else if (uVar2 < 3) {
    if (uVar2 != 1) {
LAB_001953e0:
      FUN_00194f00(0,iVar3 + DAT_00195408);
      return;
    }
    FUN_0018a990(param_1,iVar3 + DAT_001953f0);
    if (*(int *)(param_2 + 0x30) != 0) {
      FUN_0018ab00(param_1);
      FUN_0018a990(param_1,iVar3 + DAT_001953f4);
    }
    FUN_0018ab00(param_1,*(undefined4 *)(param_2 + 8));
    iVar1 = DAT_001953f8;
  }
  else {
    if ((uVar2 != 3) && (uVar2 != 4)) goto LAB_001953e0;
    FUN_0018a990(param_1,iVar3 + DAT_001953f0);
    if (*(int *)(param_2 + 0x30) != 0) {
      FUN_0018ab00(param_1);
      FUN_0018a990(param_1,iVar3 + DAT_001953f4);
    }
    FUN_0018ab00(param_1,*(undefined4 *)(param_2 + 8));
    FUN_0018a990(param_1,iVar3 + DAT_00195400);
    FUN_001951d8(param_1,*(undefined4 *)(param_2 + 0x28),1);
    iVar1 = DAT_00195404;
  }
  FUN_0018a990(param_1,iVar3 + iVar1);
  return;
}


