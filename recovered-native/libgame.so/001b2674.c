/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001b2674  Symbol: FUN_001b2674 */

undefined4 FUN_001b2674(int param_1,short **param_2)

{
  int iVar1;
  uint uVar2;
  short *psVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = *(int *)(param_1 + 0x1a4);
  uVar2 = *(uint *)(param_1 + 0x174);
  *(undefined4 *)(iVar5 + 0x70) = **(undefined4 **)(param_1 + 0x18);
  *(undefined4 *)(iVar5 + 0x74) = *(undefined4 *)(*(int *)(param_1 + 0x18) + 4);
  if ((*(int *)(param_1 + 0xec) != 0) && (*(int *)(iVar5 + 0x24) == 0)) {
    FUN_001b2494(iVar5,*(undefined4 *)(iVar5 + 0x28));
  }
  if (0 < *(int *)(param_1 + 0x13c)) {
    iVar4 = 0;
    do {
      psVar3 = *param_2;
      param_2 = param_2 + 1;
      iVar4 = iVar4 + 1;
      FUN_001b2318(iVar5,(int)*psVar3 >> (uVar2 & 0xff),1);
    } while (iVar4 < *(int *)(param_1 + 0x13c));
  }
  **(undefined4 **)(param_1 + 0x18) = *(undefined4 *)(iVar5 + 0x70);
  *(undefined4 *)(*(int *)(param_1 + 0x18) + 4) = *(undefined4 *)(iVar5 + 0x74);
  iVar4 = *(int *)(param_1 + 0xec);
  if (iVar4 != 0) {
    iVar1 = *(int *)(iVar5 + 0x24);
    if (iVar1 == 0) {
      *(int *)(iVar5 + 0x24) = iVar4;
      *(uint *)(iVar5 + 0x28) = *(int *)(iVar5 + 0x28) + 1U & 7;
      iVar1 = iVar4;
    }
    *(int *)(iVar5 + 0x24) = iVar1 + -1;
  }
  return 1;
}


