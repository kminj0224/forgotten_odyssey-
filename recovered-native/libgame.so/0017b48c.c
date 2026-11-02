/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0017b48c  Symbol: FUN_0017b48c */

int FUN_0017b48c(int param_1,int param_2,int param_3)

{
  code **ppcVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar2 = DAT_0017b55c;
  iVar5 = DAT_0017b554 + 0x17b4a2;
  if (*(int *)(param_1 + 0x168) << 0x12 < 0) {
    for (iVar4 = 0; iVar4 < *(int *)(param_1 + 0x148); iVar4 = iVar4 + 2) {
      if (*(int *)(iVar4 * 4 + *(int *)(param_1 + 0x150)) == param_2) {
        iVar3 = 2;
        if (*(int *)((iVar4 + 1) * 4 + *(int *)(param_1 + 0x150)) == param_3) goto LAB_0017b504;
        break;
      }
    }
  }
  iVar4 = *(int *)(param_1 + 0x14c);
  if ((iVar4 == 0) || (*(int *)(param_1 + 0x150) == 0)) {
    ppcVar1 = *(code ***)(iVar5 + DAT_0017b558);
    *(undefined4 *)(param_1 + 0x148) = 0;
    *(undefined4 *)(param_1 + 0x14c) = 10;
    iVar2 = (**ppcVar1)(0x28);
    *(int *)(param_1 + 0x150) = iVar2;
    if (iVar2 == 0) {
      FUN_00179430(param_1,0);
      *(undefined4 *)(param_1 + 0x14c) = 0;
LAB_0017b502:
      iVar3 = 1;
LAB_0017b504:
      return -iVar3;
    }
  }
  else if (iVar4 <= *(int *)(param_1 + 0x148)) {
    *(int *)(param_1 + 0x14c) = iVar4 << 1;
    iVar2 = (***(code ***)(iVar5 + iVar2))(*(int *)(param_1 + 0x150),iVar4 << 3);
    if (iVar2 == 0) {
      FUN_00179430(param_1,0);
      *(int *)(param_1 + 0x14c) = *(int *)(param_1 + 0x14c) / 2;
      goto LAB_0017b502;
    }
    *(int *)(param_1 + 0x150) = iVar2;
  }
  iVar2 = *(int *)(param_1 + 0x148);
  *(int *)(iVar2 * 4 + *(int *)(param_1 + 0x150)) = param_2;
  *(int *)((iVar2 + 1) * 4 + *(int *)(param_1 + 0x150)) = param_3;
  *(int *)(param_1 + 0x148) = iVar2 + 2;
  return iVar2 + 2;
}


