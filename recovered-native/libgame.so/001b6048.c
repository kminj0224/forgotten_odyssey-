/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001b6048  Symbol: FUN_001b6048 */

undefined4 FUN_001b6048(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = *(int *)(param_1 + 0x1d0);
  *(int *)(*(int *)(param_1 + 0x1cc) + 0x18) =
       *(int *)(*(int *)(param_1 + 0x1cc) + 0x18) +
       ((int)(((uint)(*(int *)(iVar4 + 0xc) >> 0x1f) >> 0x1d) + *(int *)(iVar4 + 0xc)) >> 3);
  *(undefined4 *)(iVar4 + 0xc) = 0;
  iVar1 = (**(code **)(*(int *)(param_1 + 0x1cc) + 8))(param_1);
  uVar2 = 0;
  if (iVar1 != 0) {
    if (0 < *(int *)(param_1 + 0x150)) {
      iVar3 = 0;
      iVar1 = iVar4;
      do {
        *(undefined4 *)(iVar1 + 0x14) = 0;
        iVar3 = iVar3 + 1;
        iVar1 = iVar1 + 4;
      } while (iVar3 < *(int *)(param_1 + 0x150));
    }
    *(undefined4 *)(iVar4 + 0x10) = 0;
    *(undefined4 *)(iVar4 + 0x28) = *(undefined4 *)(param_1 + 0x118);
    uVar2 = 1;
    if (*(int *)(param_1 + 0x1b4) == 0) {
      *(undefined4 *)(iVar4 + 0x24) = 0;
    }
  }
  return uVar2;
}


