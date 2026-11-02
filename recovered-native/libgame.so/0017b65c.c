/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0017b65c  Symbol: FUN_0017b65c */

int FUN_0017b65c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  code **ppcVar5;
  
  iVar1 = DAT_0017b720;
  piVar3 = (int *)(param_1 + 0xc0);
  iVar2 = *piVar3;
  iVar4 = DAT_0017b71c + 0x17b678;
  if (*(int *)(param_1 + 0xbc) < iVar2) {
LAB_0017b6ca:
    piVar3 = (int *)(param_1 + 0xbc);
    *(undefined4 *)(*piVar3 * 4 + *(int *)(param_1 + 0xc4)) = param_2;
    *(undefined4 *)(param_1 + 0xb8) = param_2;
    *(undefined4 *)(*piVar3 * 0xc + *(int *)(param_1 + 0x158)) = param_3;
    *(undefined4 *)((*piVar3 * 3 + 1) * 4 + *(int *)(param_1 + 0x158)) = param_4;
    *(undefined4 *)(*(int *)(param_1 + 0x158) + *piVar3 * 0xc + 8) = param_5;
    iVar1 = *piVar3;
    *piVar3 = iVar1 + 1;
  }
  else {
    *piVar3 = iVar2 << 1;
    ppcVar5 = *(code ***)(iVar4 + iVar1);
    iVar1 = (**ppcVar5)(*(int *)(param_1 + 0xc4),iVar2 << 3);
    iVar2 = *piVar3;
    if (iVar1 == 0) {
      iVar2 = iVar2 - (iVar2 >> 0x1f);
    }
    else {
      *(int *)(param_1 + 0xc4) = iVar1;
      iVar1 = (**ppcVar5)(*(undefined4 *)(param_1 + 0x158),iVar2 * 0xc);
      if (iVar1 != 0) {
        *(int *)(param_1 + 0x158) = iVar1;
        goto LAB_0017b6ca;
      }
      iVar2 = *piVar3 - (*piVar3 >> 0x1f);
    }
    *piVar3 = iVar2 >> 1;
    FUN_00179430(param_1,0);
    iVar1 = -1;
  }
  return iVar1;
}


