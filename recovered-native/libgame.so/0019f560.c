/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0019f560  Symbol: FUN_0019f560 */

void FUN_0019f560(int *param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined4 param_5)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  code *pcVar4;
  int iVar5;
  
  iVar5 = DAT_0019f620 + 0x19f56c;
  if (param_1 == (int *)0x0) {
    return;
  }
  if (param_1[0x36] == 1) {
    iVar1 = FUN_001a245c(param_1[2],param_2,3,param_3,param_4,param_5);
    if (iVar1 != 0) {
LAB_0019f5ec:
      if (param_4 == 0) {
        return;
      }
      if (*(int *)(iVar1 + 0x40) != 0) {
        return;
      }
      if ((param_1[9] == 0) || (iVar5 = *(int *)(param_1[9] + 4), iVar5 == 0)) {
        iVar5 = param_1[0x2d];
      }
      uVar3 = FUN_00193700(param_4,iVar5);
      *(undefined4 *)(iVar1 + 0x40) = uVar3;
      return;
    }
    if (param_1[0x43] == 0) {
      return;
    }
    if (*param_1 == 0) {
      return;
    }
    pcVar4 = *(code **)(*param_1 + 0x54);
    if (pcVar4 == (code *)0x0) {
      return;
    }
    iVar2 = param_1[1];
    iVar1 = DAT_0019f624;
  }
  else {
    if (param_1[0x36] != 2) {
      FUN_0019f1a8(param_1,1,iVar5 + DAT_0019f62c,param_2);
      return;
    }
    iVar1 = FUN_001a2500(param_1[2],param_2,3,param_3,param_4,param_5);
    if (iVar1 != 0) goto LAB_0019f5ec;
    if (param_1[0x43] == 0) {
      return;
    }
    if (*param_1 == 0) {
      return;
    }
    pcVar4 = *(code **)(*param_1 + 0x54);
    if (pcVar4 == (code *)0x0) {
      return;
    }
    iVar2 = param_1[1];
    iVar1 = DAT_0019f628;
  }
  (*pcVar4)(iVar2,iVar5 + iVar1,param_2);
  return;
}


