/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00195068  Symbol: FUN_00195068 */

void FUN_00195068(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = DAT_00195174 + 0x195074;
  if (param_2 == 0) {
    return;
  }
  if (param_1 == 0) {
    return;
  }
  FUN_0018a990(param_1,iVar3 + DAT_00195178);
  FUN_0018ab00(param_1,*(undefined4 *)(param_2 + 0x3c));
  FUN_0018a990(param_1,iVar3 + DAT_0019517c);
  if (*(int *)(param_2 + 0x38) != 0) {
    FUN_0018ab00(param_1);
    FUN_0018a990(param_1,iVar3 + DAT_00195180);
  }
  FUN_0018ab00(param_1,*(undefined4 *)(param_2 + 8));
  uVar2 = *(int *)(param_2 + 0x28) - 1;
  if (uVar2 < 10) {
                    /* WARNING: Could not emulate address calculation at 0x001950c6 */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(*(int *)(iVar3 + DAT_00195184 + uVar2 * 4) + iVar3 + DAT_00195184))();
    return;
  }
  FUN_00194f00(0,iVar3 + DAT_001951b0);
  uVar2 = *(uint *)(param_2 + 0x2c);
  iVar1 = DAT_001951b4;
  if (uVar2 == 2) {
LAB_00195136:
    FUN_0018a990(param_1,iVar3 + iVar1);
  }
  else {
    if (uVar2 < 3) {
      if (uVar2 == 1) goto LAB_0019514e;
    }
    else {
      iVar1 = DAT_001951b8;
      if ((uVar2 == 3) || (iVar1 = DAT_001951bc, uVar2 == 4)) goto LAB_00195136;
    }
    FUN_00194f00(0,iVar3 + DAT_001951c0);
  }
LAB_0019514e:
  if (*(int *)(param_2 + 0x30) != 0) {
    FUN_0018a990(param_1,iVar3 + DAT_0019517c);
    FUN_0018ac20(param_1,*(undefined4 *)(param_2 + 0x30));
  }
  FUN_0018a990(param_1,iVar3 + DAT_001951c4);
  return;
}


