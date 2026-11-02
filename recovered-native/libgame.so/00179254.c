/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00179254  Symbol: FUN_00179254 */

int FUN_00179254(int param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  if ((param_2 == 0) || (param_1 == 0)) {
    iVar2 = -1;
  }
  else {
    uVar3 = 1;
    iVar2 = 0;
    uVar1 = *(uint *)(param_1 + 4);
    while (uVar4 = uVar1, uVar3 <= uVar4) {
      iVar2 = (uVar4 - uVar3 >> 1) + uVar3;
      uVar5 = *(uint *)((iVar2 - 1U) * 0x14 + *(int *)(param_1 + 8));
      if (param_2 == uVar5) break;
      uVar1 = iVar2 - 1U;
      if (uVar5 <= param_2) {
        uVar3 = iVar2 + 1;
        uVar1 = uVar4;
      }
    }
    if ((iVar2 != 0) && (param_2 <= *(uint *)((iVar2 + -1) * 0x14 + *(int *)(param_1 + 8)))) {
      iVar2 = iVar2 + -1;
    }
  }
  return iVar2;
}


