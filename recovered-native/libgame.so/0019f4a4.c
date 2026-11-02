/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0019f4a4  Symbol: FUN_0019f4a4 */

void FUN_0019f4a4(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5,
                 undefined4 param_6)

{
  int iVar1;
  undefined4 uVar2;
  code *pcVar3;
  int iVar4;
  
  iVar4 = DAT_0019f554 + 0x19f4b0;
  if (param_1 == (int *)0x0) {
    return;
  }
  if (param_1[0x36] == 1) {
    iVar1 = FUN_001a245c(param_1[2],param_2,param_3,param_4,param_5,param_6);
    if (iVar1 == 0) {
      if (param_1[0x43] == 0) {
        return;
      }
      FUN_0019f148(param_1,param_2);
      return;
    }
  }
  else {
    if (param_1[0x36] != 2) {
      FUN_0019f1a8(param_1,0x68,iVar4 + DAT_0019f55c,param_2);
      return;
    }
    iVar1 = FUN_001a2500(param_1[2],param_2,param_3,param_4,param_5,param_6);
    if (iVar1 == 0) {
      if (param_1[0x43] == 0) {
        return;
      }
      if (*param_1 == 0) {
        return;
      }
      pcVar3 = *(code **)(*param_1 + 0x54);
      if (pcVar3 == (code *)0x0) {
        return;
      }
      (*pcVar3)(param_1[1],iVar4 + DAT_0019f558,param_2);
      return;
    }
  }
  if ((param_5 != 0) && (*(int *)(iVar1 + 0x40) == 0)) {
    if ((param_1[9] == 0) || (iVar4 = *(int *)(param_1[9] + 4), iVar4 == 0)) {
      iVar4 = param_1[0x2d];
    }
    uVar2 = FUN_00193700(param_5,iVar4);
    *(undefined4 *)(iVar1 + 0x40) = uVar2;
  }
  return;
}


